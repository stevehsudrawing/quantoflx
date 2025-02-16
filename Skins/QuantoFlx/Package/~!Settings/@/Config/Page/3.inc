[Variables]
Pg.Ty=Settings

OpLs.BlurModeWB.Nm=#Tm.Blur_Mode#
OpLs.BlurModeWB.Dc_0=#Tm.0#
OpLs.BlurModeWB.Dc_1=#Tm.Aero#
OpLs.BlurModeWB.Dc_2=#Tm.Plugin#
OpLs.BlurModeWB.Dc=#St.For_windows_and_backgrounds.0001##CRLF#[#OpLs.BlurModeWB.Dc_[#Bl.Bg.Md]]

OpLs.AcrylicWB.Nm=#Tm.Acrylic#
OpLs.AcrylicWB.Dc=#St.For_windows_and_backgrounds.0001##CRLF#[#Tm.[#Bl.Bg.Ty]]

OpLs.ShadowWB.Nm=#Tm.Shadow#
OpLs.ShadowWB.Dc=#St.For_windows_and_backgrounds.0001##CRLF#[#Tm.[#Bl.Bg.Bd]]

OpLs.CornersWB.Nm=#Tm.Corners#
OpLs.CornersWB.Dc_0=#Tm.Square#
OpLs.CornersWB.Dc_1=#Tm.Rounded#
OpLs.CornersWB.Dc_2=#Tm.Slightly_Rounded#
OpLs.CornersWB.Dc=#St.For_windows_and_backgrounds.0001##CRLF#[#OpLs.CornersWB.Dc_[#Bl.Bg.Cn]]

OpLs.BlurModeP.Nm=#Tm.Blur_Mode#
OpLs.BlurModeP.Dc_0=#Tm.0#
OpLs.BlurModeP.Dc_1=#Tm.Aero#
OpLs.BlurModeP.Dc_2=#Tm.Plugin#
OpLs.BlurModeP.Dc=#St.For_panels.0001##CRLF#[#OpLs.BlurModeP.Dc_[#Bl.Gl.Md]]

OpLs.AcrylicP.Nm=#Tm.Acrylic#
OpLs.AcrylicP.Dc=#St.For_panels.0001##CRLF#[#Tm.[#Bl.Gl.Ty]]

OpLs.ShadowP.Nm=#Tm.Shadow#
OpLs.ShadowP.Dc=#St.For_panels.0001##CRLF#[#Tm.[#Bl.Gl.Bd]]

