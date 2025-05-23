[Variables]
Pg.Ty=Settings

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=1
Mt.Op.18----=1
Mt.Op.21----=1
Mt.Op.22----=1
Mt.Op.23----=1
Mt.Op.24----=1
Mt.Op.25----=1
Mt.Op.26----=1
Mt.Op.27----=1
Mt.Op.28----=1

; Internal Name of this option to display
; If not needed, write "Null"
Mt.Op.11-----=BackupPath
Mt.Op.12-----=BackupSettings
Mt.Op.13-----=RestoreSettings
Mt.Op.14-----=OpenBackupWizard
Mt.Op.15-----=OpenRestorationWizard
Mt.Op.16-----=BackupLayout
Mt.Op.17-----=Null
Mt.Op.18-----=Null
Mt.Op.21-----=Null
Mt.Op.22-----=Null
Mt.Op.23-----=Null
Mt.Op.24-----=Null
Mt.Op.25-----=Null
Mt.Op.26-----=Null
Mt.Op.27-----=Null
Mt.Op.28-----=Null

; Option Width
; 0 - Short
; 1 - Wide
Mt.Op.11------=1
Mt.Op.12------=1
Mt.Op.13------=1
Mt.Op.14------=1
Mt.Op.15------=1
Mt.Op.16------=1
Mt.Op.17------=0
Mt.Op.18------=0
Mt.Op.21------=0
Mt.Op.22------=0
Mt.Op.23------=0
Mt.Op.24------=0
Mt.Op.25------=0
Mt.Op.26------=0
Mt.Op.27------=0
Mt.Op.28------=0

; Display description or not
; 0 - Hide
; 1 - Show
Mt.Op.11-------=1
Mt.Op.12-------=1
Mt.Op.13-------=1
Mt.Op.14-------=1
Mt.Op.15-------=1
Mt.Op.16-------=0
Mt.Op.17-------=0
Mt.Op.18-------=0
Mt.Op.21-------=0
Mt.Op.22-------=0
Mt.Op.23-------=0
Mt.Op.24-------=0
Mt.Op.25-------=0
Mt.Op.26-------=0
Mt.Op.27-------=0
Mt.Op.28-------=0

; The control type of this option
; 0 - Hide
; 1 - Long box (Text Input)
; 2 - Long box (Context Menu)
; 3 - Switcher
; 4 - Small box (Text Input)
; 5 - Small box (Context Menu)
; 6 - Switcher (No text)
Mt.Op.11--------=0
Mt.Op.12--------=0
Mt.Op.13--------=0
Mt.Op.14--------=0
Mt.Op.15--------=0
Mt.Op.16--------=0
Mt.Op.17--------=0
Mt.Op.18--------=0
Mt.Op.21--------=0
Mt.Op.22--------=0
Mt.Op.23--------=0
Mt.Op.24--------=0
Mt.Op.25--------=0
Mt.Op.26--------=0
Mt.Op.27--------=0
Mt.Op.28--------=0

; The Variable to modify
; If not needed, write "Null"
Mt.Op.11---------=Null
Mt.Op.12---------=Null
Mt.Op.13---------=Null
Mt.Op.14---------=Null
Mt.Op.15---------=Null
Mt.Op.16---------=Null
Mt.Op.17---------=Null
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Null
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Null
Mt.Op.27---------=Null
Mt.Op.28---------=Null

; Text displays in/beside the control
; If not needed, you can leave it blank
Mt.Op.11----------=
Mt.Op.12----------=
Mt.Op.13----------=
Mt.Op.14----------=
Mt.Op.15----------=
Mt.Op.16----------=
Mt.Op.17----------=
Mt.Op.18----------=
Mt.Op.21----------=
Mt.Op.22----------=
Mt.Op.23----------=
Mt.Op.24----------=
Mt.Op.25----------=
Mt.Op.26----------=
Mt.Op.27----------=
Mt.Op.28----------=

ORA.CA.-1=[]
ORA.CA.0=[]
ORA.CA.1=[!Delay 32][!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]]

[Ms.FlCs]
@include=#@#Config\Parameter\SystemDefault.inc
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
FileInitialDirectory=#Bkup.Pth#
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue Variables "Bkup.Pth" "$Path$" "#MdFl#"][!Refresh]
Command2=[!WriteKeyValue "Variables" "Sl.Fd" "$Path$\" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Pk" "#Sl.Pk#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "NoPopUp" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Confirm.ini"][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]

[Mt.Cstm.11.00.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
Shape=Rectangle (-1*#sc#),(-1*#sc#),((160-36)*#sc#+2*#sc#),(32*#sc#+2*#sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((160-36)*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((160-36)*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape5=Rectangle 0,0,((160-36)*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFolder 1"]
X=((393+36)*#sc#)
Y=((170+77*0)*#sc#)
[Mt.Cstm.11.00.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Choose_a_Folder#
X=([Mt.Cstm.11.00.00:X]+[Mt.Cstm.11.00.00:W]/2-[Mt.Zn:X])
[Mt.Cstm.11.01.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99
LeftMouseUpAction=["#Bkup.Pth#"]
TooltipText=#St.OpeningFolder.0001#
X=((393-164+36)*#sc#)
Y=((170+77*0)*#sc#)
[Mt.Cstm.11.01.01]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Open
W=(16*#sc#)
H=(16*#sc#)
X=([Mt.Cstm.11.01.00:XW]-25*#sc#-[Mt.Zn:X])
Y=([Mt.Cstm.11.01.00:YH]-25*#sc#)

[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sl.Pk" "#Sl.Pk#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Process.ini"][!WriteKeyValue "Variables" "NoPopUp" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]
X=(393*#sc#)
Y=((170+77*1)*#sc#)
[Mt.Cstm.12.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Execute#

[Mt.Cstm.13.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFolder 2"]
X=(393*#sc#)
Y=((170+77*2)*#sc#)
[Mt.Cstm.13.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Choose_a_Folder#

[Mt.Cstm.14.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupWizard" "Main.ini"][!SetWindowPosition 50% 50% 50% 50% "#ROOTCONFIG#\Package\~!Settings\BackupWizard"]
X=(393*#sc#)
Y=((170+77*3)*#sc#)
[Mt.Cstm.14.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Open#

[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\RestorationWizard" "Main.ini"][!SetWindowPosition 50% 50% 50% 50% "#ROOTCONFIG#\Package\~!Settings\RestorationWizard"]
X=(393*#sc#)
Y=((170+77*4)*#sc#)
[Mt.Cstm.15.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Open#

[Mt.Cstm.16.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!Manage Themes]
X=(393*#sc#)
Y=((170+77*5)*#sc#)
[Mt.Cstm.16.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Manage_Rainmeter#