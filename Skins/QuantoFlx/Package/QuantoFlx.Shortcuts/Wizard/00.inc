[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!HideMeterGroup "Gp.NormalButton"][!Redraw][!WriteKeyValue "Variables" "Stct_#Config#.Ic" """#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Image\Icons_0\9000.png""" "#Pk@#Config\SkinSettings\CustomShortcutList.inc"][!CommandMeasure "Ms.RC.01" "Run"]
CfBtAc_0=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!HideMeterGroup "Gp.NormalButton"][!Redraw][!WriteKeyValue "Variables" "Stct_#Config#.Ic" """#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Image\Icons_0\9000.png""" "#Pk@#Config\SkinSettings\CustomShortcutList.inc"][!CommandMeasure "Ms.RC.01" "Run"]
CfBtAc_1=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!HideMeterGroup "Gp.NormalButton"][!Redraw][!WriteKeyValue "Variables" "Stct_#Config#.Ic" """#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Image\Icons_0\9000.png""" "#Pk@#Config\SkinSettings\CustomShortcutList.inc"][!CommandMeasure "Ms.RC.01" "Run"]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

[Rainmeter]
OnRefreshAction=#InitializeAction#

[Ms.RC.01]
Measure=Plugin
Plugin=RunCommand
Parameter=del /f /s /q /a "#Pk@#Config\SkinSettings\#Config#.inc"
FinishAction=[!DeactivateConfig "#CURRENTCONFIG#"]
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Settings.0000#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01
Text=#St.Settings.0001#

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.00.02:H]+[Mt.Op.00.03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.FlCs_iP" "ChooseFile 1"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0100#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0101#

[Mt.Op.01.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.01.02:H]+[Mt.Op.01.03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.FlCs_iP" "ChooseFolder 1"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0200#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0201#

[Mt.Op.02.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.02.02:H]+[Mt.Op.02.03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
[Mt.Op.02.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.02.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0300#
[Mt.Op.02.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0301#

[Mt.Splk.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Splk
Text=#St.Settings.0302#
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Tips-and-Tricks#create-a-special-qf-shortcut"]
X=(24*#sc#)
Y=(514*#sc#)
W=(524*#sc#)
ClipString=2
StringAlign=LeftBottom

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
Command1=[!WriteKeyValue Variables "Temp.StCt.Nm" "$Name$" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Temp.StCt.Im.Cl" "$Icon$" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Temp.StCt.Tg" "$Path$" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Temp.StCt.TgPm" "" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]