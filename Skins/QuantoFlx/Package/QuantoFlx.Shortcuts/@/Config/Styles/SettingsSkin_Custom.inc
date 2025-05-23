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
AllwReDf=0
; Quantity of lines on display. Up to 16
Ln=4
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Shortcuts''-Package#Shortcut

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Scaling#
Mt.Op.02---=#Tm.Belong_to_Group#
Mt.Op.03---=#Tm.Auto-Hide#
Mt.Op.04---=#Tm.Configure_this_Shortcut#
Mt.Op.05---=
Mt.Op.06---=
Mt.Op.07---=
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
Mt.Op.01----=Sz
Mt.Op.02----=StctGp
Mt.Op.03----=AutoHide
Mt.Op.04----=Null
Mt.Op.05----=Null
Mt.Op.06----=Null
Mt.Op.07----=Null
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
Mt.Op.01-----=[#Sz]
Mt.Op.02-----=[#StctGp]
Mt.Op.03-----=[#Tm.[#AutoHide]]
Mt.Op.04-----=#Tm.Shortcut_Wizard#
Mt.Op.05-----=
Mt.Op.06-----=
Mt.Op.07-----=
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
Mt.Op.01------=02
Mt.Op.02------=03
Mt.Op.03------=04
Mt.Op.04------=99
Mt.Op.05------=00
Mt.Op.06------=00
Mt.Op.07------=00
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
Mt.Op.01-------=1,16
Mt.Op.02-------=0,1
Mt.Op.03-------=0,1
Mt.Op.04-------=0,1
Mt.Op.05-------=0,1
Mt.Op.06-------=0,1
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
Mt.Op.01--------=1
Mt.Op.02--------=0
Mt.Op.03--------=0
Mt.Op.04--------=0
Mt.Op.05--------=0
Mt.Op.06--------=0
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
Mt.Op.01---------=[]
Mt.Op.02---------=[]
Mt.Op.03---------=[]
Mt.Op.04---------=[!WriteKeyValue "Variables" "ConfigSourceRoot" "SkinSettings" "#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Config\SkinSettings\Wizard.inc"][!WriteKeyValue "Variables" "AlwInit" "0" "#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Config\SkinSettings\Wizard.inc"][!WriteKeyValue "Variables" "Page" "01" "#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Config\SkinSettings\Wizard.inc"][!WriteKeyValue "Variables" "Config" "#Sk.Nm#" "#ROOTCONFIGPATH#Package\QuantoFlx.Shortcuts\@\Config\SkinSettings\Wizard.inc"][!ActivateConfig "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\Wizard" "Ready.ini"][!SetWindowPosition 50% 50% 50% 50% "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\Wizard"]
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


CmLs.Global.CMSS_Mt.Op.02--.T01=00
CmLs.Global.CMSS_Mt.Op.02--.T02=01
CmLs.Global.CMSS_Mt.Op.02--.T03=02
CmLs.Global.CMSS_Mt.Op.02--.T04=03
CmLs.Global.CMSS_Mt.Op.02--.T05=04
CmLs.Global.CMSS_Mt.Op.02--.T06=05
CmLs.Global.CMSS_Mt.Op.02--.T07=06
CmLs.Global.CMSS_Mt.Op.02--.T08=07
CmLs.Global.CMSS_Mt.Op.02--.T09=08
CmLs.Global.CMSS_Mt.Op.02--.T10=09
CmLs.Global.CMSS_Mt.Op.02--.T11=10
CmLs.Global.CMSS_Mt.Op.02--.T12=11
CmLs.Global.CMSS_Mt.Op.02--.T13=12
CmLs.Global.CMSS_Mt.Op.02--.T14=13
CmLs.Global.CMSS_Mt.Op.02--.T15=14
CmLs.Global.CMSS_Mt.Op.02--.T16=15
CmLs.Global.CMSS_Mt.Op.02--.T17=16
CmLs.Global.CMSS_Mt.Op.02--.T18=
CmLs.Global.CMSS_Mt.Op.02--.A01=[!WriteKeyValue "Variables" "StctGp" "00" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A02=[!WriteKeyValue "Variables" "StctGp" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A03=[!WriteKeyValue "Variables" "StctGp" "02" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A04=[!WriteKeyValue "Variables" "StctGp" "03" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A05=[!WriteKeyValue "Variables" "StctGp" "04" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A06=[!WriteKeyValue "Variables" "StctGp" "05" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A07=[!WriteKeyValue "Variables" "StctGp" "06" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A08=[!WriteKeyValue "Variables" "StctGp" "07" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A09=[!WriteKeyValue "Variables" "StctGp" "08" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A10=[!WriteKeyValue "Variables" "StctGp" "09" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A11=[!WriteKeyValue "Variables" "StctGp" "10" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A12=[!WriteKeyValue "Variables" "StctGp" "11" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A13=[!WriteKeyValue "Variables" "StctGp" "12" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A14=[!WriteKeyValue "Variables" "StctGp" "13" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A15=[!WriteKeyValue "Variables" "StctGp" "14" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A16=[!WriteKeyValue "Variables" "StctGp" "15" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A17=[!WriteKeyValue "Variables" "StctGp" "16" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Global.CMSS_Mt.Op.02--.A18=[]

[Mt.MainIc]
ImageName=#Pk@#Image\MonoIcons\20\Shortcuts
[Mt.MainNmDc]
Text=#OpLs.Shortcut.Nm# - #Sk.Nm#
InlinePattern=#OpLs.Shortcut.Nm# - #Sk.Nm#
InlinePattern2=#OpLs.Shortcut.Nm# - #Sk.Nm#