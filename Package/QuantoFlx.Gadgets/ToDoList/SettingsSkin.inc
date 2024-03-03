[Variables]
; Allow gradient background (0/1)
AllwGdnt=1
; Allow combination (0/1)
AllwCbnt=1
; Quantity of lines on display. Up to 15
Ln=2

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Quantity#
Mt.Op.02---=#Tm.Title#
Mt.Op.03---=
Mt.Op.04---=
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

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=Quantity
Mt.Op.02----=Title
Mt.Op.03----=Null
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

; Values on display
; If not needed, leave it blank
Mt.Op.01-----=[#Quantity]
Mt.Op.02-----=[#Title]
Mt.Op.03-----=
Mt.Op.04-----=
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
Mt.Op.02------=01
Mt.Op.03------=00
Mt.Op.04------=00
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

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=1,8
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

; Context Menu List
; If you set a option as "Context Menu"(03), a context menu list is required for this option.
;
; Format:
;     Title Line:
;         CmLs.(Skin name, as same as the value of "Sk.Nm").CMSS_Mt.Op.(Option serial number, 00 - 10, 2 digits)--.TXX(00 to 25, 2 digits)=(Display name)
;         Write "-" to make a dividing line
;         If not needed, leave it blank
;     Action Line:
;         CmLs.(Skin name, as same as the value of "Sk.Nm").CMSS_Mt.Op.(Option serial number, 00 - 10, 2 digits)--.AXX(00 to 25, 2 digits)=(Action)
;         If not needed / title line is a dividing line, write "[]"
;   
; Example: 
;     (Skin name: Search, Option serial number: 1)
;     CmLs.Search.CMSS_Mt.Op.01--.T01=Google
;     CmLs.Search.CMSS_Mt.Op.01--.A01=[!WriteKeyValue "Variables" "ScEg" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
;     CmLs.Search.CMSS_Mt.Op.01--.T02=Bing
;     CmLs.Search.CMSS_Mt.Op.01--.A02=[!WriteKeyValue "Variables" "ScEg" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
;     ...
;     ...
;     CmLs.Search.CMSS_Mt.Op.01--.T06=
;     CmLs.Search.CMSS_Mt.Op.01--.A06=[]
;     ...
;     ...
;     CmLs.Search.CMSS_Mt.Op.01--.T25=
;     CmLs.Search.CMSS_Mt.Op.01--.A25=[]
