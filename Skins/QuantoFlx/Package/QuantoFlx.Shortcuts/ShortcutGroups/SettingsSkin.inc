[Variables]
; Default ZPos
DftZpos=#RmSk.DL#
; Allow gradient background (0/1)
AllwGdnt=1
; Allow combination (0/1)
AllwCbnt=1
; Allow opacity setting (0/1)
AllwOpct=1
; Allow to restore the default settings
AllwReDf=1
; Quantity of lines on display. Up to 16
Ln=7
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Shortcuts''-Package#Shortcut-Group-and-Auto-Hide-Function

@include=#@#Config\Global.inc
@include2=#@#Config\GlobalConfig.inc

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Icon# - 1
Mt.Op.02---=#Tm.Icon# - 2
Mt.Op.03---=#Tm.Icon# - 3
Mt.Op.04---=#Tm.Icon# - 4
Mt.Op.05---=#Tm.Width#
Mt.Op.06---=#Tm.Height#
Mt.Op.07---=#Tm.Enable_Quick_Resizing#
Mt.Op.08---=
Mt.Op.09---=
Mt.Op.10---=
Mt.Op.11---=
Mt.Op.12---=
Mt.Op.13---=
Mt.Op.14---=
Mt.Op.15---=
Mt.Op.16---=

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=Null
Mt.Op.02----=Null
Mt.Op.03----=Null
Mt.Op.04----=Null
Mt.Op.05----=CW
Mt.Op.06----=CH
Mt.Op.07----=QuickResize
Mt.Op.08----=Null
Mt.Op.09----=Null
Mt.Op.10----=Null
Mt.Op.11----=Null
Mt.Op.12----=Null
Mt.Op.13----=Null
Mt.Op.14----=Null
Mt.Op.15----=Null
Mt.Op.16----=Null

