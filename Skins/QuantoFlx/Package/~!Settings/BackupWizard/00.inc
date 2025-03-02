[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0000#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0001#

[Mt.SampleImage]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk@#Image\Setup\06
X=((#CURRENTCONFIGWIDTH#-448*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-448*#sc#)/2)
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
Command1=[!WriteKeyValue "Variables" "Sl.Fd" "$Path$\" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "NoPopUp" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
DynamicVariables=1
