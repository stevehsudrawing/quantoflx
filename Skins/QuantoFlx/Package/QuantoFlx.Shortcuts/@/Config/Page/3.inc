[Variables]
Pg.Ty=Settings

; Write the File you want to modify, ususally "#ROOTCONFIGPATH#Package\#Sl.Pk#\@\Config\SkinSettings\Global.inc"
MdFl=#ROOTCONFIGPATH#Package\#Sl.Pk#\@\Config\SkinSettings\Global.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=1
Mt.Op.14----=1
Mt.Op.15----=1
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
Mt.Op.11-----=ShowUp
Mt.Op.12-----=RenderImage
Mt.Op.13-----=Null
Mt.Op.14-----=Null
Mt.Op.15-----=Null
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
Mt.Op.13------=0
Mt.Op.14------=0
Mt.Op.15------=0
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
Mt.Op.11-------=0
Mt.Op.12-------=0
Mt.Op.13-------=0
Mt.Op.14-------=0
Mt.Op.15-------=0
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
Mt.Op.11--------=0
Mt.Op.12--------=2
Mt.Op.13--------=0
Mt.Op.14--------=0
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
Mt.Op.11---------=Null
Mt.Op.12---------=ForceMono
Mt.Op.13---------=Null
Mt.Op.14---------=Null
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
Mt.Op.11----------=
Mt.Op.12----------=[#Tm.ForceMono_[#ForceMono]]
Mt.Op.13----------=
Mt.Op.14----------=
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

CmLs.Main.CMSS_Mt.Op.12---.T01=#Tm.ForceMono_0#
CmLs.Main.CMSS_Mt.Op.12---.T02=#Tm.ForceMono_1#
CmLs.Main.CMSS_Mt.Op.12---.T03=#Tm.ForceMono_2#
CmLs.Main.CMSS_Mt.Op.12---.T04=
CmLs.Main.CMSS_Mt.Op.12---.A01=[!WriteKeyValue "Variables" "ForceMono" "0" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A02=[!WriteKeyValue "Variables" "ForceMono" "1" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A03=[!WriteKeyValue "Variables" "ForceMono" "2" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A04=[]

[Mt.Cstm.11.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
X=(393*#sc#)
Y=((170+77*0)*#sc#)
LeftMouseUpAction=[!ShowFadeGroup "Quanto_Flx.Shortcut"]
[Mt.Cstm.11.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Execute#
