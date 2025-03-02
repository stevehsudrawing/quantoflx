[Variables]
NtBtAc_0=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
NtBtAc_1=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Pg.Tt=#St.Setup.0001#
Pg.Im=#@#Image\Null

Bt.Bk.Hd=1
Bt.Bk.Ac=[]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[#NtBtAc_[&Ms.Cstm.Calc.01]]

Bt.Ex.Hd=0
Bt.Ex.Tx=#St.Setup.0502#
Bt.Ex.Ac=[!WriteKeyValue "Variables" "Page" "09" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Vr.CstmA.Gdnt_01=0

FC.Sel_0=#Cl.Gn.Fg.Gn#
FC.Sel_1=#Cl.Ac.Fg.Gn#

ORA_0=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
ORA_1=
ORA=[#ORA_[#Em]]

@include=#@#Config\Language\LanguageList.inc

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[Ms.Sy.Vr.Dp]
Measure=String
String=Windows #Sy.Vr#
RegExpSubstitute=1
Substitute="^Windows 11$":"#Tm.Windows_11_or_Newer#","^Windows 8$":"#Tm.Windows_8_or_Other#","^Windows 7$":"#Tm.Windows_7_or_Older#"
[Mt.Version]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=Quanto Flx #Project.Vrsn# #Project.VrSx# (#Tm.Build# #Project.VBld#)#CRLF#[Ms.Sy.Vr.Dp]
FontColor=#Cl.Gn.Fg.Gn#,128
X=(16*#sc#)
Y=(458*#sc#)
StringAlign=LeftBottom

[Ms.Cstm.Calc.01]
Measure=Calc
Formula=(#Sy.Dpi#=96)
DynamicVariables=1

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat AL.CstmA.Gdnt_01,15,500 | AL.CstmA.Rept_01
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Frac((#Vr.CstmA.Gdnt_01#+1/500)))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Rept_01=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
DynamicVariables=1

[Mt.Welcome.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Hallo
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(cos(((45+360*(00/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(sin(((45+360*(00/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=你好
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(cos(((45+360*(02/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(sin(((45+360*(02/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=안녕하세요
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(cos(((45+360*(01/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(sin(((45+360*(01/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Ciao
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(cos(((45+360*(03/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(sin(((45+360*(03/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.04]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Salve
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(cos(((45+360*(00/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(sin(((45+360*(00/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.05]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=こんにちは
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(cos(((45+360*(02/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(sin(((45+360*(02/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.06]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Hello
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(cos(((45+360*(01/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(sin(((45+360*(01/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.07]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Saluton
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(cos(((45+360*(03/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(sin(((45+360*(03/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.08]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=नमस्ते
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(cos(((45+360*(3/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(sin(((45+360*(3/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.09]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Γειά σου
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(cos(((45+360*(-9/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(sin(((45+360*(-9/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.10]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Bonjour
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(cos(((45+360*(5/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(sin(((45+360*(5/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.11]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Habari
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(cos(((45+360*(1/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(sin(((45+360*(1/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.12]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Merhaba
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(cos(((45+360*(3/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(sin(((45+360*(3/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.13]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Hola
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(cos(((45+360*(-9/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(sin(((45+360*(-9/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.14]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Olá
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(cos(((45+360*(5/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(sin(((45+360*(5/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.15]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
FontWeight=300
Text=Привет
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#)+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(cos(((45+360*(1/8))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(sin(((45+360*(1/8))*PI)/180)))
StringAlign=CenterCenter
FontColor=128,128,128,(255*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01

[Mt.WelcomeBg]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+48*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+8*#sc#)/2),([Mt.Welcome:W]+48*#sc#),([Mt.Welcome:H]+8*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#,192
Shape2=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+(48+(2))*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+(8+(2))*#sc#)/2),([Mt.Welcome:W]+(48+(2))*#sc#),([Mt.Welcome:H]+(8+(2))*#sc#),((10+(2)/2)*#sc#),((10+(2)/2)*#sc#) | #da.sk# | Fill Color 0,0,0,8 | Offset 0,((5)*#sc#)
Shape3=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+48*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+8*#sc#)/2),([Mt.Welcome:W]+48*#sc#),([Mt.Welcome:H]+8*#sc#),(10*#sc#),(10*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+(48+(4))*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+(8+(4))*#sc#)/2),([Mt.Welcome:W]+(48+(4))*#sc#),([Mt.Welcome:H]+(8+(4))*#sc#),((10+(4)/2)*#sc#),((10+(4)/2)*#sc#) | #da.sk# | Fill Color 0,0,0,8 | Offset 0,((6)*#sc#)
Shape6=Combine Shape5 | Exclude Shape3
Shape7=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+(48+(6))*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+(8+(6))*#sc#)/2),([Mt.Welcome:W]+(48+(6))*#sc#),([Mt.Welcome:H]+(8+(6))*#sc#),((10+(6)/2)*#sc#),((10+(6)/2)*#sc#) | #da.sk# | Fill Color 0,0,0,8 | Offset 0,((7)*#sc#)
Shape8=Combine Shape7 | Exclude Shape3
Shape9=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+(48+(8))*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+(8+(8))*#sc#)/2),([Mt.Welcome:W]+(48+(8))*#sc#),([Mt.Welcome:H]+(8+(8))*#sc#),((10+(8)/2)*#sc#),((10+(8)/2)*#sc#) | #da.sk# | Fill Color 0,0,0,8 | Offset 0,((8)*#sc#)
Shape10=Combine Shape9 | Exclude Shape3
Shape11=Rectangle ((#CURRENTCONFIGWIDTH#/2-224*#sc#)-([Mt.Welcome:W]+48*#sc#)/2),((#CURRENTCONFIGHEIGHT#)/2-([Mt.Welcome:H]+8*#sc#)/2),([Mt.Welcome:W]+48*#sc#),([Mt.Welcome:H]+8*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color 255,255,255,64 | Offset 0,(-2*#sc#)
Shape12=Combine Shape11 | Exclude Shape3
DynamicVariables=1
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Bd|St.Sl
Text=#Tm.Hello#
X=((#CURRENTCONFIGWIDTH#/2-224*#sc#))
Y=(#CURRENTCONFIGHEIGHT#/2)
StringAlign=CenterCenter
FontSize=((48+8*abs(#Vr.CstmA.Gdnt_01#-0.5))*#sc#)
FontColor=#Cl.Ac.Bg.Gn#
Group=Gp.AL.CstmA.Gdnt_01
InlineSetting=GradientColor | 270 | (#Cl.Ac.R#+64),(#Cl.Ac.G#+64),(#Cl.Ac.B#+64) ; 0 | #Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B# ; 1

[Mt.Sel.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Ps.START
Shape=Rectangle (#sc#),(#sc#),((430-2)*#sc#),((48*6)*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,((430)*#sc#),((48*6+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),((430-2)*#sc#),((48*6)*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
[Mt.CstmZn.Sel.00]
Meter=Shape
X=([Mt.Sel.00:X])
Y=([Mt.Sel.00:Y])
Shape=Rectangle (#sc#),(#sc#),((430-2)*#sc#),((48*6)*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color 255,255,255,(255*#Vr.GlCtOp#)
DynamicVariables=1
Group=Gp.Normal

[Ms.Calc.LgIdx.00]
Measure=Calc
Formula=([#LgIdx.[#Lg]]=00)
DynamicVariables=1
[Ms.Calc.LgIdx.01]
Measure=Calc
Formula=([#LgIdx.[#Lg]]=01)
DynamicVariables=1
[Ms.Calc.LgIdx.02]
Measure=Calc
Formula=([#LgIdx.[#Lg]]=02)
DynamicVariables=1

[St.Cstm.Tx.01]
Container=Mt.CstmZn.Sel.00
Text=[#[#LgIdx.[#CURRENTSECTION]]]
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=LeftCenter
Group=Gp.Normal
FontColor=[#FC.Sel_[&Ms.Calc.LgIdx.[#CURRENTSECTION]]]
DynamicVariables=1
W=((430-16*2)*#sc#)
ClipString=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Lg" "[#LgIdx.[#CURRENTSECTION]]" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
[St.Cstm.Sp.01]
Container=Mt.CstmZn.Sel.00
Shape=Rectangle 0,0,(430*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1
[St.Cstm.Ps.YN.01]
X=0r
Y=(48*#sc#)r

[Mt.Sel.Idt]
Meter=Shape
Container=Mt.CstmZn.Sel.00
Shape=Rectangle 0,0,(430*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
DynamicVariables=1
Group=Gp.Normal
Y=(([#LgIdx.[#Lg]]*48)*#sc#)

[00]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Bt.Gn
X=(16*#sc#)
Y=(24*#sc#)
[01]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YN.01
[02]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YN.01
[H00]
Meter=Shape
MeterStyle=St.Cstm.Sp.01
[H01]
Meter=Shape
MeterStyle=St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[H02]
Meter=Shape
MeterStyle=St.Cstm.Sp.01|St.Cstm.Ps.YN.01

[Mt.Op.01.00]
Meter=Image
MeterStyle=St.ZnCt_Wd
ImageName=#@#Image\MonoIcons\16\CheckBox#Tf#
ImageTint=[#Cl.Cb.[#Tf]]
W=(16*#sc#)
H=(16*#sc#)
Y=([Mt.Sel.00:YH]-6*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Tf" "(1-#Tf#)" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
MouseActionCursor=1
MouseActionCursorName=HAND
[Mt.Op.02.00]
Meter=Image
MeterStyle=St.ZnCt_Wd
ImageName=#@#Image\MonoIcons\16\CheckBox#Un#
ImageTint=[#Cl.Cb.[#Un]]
W=(16*#sc#)
H=(16*#sc#)
X=0r
Y=(24*#sc#)r
LeftMouseUpAction=[!WriteKeyValue "Variables" "Un" "(1-#Un#)" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
MouseActionCursor=1
MouseActionCursorName=HAND
[Mt.Op.01.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=#OpLs.TimeFormat.Nm#
X=(20*#sc#)
Y=([Mt.Op.01.00:Y]-10*#sc#)
StringAlign=LeftCenter
[Mt.Op.02.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=#OpLs.Units.Nm#
X=0r
Y=(24*#sc#)r
StringAlign=LeftCenter

[Mt.Op.Accessibly]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp
Shape=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle (-#sc#),(-#sc#),(34*#sc#),(34*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
X=(16*#sc#)
Y=(16*#sc#)
DynamicVariables=1
LeftMouseUpAction=[!SetOption "#CURRENTSECTION#" "ToolTipText" ""][!WriteKeyValue "Variables" "Page" "11" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
ToolTipText=#St.Setup.0800#
[Mt.Op.Accessibly.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl
ImageName=#Pk@#Image\MonoIcons\16\Accessibly
X=(8*#sc#)r
Y=(8*#sc#)r
W=(16*#sc#)
H=(16*#sc#)