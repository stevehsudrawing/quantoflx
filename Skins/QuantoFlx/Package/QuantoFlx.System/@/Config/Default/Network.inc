[Variables]
Bnd.L=0
Bnd.R=0
Bnd.T=1
Bnd.B=0
PnGdnt.Enab=0
PnGdnt.Cl.01=180,220,255
PnGdnt.Cl.02=255,255,255
PnGdnt.Ag=90
Op.Bg_Cstm=1
PrvConfig=4x2.ini

; ============================= Basic Information =============================

; Icon
Pn.Im=#Pk@#Image\MonoIcons\32\Network_[Ms.SysInfo.ADAPTER_TYPE.Calc_IsWireless]_[Ms.WiFiStatus.Quality:/25,0]

; "ToolTipText" of the icon
Pn.Im.Tltt=#Tm.Click_to_Open_the_Network_and_Sharing_Center#

; Does it perform a specific action when the icon is clicked?
;   0 - No
;   1 - Yes
Pn.Im.Enab=1

; The action that is taken when the icon is clicked
; If it's not needed, write "[]"
Pn.Im.LMUA=["shell:::{8E908FC9-BECC-40f6-915B-F4CA0E70D03D}"]

; Title
Pn.Tt=[Ms.SysInfo.ADAPTER_ALIAS]

; The formula for the source of the progress bar
; It must have a maximum value of 100 and a minimum value of 0.
; If not needed, write "0"
Pn.PrgBCalc=[Ms.PrgBCalc.UptoMax]

; The value displayed by the skin in 1x1 & 2x2 styles
Pn.Dsply1x1=

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
Pn.Dsply4x1.00.Tx=#Pn.Tt#
Pn.Dsply4x1.00.P1=
Pn.Dsply4x1.00.P2=
Pn.Dsply4x1.00.AS=0

