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

|Mt.Op.01|.LMUA_-1=[!WriteKeyValue "Variables" "RestoreFromDefault" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Fd" "#ROOTCONFIGPATH#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh "#CURRENTCONFIG#"]
|Mt.Op.01|.LMUA_0=[!WriteKeyValue "Variables" "RestoreFromDefault" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Fd" "#ROOTCONFIGPATH#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh "#CURRENTCONFIG#"]
|Mt.Op.01|.LMUA_1=[]
|Mt.Op.01.01|.IT_-1=#Cl.Ac.Bg.Gn#
|Mt.Op.01.01|.IT_0=#Cl.Ac.Bg.Gn#
|Mt.Op.01.01|.IT_1=#Cl.Gn.Fg.Gn#,128
|Mt.Op.01.02|.FC_-1=#Cl.Gn.Fg.Gn#
|Mt.Op.01.02|.FC_0=#Cl.Gn.Fg.Gn#
|Mt.Op.01.02|.FC_1=#Cl.Gn.Fg.Gn#,128
|Mt.Op.01.03|.FC_-1=#Cl.Gn.Fg.Gn#,192
|Mt.Op.01.03|.FC_0=#Cl.Gn.Fg.Gn#,192
|Mt.Op.01.03|.FC_1=#Cl.Gn.Fg.Gn#,128
|Mt.Op.01.03|.T_-1=
|Mt.Op.01.03|.T_0=
|Mt.Op.01.03|.T_1=#St.Setup.0021#

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

[Ms.Active]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[#|Mt.Op.01|.LMUA_[&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\Wizard")]]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=[#|Mt.Op.01.01|.IT_[&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\Wizard")]]
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0020#
FontColor=[#|Mt.Op.01.02|.FC_[&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\Wizard")]]
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
FontColor=[#|Mt.Op.01.03|.FC_[&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\Wizard")]]
Text=[#|Mt.Op.01.03|.T_[&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\Wizard")]]

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
Command1=[!WriteKeyValue "Variables" "RestoreFromDefault" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Fd" "$Path$\" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
DynamicVariables=1
