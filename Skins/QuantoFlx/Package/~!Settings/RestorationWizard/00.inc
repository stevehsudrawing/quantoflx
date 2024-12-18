[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Choose_a_Folder#
NtBtAc=[!CommandMeasure Ms.BAR.FlCs "ChooseFolder 1"]

PgTtl=#St.Setup.0000#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0001#

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[!CommandMeasure Ms.BAR.FlCs "ChooseFolder 1"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0010#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0011#

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[!WriteKeyValue "Variables" "RestoreFromDefault" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Fd" "#ROOTCONFIGPATH#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "03" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh "#CURRENTCONFIG#"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0020#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02

[Mt.SampleImage]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk@#Image\Setup\05
X=((#CURRENTCONFIGWIDTH#-448*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-448*#sc#+180*#sc#)/2)
W=(448*#sc#)
H=(448*#sc#)

[Ms.BAR.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=[#Dv.Sy_[#Sy.Vr].FlCs.UNS]
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=0
IconCache=#@#Cache\Icon\
IconSize=1
ReturnValue=Path
FileInitialDirectory=#Bkup.Pth#\QuantoFlxBackup
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue "Variables" "RestoreFromDefault" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Fd" "$Path$\" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "01" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
DynamicVariables=1
