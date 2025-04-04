[Variables]
; Default ZPos
DftZpos=#RmSk.DL#
; Allow gradient background (0/1)
AllwGdnt=0
; Allow combination (0/1)
AllwCbnt=0
; Allow opacity setting (0/1)
AllwOpct=1
; Allow to restore the default settings
AllwReDf=1
; Quantity of lines on display. Up to 16
Ln=15
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Miscellaneous''-Package#text-options

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Scaling#
Mt.Op.02---=#Tm.Font_Weight#
Mt.Op.03---=#Tm.Color#
Mt.Op.04---=#Tm.Spacing#
Mt.Op.05---=#Tm.String_align# (#Tm.Vertical#)
Mt.Op.06---=#Tm.Bold_Highlight_Effect#
Mt.Op.07---=#Tm.Quantity#
Mt.Op.08---=#Tm.Option_Name# - 1
Mt.Op.09---=#Tm.Option_Target# - 1
Mt.Op.10---=#Tm.Option_Name# - 2
Mt.Op.11---=#Tm.Option_Target# - 2
Mt.Op.12---=#Tm.Option_Name# - 3
Mt.Op.13---=#Tm.Option_Target# - 3
Mt.Op.14---=#Tm.Option_Name# - 4
Mt.Op.15---=#Tm.Option_Target# - 4
Mt.Op.16---=

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=Ft.Sc.Cstm
Mt.Op.02----=Ft.Wt.Cstm
Mt.Op.03----=Ft.Cl.Cstm
Mt.Op.04----=Sp.Cstm
Mt.Op.05----=SA
Mt.Op.06----=BdHlEf
Mt.Op.07----=Quantity
Mt.Op.08----=Mt.01_Nm
Mt.Op.09----=Mt.01_Tg
Mt.Op.10----=Mt.02_Nm
Mt.Op.11----=Mt.02_Tg
Mt.Op.12----=Mt.03_Nm
Mt.Op.13----=Mt.03_Tg
Mt.Op.14----=Mt.04_Nm
Mt.Op.15----=Mt.04_Tg
Mt.Op.16----=Null

; Values on display
; If not needed, leave it blank
Tm.SA_0=#Tm.Left#
Tm.SA_1=#Tm.Center#
Tm.SA_2=#Tm.Right#
Mt.Op.01-----=[#Ft.Sc.Cstm]x
Mt.Op.02-----=[#Ft.Wt.Cstm]
Mt.Op.03-----=[#Ft.Cl.Cstm]
Mt.Op.04-----=[#Sp.Cstm]px
Mt.Op.05-----=[#Tm.SA_[#SA]]
Mt.Op.06-----=[#Tm.[#BdHlEf]]
Mt.Op.07-----=[#Quantity]
Mt.Op.08-----=[#Mt.01_Nm]
Mt.Op.09-----=[#Mt.01_Tg]
Mt.Op.10-----=[#Mt.02_Nm]
Mt.Op.11-----=[#Mt.02_Tg]
Mt.Op.12-----=[#Mt.03_Nm]
Mt.Op.13-----=[#Mt.03_Tg]
Mt.Op.14-----=[#Mt.04_Nm]
Mt.Op.15-----=[#Mt.04_Tg]
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
Mt.Op.02------=02
Mt.Op.03------=09
Mt.Op.04------=02
Mt.Op.05------=03
Mt.Op.06------=04
Mt.Op.07------=02
Mt.Op.08------=01
Mt.Op.09------=06
Mt.Op.10------=01
Mt.Op.11------=06
Mt.Op.12------=01
Mt.Op.13------=06
Mt.Op.14------=01
Mt.Op.15------=06
Mt.Op.16------=00

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=1,32
Mt.Op.02-------=0,1000
Mt.Op.03-------=0,1
Mt.Op.04-------=0,2147483648
Mt.Op.05-------=0,1
Mt.Op.06-------=1,4
Mt.Op.07-------=1,4
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
Mt.Op.02--------=100
Mt.Op.03--------=0
Mt.Op.04--------=1
Mt.Op.05--------=0
Mt.Op.06--------=1
Mt.Op.07--------=1
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
