[Variables]
Bnd.L=0
Bnd.R=0
Bnd.T=0
Bnd.B=0
PnGdnt.Enab=0
PnGdnt.Cl.01=180,220,255
PnGdnt.Cl.02=255,255,255
PnGdnt.Ag=90
Op.Bg_Cstm=1
PrvConfig=1x1.ini

; ============================= Basic Information =============================

; Icon
Pn.Im=#Pk@#Image\MonoIcons\32\Laptop

; "ToolTipText" of the icon
Pn.Im.Tltt=

; Does it perform a specific action when the icon is clicked?
;   0 - No
;   1 - Yes
Pn.Im.Enab=1

; The action that is taken when the icon is clicked
; If it's not needed, write "[]"
Pn.Im.LMUA=["shell:::{BB06C0E4-D293-4f75-8A90-CB05B6477EEE}"]

; Title
Pn.Tt=#Tm.System#

; The formula for the source of the progress bar
; It must have a maximum value of 100 and a minimum value of 0.
; If not needed, write "0"
Pn.PrgBCalc=100

; The value displayed by the skin in 1x1 & 2x2 styles
Pn.Dsply1x1=[Ms.PrgBCalc]

; =================== Information of the Skin in 4x1 Style ====================
; Sw - Show up or not
;   0 - Hide
;   1 - Show
; Tx - Text. It can be any text
;   %1               - Display the current value of the measure defined in "P1"
;   %2               - Display the current value of the measure defined in "P2"
;   #Pn.Tt#          - Title of the skin
;   #Tm.1_used#      - Equivalent to "%1 used", "P1" is required to define
;   #Tm.1_available# - Equivalent to "%1 available", "P1" is required to define
; P1 - Measure Name #1
; P2 - Measure Name #2
; AS - Automatically scales the measure values or not
;   0  - Disabled
;   1  - Scales by 1024
;   1k - Scales by 1024 with kilo as the lowest unit
;   2  - Scales by 1000
;   2k - Scales by 1000 with kilo as the lowest unit

; Left Top
Pn.Dsply4x1.00.Sw=1
Pn.Dsply4x1.00.Tx=[Ms.SysInfo.COMPUTER_NAME]
Pn.Dsply4x1.00.P1=
Pn.Dsply4x1.00.P2=
Pn.Dsply4x1.00.AS=0

; Left Bottom
Pn.Dsply4x1.10.Sw=1
Pn.Dsply4x1.10.Tx=#Tm.Uptime#: %1
Pn.Dsply4x1.10.P1=Ms.Uptime
Pn.Dsply4x1.10.P2=
Pn.Dsply4x1.10.AS=0

; Right Top
Pn.Dsply4x1.01.Sw=0
Pn.Dsply4x1.01.Tx=
Pn.Dsply4x1.01.P1=
Pn.Dsply4x1.01.P2=
Pn.Dsply4x1.01.AS=0

; Right Bottom
Pn.Dsply4x1.11.Sw=0
Pn.Dsply4x1.11.Tx=
Pn.Dsply4x1.11.P1=
Pn.Dsply4x1.11.P2=
Pn.Dsply4x1.11.AS=0

; ================= Information of the Skin in Detailed Style =================
; Sw - Show up or not
;   0 - Hide
;   1 - Show
; Tt - Title. It can be any text
; Tx - Text. It can be any text
;   %1               - Display the current value of the measure defined in "P1"
;   %2               - Display the current value of the measure defined in "P2"
;   #Pn.Tt#          - Title of the skin
;   #Tm.1_used#      - Equivalent to "%1 used", "P1" is required to define
;   #Tm.1_available# - Equivalent to "%1 available", "P1" is required to define
; P1 - Measure Name #1
; P2 - Measure Name #2
; AS - Automatically scales the measure values or not
;   0  - Disabled
;   1  - Scales by 1024
;   1k - Scales by 1024 with kilo as the lowest unit
;   2  - Scales by 1000
;   2k - Scales by 1000 with kilo as the lowest unit

; Line 1
Pn.DsplyDtd.00.Sw=1
Pn.DsplyDtd.00.Tt=#Tm.Device_Model#
Pn.DsplyDtd.00.Tx=[Ms.Registry.SystemProductName]
Pn.DsplyDtd.00.P1=
Pn.DsplyDtd.00.P2=
Pn.DsplyDtd.00.AS=0

; Line 2
Pn.DsplyDtd.01.Sw=1
Pn.DsplyDtd.01.Tt=#Tm.Device_Manufacturer#
Pn.DsplyDtd.01.Tx=[Ms.Registry.SystemManufacturer]
Pn.DsplyDtd.01.P1=
Pn.DsplyDtd.01.P2=
Pn.DsplyDtd.01.AS=0

; Line 3
Pn.DsplyDtd.02.Sw=1
Pn.DsplyDtd.02.Tt=#Tm.Baseboard#
Pn.DsplyDtd.02.Tx=[Ms.Registry.BaseBoardProduct] [Ms.Registry.BaseBoardVersion]
Pn.DsplyDtd.02.P1=
Pn.DsplyDtd.02.P2=
Pn.DsplyDtd.02.AS=0

; Line 4
Pn.DsplyDtd.03.Sw=1
Pn.DsplyDtd.03.Tt=#Tm.Baseboard_Manufacturer#
Pn.DsplyDtd.03.Tx=[Ms.Registry.BaseBoardManufacturer]
Pn.DsplyDtd.03.P1=
Pn.DsplyDtd.03.P2=
Pn.DsplyDtd.03.AS=0

; Line 5
Pn.DsplyDtd.04.Sw=1
Pn.DsplyDtd.04.Tt=#Tm.BIOS_Version#
Pn.DsplyDtd.04.Tx=[Ms.Registry.BIOSVersion]
Pn.DsplyDtd.04.P1=
Pn.DsplyDtd.04.P2=
Pn.DsplyDtd.04.AS=0

