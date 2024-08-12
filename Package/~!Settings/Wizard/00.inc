[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

Vr.CstmA.Gdnt_01=0
Vr.CstmA.Gdnt_02=0
Vr.CstmA.Gdnt_03=0
Vr.CstmA.Gdnt_04=0

@include=#@#Config\Parameter\SystemDefault.inc

[Rainmeter]
OnRefreshAction=[!CommandMeasure "Ms.An_Cstm" "Execute 1"][!Delay 16][!WriteKeyValue "Variables" "Sc" "1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Vr" "[Ms.Sy.Vr.Fm]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Drv" "[Ms.Sy.Drv]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sy.Dpi" "[Ms.Sy.Dpi]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Us.Im" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Ui]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Md" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Md]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Ty" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Ty]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Bd" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Cn" "[#Dv.Sy_[&Ms.Sy.Vr.Fm].Bl.Bg.Cn]" "#@#Config\Settings.inc"]

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 500 | AL.CstmA.Show_01 | Repeat AL.CstmA.Gdnt_01,25,20 | AL.CstmA.Show_02 | Wait 100 | Repeat AL.CstmA.Gdnt_02,25,20 | Wait 500 | AL.CstmA.Hide_01 | AL.CstmA.Hide_02 | AL.CstmA.Show_03 | Wait 100 | Repeat AL.CstmA.Gdnt_03,25,20 | Wait 1000 | Repeat AL.CstmA.Gdnt_04,50,20 | Wait 200 | AL.CstmA.NextPge
AL.CstmA.Show_01=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Hide_01=[!HideMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Show_02=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Gdnt_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Hide_02=[!HideMeterGroup Gp.AL.CstmA.Gdnt_02]
AL.CstmA.Show_03=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Gdnt_03=[!SetVariable Vr.CstmA.Gdnt_03 "(Clamp((#Vr.CstmA.Gdnt_03#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Hide_03=[!HideMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.Show_04=[!ShowMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.Gdnt_04=[!SetVariable Vr.CstmA.Gdnt_04 "(Clamp((#Vr.CstmA.Gdnt_04#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.Hide_04=[!HideMeterGroup Gp.AL.CstmA.Gdnt_04][!Redraw]
AL.CstmA.NextPge=[!WriteKeyValue "Variables" "Page" "02" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
DynamicVariables=1

[St.Cstm.Sp.01]
X=(#CURRENTCONFIGWIDTH#/(2*#sc#))
Y=(#CURRENTCONFIGHEIGHT#/(2*#sc#))
DynamicVariables=1
Hidden=1

[Mt.CstmBg]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#) | Fill Color 255,255,255,(255*(1-#Vr.CstmA.Gdnt_04#)) | #da.sk# 
DynamicVariables=1
Group=Gp.AL.CstmA.Gdnt_04

[Mt.AnCm.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(256),(160),(8),(8) | Fill LinearGradient Gdnt_01 | #da.sk# 
Shape2=Rectangle 0,(160-8),(256),(8)
Shape3=Combine Shape | Union Shape2 | Offset (-128),(-64) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(128),(64)
Shape4=Rectangle 0,0,(256),(160),(8),(8) | Fill Color 255,255,255,96 | #da.sk# 
Shape5=Rectangle 0,(8),(256),(160),(8),(8)
Shape6=Combine Shape4 | Exclude Shape5 | Offset (-128),(-64) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(128),(64)
Gdnt_01=-100 | 14,114,195,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#)))) ; 0.0 | 5,48,77,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#)))) ; 1.0
Group=Gp.AL.CstmA.Gdnt_01
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(112),(112),(8),(8) | Fill Color 16,152,182 | #da.sk# | Offset (-112),(192-192*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))))
Shape2=Rectangle 0,0,(112),(112),(8),(8) | Fill Color 48,204,215 | #da.sk# | Offset (-112),(192-(192+64)*(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#)))))
Shape3=Rectangle 0,0,(112),(112),(8),(8) | Fill Color 128,253,255 | #da.sk# | Offset (-112),(192-(192+128)*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))
Shape4=Rectangle 0,0,(96),(88),(8),(8) | Fill Color 255,255,255,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#)))) | #da.sk#
Shape5=Rectangle 0,(104),(96),(48),(8),(8)
Shape6=Combine Shape4 | Union Shape5 | Offset (16),(300-(300+40)*(Sqrt(Sqrt(Sqrt(Sqrt(#Vr.CstmA.Gdnt_02#))))))
Shape7=Rectangle 0,0,(256),(256) | Fill Color 255,255,255 | #da.sk# | Offset (-128),(112)
Group=Gp.AL.CstmA.Gdnt_02
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
Shape=Rectangle 0,0,(256),(32),(8),(8) | Fill LinearGradient Gdnt_01 | #da.sk# 
Shape2=Rectangle 0,0,(256),(8)
Shape3=Combine Shape | Union Shape2 | Offset (-128),(96) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(128),(-96)
Shape4=Rectangle 0,0,(16),(16),(4),(4) | Fill Color 133,203,250,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#)))) | #da.sk# 
Shape5=Rectangle (24),0,(16),(16),(4),(4)
Shape6=Combine Shape4 | Union Shape5  | Offset (80),(104) | Scale (Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#))),(-80),(-104)
Gdnt_01=-180 | 60,203,244,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#)))) ; 0.0 | 0,143,244,(255*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_01#)))) ; 1.0
Group=Gp.AL.CstmA.Gdnt_01
TransformationMatrix=(#sc#);0;0;(#sc#);0;0

[Mt.AnCm.04]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\QuantoTitle
X=(#CURRENTCONFIGWIDTH#/2+(-170+58*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
Y=(#CURRENTCONFIGWIDTH#/2-48*#sc#)
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
Y=(#CURRENTCONFIGWIDTH#/2+(-128+78*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
W=((256-156*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
H=((256-156*(Sqrt(Sqrt(#Vr.CstmA.Gdnt_03#))))*#sc#)
ImageTint=255,255,255,(255*(1-#Vr.CstmA.Gdnt_04#))
Group=Gp.AL.CstmA.Gdnt_03|Gp.AL.CstmA.Gdnt_04
Hidden=1

[Mt.WARNING]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#Project.Name# #Project.Vrsn# #Project.VrSx# Build #Project.VBld##CRLF#For preview only. All features may be modified in the final version.
FontColor=0,120,212
InlinePattern=#Project.Name# #Project.Vrsn# #Project.VrSx# Build #Project.VBld##CRLF#
InlineSetting=Weight | 700
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGWIDTH#-48*#sc#)
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
