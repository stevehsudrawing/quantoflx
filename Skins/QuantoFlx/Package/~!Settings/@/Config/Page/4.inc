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
Mt.Op.16----=0
Mt.Op.17----=0
Mt.Op.18----=0
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
Mt.Op.11-----=TrayIcon
Mt.Op.12-----=AutoSwitchCS
Mt.Op.13-----=AutoSwitchColor
Mt.Op.14-----=EnergySavingMode
Mt.Op.15-----=AutoESM
Mt.Op.16-----=EasierSelect
Mt.Op.17-----=ShowSkinBackground
Mt.Op.18-----=TouchMode
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
Mt.Op.16------=1
Mt.Op.17------=1
Mt.Op.18------=1
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
Mt.Op.12-------=0
Mt.Op.13-------=0
Mt.Op.14-------=1
Mt.Op.15-------=0
Mt.Op.16-------=1
Mt.Op.17-------=1
Mt.Op.18-------=1
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
Mt.Op.12--------=0
Mt.Op.13--------=0
Mt.Op.14--------=3
Mt.Op.15--------=0
Mt.Op.16--------=3
Mt.Op.17--------=3
Mt.Op.18--------=3
Mt.Op.21--------=3
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
Mt.Op.12---------=Null
Mt.Op.13---------=Null
Mt.Op.14---------=Em
Mt.Op.15---------=Null
Mt.Op.16---------=EzSl
Mt.Op.17---------=SSBWCIO
Mt.Op.18---------=TcMd
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
Mt.Op.12----------=
Mt.Op.13----------=
Mt.Op.14----------=[#Tm.[#Em]]
Mt.Op.15----------=
Mt.Op.16----------=[#Tm.[#EzSl]]
Mt.Op.17----------=[#Tm.[#SSBWCIO]]
Mt.Op.18----------=[#Tm.[#TcMd]]
Mt.Op.21----------=[#Tm.[#RPSAU]]
Mt.Op.22----------=
Mt.Op.23----------=
Mt.Op.24----------=
Mt.Op.25----------=
Mt.Op.26----------=
Mt.Op.27----------=
Mt.Op.28----------=

ORA.CA.-1=[]
ORA.CA.0=[]
ORA.CA.1=[!Delay 32][!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]]

[Ms.Active.11]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")] = 1
IfTrueAction=[!SetOption Mt.Cstm.11.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.11.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.11.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=(170*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]],(192+63*([&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.11.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
X=(457*#sc#)
Y=(186*#sc#)
StringAlign=RightCenter
[Mt.Cstm.11.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\TrayIcon.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\TrayIcon"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\TrayIcon"]
Hidden=([&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=-1?1:0)
[Mt.Cstm.11.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.11:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+8)*#sc#)

[Ms.Active.12]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")] = 1
IfTrueAction=[!SetOption Mt.Cstm.12.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.12.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=((170+77)*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]],(192+63*([&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.12.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
X=(457*#sc#)
Y=((186+77)*#sc#)
StringAlign=RightCenter
[Mt.Cstm.12.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170+77)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\AutoSwitchCS.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"]
Hidden=([&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=-1?1:0)
[Mt.Cstm.12.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.12:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+77+8)*#sc#)

[Ms.Active.13]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")] = 1
IfTrueAction=[!SetOption Mt.Cstm.13.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.13.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.13.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=((170+77*2)*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]],(192+63*([&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.13.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]]
X=(457*#sc#)
Y=((186+77*2)*#sc#)
StringAlign=RightCenter
[Mt.Cstm.13.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170+77*2)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\AutoSwitchColor.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor"]
Hidden=([&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]=-1?1:0)
[Mt.Cstm.13.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.13:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchColor")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+77*2+8)*#sc#)

[Ms.Active.15]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")] = 1
IfTrueAction=[!SetOption Mt.Cstm.15.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.15.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=((170+77*4)*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]],(192+63*([&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.15.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
X=(457*#sc#)
Y=((186+77*4)*#sc#)
StringAlign=RightCenter
[Mt.Cstm.15.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170+77*4)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\AutoESM.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\AutoESM"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\AutoESM"]
Hidden=([&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=-1?1:0)
[Mt.Cstm.15.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.15:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+77*4+8)*#sc#)

[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(356*#sc#)
Y=(401*#sc#)
ToolTipText=#St.UserExperienceWrng.0004#
Hidden=1

;[Mt.Cstm.18.00]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.98
;LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\StyleClipboard" "Settings.ini"][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\StyleClipboard"]
;X=(393*#sc#)
;Y=((170+77*7)*#sc#)
;[Mt.Cstm.18.01]
;Meter=String
;MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
;Text=#Tm.Open#

;[Mt.Wrng.13]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
;X=(390*#sc#)
;Y=((169+77*2)*#sc#)
;ToolTipText=#St.UserExperienceWrng.0005#
;Hidden=1
;[Mt.Wrng.15]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
;X=0r
;Y=((169+77*4)*#sc#)
;ToolTipText=#St.UserExperienceWrng.0005#
;Hidden=1
;[Mt.Wrng.16]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
;X=0r
;Y=((169+77*5)*#sc#)
;ToolTipText=#St.UserExperienceWrng.0005#
;Hidden=1
;[Mt.Wrng.17]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
;X=0r
;Y=((169+77*6)*#sc#)
;ToolTipText=#St.UserExperienceWrng.0005#
;Hidden=1
;[Mt.Wrng.18]
;Meter=Shape
;MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
;X=0r
;Y=((169+77*7)*#sc#)
;ToolTipText=#St.UserExperienceWrng.0005#
;Hidden=1