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
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Miscellaneous''-Package#custom-text

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.Width#
Mt.Op.02---=#Tm.Font#
Mt.Op.03---=#Tm.Scaling#
Mt.Op.04---=#Tm.Font_weight#
Mt.Op.05---=#Tm.Color#
Mt.Op.06---=#Tm.String_align#
Mt.Op.07---=#Tm.String_style#
Mt.Op.08---=#Tm.String_case#
Mt.Op.09---=#Tm.Rotate#...
Mt.Op.10---=#Tm.Color_of_the_shadow#
Mt.Op.11---=#Tm.Opacity_of_the_shadow#
Mt.Op.12---=#Tm.Distance_of_the_shadow#
Mt.Op.13---=#Tm.Direction_of_the_light#
Mt.Op.14---=#Tm.Text_position_offset# (#Tm.Horizontal#)
Mt.Op.15---=#Tm.Text_position_offset# (#Tm.Vertical#)
Mt.Op.16---=#Tm.Content#

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=SW
Mt.Op.02----=Ft.Cstm.Fc
Mt.Op.03----=Ft.Cstm.Sc
Mt.Op.04----=Ft.Cstm.Wt
Mt.Op.05----=Ft.Cstm.Cl
Mt.Op.06----=Ft.Cstm.SA
Mt.Op.07----=Ft.Cstm.SS
Mt.Op.08----=Ft.Cstm.Scs
Mt.Op.09----=Ft.Cstm.Ag
Mt.Op.10----=Ft.Cstm.Sd.Cl
Mt.Op.11----=Ft.Cstm.Sd.Op
Mt.Op.12----=Ft.Cstm.Sd.Dt
Mt.Op.13----=Ft.Cstm.Sd.DtAg
Mt.Op.14----=Ppos.Cstm.X
Mt.Op.15----=Ppos.Cstm.Y
Mt.Op.16----=Cntn

; Values on display
; If not needed, leave it blank
Mt.Op.01-----=#SW#px
Mt.Op.02-----=#Ft.Cstm.Fc#
Mt.Op.03-----=#Ft.Cstm.Sc#x
Mt.Op.04-----=#Ft.Cstm.Wt#
Mt.Op.05-----=#Ft.Cstm.Cl#
Mt.Op.06-----=[#Tm.[#Ft.Cstm.SA]]
Mt.Op.07-----=[#Tm.[#Ft.Cstm.SS]]
Mt.Op.08-----=[#Tm.[#Ft.Cstm.Scs]]
Mt.Op.09-----=#Ft.Cstm.Ag#°
Mt.Op.10-----=#Ft.Cstm.Sd.Cl#
Mt.Op.11-----=#Ft.Cstm.Sd.Op#x
Mt.Op.12-----=#Ft.Cstm.Sd.Dt#px
Mt.Op.13-----=#Ft.Cstm.Sd.DtAg#°
Mt.Op.14-----=#Ppos.Cstm.X#px
Mt.Op.15-----=#Ppos.Cstm.Y#px
Mt.Op.16-----=#Cntn#

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
Mt.Op.03------=02
Mt.Op.04------=02
Mt.Op.05------=09
Mt.Op.06------=03
Mt.Op.07------=03
Mt.Op.08------=03
Mt.Op.09------=02
Mt.Op.10------=09
Mt.Op.11------=02
Mt.Op.12------=02
Mt.Op.13------=02
Mt.Op.14------=02
Mt.Op.15------=02
Mt.Op.16------=01

; Numeric Value - Minimum & Maximum Value
; Format: (Min Value),(Max Value)
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0,1"
Mt.Op.01-------=64,2147483648
Mt.Op.02-------=0,1
Mt.Op.03-------=0.5,64
Mt.Op.04-------=0,1000
Mt.Op.05-------=0,1
Mt.Op.06-------=0,1
Mt.Op.07-------=0,1
Mt.Op.08-------=0,1
Mt.Op.09-------=-90,90
Mt.Op.10-------=0,1
Mt.Op.11-------=0,1
Mt.Op.12-------=0,2147483648
Mt.Op.13-------=0,360
Mt.Op.14-------=-2147483648,2147483648
Mt.Op.15-------=-2147483648,2147483648
Mt.Op.16-------=0,1

; Numeric Value - Increase & Decrease Value
; Write a numeric value. This can be an integer or a floating-point number.
; When clicking "^" next to the option, the value will increase the value you specified;
; When clicking "v" next to the option, the value will decrease the value you specified.
; The most maximum value:  2147483648
; The most minimum value: -2147483648
; If not needed, write "0"
Mt.Op.01--------=64
Mt.Op.02--------=0
Mt.Op.03--------=0.5
Mt.Op.04--------=100
Mt.Op.05--------=0
Mt.Op.06--------=0
Mt.Op.07--------=0
Mt.Op.08--------=0
Mt.Op.09--------=15
Mt.Op.10--------=0
Mt.Op.11--------=0.1
Mt.Op.12--------=1
Mt.Op.13--------=45
Mt.Op.14--------=8
Mt.Op.15--------=8
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