; Line 6
Pn.DsplyDtd.05.Sw=1
Pn.DsplyDtd.05.Tt=#Tm.BIOS_Vendor#
Pn.DsplyDtd.05.Tx=[Ms.Registry.BIOSVendor]
Pn.DsplyDtd.05.P1=
Pn.DsplyDtd.05.P2=
Pn.DsplyDtd.05.AS=0

; Line 7
Pn.DsplyDtd.06.Sw=1
Pn.DsplyDtd.06.Tt=#Tm.OS_Name#
Pn.DsplyDtd.06.Tx=[Ms.SysInfo.OS_PRODUCT_NAME]
Pn.DsplyDtd.06.P1=
Pn.DsplyDtd.06.P2=
Pn.DsplyDtd.06.AS=0

; Line 8
Pn.DsplyDtd.07.Sw=1
Pn.DsplyDtd.07.Tt=#Tm.OS_Version#
Pn.DsplyDtd.07.Tx=[#DspVer.Sy_[#Sy.Vr]]
Pn.DsplyDtd.07.P1=
Pn.DsplyDtd.07.P2=
Pn.DsplyDtd.07.AS=0

; Line 9
Pn.DsplyDtd.08.Sw=1
Pn.DsplyDtd.08.Tt=#Tm.OS_Build#
Pn.DsplyDtd.08.Tx=[Ms.Registry.BuildLab]
Pn.DsplyDtd.08.P1=
Pn.DsplyDtd.08.P2=
Pn.DsplyDtd.08.AS=0

; Line 10
Pn.DsplyDtd.09.Sw=1
Pn.DsplyDtd.09.Tt=#Tm.Actual_User_Name#
Pn.DsplyDtd.09.Tx=[Ms.SysInfo.USER_NAME]
Pn.DsplyDtd.09.P1=
Pn.DsplyDtd.09.P2=
Pn.DsplyDtd.09.AS=0

; Line 11
Pn.DsplyDtd.10.Sw=1
Pn.DsplyDtd.10.Tt=#Tm.Time_Zone#
Pn.DsplyDtd.10.Tx=[Ms.Time.TimeZone]
Pn.DsplyDtd.10.P1=
Pn.DsplyDtd.10.P2=
Pn.DsplyDtd.10.AS=0

; Line 12
Pn.DsplyDtd.11.Sw=1
Pn.DsplyDtd.11.Tt=#Tm.Daylight_Saving_Time#
Pn.DsplyDtd.11.Tx=[Ms.SysInfo.TIMEZONE_ISDST]
Pn.DsplyDtd.11.P1=
Pn.DsplyDtd.11.P2=
Pn.DsplyDtd.11.AS=0

; Line 13
Pn.DsplyDtd.12.Sw=1
Pn.DsplyDtd.12.Tt=#Tm.Login_Time#
Pn.DsplyDtd.12.Tx=[Ms.Time.USER_LOGONTIME]
Pn.DsplyDtd.12.P1=
Pn.DsplyDtd.12.P2=
Pn.DsplyDtd.12.AS=0

; Line 14
Pn.DsplyDtd.13.Sw=1
Pn.DsplyDtd.13.Tt=#Tm.Idle_Time#
Pn.DsplyDtd.13.Tx=[Ms.Uptime.IDLE_TIME]
Pn.DsplyDtd.13.P1=
Pn.DsplyDtd.13.P2=
Pn.DsplyDtd.13.AS=0

; Line 15
Pn.DsplyDtd.14.Sw=0
Pn.DsplyDtd.14.Tt=
Pn.DsplyDtd.14.Tx=
Pn.DsplyDtd.14.P1=
Pn.DsplyDtd.14.P2=
Pn.DsplyDtd.14.AS=0

; Line 16
Pn.DsplyDtd.15.Sw=0
Pn.DsplyDtd.15.Tt=
Pn.DsplyDtd.15.Tx=
Pn.DsplyDtd.15.P1=
Pn.DsplyDtd.15.P2=
Pn.DsplyDtd.15.AS=0

; =========================== Line Chart Information ===========================
; Tx - The text that appears next to the line chart. It can be any text
; AS - Automatically scales the measure values or not
; If set to 1, the line chart will be automatically scaled so that the largest 
; value is visible in the meter.

; Quantity of Line Chart(s)
; It must be 1 or 2, even if the skin don't need to have a style with Line Chart
Pn.DplHisto.Qtt=1

; The measure displayed in the 1st Line Chart
Pn.DplHisto.01.Ms=Ms.PrgBCalc
Pn.DplHisto.01.AS=0
Pn.DplHisto.01.Tx.Tt=#Tm.Utilization#
Pn.DplHisto.01.Tx.Tx=100 %
Pn.DplHisto.01.Tx.P1=
Pn.DplHisto.01.Tx.P2=
Pn.DplHisto.01.Tx.AS=0

; The measure displayed in the 2nd Line Chart
Pn.DplHisto.02.Ms=
Pn.DplHisto.02.AS=0
Pn.DplHisto.02.Tx.Tt=
Pn.DplHisto.02.Tx.Tx=
Pn.DplHisto.02.Tx.P1=
Pn.DplHisto.02.Tx.P2=
Pn.DplHisto.02.Tx.AS=0

; ============================== Other Settings ===============================

Dv.Sy_11.UsageMon=1
Dv.Sy_10.UsageMon=1
Dv.Sy_8.UsageMon=1
Dv.Sy_7.UsageMon=0

UsageMon=[#Dv.Sy_[#Sy.Vr].UsageMon]
SkinIndex=0
IdxSpLt=1