[Variables]
Pg.Tt=
Pg.Im=#@#Image\Null

Bt.Bk.Hd=1
Bt.Bk.Ac=[]

Bt.Nx.Hd=1
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

Vr.CstmA.Gdnt_01=0
Vr.CstmA.Gdnt_02=0
Vr.CstmA.Gdnt_03=0
Vr.CstmA.Gdnt_04=0
Vr.CstmA.Gdnt_05=0

ORA_0=[!WriteKeyValue "Variables" "Ready" "1" "#CURRENTSKINSETTINGS#"][!Delay 16][!WriteKeyValue "Variables" "Lg" "en-us" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sc" "1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Vr" "[Ms.Sy.Vr.Fm]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Drv" "[Ms.Sy.Drv]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Dpi" "[Ms.Sy.Dpi]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Us.Im" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Ui]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Md" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Md]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Ty" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Ty]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Bd" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Cn" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Cn]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Temp.Sel.Pg_05" "00" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Cl.Sh"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0.2" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "10"  "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.8" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0.1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"][!Refresh]
ORA_1=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
ORA=[#ORA_[#Ready]]

@include=#@#Config\Parameter\SystemDefault.inc

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 500 | AL.CstmA.Show_01 | Repeat AL.CstmA.Gdnt_01,15,30 | AL.CstmA.Show_02 | Wait 100 | Repeat AL.CstmA.Gdnt_02,15,30 | Wait 500 | AL.CstmA.Hide_01 | AL.CstmA.Hide_02 | AL.CstmA.Show_03 | Wait 100 | Repeat AL.CstmA.Gdnt_03,15,30 | Wait 1000 | Repeat AL.CstmA.Gdnt_04,15,30 | Wait 5000 | Repeat AL.CstmA.Gdnt_05,15,60 | Wait 300 | AL.CstmA.NextPge
AL.CstmA.Show_01=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#+1/30),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Hide_01=[!HideMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Show_02=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Gdnt_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#+1/30),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Hide_02=[!HideMeterGroup Gp.AL.CstmA.Gdnt_02]
AL.CstmA.Show_03=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Gdnt_03=[!SetVariable Vr.CstmA.Gdnt_03 "(Clamp((#Vr.CstmA.Gdnt_03#+1/30),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Hide_03=[!HideMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Show_04=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.Gdnt_04=[!SetVariable Vr.CstmA.Gdnt_04 "(Clamp((#Vr.CstmA.Gdnt_04#+1/30),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.Hide_04=[!HideMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.Show_05=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_05][!Redraw]
AL.CstmA.Gdnt_05=[!SetVariable Vr.CstmA.Gdnt_05 "(Clamp((#Vr.CstmA.Gdnt_05#+1/60),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_05][!Redraw]
AL.CstmA.Hide_05=[!HideMeterGroup Gp.AL.CstmA.Gdnt_05][!Redraw]
AL.CstmA.NextPge=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
DynamicVariables=1

[St.Cstm.Sp.01]
X=(#CURRENTCONFIGWIDTH#/(2*#sc#))
Y=(#CURRENTCONFIGHEIGHT#/(2*#sc#))
DynamicVariables=1
Hidden=1

[Mt.CstmBg]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#) | Fill Color 255,255,255,(255*(1-#Vr.CstmA.Gdnt_05#)) | #da.sk# 
DynamicVariables=1
Group=Gp.AL.CstmA.Gdnt_05

[Mt.AnCm.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(256),(160),(6),(6) | Fill Color 0064b4 | #da.sk# 
Shape2=Rectangle 0,(160-6),(256),(6)
Shape3=Combine Shape | Union Shape2 | Offset (-128),(-64) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(128),(64)
Group=Gp.AL.CstmA.Gdnt_01
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(112),(112),(6),(6) | Fill Color 0078d4 | #da.sk# | Offset (-112),(192-192*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))))
Shape2=Rectangle 0,0,(112),(112),(6),(6) | Fill Color 64b4ff | #da.sk# | Offset (-112),(192-(192+64)*(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#)))))
Shape3=Rectangle 0,0,(112),(112),(6),(6) | Fill Color c8dcff | #da.sk# | Offset (-112),(192-(192+128)*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))
Shape4=Rectangle 0,0,(96),(96),(6),(6) | Fill Color 255,255,255,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#)))) | #da.sk#  | Offset (16),(300-(300+48)*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))))
Shape5=Rectangle 0,(112),(96),(48),(6),(6) | Fill Color 100,180,255,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#)))) | #da.sk#  | Offset (16),(300-(300+48)*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))))
Shape6=Rectangle 0,0,(256),(256) | Fill Color 255,255,255 | #da.sk# | Offset (-128),(112)
Group=Gp.AL.CstmA.Gdnt_02
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(256),(32),(6),(6) | Fill Color 64b4ff | #da.sk# 
Shape2=Rectangle 0,0,(256),(6)
Shape3=Combine Shape | Union Shape2 | Offset (-128),(96) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(128),(-96)
Group=Gp.AL.CstmA.Gdnt_01
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.04]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\QuantoTitle
X=(#CURRENTCONFIGWIDTH#/2+(-170+58*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2-48*#sc#)
W=(340*#sc#)
H=(96*#sc#)
ImageTint=255,255,255,(255*((Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#)))-#Vr.CstmA.Gdnt_04#))
Group=Gp.AL.CstmA.Gdnt_03|Gp.AL.CstmA.Gdnt_04
Hidden=1

[Mt.AnCm.05]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\Quanto
X=(#CURRENTCONFIGWIDTH#/2+(-128-96*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))))*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2+(-128+78*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
W=((256-156*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
H=((256-156*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
ImageTint=255,255,255,(255*(1-#Vr.CstmA.Gdnt_04#))
Group=Gp.AL.CstmA.Gdnt_03|Gp.AL.CstmA.Gdnt_04
Hidden=1

[Mt.AVAILITY_WARNING.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.CmTxFm
Text="^^Accessibility Warning^^"
FontColor=0,0,0,(255*#Vr.CstmA.Gdnt_04#*(1-#Vr.CstmA.Gdnt_05#))
FontWeight=900
X=(#CURRENTCONFIGWIDTH#/2)
Y=((#CURRENTCONFIGHEIGHT#-([Mt.AVAILITY_WARNING.Title:H]+[Mt.AVAILITY_WARNING.Cntn:H]+16*#sc#))/2)
StringAlign=Center
FontSize=(20*#sc#)
Group=Gp.AL.CstmA.Gdnt_04|Gp.AL.CstmA.Gdnt_05
[Mt.AVAILITY_WARNING.Cntn]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.CmTxFm
Text="++3This Setup provides **Accessibility Options**. If you: #CRLF##CRLF#- Use a touch screen device#CRLF#- Have difficulty seeing the content#CRLF#- See obvious lag in this animation and the following process#CRLF##CRLF#Please click  (Accessibility Options) in the upper left corner and find the function you need.++3"
FontColor=0,0,0,(255*#Vr.CstmA.Gdnt_04#*(1-#Vr.CstmA.Gdnt_05#))
X=((#CURRENTCONFIGWIDTH#-[Mt.AVAILITY_WARNING.Cntn:W])/2)
Y=([Mt.AVAILITY_WARNING.Title:YH]+16*#sc#)
ClipString=2
ClipStringW=(768*#sc#)
Group=Gp.AL.CstmA.Gdnt_04|Gp.AL.CstmA.Gdnt_05
InlinePattern=
InlineSetting=Face | [#Dv.Sy_[#Sy.Vr].IcFt]

[Mt.ALPHA_WARNING]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Quanto Flx #Project.Vrsn# #Project.VrSx# Build #Project.VBld##CRLF#For preview only. All features may be modified in the final version.
FontColor=0,120,212
InlinePattern=Quanto Flx #Project.Vrsn# #Project.VrSx# Build #Project.VBld##CRLF#
InlineSetting=Weight | 700
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#-32*#sc#)
StringAlign=CenterBottom

[Ms.Sy.Vr]
Measure=SysInfo
SysInfoType=OS_VERSION
RegExpSubstitute=1
Substitute="Windows ":"","Vista":"7","Server.*":"8"
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Fm]
Measure=Calc
Formula=(Clamp((Round([&Ms.Sy.Vr],0)),7,11))
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Dp]
Measure=String
String=Windows #Sy.Vr#
RegExpSubstitute=1
Substitute="^Windows 11$":"#Tm.Windows_11_or_Newer#","^Windows 8$":"#Tm.Windows_8_or_Other#","^Windows 7$":"#Tm.Windows_7_or_Older#"
[Ms.Sy.Dpi]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
OutputType=Value
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Drv]
Measure=String
String=%HOMEDRIVE%
Substitute=":":""
DynamicVariables=1
UpdateDivider=-1
