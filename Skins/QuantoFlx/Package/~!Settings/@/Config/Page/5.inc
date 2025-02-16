[Variables]
Pg.Ty=Settings

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=1
Mt.Op.17----=1
Mt.Op.18----=1
Mt.Op.21----=1
Mt.Op.22----=1
Mt.Op.23----=1
Mt.Op.24----=1
Mt.Op.25----=1
Mt.Op.26----=1
Mt.Op.27----=1
Mt.Op.28----=1

; Internal Name of this option to display
; If not needed, write "Null"
Mt.Op.11-----=SkinDepthLayer
Mt.Op.12-----=OverallOpacity
Mt.Op.13-----=LockLayout
Mt.Op.14-----=ResetPosition
Mt.Op.15-----=StyleClipboard
Mt.Op.16-----=Null
Mt.Op.17-----=Null
Mt.Op.18-----=Null
Mt.Op.21-----=Null
Mt.Op.22-----=Null
Mt.Op.23-----=Null
Mt.Op.24-----=Null
Mt.Op.25-----=Null
Mt.Op.26-----=Null
Mt.Op.27-----=Null
Mt.Op.28-----=Null

; Option Width
; 0 - Short
; 1 - Wide
Mt.Op.11------=1
Mt.Op.12------=1
Mt.Op.13------=1
Mt.Op.14------=1
Mt.Op.15------=1
Mt.Op.16------=0
Mt.Op.17------=0
Mt.Op.18------=0
Mt.Op.21------=0
Mt.Op.22------=0
Mt.Op.23------=0
Mt.Op.24------=0
Mt.Op.25------=0
Mt.Op.26------=0
Mt.Op.27------=0
Mt.Op.28------=0

; Display description or not
; 0 - Hide
; 1 - Show
Mt.Op.11-------=1
Mt.Op.12-------=1
Mt.Op.13-------=1
Mt.Op.14-------=0
Mt.Op.15-------=1
Mt.Op.16-------=0
Mt.Op.17-------=0
Mt.Op.18-------=0
Mt.Op.21-------=0
Mt.Op.22-------=0
Mt.Op.23-------=0
Mt.Op.24-------=0
Mt.Op.25-------=0
Mt.Op.26-------=0
Mt.Op.27-------=0
Mt.Op.28-------=0

; The control type of this option
; 0 - Hide
; 1 - Long box (Text Input)
; 2 - Long box (Context Menu)
; 3 - Switcher
; 4 - Small box (Text Input)
; 5 - Small box (Context Menu)
; 6 - Switcher (No text)
Mt.Op.11--------=2
Mt.Op.12--------=2
Mt.Op.13--------=3
Mt.Op.14--------=3
Mt.Op.15--------=0
Mt.Op.16--------=0
Mt.Op.17--------=0
Mt.Op.18--------=0
Mt.Op.21--------=0
Mt.Op.22--------=0
Mt.Op.23--------=0
Mt.Op.24--------=0
Mt.Op.25--------=0
Mt.Op.26--------=0
Mt.Op.27--------=0
Mt.Op.28--------=0

; The Variable to modify
; If not needed, write "Null"
Mt.Op.11---------=RmSk.DL
Mt.Op.12---------=RmSk.Op
Mt.Op.13---------=RmSk.Lk
Mt.Op.14---------=RPSAU
Mt.Op.15---------=Null
Mt.Op.16---------=Null
Mt.Op.17---------=Null
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Null
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Null
Mt.Op.27---------=Null
Mt.Op.28---------=Null

; Text displays in/beside the control
; If not needed, you can leave it blank
Mt.Op.11----------=[#Tm.SkinDepthLayer_[#RmSk.DL]]
Mt.Op.12----------=[#RmSk.Op]x
Mt.Op.13----------=[#Tm.[#RmSk.Lk]]
Mt.Op.14----------=[#Tm.[#RPSAU]]
Mt.Op.15----------=
Mt.Op.16----------=
Mt.Op.17----------=
Mt.Op.18----------=
Mt.Op.21----------=
Mt.Op.22----------=
Mt.Op.23----------=
Mt.Op.24----------=
Mt.Op.25----------=
Mt.Op.26----------=
Mt.Op.27----------=
Mt.Op.28----------=

CmLs.Main.CMSS_Mt.Op.12---.T01=1x
CmLs.Main.CMSS_Mt.Op.12---.T02=0.9x
CmLs.Main.CMSS_Mt.Op.12---.T03=0.8x
CmLs.Main.CMSS_Mt.Op.12---.T04=0.7x
CmLs.Main.CMSS_Mt.Op.12---.T05=0.6x
CmLs.Main.CMSS_Mt.Op.12---.T06=0.5x
CmLs.Main.CMSS_Mt.Op.12---.T07=0.4x
CmLs.Main.CMSS_Mt.Op.12---.T08=0.3x
CmLs.Main.CMSS_Mt.Op.12---.T09=0.2x
CmLs.Main.CMSS_Mt.Op.12---.T10=0.1x
CmLs.Main.CMSS_Mt.Op.12---.T11=
CmLs.Main.CMSS_Mt.Op.12---.A01=[!WriteKeyValue "Variables" "RmSk.Op" "1" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A02=[!WriteKeyValue "Variables" "RmSk.Op" "0.9" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A03=[!WriteKeyValue "Variables" "RmSk.Op" "0.8" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A04=[!WriteKeyValue "Variables" "RmSk.Op" "0.7" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A05=[!WriteKeyValue "Variables" "RmSk.Op" "0.6" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A06=[!WriteKeyValue "Variables" "RmSk.Op" "0.5" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A07=[!WriteKeyValue "Variables" "RmSk.Op" "0.4" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A08=[!WriteKeyValue "Variables" "RmSk.Op" "0.3" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A09=[!WriteKeyValue "Variables" "RmSk.Op" "0.2" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A10=[!WriteKeyValue "Variables" "RmSk.Op" "0.1" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A11=[]

CmLs.Main.CMSS_Mt.Op.11---.T01=#Tm.SkinDepthLayer_2#
CmLs.Main.CMSS_Mt.Op.11---.T02=#Tm.SkinDepthLayer_1#
CmLs.Main.CMSS_Mt.Op.11---.T03=#Tm.SkinDepthLayer_0#
CmLs.Main.CMSS_Mt.Op.11---.T04=#Tm.SkinDepthLayer_-1#
CmLs.Main.CMSS_Mt.Op.11---.T05=#Tm.SkinDepthLayer_-2#
CmLs.Main.CMSS_Mt.Op.11---.T06=
CmLs.Main.CMSS_Mt.Op.11---.A01=[!WriteKeyValue "Variables" "RmSk.DL" "2" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A02=[!WriteKeyValue "Variables" "RmSk.DL" "1" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A03=[!WriteKeyValue "Variables" "RmSk.DL" "0" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A04=[!WriteKeyValue "Variables" "RmSk.DL" "-1" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A05=[!WriteKeyValue "Variables" "RmSk.DL" "-2" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A06=[]

ORA.CA.-1=[]
ORA.CA.0=[]
ORA.CA.1=[!Delay 32][!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]]

[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\StyleClipboard" "Settings.ini"][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\StyleClipboard"]
X=(393*#sc#)
Y=((170+77*4)*#sc#)
[Mt.Cstm.15.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Open#
