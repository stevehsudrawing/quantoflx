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
Ln=5
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Miscellaneous''-Package#digital-clock

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Length#
Mt.Op.02---=#Tm.Width#
Mt.Op.03---=#Tm.Corner_radius#
Mt.Op.04---=#Tm.Color#
Mt.Op.05---=#Tm.Shorten_to_align_endpoints#
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
Mt.Op.01----=Length
Mt.Op.02----=SW
Mt.Op.03----=Cr.Cstm
Mt.Op.04----=Cl.Cstm
Mt.Op.05----=Shorten
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
Mt.Op.01-----=#Length#x
Mt.Op.02-----=#SW#px
Mt.Op.03-----=#Cr.Cstm#px
Mt.Op.04-----=#Cl.Cstm#
Mt.Op.05-----=[#Tm.[#Shorten]]
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
Mt.Op.02------=02
Mt.Op.03------=02
Mt.Op.04------=09
Mt.Op.05------=04
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
Mt.Op.01-------=1,64
Mt.Op.02-------=1,(64*#sc#)
Mt.Op.03-------=0,(32*#sc#)
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
Mt.Op.02--------=1
Mt.Op.03--------=1
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
Mt.Op.16---------=[!WriteKeyValue "Variables" "StgPage" "1" "#CURRENTSKINSETTINGS#"][!Refresh]

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

