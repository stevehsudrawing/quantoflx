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
Ln=13
HelpBttn=1
HelpLink=https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Gadgets''-Package#clock

@include=#@#Config\Global.inc
@include2=#@#Config\GlobalConfig.inc
@include3=#@#Config\Language\en-us\TimeZoneName.inc

; Display name
; If not needed, leave it blank
Mt.Op.01---=#Tm.String_Align# (2x1 & 4x2)
Mt.Op.02---=#Tm.Always_hide_second# (4x2)
Mt.Op.03---=#Tm.Hide_AMPM# (2x2 & 4x4)
Mt.Op.04---=#Tm.Show_Second_Hand_instead_of_a_Circle#
Mt.Op.05---=#Tm.Show_Clock_Face# (2x2 & 4x4)
Mt.Op.06---=#Tm.Number_Type# (4x4)
Mt.Op.07---=#Tm.Display_numbers_elsewhere# (4x4)
Mt.Op.08---=#Tm.Text_Position_Offset# (#Tm.Horizontal#) (4x4)
Mt.Op.09---=#Tm.Text_Position_Offset# (#Tm.Vertical#) (4x4)
Mt.Op.10---=#Tm.Time_zone#
Mt.Op.11---=#Tm.Custom_time_zone#
Mt.Op.12---=#Tm.Custom_time_zone_name#
Mt.Op.13---=#Tm.Show_the_time_zone#
Mt.Op.14---=
Mt.Op.15---=
Mt.Op.16---=

; Related Variables
; If not needed, write "Null"
Mt.Op.01----=Align
Mt.Op.02----=AHS
Mt.Op.03----=AHT
Mt.Op.04----=ScndHnd
Mt.Op.05----=ShowFace
Mt.Op.06----=MainNm
Mt.Op.07----=OthrNm
Mt.Op.08----=Ppos.X.Nm
Mt.Op.09----=Ppos.Y.Nm
Mt.Op.10----=Null
Mt.Op.11----=TmZn
Mt.Op.12----=TmZnNm
Mt.Op.13----=SwTmZn
Mt.Op.14----=Null
Mt.Op.15----=Null
Mt.Op.16----=Null

; Values on display
; If not needed, leave it blank
Tm.String_Align_0=#Tm.Left#
Tm.String_Align_1=#Tm.Center#
Tm.String_Align_2=#Tm.Right#

Tm.MainNm_00=#Tm.None#
Tm.MainNm_01=Western Arabic [12345]
Tm.MainNm_02=Roman [I II III IV V]
Tm.MainNm_03=Chinese Double Hour [子丑寅卯辰]

Mt.Op.01-----=[#Tm.String_Align_[#Align]]
Mt.Op.02-----=[#Tm.[#AHS]]
Mt.Op.03-----=[#Tm.[#AHT]]
Mt.Op.04-----=[#Tm.[#ScndHnd]]
Mt.Op.05-----=[#Tm.[#ShowFace]]
Mt.Op.06-----=[#Tm.MainNm_[#MainNm]]
Mt.Op.07-----=[#Tm.[#OthrNm]]
Mt.Op.08-----=[#Ppos.X.Nm]px
Mt.Op.09-----=[#Ppos.Y.Nm]px
Mt.Op.10-----=[#Tm.Choose]
Mt.Op.11-----=[#TmZn]
Mt.Op.12-----=[#TmZnNm]
Mt.Op.13-----=[#Tm.[#SwTmZn]]
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
Mt.Op.01------=03
Mt.Op.02------=04
Mt.Op.03------=04
Mt.Op.04------=04
Mt.Op.05------=04
Mt.Op.06------=03
Mt.Op.07------=04
Mt.Op.08------=02
Mt.Op.09------=02
Mt.Op.10------=03
Mt.Op.11------=03
Mt.Op.12------=01
Mt.Op.13------=04
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
Mt.Op.05-------=0,1
Mt.Op.06-------=0,1
Mt.Op.07-------=0,1
Mt.Op.08-------=-2147483648,2147483648
Mt.Op.09-------=-2147483648,2147483648
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
Mt.Op.05--------=0
Mt.Op.06--------=0
Mt.Op.07--------=0
Mt.Op.08--------=1
Mt.Op.09--------=1
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
