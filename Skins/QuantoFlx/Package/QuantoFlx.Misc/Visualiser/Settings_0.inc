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
Ln=16

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Width_of_bands#
Mt.Op.02---=#Tm.Height#
Mt.Op.03---=#Tm.Spacing_of_each_bands#
Mt.Op.04---=#Tm.Corner_radius#
Mt.Op.05---=#Tm.Quantity_of_bands#
Mt.Op.06---=#Tm.Color#
Mt.Op.07---=#Tm.Flip#
Mt.Op.08---=#Tm.Show_reflection#
Mt.Op.09---=#Tm.Height_of_reflection#
Mt.Op.10---=#Tm.Color_of_reflection#
Mt.Op.11---=#Tm.Opacity_of_reflection#
Mt.Op.12---=#Tm.Flip_Reflection#
Mt.Op.13---=#Tm.Spacing_of_two_graphs#
Mt.Op.14---=#Tm.Higher_Sensitivity#
Mt.Op.15---=#Tm.Binaural_Mode#*
Mt.Op.16---=#Tm.More#

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=BW
Mt.Op.02----=BH
Mt.Op.03----=Sp.Cstm
Mt.Op.04----=Cr.Cstm
Mt.Op.05----=BQ
Mt.Op.06----=Cl.Cstm
Mt.Op.07----=Flip
Mt.Op.08----=Reflection
Mt.Op.09----=RH
Mt.Op.10----=Cl.Cstm.Rf
Mt.Op.11----=Op.Bg_Cstm.Rf
Mt.Op.12----=Flip.Rf
Mt.Op.13----=Sp.Cstm.Gh
Mt.Op.14----=HS
Mt.Op.15----=BnMd
Mt.Op.16----=Null

; Values on display
; If not needed, leave it blank
Mt.Op.01-----=[#BW]px
Mt.Op.02-----=[#BH]px
Mt.Op.03-----=[#Sp.Cstm]px
Mt.Op.04-----=[#Cr.Cstm]px
Mt.Op.05-----=[#BQ]
Mt.Op.06-----=[#Cl.Cstm]
Mt.Op.07-----=[#Tm.[#Flip]]
Mt.Op.08-----=[#Tm.[#Reflection]]
Mt.Op.09-----=[#RH]px
Mt.Op.10-----=[#Cl.Cstm.Rf]
Mt.Op.11-----=[#Op.Bg_Cstm.Rf]x
Mt.Op.12-----=[#Tm.[#Flip.Rf]]
Mt.Op.13-----=[#Sp.Cstm.Gh]px
Mt.Op.14-----=[#Tm.[#HS]]
Mt.Op.15-----=[#Tm.[#BnMd]]
Mt.Op.16-----=[#Tm.Next_Page]

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
Mt.Op.04------=02
Mt.Op.05------=02
Mt.Op.06------=09
Mt.Op.07------=04
Mt.Op.08------=04
Mt.Op.09------=02
Mt.Op.10------=09
Mt.Op.11------=02
Mt.Op.12------=04
Mt.Op.13------=02
Mt.Op.14------=04
Mt.Op.15------=04
Mt.Op.16------=99

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=1,2147483648
Mt.Op.02-------=1,2147483648
Mt.Op.03-------=0,2147483648
Mt.Op.04-------=0,2147483648
Mt.Op.05-------=1,128
Mt.Op.06-------=0,1
Mt.Op.07-------=0,1
Mt.Op.08-------=0,1
Mt.Op.09-------=1,2147483648
Mt.Op.10-------=0,1
Mt.Op.11-------=0,1
Mt.Op.12-------=0,1
Mt.Op.13-------=-#BH#,2147483648
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
Mt.Op.04--------=1
Mt.Op.05--------=1
Mt.Op.06--------=1
Mt.Op.07--------=0
Mt.Op.08--------=0
Mt.Op.09--------=1
Mt.Op.10--------=0
Mt.Op.11--------=0.1
Mt.Op.12--------=0
Mt.Op.13--------=1
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
Mt.Op.15----------=#St.Binaural_Mode.0000#
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

