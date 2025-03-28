[Variables]
HdBkBt=(#AlwInit#=0)
BkBtAc=[!DisableMouseActionGroup "*" "Gp.Normal"][!ShowMeterGroup Gp.QUIT][!Redraw][!Update][!Update]
QtBtAc=[!DisableMouseActionGroup "*" "Gp.Normal"][!ShowMeterGroup Gp.QUIT][!Redraw][!Update][!Update]
CfBtAc_0=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh]
CfBtAc_1=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh]

MaxW_1=(Max([Mt.Op.00.00:W],(Max([Mt.Op.01.00:W],[Mt.Op.02.00:W]))))
MaxW_2=(Max([Mt.Op.03.00:W],(Max([Mt.Op.04.00:W],(Max([Mt.Op.05.00:W],(Max([Mt.Op.06.00:W],Max([Mt.Op.07.00:W],150*#sc#)))))))))

|Mt.Op.00.01|.LMUA.AlwMdNm_0=[]
|Mt.Op.00.01|.LMUA.AlwMdNm_1=[!ShowMeter CMt.Op.00.01][!CommandMeasure "Ms.Mt.Op.00.01" "ExecuteBatch 1"][!Redraw]

|Mt.Op.01.01|.LMUA.AlwMdTg_0=[]
|Mt.Op.01.01|.LMUA.AlwMdTg_1=[!ShowMeter CMt.Op.01.01][!CommandMeasure "Ms.Mt.Op.01.01" "ExecuteBatch 1"][!Redraw]
|Mt.Op.01.03|.LMUA.AlwMdTg_0=[!SetClip """#Temp.StCt.Tg#"""][!ShowMeter "Mt.CopiedTip.01"][!Redraw][!Delay 3000][!HideMeter "Mt.CopiedTip.01"][!Redraw]
|Mt.Op.01.03|.LMUA.AlwMdTg_1=[!CommandMeasure "Ms.FlCs_iP" "ChooseFile [#AlwMdNm_[#AlwMdNm]]"]
|Mt.Op.01.03|.TTTx.AlwMdTg_0=#Tm.Copy#
|Mt.Op.01.03|.TTTx.AlwMdTg_1=#Tm.Select#
|Mt.Op.01.04|.ImNm.AlwMdTg_0=Copy
|Mt.Op.01.04|.ImNm.AlwMdTg_1=SearchForFile

|Mt.Op.02.01|.LMUA.AlwMdTg_0=[]
|Mt.Op.02.01|.LMUA.AlwMdTg_1=[!ShowMeter CMt.Op.02.01][!CommandMeasure "Ms.Mt.Op.02.01" "ExecuteBatch 1"][!Redraw]
|Mt.Op.02.03|.LMUA.AlwMdTg_0=[!SetClip """#Temp.StCt.TgPm#"""][!ShowMeter "Mt.CopiedTip.02"][!Redraw][!Delay 3000][!HideMeter "Mt.CopiedTip.02"][!Redraw]
|Mt.Op.02.03|.LMUA.AlwMdTg_1=[]
|Mt.Op.02.03|.TTTx.AlwMdTg_0=#Tm.Copy#
|Mt.Op.02.03|.TTTx.AlwMdTg_1=#St.Settings.0401#
|Mt.Op.02.04|.ImNm.AlwMdTg_0=Copy
|Mt.Op.02.04|.ImNm.AlwMdTg_1=HelpButton

AlwMdNm_0=1
AlwMdNm_1=2

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Settings.0400#

[St.Cstm.Ps.Op.YN.01]
X=0r
Y=(36*#sc#)r
[St.Cstm.Ps.Op.YN.02]
X=0r
Y=(36*2*#sc#)r

[Mt.Op.00.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#Tm.Name#
X=(24*#sc#+#MaxW_2#)
Y=(24*#sc#)R
StringAlign=RightTop
[Mt.Op.01.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Target#
StringAlign=RightTop
[Mt.Op.02.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Parameters#
StringAlign=RightTop
[Mt.Op.03.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Icon#
StringAlign=RightTop
[Mt.Op.04.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Monochrome_Part_of_Icon#
StringAlign=RightTop
FontColor=0,0,0,0
[Mt.Op.05.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.02
Text=#Tm.Colored_Part_of_Large_Icon#
StringAlign=RightTop
FontColor=0,0,0,0
[Mt.Op.06.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Monochrome_Part_of_Large_Icon#
StringAlign=RightTop
FontColor=0,0,0,0
[Mt.Op.07.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.02
Text=#Tm.Colored_Part_of_Banner#
StringAlign=RightTop
FontColor=0,0,0,0
[Mt.Op.08.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Monochrome_Part_of_Banner#
StringAlign=RightTop
FontColor=0,0,0,0

[St.Cstm.Sp.01]
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-#MaxW_2#-(48+8+40*2)*#sc#),(32*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-#MaxW_2#-(48+8+40*2)*#sc#),(32*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,128
Shape3=Rectangle (#sc#),(#sc#),(#CURRENTCONFIGWIDTH#-#MaxW_2#-(48+8+40*2+2)*#sc#),((32-2)*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
[St.Cstm.Sp.02]
Shape=Rectangle 0,(32*#sc#),(#CURRENTCONFIGWIDTH#-#MaxW_2#-(48+8+40*2)*#sc#),(-2*#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
DynamicVariables=1
Hidden=1

[Mt.Op.00.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
X=([Mt.Op.00.00:XW]+8*#sc#)
Y=([Mt.Op.00.00:Y]-6*#sc#)
LeftMouseDownAction=[#|Mt.Op.00.01|.LMUA.AlwMdNm_[#AlwMdNm]]
MouseActionCursor=(#AlwMdNm#)
MouseActionCursorName=TEXT
[Mt.Op.01.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01|St.Cstm.Ps.Op.YN.01
LeftMouseDownAction=[#|Mt.Op.01.01|.LMUA.AlwMdTg_[#AlwMdTg]]
MouseActionCursor=(#AlwMdTg#)
MouseActionCursorName=TEXT
[Mt.Op.02.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01|St.Cstm.Ps.Op.YN.01
LeftMouseDownAction=[#|Mt.Op.02.01|.LMUA.AlwMdTg_[#AlwMdTg]]
MouseActionCursor=(#AlwMdTg#)
MouseActionCursorName=TEXT
[Mt.Op.03.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01|St.Cstm.Ps.Op.YN.01

[CMt.Op.00.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.02
X=([Mt.Op.00.01:X])
Y=([Mt.Op.00.01:Y])
[CMt.Op.01.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.02|St.Cstm.Ps.Op.YN.01
[CMt.Op.02.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.02|St.Cstm.Ps.Op.YN.01
[CMt.Op.03.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.02|St.Cstm.Ps.Op.YN.01

[St.Cstm.Tx.01]
MeasureName=Ms.#CURRENTSECTION#
W=(#CURRENTCONFIGWIDTH#-#MaxW_2#-(48+8+40*2+8*2)*#sc#)
ClipString=1
StringAlign=LeftCenter
InlinePattern=^\(#Tm.None#\)$
InlineSetting=Color | #Cl.Gn.Fg.Gn#,128
InlinePattern2=^\(#Tm.Default#\)$
InlineSetting2=Color | #Cl.Gn.Fg.Gn#,128

[Ms.RegExp.01]
Measure=String
String=#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Image\Icons_0\9000.png
[Ms.RegExp.02]
Measure=String
String=#@#Image\Null.png

[Ms.Mt.Op.00.02]
Measure=String
String=#Temp.StCt.Nm#
[Ms.Mt.Op.01.02]
Measure=String
String=#Temp.StCt.Tg#
RegExpSubstitute=1
Substitute="^$":"(#Tm.None#)"
[Ms.Mt.Op.02.02]
Measure=String
String=#Temp.StCt.TgPm#
RegExpSubstitute=1
Substitute="^$":"(#Tm.None#)"
[Ms.Mt.Op.03.02]
Measure=String
String=#Temp.StCt.Im.Cl#
RegExpSubstitute=1
Substitute="^[Ms.RegExp.01:EscapeRegExp]$":"(#Tm.Default#)","^[Ms.RegExp.02:EscapeRegExp]$":"(#Tm.None#)"

[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.01
X=([Mt.Op.00.01:X]+8*#sc#)
Y=([Mt.Op.00.01:Y]+[Mt.Op.00.01:H]/2)
FontColor=#Cl.Gn.Fg.Gn#,(128+(128*#AlwMdNm#))
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.Op.YN.01
FontColor=#Cl.Gn.Fg.Gn#,(128+(128*#AlwMdTg#))
[Mt.Op.02.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.Op.YN.01
FontColor=#Cl.Gn.Fg.Gn#,(128+(128*#AlwMdTg#))
[Mt.Op.03.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.Op.YN.01
FontColor=#Cl.Gn.Fg.Gn#,128

[St.Cstm.Sp.03]
Shape=Rectangle (-#sc#),(-#sc#),((32+2)*#sc#),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape5=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #da.sk# | Extend Hover
DynamicVariables=1

[Mt.Op.00.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.03|St.Bt.Sp
X=([Mt.Op.00.01:XW]+8*#sc#)
Y=([Mt.Op.00.01:Y])
LeftMouseUpAction=["#Temp.StCt.Tg#" #Temp.StCt.TgPm#]
ToolTipText=#Tm.Open_for_testing#
[Mt.Op.01.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.03|St.Bt.Sp|St.Cstm.Ps.Op.YN.01
LeftMouseUpAction=[#|Mt.Op.01.03|.LMUA.AlwMdTg_[#AlwMdTg]]
ToolTipText=[#|Mt.Op.01.03|.TTTx.AlwMdTg_[#AlwMdTg]]
[Mt.Op.02.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.03|St.Bt.Sp|St.Cstm.Ps.Op.YN.01
LeftMouseUpAction=[#|Mt.Op.02.03|.LMUA.AlwMdTg_[#AlwMdTg]]
ToolTipText=[#|Mt.Op.02.03|.TTTx.AlwMdTg_[#AlwMdTg]]
[Mt.Op.03.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.03|St.Bt.Sp|St.Cstm.Ps.Op.YN.01
LeftMouseUpAction=[!CommandMeasure "Ms.FlCs_iP" "ChooseImage 3"]
ToolTipText=#Tm.Select#

[Mt.CopiedTip.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#Tm.Copied#
X=([Mt.Op.01.03:XW]+8*#sc#)
Y=([Mt.Op.01.03:Y]+[Mt.Op.01.03:H]/2)
StringAlign=LeftCenter
Hidden=1
[Mt.CopiedTip.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Ps.Op.YN.01
Text=#Tm.Copied#
StringAlign=LeftCenter
Hidden=1

[St.Cstm.Im.02]
ImageName=#@#Image\MonoIcons\16\SearchForImage
W=(16*#sc#)
H=(16*#sc#)

[Mt.Op.00.04]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.02
X=([Mt.Op.00.03:X]+8*#sc#)
Y=([Mt.Op.00.03:Y]+8*#sc#)
ImageName=#@#Image\MonoIcons\16\Open
[Mt.Op.01.04]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.Op.YN.01
ImageName=#@#Image\MonoIcons\16\[#|Mt.Op.01.04|.ImNm.AlwMdTg_[#AlwMdTg]]
[Mt.Op.02.04]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.Op.YN.01
ImageName=#@#Image\MonoIcons\16\[#|Mt.Op.02.04|.ImNm.AlwMdTg_[#AlwMdTg]]
[Mt.Op.03.04]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.Op.YN.01

[Mt.Op.03.05]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.03|St.Bt.Sp
X=([Mt.Op.03.03:XW]+8*#sc#)
Y=([Mt.Op.03.03:Y])
LeftMouseUpAction=[!WriteKeyValue Variables "Temp.StCt.Im.Cl" "#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Image\Icons_0\9000.png" "#CURRENTSKINSETTINGS#"][!Refresh]
ToolTipText=#Tm.Restore_to_default#

[Mt.Op.03.06]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.Op.YN.01
X=([Mt.Op.03.05:X]+8*#sc#)
Y=([Mt.Op.03.05:Y]+8*#sc#)
ImageName=#@#Image\MonoIcons\16\Remove

[St.Cstm.Im.01]
X=(24*#sc#)
Y=([Mt.Title:YH]+24*#sc#)
W=(96*#sc#)
H=(96*#sc#)
PreserveAspectRatio=1

[Mt.StctIcon_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01
ImageName=#Temp.StCt.Im.Cl#
[Mt.StctIcon_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01
ImageName=#Temp.StCt.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#

[Mt.SAS.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
X=(24*#sc#)
Y=([Mt.Op.03.01:YH]+16*#sc#)
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(12*#sc#+[Mt.SAS.01:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][!Refresh]
[Mt.SAS.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageName=#@#Image\MonoIcons\12\ADown
ImageTint=#Cl.Ac.Fg.Sl#
X=(6*#sc#)r
Y=(6*#sc#)r
W=(12*#sc#)
H=(12*#sc#)
[Mt.SAS.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.Ps.Tx.XN.01
Text=#Tm.Show_advanced_settings#
FontColor=#Cl.Ac.Fg.Sl#

[Ms.Mt.Op.00.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Op.00.01:X]+6*#sc#)
Y=([Mt.Op.00.01:Y]+6*#sc#)
W=([Mt.Op.00.01:W]-6*2*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Op#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=#Temp.StCt.Nm#
Command1=[!Delay 16][!WriteKeyValue Variables "Temp.StCt.Nm" "$UserInput$" "#CURRENTSKINSETTINGS#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Op.00.01][!Redraw]
DynamicVariables=1

[Ms.Mt.Op.01.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Op.01.01:X]+6*#sc#)
Y=([Mt.Op.01.01:Y]+6*#sc#)
W=([Mt.Op.01.01:W]-6*2*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Op#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=#Temp.StCt.Tg#
Command1=[!Delay 16][!WriteKeyValue Variables "Temp.StCt.Tg" "$UserInput$" "#CURRENTSKINSETTINGS#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Op.01.01][!Redraw]
DynamicVariables=1

[Ms.Mt.Op.02.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Op.02.01:X]+6*#sc#)
Y=([Mt.Op.02.01:Y]+6*#sc#)
W=([Mt.Op.02.01:W]-6*2*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Op#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=#Temp.StCt.TgPm#
Command1=[!Delay 16][!WriteKeyValue Variables "Temp.StCt.TgPm" "$UserInput$" "#CURRENTSKINSETTINGS#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Op.02.01][!Redraw]
DynamicVariables=1

[Ms.FlCs_iP]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=[#Dv.Sy_[#Sy.Vr].FlCs.UNS]
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=1
IconCache=#Pk@#Config\SkinSettings\IconCache\
IconSize=3
ReturnValue=Path
FileInitialDirectory=%ProgramFiles%
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!SetVariable "Temp.Ic_FromFlCs" "$Icon$"][!WriteKeyValue Variables "Temp.StCt.Tg" "$Path$" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Temp.StCt.TgPm" "" "#CURRENTSKINSETTINGS#"][!Update][!Delay 16][!ShowMeterGroup Gp.RPLCICON][!Delay 16][!DisableMouseActionGroup "*" "Gp.Normal"][!Update][!Update][!Redraw]
Command2=[!WriteKeyValue Variables "Temp.StCt.Nm" "$Name$" "#CURRENTSKINSETTINGS#"][!SetVariable "Temp.Ic_FromFlCs" "$Icon$"][!WriteKeyValue Variables "Temp.StCt.Tg" "$Path$" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Temp.StCt.TgPm" "" "#CURRENTSKINSETTINGS#"][!Update][!Delay 16][!ShowMeterGroup Gp.RPLCICON][!Delay 16][!DisableMouseActionGroup "*" "Gp.Normal"][!Update][!Update][!Redraw]
Command3=[!WriteKeyValue Variables "Temp.StCt.Im.Cl" "$Path$" "#CURRENTSKINSETTINGS#"][!Refresh]


[St.Gp.RPLCICON]
Group=Gp.RPLCICON
Hidden=1

[Mt.RPLCICON.00]
Meter=Shape
MeterStyle=St.Gp.RPLCICON|St.ZnCt2
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#) | #da.sk# | Fill Color 0,0,0,128
DynamicVariables=1

[Mt.RPLCICON.Main]
Meter=Shape
MeterStyle=St.Gp.RPLCICON|St.ZnCt2
X=((32/2)*#sc#)
Y=((#CURRENTCONFIGHEIGHT#-[Mt.RPLCICON.Main:H])/2)
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-32*#sc#),(#RPLCICONDialogH#-64*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape2=Rectangle 0,(#RPLCICONDialogH#-64*#sc#),(#CURRENTCONFIGWIDTH#-32*#sc#),(-#Cr#/2)
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle 0,(#RPLCICONDialogH#-64*#sc#),(#CURRENTCONFIGWIDTH#-32*#sc#),(64*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Da#
Shape5=Rectangle 0,(#RPLCICONDialogH#-64*#sc#),(#CURRENTCONFIGWIDTH#-32*#sc#),(#Cr#/2)
Shape6=Combine Shape4 | Union Shape5
Shape7=Rectangle 0,(#RPLCICONDialogH#-64*#sc#),(#CURRENTCONFIGWIDTH#-32*#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,24
DynamicVariables=1

[Mt.RPLCICON.Main.Title]
Meter=String
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Ft|St.Sl|St.Ft.Bd
X=((32/2)*#sc#)r
Y=((32/2)*#sc#)r
Text=#St.Settings.1000#
FontSize=(14*#sc#*#Ft.Sc.Gn#)
W=(#CURRENTCONFIGWIDTH#-48*#sc#)
ClipString=2
[Mt.RPLCICON.Main.Text]
Meter=String
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Ft|St.Sl
Text=#St.Settings.1010#
W=(#CURRENTCONFIGWIDTH#-48*#sc#)
ClipString=2
X=0r
Y=(8*#sc#)R
[Mt.RPLCICON.Main.Icon.00]
Meter=Image
MeterStyle=St.Gp.RPLCICON|St.ZnCt2
ImageName=#Temp.StCt.Im.Cl#
X=(96*#sc#)
Y=(16*#sc#)R
W=(128*#sc#)
H=(128*#sc#)
[Mt.RPLCICON.Main.Icon.01]
Meter=Image
MeterStyle=St.Gp.RPLCICON|St.ZnCt2
ImageName=#Pk@#Image\MonoIcons\128\BARight
ImageTint=#Cl.Ac.Bg.Gn#
X=(128*#sc#)r
Y=0r
W=(128*#sc#)
H=(128*#sc#)
[Mt.RPLCICON.Main.Icon.02]
Meter=Image
MeterStyle=St.Gp.RPLCICON|St.ZnCt2
ImageName=#Temp.Ic_FromFlCs#
X=(128*#sc#)r
Y=0r
W=(128*#sc#)
H=(128*#sc#)

[St.Sk.Sp.01]
Shape=Rectangle (-#sc#),(-#sc#),((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-(4-2)*#sc#),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Bkgn
Shape5=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1

[Mt.RPLCICON.Main.00.00]
Meter=Shape
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Sk.Sp.01|St.Bt.Sp
X=([Mt.RPLCICON.Main.Title:X])
Y=(((32/2)+16)*#sc#)R
Bkgn=Fill Color #Cl.Gn.Bg.Ti#
[Mt.RPLCICON.Main.01.00]
Meter=Shape
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Sk.Sp.01|St.Bt.Sp
X=(8*#sc#)R
Y=0r
Bkgn=Fill Color #Cl.Ac.Bg.Gn#

[Mt.RPLCICON.Main.00.01]
Meter=String
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Ft|St.Sl
Text=#Tm.No#
X=([Mt.RPLCICON.Main.00.00:X]+[Mt.RPLCICON.Main.00.00:W]/2)
Y=([Mt.RPLCICON.Main.00.00:Y]+[Mt.RPLCICON.Main.00.00:H]/2)
W=([Mt.RPLCICON.Main.00.00:W])
H=([Mt.RPLCICON.Main.00.00:H])
ClipString=2
StringAlign=CenterCenter
LeftMouseUpAction=[!HideMeterGroup Gp.RPLCICON][!EnableMouseActionGroup "*" "Gp.Normal"][!Redraw]
[Mt.RPLCICON.Main.01.01]
Meter=String
MeterStyle=St.Gp.RPLCICON|St.ZnCt2|St.Ft|St.Sl
Text=#Tm.Yes#
X=([Mt.RPLCICON.Main.01.00:X]+[Mt.RPLCICON.Main.01.00:W]/2)
Y=([Mt.RPLCICON.Main.01.00:Y]+[Mt.RPLCICON.Main.01.00:H]/2)
W=([Mt.RPLCICON.Main.01.00:W])
H=([Mt.RPLCICON.Main.01.00:H])
ClipString=2
StringAlign=CenterCenter
FontColor=#Cl.Ac.Fg.Gn#
LeftMouseUpAction=[!WriteKeyValue Variables "Temp.StCt.Im.Cl" "#Temp.Ic_FromFlCs#" "#CURRENTSKINSETTINGS#"][!Refresh]