; Values on display
; If not needed, leave it blank
Mt.Op.01-----=[#Tm.Choose_one]
Mt.Op.02-----=[#Tm.Choose_one]
Mt.Op.03-----=[#Tm.Choose_one]
Mt.Op.04-----=[#Tm.Choose_one]
Mt.Op.05-----=[#CW]x
Mt.Op.06-----=[#CH]x
Mt.Op.07-----=[#Tm.[#QuickResize]]
Mt.Op.08-----=
Mt.Op.09-----=
Mt.Op.10-----=
Mt.Op.11-----=
Mt.Op.12-----=
Mt.Op.13-----=
Mt.Op.14-----=
Mt.Op.15-----=
Mt.Op.16-----=

; Option type
; 00 - None / Disable
; 01 - Text Edit
; 02 - Numeric Value
; 03 - Context Menu
; 04 - Check Box
; 05 - Choose a Folder
; 06 - Choose a File
; 07 - Choose an Image
; 08 - Open Folder/File
; 09 - Pick a Color
; 99 - Other Action
Mt.Op.01------=99
Mt.Op.02------=99
Mt.Op.03------=99
Mt.Op.04------=99
Mt.Op.05------=02
Mt.Op.06------=02
Mt.Op.07------=04
Mt.Op.08------=00
Mt.Op.09------=00
Mt.Op.10------=00
Mt.Op.11------=00
Mt.Op.12------=00
Mt.Op.13------=00
Mt.Op.14------=00
Mt.Op.15------=00
Mt.Op.16------=00

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=0,1
Mt.Op.02-------=0,1
Mt.Op.03-------=0,1
Mt.Op.04-------=0,1
Mt.Op.05-------=2,16
Mt.Op.06-------=2,16
Mt.Op.07-------=0,1
Mt.Op.08-------=0,1
Mt.Op.09-------=0,1
Mt.Op.10-------=0,1
Mt.Op.11-------=0,1
Mt.Op.12-------=0,1
Mt.Op.13-------=0,1
Mt.Op.14-------=0,1
Mt.Op.15-------=0,1
Mt.Op.16-------=0,1

; Numeric Value - Increase & Decrease Value
; Write a numeric value. This can be an integer or a floating-point number.
; When clicking "^" next to the option, the value will increase the value you specified;
; When clicking "v" next to the option, the value will decrease the value you specified.
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0"
Mt.Op.01--------=0
Mt.Op.02--------=0
Mt.Op.03--------=0
Mt.Op.04--------=0
Mt.Op.05--------=1
Mt.Op.06--------=1
Mt.Op.07--------=0
Mt.Op.08--------=0
Mt.Op.09--------=0
Mt.Op.10--------=0
Mt.Op.11--------=0
Mt.Op.12--------=0
Mt.Op.13--------=0
Mt.Op.14--------=0
Mt.Op.15--------=0
Mt.Op.16--------=0

; "Other Action"
; When "Option type" is set to "Other Action"(99), when you click on an option, it will perform the action you specified.
; If not needed, write "[]"
Mt.Op.01---------=[!WriteKeyValue "Variables" "PrvSrl" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Page" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Source" "0000" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.SkNm" "#Sk.Nm#" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.MdIc" "00" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!ActivateConfig "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose" "Main.ini"][!ZPos 1 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"]
Mt.Op.02---------=[!WriteKeyValue "Variables" "PrvSrl" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Page" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Source" "0000" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.SkNm" "#Sk.Nm#" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.MdIc" "01" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!ActivateConfig "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose" "Main.ini"][!ZPos 1 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"]
Mt.Op.03---------=[!WriteKeyValue "Variables" "PrvSrl" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Page" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Source" "0000" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.SkNm" "#Sk.Nm#" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.MdIc" "10" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!ActivateConfig "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose" "Main.ini"][!ZPos 1 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"]
Mt.Op.04---------=[!WriteKeyValue "Variables" "PrvSrl" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Page" "0" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Source" "0000" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.SkNm" "#Sk.Nm#" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!WriteKeyValue "Variables" "Stng.MdIc" "11" "#Pk@#Config\SkinSettings\ShortcutGroups\Choose.inc"][!ActivateConfig "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose" "Main.ini"][!ZPos 1 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"]
Mt.Op.05---------=[]
Mt.Op.06---------=[]
Mt.Op.07---------=[]
Mt.Op.08---------=[]
Mt.Op.09---------=[]
Mt.Op.10---------=[]
Mt.Op.11---------=[]
Mt.Op.12---------=[]
Mt.Op.13---------=[]
Mt.Op.14---------=[]
Mt.Op.15---------=[]
Mt.Op.16---------=[]

; Option Hover Tooltip
; If not needed, leave blank
Mt.Op.01----------=
Mt.Op.02----------=
Mt.Op.03----------=
Mt.Op.04----------=
Mt.Op.05----------=
Mt.Op.06----------=
Mt.Op.07----------=
Mt.Op.08----------=
Mt.Op.09----------=
Mt.Op.10----------=
Mt.Op.11----------=
Mt.Op.12----------=
Mt.Op.13----------=
Mt.Op.14----------=
Mt.Op.15----------=
Mt.Op.16----------=

; Context Menu List
; If you set a option as "Context Menu"(03), a context menu list is required for this option.
;
; Format:
;     Title Line:
;         CmLs.(Skin name, as same as the value of "Sk.Nm").CMSS_Mt.Op.(Option serial number, 01 - 16, 2 digits)--.TXX(00 to 25, 2 digits)=(Display name)
;         Write "-" to make a Divider
;         If not needed, leave it blank
;     Action Line:
;         CmLs.(Skin name, as same as the value of "Sk.Nm").CMSS_Mt.Op.(Option serial number, 01 - 16, 2 digits)--.AXX(00 to 25, 2 digits)=(Action)
;         If not needed / title line is a Divider, write "[]"
;   
; Example: 
;     (Skin name: Search, Option serial number: 1)
;     CmLs.Search.CMSS_Mt.Op.01--.T01=Google
;     CmLs.Search.CMSS_Mt.Op.01--.A01=[!WriteKeyValue "Variables" "ScEg" "0" "#CURRENTSKINSETTINGS#"][!Refresh]
;     CmLs.Search.CMSS_Mt.Op.01--.T02=Bing
;     CmLs.Search.CMSS_Mt.Op.01--.A02=[!WriteKeyValue "Variables" "ScEg" "1" "#CURRENTSKINSETTINGS#"][!Refresh]
;     ...
;     ...
;     CmLs.Search.CMSS_Mt.Op.01--.T06=
;     CmLs.Search.CMSS_Mt.Op.01--.A06=[]
;     ...
;     ...
;     CmLs.Search.CMSS_Mt.Op.01--.T25=
;     CmLs.Search.CMSS_Mt.Op.01--.A25=[]



[Mt.Op.00]
X=(8*#sc#)
[Mt.Op.01]
X=((16+16)*#sc#)
[Mt.Op.02]
X=0r
[Mt.Op.03]
X=0r
[Mt.Op.04]
X=0r
[Mt.Op.05]
X=(8*#sc#)
[Mt.Op.06]
X=0r
[Mt.Op.07]
X=0r
[Mt.Op.08]
X=0r
[Mt.Op.09]
X=0r
[Mt.Op.10]
X=0r
[Mt.Op.11]
X=0r
[Mt.Op.12]
X=0r
[Mt.Op.13]
X=0r
[Mt.Op.14]
X=0r
[Mt.Op.15]
X=0r

[St.Tx.02.99]
LeftMouseUpAction=[#[#CURRENTSECTION]--------][!Move #CURRENTCONFIGX# #CURRENTCONFIGY# "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\ShortcutGroups\Choose"]

[St.Cstm.Im.01]
W=(16*#sc#)
H=(16*#sc#)
PreserveAspectRatio=1

[Mt.Cstm.Im.01]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01
ImageName=#Im.00_Cl#
X=(8*#sc#)
Y=((136+32)*#sc#)
[Mt.Cstm.Im.02]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.01_Cl#
[Mt.Cstm.Im.03]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.10_Cl#
[Mt.Cstm.Im.04]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.11_Cl#
[Mt.Cstm.Im.01_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Im.01
ImageName=#Im.00_Mn#
X=(8*#sc#)
Y=((136+32)*#sc#)
[Mt.Cstm.Im.02_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.01_Mn#
[Mt.Cstm.Im.03_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.10_Mn#
[Mt.Cstm.Im.04_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Im.01|St.Po.Op.Nx
ImageName=#Im.11_Mn#