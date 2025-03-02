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
Ln=16
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Gadgets''-Package#folder-viewer

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Path#
Mt.Op.02---=#Tm.Title#
Mt.Op.03---=#Tm.Quantity#
Mt.Op.04---=#Tm.Dynamic_Quantity#
Mt.Op.05---=#Tm.Scaling_for_Icons_styles#
Mt.Op.06---=#Tm.Icon_resolution#
Mt.Op.07---=#Tm.Show_files#
Mt.Op.08---=#Tm.Show_folders#
Mt.Op.09---=#Tm.Show_hidden_files_folders#
Mt.Op.10---=#Tm.Show_system_files_folders#
Mt.Op.11---=#Tm.Sorted_by#
Mt.Op.12---=#Tm.Sorted_by_date#
Mt.Op.13---=#Tm.Sort_in_ascending_order#
Mt.Op.14---=#Tm.File_suffix_filter#
Mt.Op.15---=#Tm.File_name_filter#
Mt.Op.16---=#Tm.Hide_extensions_on_display#

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=Path
Mt.Op.02----=Title
Mt.Op.03----=Quantity
Mt.Op.04----=AutoQ
Mt.Op.05----=Sc.Cstm
Mt.Op.06----=IconSize
Mt.Op.07----=ShowFile
Mt.Op.08----=ShowFolder
Mt.Op.09----=ShowHidden
Mt.Op.10----=ShowSystem
Mt.Op.11----=SortType
Mt.Op.12----=SortDateType
Mt.Op.13----=SortAscending
Mt.Op.14----=Extensions
Mt.Op.15----=WildcardSearch
Mt.Op.16----=HideExtensions

; Values on display
; If not needed, leave it blank

Tm.IconSize.Small=16*16
Tm.IconSize.Medium=32*32
Tm.IconSize.Large=48*48
Tm.IconSize.ExtraLarge=256*256

Mt.Op.01-----=[#Path]
Mt.Op.02-----=[#Title]
Mt.Op.03-----=[#Quantity]
Mt.Op.04-----=[#Tm.[#AutoQ]]
Mt.Op.05-----=[#Sc.Cstm]x
Mt.Op.06-----=[#Tm.IconSize.[#IconSize]]
Mt.Op.07-----=[#Tm.[#ShowFile]]
Mt.Op.08-----=[#Tm.[#ShowFolder]]
Mt.Op.09-----=[#Tm.[#ShowHidden]]
Mt.Op.10-----=[#Tm.[#ShowSystem]]
Mt.Op.11-----=[#Tm.[#SortType]]
Mt.Op.12-----=[#Tm.[#SortDateType]]
Mt.Op.13-----=[#Tm.[#SortAscending]]
Mt.Op.14-----=[#Extensions]
Mt.Op.15-----=[#WildcardSearch]
Mt.Op.16-----=[#Tm.[#HideExtensions]]

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
Mt.Op.01------=05
Mt.Op.02------=01
Mt.Op.03------=02
Mt.Op.04------=04
Mt.Op.05------=02
Mt.Op.06------=03
Mt.Op.07------=04
Mt.Op.08------=04
Mt.Op.09------=04
Mt.Op.10------=04
Mt.Op.11------=03
Mt.Op.12------=03
Mt.Op.13------=04
Mt.Op.14------=01
Mt.Op.15------=01
Mt.Op.16------=04

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=0,1
Mt.Op.02-------=0,1
Mt.Op.03-------=4,32
Mt.Op.04-------=0,1
Mt.Op.05-------=1,4
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
Mt.Op.01--------=0
Mt.Op.02--------=0
Mt.Op.03--------=1
Mt.Op.04--------=0
Mt.Op.05--------=0.5
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
Mt.Op.04---------=[]
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