OpLs.CornersP.Nm=#Tm.Corners#
OpLs.CornersP.Dc_0=#Tm.Square#
OpLs.CornersP.Dc_1=#Tm.Rounded#
OpLs.CornersP.Dc_2=#Tm.Slightly_Rounded#
OpLs.CornersP.Dc=#St.For_panels.0001##CRLF#[#OpLs.CornersP.Dc_[#Bl.Gl.Cn]]

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.15----=0
Mt.Op.16----=(#Bl.Bg.Md#=2?0:1)
Mt.Op.17----=(#Bl.Bg.Md#=2?0:1)
Mt.Op.18----=(#Bl.Bg.Md#=2?0:1)
Mt.Op.18----=1
Mt.Op.21----=0
Mt.Op.22----=0
Mt.Op.23----=0
Mt.Op.24----=1
Mt.Op.25----=0
Mt.Op.26----=(#Bl.Gl.Md#=2?0:1)
Mt.Op.27----=(#Bl.Gl.Md#=2?0:1)
Mt.Op.28----=(#Bl.Gl.Md#=2?0:1)

; Internal Name of this option to display
; If not needed, write "Null"
Mt.Op.11-----=Spacing
Mt.Op.12-----=PanelPositionOffsetHorizontal
Mt.Op.13-----=CrystalEffectIntensity
Mt.Op.14-----=Scaling
Mt.Op.15-----=BlurModeWB
Mt.Op.16-----=AcrylicWB
Mt.Op.17-----=ShadowWB
Mt.Op.18-----=CornersWB
Mt.Op.21-----=CornerRadius
Mt.Op.22-----=PanelPositionOffsetVertical
Mt.Op.23-----=CrystalBorder
Mt.Op.24-----=Null
Mt.Op.25-----=BlurModeP
Mt.Op.26-----=AcrylicP
Mt.Op.27-----=ShadowP
Mt.Op.28-----=CornersP

; Option Width
; 0 - Short
; 1 - Wide
Mt.Op.11------=0
Mt.Op.12------=0
Mt.Op.13------=0
Mt.Op.14------=1
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
Mt.Op.14-------=1
Mt.Op.15-------=1
Mt.Op.16-------=1
Mt.Op.17-------=1
Mt.Op.18-------=1
Mt.Op.21-------=0
Mt.Op.22-------=0
Mt.Op.23-------=0
Mt.Op.24-------=0
Mt.Op.25-------=1
Mt.Op.26-------=1
Mt.Op.27-------=1
Mt.Op.28-------=1

; The control type of this option
; 0 - Hide
; 1 - Long box (Text Input)
; 2 - Long box (Context Menu)
; 3 - Switcher
; 4 - Small box (Text Input)
; 5 - Small box (Context Menu)
; 6 - Switcher (No text)
Mt.Op.11--------=0
Mt.Op.12--------=0
Mt.Op.13--------=0
Mt.Op.14--------=2
Mt.Op.15--------=5
Mt.Op.16--------=6
Mt.Op.17--------=6
Mt.Op.18--------=5
Mt.Op.21--------=0
Mt.Op.22--------=0
Mt.Op.23--------=0
Mt.Op.24--------=0
Mt.Op.25--------=5
Mt.Op.26--------=6
Mt.Op.27--------=6
Mt.Op.28--------=5

; The Variable to modify
; If not needed, write "Null"
Mt.Op.11---------=Null
Mt.Op.12---------=Null
Mt.Op.13---------=Null
Mt.Op.14---------=Sc
Mt.Op.15---------=Null
Mt.Op.16---------=Bl.Bg.Ty
Mt.Op.17---------=Bl.Bg.Bd
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Null
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Bl.Gl.Ty
Mt.Op.27---------=Bl.Gl.Bd
Mt.Op.28---------=Null

; Text displays in/beside the control
; If not needed, you can leave it blank
Mt.Op.11----------=
Mt.Op.12----------=
Mt.Op.13----------=
Mt.Op.14----------=[#Sc]x
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

CmLs.Main.CMSS_Mt.Op.14---.T01=0.5x
CmLs.Main.CMSS_Mt.Op.14---.T02=0.75x
CmLs.Main.CMSS_Mt.Op.14---.T03=1x
CmLs.Main.CMSS_Mt.Op.14---.T04=1.25x
CmLs.Main.CMSS_Mt.Op.14---.T05=1.5x
CmLs.Main.CMSS_Mt.Op.14---.T06=1.75x
CmLs.Main.CMSS_Mt.Op.14---.T07=2x
CmLs.Main.CMSS_Mt.Op.14---.T08=2.25x
CmLs.Main.CMSS_Mt.Op.14---.T09=2.5x
CmLs.Main.CMSS_Mt.Op.14---.T10=2.75x
CmLs.Main.CMSS_Mt.Op.14---.T11=3x
CmLs.Main.CMSS_Mt.Op.14---.T12=3.25x
CmLs.Main.CMSS_Mt.Op.14---.T13=3.5x
CmLs.Main.CMSS_Mt.Op.14---.T14=3.75x
CmLs.Main.CMSS_Mt.Op.14---.T15=4x
CmLs.Main.CMSS_Mt.Op.14---.T16=4.25x
CmLs.Main.CMSS_Mt.Op.14---.T17=4.5x
CmLs.Main.CMSS_Mt.Op.14---.T18=4.75x
CmLs.Main.CMSS_Mt.Op.14---.T19=5x
CmLs.Main.CMSS_Mt.Op.14---.T20=#Tm.Custom_scaling_Up_to#...
CmLs.Main.CMSS_Mt.Op.14---.T21=
CmLs.Main.CMSS_Mt.Op.14---.A01=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "0.5"  "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A02=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "0.75" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A03=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "1"    "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A04=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "1.25" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A05=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "1.5"  "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A06=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "1.75" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A07=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "2"    "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A08=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "2.25" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A09=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "2.5"  "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A10=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "2.75" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A11=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "3"    "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A12=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "3.25" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A13=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "3.5"  "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A14=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "3.75" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A15=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "4"    "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A16=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "4.25" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A17=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "4.5"  "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A18=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "4.75" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A19=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!WriteKeyValue "Variables" "Sc" "5"    "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Delay 16][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!UpdateMeasure Ms.MA.01][!Update][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A20=[!WriteKeyValue "Variables" "PvSc" "#Sc#" "#ROOTCONFIGPATH#Package\~!Settings\@\Config\SkinSettings\ScalingWrng.inc"][!Delay 16][!HideMeterGroup Mt.Op.14---][!CommandMeasure Ms.Mt.Op.14---.Cstm "ExecuteBatch 1"][!Delay 16][!ShowMeter "Mt.Op.14-----"][!Redraw]
CmLs.Main.CMSS_Mt.Op.14---.A21=[]

CmLs.Main.CMSS_Mt.Op.15---.T01=#Tm.0#
CmLs.Main.CMSS_Mt.Op.15---.T02=#Tm.Aero#
CmLs.Main.CMSS_Mt.Op.15---.T03=#Tm.Plugin#
CmLs.Main.CMSS_Mt.Op.15---.T04=
CmLs.Main.CMSS_Mt.Op.15---.A01=[!WriteKeyValue "Variables" "Bl.Bg.Md" "0" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.15---.A02=[!WriteKeyValue "Variables" "Bl.Bg.Md" "1" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.15---.A03=[!WriteKeyValue "Variables" "Bl.Bg.Md" "2" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.15---.A04=[]

CmLs.Main.CMSS_Mt.Op.18---.T01=#Tm.Square#
CmLs.Main.CMSS_Mt.Op.18---.T02=#Tm.Rounded#
CmLs.Main.CMSS_Mt.Op.18---.T03=#Tm.Slightly_Rounded#
CmLs.Main.CMSS_Mt.Op.18---.T04=
CmLs.Main.CMSS_Mt.Op.18---.A01=[!WriteKeyValue "Variables" "Bl.Bg.Cn" "0" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.18---.A02=[!WriteKeyValue "Variables" "Bl.Bg.Cn" "1" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.18---.A03=[!WriteKeyValue "Variables" "Bl.Bg.Cn" "2" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.18---.A04=[]

CmLs.Main.CMSS_Mt.Op.25---.T01=#Tm.0#
CmLs.Main.CMSS_Mt.Op.25---.T02=#Tm.Aero#
CmLs.Main.CMSS_Mt.Op.25---.T03=#Tm.Plugin#
CmLs.Main.CMSS_Mt.Op.25---.T04=
CmLs.Main.CMSS_Mt.Op.25---.A01=[!WriteKeyValue "Variables" "Bl.Gl.Md" "0" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.25---.A02=[!WriteKeyValue "Variables" "Bl.Gl.Md" "1" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.25---.A03=[!WriteKeyValue "Variables" "Bl.Gl.Md" "2" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.25---.A04=[]

CmLs.Main.CMSS_Mt.Op.28---.T01=#Tm.Square#
CmLs.Main.CMSS_Mt.Op.28---.T02=#Tm.Rounded#
CmLs.Main.CMSS_Mt.Op.28---.T03=#Tm.Slightly_Rounded#
CmLs.Main.CMSS_Mt.Op.28---.T04=
CmLs.Main.CMSS_Mt.Op.28---.A01=[!WriteKeyValue "Variables" "Bl.Gl.Cn" "0" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.28---.A02=[!WriteKeyValue "Variables" "Bl.Gl.Cn" "1" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.28---.A03=[!WriteKeyValue "Variables" "Bl.Gl.Cn" "2" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.28---.A04=[]

ORA.CA.-1=[!Delay 32][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]
ORA.CA.0=[!Delay 32][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]
ORA.CA.1=

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]]

[Ms.Mt.Op.14---.Cstm]
Measure=Plugin
Plugin=InputText
X=([Mt.Op.14---:X]+6*#sc#)
Y=([Mt.Op.14---:Y]+6*#sc#)
W=(148*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#[#Mt.Op.14---------]]
Command1=[!Delay 16][!WriteKeyValue Variables "[#Mt.Op.14---------]" "(Clamp($UserInput$,0.5,8))" "#MdFl#"][!Delay 16][!Refresh][!Delay 16][!ShowMeter Mt.Wrng.14][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\ScalingWrng"][!Update][!Redraw]
OnDismissAction=[!HideMeter Mt.Op.14-----][!Redraw]
DynamicVariables=1

[St.Cstm.00]
Shape=Rectangle (-1*#sc#),(-1*#sc#),(64*#sc#+2*#sc#),(32*#sc#+2*#sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape5=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
[St.Cstm.01]
StringAlign=LeftCenter
LeftMouseUpAction=[!CommandMeasure Ms.#CURRENTSECTION# "ExecuteBatch 1"][!ShowMeter "C#CURRENTSECTION#"][!Redraw]
[St.Cstm.02]
ImageName=#@#Image\MonoIcons\8\AUp
W=(8*#sc#)
H=(8*#sc#)
[St.Cstm.03]
ImageName=#@#Image\MonoIcons\8\ADown
W=(8*#sc#)
H=(8*#sc#)
[St.Cstm.04]
Shape=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape2=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape3=Rectangle 0,0,(64*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | Offset 0,(-2*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=1

[Mt.Cstm.11.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(169*#sc#)
[Mt.Cstm.11.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.11.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.11.00:Y]+16*#sc#)
Text=#Sp#px
[Mt.Cstm.11.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.11.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.11.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sp" "(clamp((#Sp#+1),0,65536))" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.X" "(clamp(#Ppos.X#,(-(clamp((#Sp#+1),0,65536))),(clamp((#Sp#+1),0,65536))))" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.Y" "(clamp(#Ppos.Y#,(-(clamp((#Sp#+1),0,65536))),(clamp((#Sp#+1),0,65536))))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.11.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.11.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.11.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sp" "(clamp((#Sp#-1),0,65536))" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.X" "(clamp(#Ppos.X#,(-(clamp((#Sp#-1),0,65536))),(clamp((#Sp#-1),0,65536))))" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.Y" "(clamp(#Ppos.Y#,(-(clamp((#Sp#-1),0,65536))),(clamp((#Sp#-1),0,65536))))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.11.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.11.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.11.00:Y]
[Ms.Mt.Cstm.11.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.11.00:X]+6*#sc#)
Y=([Mt.Cstm.11.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Sp]
Command1=[!Delay 16][!WriteKeyValue Variables "Sp" "(clamp($UserInput$,0,65536))" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.X" "0" "#MdFl#"][!WriteKeyValue "Variables" "Ppos.Y" "0" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.11.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=((169+77)*#sc#)
[Mt.Cstm.12.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.12.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.12.00:Y]+16*#sc#)
Text=#Ppos.X#px
[Mt.Cstm.12.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.12.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.12.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ppos.X" "(clamp((#Ppos.X#+1),-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.12.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.12.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.12.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ppos.X" "(clamp((#Ppos.X#-1),-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.12.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.12.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.12.00:Y]
[Ms.Mt.Cstm.12.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.12.00:X]+6*#sc#)
Y=([Mt.Cstm.12.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ppos.X]
Command1=[!Delay 16][!WriteKeyValue Variables "Ppos.X" "(clamp($UserInput$,-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.12.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.13.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=((169+77*2)*#sc#)
[Mt.Cstm.13.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.13.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.13.00:Y]+16*#sc#)
Text=#Hl.Op#x
[Mt.Cstm.13.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.13.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.13.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Hl.Op" "(clamp((#Hl.Op#+0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.13.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.13.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.13.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Hl.Op" "(clamp((#Hl.Op#-0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.13.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.13.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.13.00:Y]
[Ms.Mt.Cstm.13.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.13.00:X]+6*#sc#)
Y=([Mt.Cstm.13.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Hl.Op]
Command1=[!Delay 16][!WriteKeyValue Variables "Hl.Op" "(clamp($UserInput$,0,1))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.13.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.21.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(169*#sc#)
[Mt.Cstm.21.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.21.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.21.00:Y]+16*#sc#)
Text=#Cr#px
[Mt.Cstm.21.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.21.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.21.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Cr" "(clamp((#Cr#+1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.21.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.21.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.21.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Cr" "(clamp((#Cr#-1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.21.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.21.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.21.00:Y]
[Ms.Mt.Cstm.21.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.21.00:X]+6*#sc#)
Y=([Mt.Cstm.21.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Cr]
Command1=[!Delay 16][!WriteKeyValue Variables "Cr" "(clamp($UserInput$,0,65535))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.21.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.22.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=((169+77)*#sc#)
[Mt.Cstm.22.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.22.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.22.00:Y]+16*#sc#)
Text=#Ppos.Y#px
[Mt.Cstm.22.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.22.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.22.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ppos.Y" "(clamp((#Ppos.Y#+1),-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.22.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.22.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.22.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ppos.Y" "(clamp((#Ppos.Y#-1),-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.22.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.22.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.22.00:Y]
[Ms.Mt.Cstm.22.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.22.00:X]+6*#sc#)
Y=([Mt.Cstm.22.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ppos.Y]
Command1=[!Delay 16][!WriteKeyValue Variables "Ppos.Y" "(clamp($UserInput$,-#Sp#,#Sp#))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.22.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.23.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=((169+77*2)*#sc#)
[Mt.Cstm.23.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.23.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.23.00:Y]+16*#sc#)
Text=#Hl.Bd#px
[Mt.Cstm.23.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.23.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.23.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Hl.Bd" "(clamp((#Hl.Bd#+1),0,#Cr#))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.23.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.23.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.23.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Hl.Bd" "(clamp((#Hl.Bd#-1),0,#Cr#))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.23.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.23.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.23.00:Y]
[Ms.Mt.Cstm.23.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.23.00:X]+6*#sc#)
Y=([Mt.Cstm.23.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Hl.Bd]
Command1=[!Delay 16][!WriteKeyValue Variables "Hl.Bd" "(clamp($UserInput$,0,#Cr#))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.23.01][!Redraw]
DynamicVariables=1

[Mt.Wrng.11]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(192*#sc#)
Y=(169*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=(#Sp#<=4*#Sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sp" "(Round(2*#Sc#,0))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Wrng.13]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(192*#sc#)
Y=((169+77*2)*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=(#Hl.Op#<0.5)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Hl.Op" "0.3" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Wrng.14]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(356*#sc#)
Y=((169+77*3)*#sc#)
ToolTipText=#St.UserExperienceWrng.0004#
Hidden=1

[Ms.Active]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
[Mt.Wrng.Pg]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(536*#sc#)
Y=(54*#sc#)
ToolTipText=#St.UserExperienceWrng.0003#
Hidden=([&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]<>1)
DynamicVariables=1
LeftMouseUpAction=[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!Update]