; Left Bottom
Pn.Dsply4x1.10.Sw=1
Pn.Dsply4x1.10.Tx=[#Tm.|Ms.SysInfo.INTERNET_CONNECTIVITY|_[&Ms.SysInfo.INTERNET_CONNECTIVITY]]
Pn.Dsply4x1.10.P1=
Pn.Dsply4x1.10.P2=
Pn.Dsply4x1.10.AS=0

; Right Top
Pn.Dsply4x1.01.Sw=1
Pn.Dsply4x1.01.Tx=%1B/s
Pn.Dsply4x1.01.P1=Ms.NetOut
Pn.Dsply4x1.01.P2=
Pn.Dsply4x1.01.AS=1

; Right Bottom
Pn.Dsply4x1.11.Sw=1
Pn.Dsply4x1.11.Tx=%1B/s
Pn.Dsply4x1.11.P1=Ms.NetIn
Pn.Dsply4x1.11.P2=
Pn.Dsply4x1.11.AS=1

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
Pn.DsplyDtd.00.Tt=#Tm.Adapter#
Pn.DsplyDtd.00.Tx=[Ms.SysInfo.ADAPTER_DESCRIPTION.String]
Pn.DsplyDtd.00.P1=
Pn.DsplyDtd.00.P2=
Pn.DsplyDtd.00.AS=0

; Line 2
Pn.DsplyDtd.01.Sw=1
Pn.DsplyDtd.01.Tt=#Tm.Transmit_Speed#
Pn.DsplyDtd.01.Tx=%1bps
Pn.DsplyDtd.01.P1=Ms.SysInfo.ADAPTER_TRANSMIT_SPEED
Pn.DsplyDtd.01.P2=
Pn.DsplyDtd.01.AS=2

; Line 3
Pn.DsplyDtd.02.Sw=1
Pn.DsplyDtd.02.Tt=#Tm.Receive_Speed#
Pn.DsplyDtd.02.Tx=%1bps
Pn.DsplyDtd.02.P1=Ms.SysInfo.ADAPTER_RECEIVE_SPEED
Pn.DsplyDtd.02.P2=
Pn.DsplyDtd.02.AS=2

; Line 4
Pn.DsplyDtd.03.Sw=#IsWireless#
Pn.DsplyDtd.03.Tt=#Tm.SSID#
Pn.DsplyDtd.03.Tx=[Ms.WiFiStatus.SSID]
Pn.DsplyDtd.03.P1=
Pn.DsplyDtd.03.P2=
Pn.DsplyDtd.03.AS=0

; Line 5
Pn.DsplyDtd.04.Sw=#IsWireless#
Pn.DsplyDtd.04.Tt=#Tm.Quality#
Pn.DsplyDtd.04.Tx=[Ms.WiFiStatus.Quality] %
Pn.DsplyDtd.04.P1=
Pn.DsplyDtd.04.P2=
Pn.DsplyDtd.04.AS=0

; Line 6
Pn.DsplyDtd.05.Sw=#IsWireless#
Pn.DsplyDtd.05.Tt=#Tm.Encryption#
Pn.DsplyDtd.05.Tx=[Ms.WiFiStatus.Encryption]
Pn.DsplyDtd.05.P1=
Pn.DsplyDtd.05.P2=
Pn.DsplyDtd.05.AS=0

; Line 7
Pn.DsplyDtd.06.Sw=#IsWireless#
Pn.DsplyDtd.06.Tt=#Tm.Authentication#
Pn.DsplyDtd.06.Tx=[Ms.WiFiStatus.AUTH]
Pn.DsplyDtd.06.P1=
Pn.DsplyDtd.06.P2=
Pn.DsplyDtd.06.AS=0

; Line 8
Pn.DsplyDtd.07.Sw=#IsWireless#
Pn.DsplyDtd.07.Tt=#Tm.Protocol#
Pn.DsplyDtd.07.Tx=[Ms.WiFiStatus.PHY]
Pn.DsplyDtd.07.P1=
Pn.DsplyDtd.07.P2=
Pn.DsplyDtd.07.AS=0

; Line 9
Pn.DsplyDtd.08.Sw=(1-#HideIP#)
Pn.DsplyDtd.08.Tt=#Tm.LAN_IP#
Pn.DsplyDtd.08.Tx=[Ms.SysInfo.IP_ADDRESS]
Pn.DsplyDtd.08.P1=
Pn.DsplyDtd.08.P2=
Pn.DsplyDtd.08.AS=0

; Line 10
Pn.DsplyDtd.09.Sw=(1-#HideIP#)
Pn.DsplyDtd.09.Tt=#Tm.WAN_IP#
Pn.DsplyDtd.09.Tx=[Ms.WebParser.WANIP]
Pn.DsplyDtd.09.P1=
Pn.DsplyDtd.09.P2=
Pn.DsplyDtd.09.AS=0

; Line 11
Pn.DsplyDtd.10.Sw=(1-#HideIP#)
Pn.DsplyDtd.10.Tt=#Tm.DNS_Server#
Pn.DsplyDtd.10.Tx=[Ms.SysInfo.DNS_SERVER]
Pn.DsplyDtd.10.P1=
Pn.DsplyDtd.10.P2=
Pn.DsplyDtd.10.AS=0

; Line 12
Pn.DsplyDtd.11.Sw=(1-#HideIP#)
Pn.DsplyDtd.11.Tt=#Tm.MAC_Address#
Pn.DsplyDtd.11.Tx=[Ms.SysInfo.MAC_ADDRESS]
Pn.DsplyDtd.11.P1=
Pn.DsplyDtd.11.P2=
Pn.DsplyDtd.11.AS=0

; Line 13
Pn.DsplyDtd.12.Sw=#ShowPing#
Pn.DsplyDtd.12.Tt=#Tm.Ping#
Pn.DsplyDtd.12.Tx=[Ms.Ping] ms
Pn.DsplyDtd.12.P1=
Pn.DsplyDtd.12.P2=
Pn.DsplyDtd.12.AS=0

; Line 14
Pn.DsplyDtd.13.Sw=0
Pn.DsplyDtd.13.Tt=
Pn.DsplyDtd.13.Tx=
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
Pn.DplHisto.Qtt=2

; The measure displayed in the 1st Line Chart
Pn.DplHisto.01.Ms=Ms.PrgBCalc.NetOut
Pn.DplHisto.01.AS=0
Pn.DplHisto.01.Tx.Tt=#Tm.Upload#
Pn.DplHisto.01.Tx.Tx=%1B/s
Pn.DplHisto.01.Tx.P1=Ms.Calc.MaxBytesPerSec_Peak
Pn.DplHisto.01.Tx.P2=
Pn.DplHisto.01.Tx.AS=1

; The measure displayed in the 2nd Line Chart
Pn.DplHisto.02.Ms=Ms.PrgBCalc.NetIn
Pn.DplHisto.02.AS=0
Pn.DplHisto.02.Tx.Tt=#Tm.Download#
Pn.DplHisto.02.Tx.Tx=%1B/s
Pn.DplHisto.02.Tx.P1=Ms.Calc.MaxBytesPerSec_Peak
Pn.DplHisto.02.Tx.P2=
Pn.DplHisto.02.Tx.AS=1

; ============================== Other Settings ===============================

IsWireless=1
WiFiIntfID=0
HideIP=1
ShowPing=0
PingAddress=www.bing.com
