[Variables]
Pg.Ty=Settings

OpLs.ColorScheme.Dc=[#OpLs.ColorScheme.Dc_[#Cl.Sh]]
OpLs.GeneralFont.Dc=#Ft.Fc.Gn#
OpLs.ClockFont.Dc=#Ft.Fc.Cl#

MdFl=#@#Config\Settings.inc

Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=0
Mt.Op.18----=0
Mt.Op.21----=1
Mt.Op.22----=0
Mt.Op.23----=0
Mt.Op.24----=0
Mt.Op.25----=0
Mt.Op.26----=0
Mt.Op.27----=0
Mt.Op.28----=0

Mt.Op.11-----=ColorScheme
Mt.Op.12-----=AccentColor
Mt.Op.13-----=GeneralFont
Mt.Op.14-----=GeneralFontWeight
Mt.Op.15-----=GeneralFontScaling
Mt.Op.16-----=OpacityofBackground
Mt.Op.17-----=OpacityofForeground
Mt.Op.18-----=OpacityofBorders
Mt.Op.21-----=Null
Mt.Op.22-----=ForegroundColor
Mt.Op.23-----=ClockFont
Mt.Op.24-----=ClockFontWeight
Mt.Op.25-----=BoldFontWeight
Mt.Op.26-----=LightIntensity
Mt.Op.27-----=LightDistance
Mt.Op.28-----=LightAngle

Mt.Op.11------=1
Mt.Op.12------=0
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

Mt.Op.11-------=0
Mt.Op.12-------=0
Mt.Op.13-------=1
Mt.Op.14-------=0
Mt.Op.15-------=0
Mt.Op.16-------=0
Mt.Op.17-------=0
Mt.Op.18-------=0
Mt.Op.21-------=1
Mt.Op.22-------=1
Mt.Op.23-------=1
Mt.Op.24-------=0
Mt.Op.25-------=0
Mt.Op.26-------=0
Mt.Op.27-------=0
Mt.Op.28-------=0

Mt.Op.11--------=2
Mt.Op.12--------=0
Mt.Op.13--------=4
Mt.Op.14--------=0
Mt.Op.15--------=0
Mt.Op.16--------=0
Mt.Op.17--------=0
Mt.Op.18--------=0
Mt.Op.21--------=5
Mt.Op.22--------=0
Mt.Op.23--------=4
Mt.Op.24--------=0
Mt.Op.25--------=0
Mt.Op.26--------=0
Mt.Op.27--------=0
Mt.Op.28--------=0

Mt.Op.11---------=Null
Mt.Op.12---------=Null
Mt.Op.13---------=Ft.Fc.Gn
Mt.Op.14---------=Null
Mt.Op.15---------=Null
Mt.Op.16---------=Null
Mt.Op.17---------=Null
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Ft.Fc.Cl
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Null
Mt.Op.27---------=Null
Mt.Op.28---------=Null

Mt.Op.11----------=[#OpLs.ColorScheme.Dc_[#Cl.Sh]]
Mt.Op.12----------=
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

CmLs.Main.CMSS_Mt.Op.11---.T01=#OpLs.ColorScheme.Dc_0#
CmLs.Main.CMSS_Mt.Op.11---.T02=#OpLs.ColorScheme.Dc_1#
CmLs.Main.CMSS_Mt.Op.11---.T03=#OpLs.ColorScheme.Dc_2#
CmLs.Main.CMSS_Mt.Op.11---.T04=#OpLs.ColorScheme.Dc_3#
CmLs.Main.CMSS_Mt.Op.11---.T05=#OpLs.ColorScheme.Dc_4#
CmLs.Main.CMSS_Mt.Op.11---.T06=
CmLs.Main.CMSS_Mt.Op.11---.A01=[!WriteKeyValue "Variables" "Cl.Sh" "0" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A02=[!WriteKeyValue "Variables" "Cl.Sh" "1" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A03=[!WriteKeyValue "Variables" "Cl.Sh" "2" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A04=[!WriteKeyValue "Variables" "Cl.Sh" "3" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A05=[!WriteKeyValue "Variables" "Cl.Sh" "4" "#MdFl#"][!Delay 16][!Refresh]
CmLs.Main.CMSS_Mt.Op.11---.A06=[]

ORA.CA.-1=[!Delay 32][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]
ORA.CA.0=[!Delay 32][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]
ORA.CA.1=

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]]

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

[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Bt.Sp
X=(260*#sc#)
Y=(247*#sc#)
Shape=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Shape2=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\AccentColor.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AccentColor" "Main.ini"][!Move "(#CURRENTCONFIGX#)" "(#CURRENTCONFIGY#)" "#ROOTCONFIG#\Package\~!Settings\AccentColor"][!ZPos 1 "#ROOTCONFIG#\Package\~!Settings\AccentColor"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\~!Settings\AccentColor"]
MouseActionCursor=1
MouseActionCursorName=HAND

[Mt.Cstm.22.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Bt.Sp
X=(520*#sc#)
Y=(247*#sc#)
Shape=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Shape2=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
Hidden=(#Cl.Sh#<>3)
LeftMouseUpAction=[!WriteKeyValue "Variables" "SkWide" "#SkWide#" "#Pk@#Config\SkinSettings\ForegroundColor.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\ForegroundColor" "Main.ini"][!Move "(#CURRENTCONFIGX#)" "(#CURRENTCONFIGY#)" "#ROOTCONFIG#\Package\~!Settings\ForegroundColor"][!ZPos 1 "#ROOTCONFIG#\Package\~!Settings\ForegroundColor"][!Delay 16][!ZPos 0 "#ROOTCONFIG#\Package\~!Settings\ForegroundColor"]
MouseActionCursor=1
MouseActionCursorName=HAND
[Mt.Cstm.22.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=Aa
FontSize=(12*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Fg.R#,#Cl.Fg.G#,#Cl.Fg.B#,(#Op.Fg#*255)
X=(16*#sc#)r
Y=(16*#sc#)r
StringAlign=CenterCenter
Hidden=(#Cl.Sh#<>3)

[Mt.Cstm.14.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(400*#sc#)
[Mt.Cstm.14.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.14.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.14.00:Y]+16*#sc#)
Text=#Ft.Wt.Gn#
[Mt.Cstm.14.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.14.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.14.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Gn" "(clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#/2),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.14.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.14.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.14.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Gn" "(clamp((#Ft.Wt.Gn#-100),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.14.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.14.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.14.00:Y]
[Ms.Mt.Cstm.14.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.14.00:X]+6*#sc#)
Y=([Mt.Cstm.14.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ft.Wt.Gn]
Command1=[!Delay 16][!WriteKeyValue Variables "Ft.Wt.Gn" "(clamp($UserInput$,0,1000))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.14.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(477*#sc#)
[Mt.Cstm.15.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.15.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.15.00:Y]+16*#sc#)
Text=#Ft.Sc.Gn#x
[Mt.Cstm.15.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.15.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.15.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Ft.Sc.Gn" "(clamp((#Ft.Sc.Gn#+0.1),0.5,2))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.15.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.15.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.15.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Ft.Sc.Gn" "(clamp((#Ft.Sc.Gn#-0.1),0.5,2))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.15.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.15.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.15.00:Y]
[Ms.Mt.Cstm.15.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.15.00:X]+6*#sc#)
Y=([Mt.Cstm.15.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ft.Sc.Gn]
Command1=[!Delay 16][!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!WriteKeyValue Variables "Ft.Sc.Gn" "(clamp($UserInput$,0.5,2))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.15.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.16.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(554*#sc#)
[Mt.Cstm.16.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.16.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.16.00:Y]+16*#sc#)
Text=#Op.Bg#x
[Mt.Cstm.16.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.16.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.16.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Bg" "(clamp((#Op.Bg#+0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.16.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.16.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.16.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Bg" "(clamp((#Op.Bg#-0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.16.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.16.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.16.00:Y]
[Ms.Mt.Cstm.16.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.16.00:X]+6*#sc#)
Y=([Mt.Cstm.16.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Op.Bg]
Command1=[!Delay 16][!WriteKeyValue Variables "Op.Bg" "(clamp($UserInput$,0,1))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.16.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.17.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(631*#sc#)
[Mt.Cstm.17.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.17.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.17.00:Y]+16*#sc#)
Text=#Op.Fg#x
[Mt.Cstm.17.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.17.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.17.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Fg" "(clamp((#Op.Fg#+0.1),0.1,1))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.17.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.17.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.17.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Fg" "(clamp((#Op.Fg#-0.1),0.1,1))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.17.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.17.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.17.00:Y]
[Ms.Mt.Cstm.17.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.17.00:X]+6*#sc#)
Y=([Mt.Cstm.17.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Op.Fg]
Command1=[!Delay 16][!WriteKeyValue Variables "Op.Fg" "(clamp($UserInput$,0.1,1))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.17.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.18.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(229*#sc#)
Y=(708*#sc#)
[Mt.Cstm.18.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.18.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.18.00:Y]+16*#sc#)
Text=#Op.Bd#x
[Mt.Cstm.18.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.18.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.18.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Bd" "(clamp((#Op.Bd#+0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.18.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.18.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.18.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Bd" "(clamp((#Op.Bd#-0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.18.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.18.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.18.00:Y]
[Ms.Mt.Cstm.18.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.18.00:X]+6*#sc#)
Y=([Mt.Cstm.18.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Op.Bd]
Command1=[!Delay 16][!WriteKeyValue Variables "Op.Bd" "(clamp($UserInput$,0,1))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.18.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.24.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(401*#sc#)
[Mt.Cstm.24.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.24.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.24.00:Y]+16*#sc#)
Text=#Ft.Wt.Cl#
[Mt.Cstm.24.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.24.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.24.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Cl" "(clamp((#Ft.Wt.Cl#+100),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.24.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.24.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.24.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Cl" "(clamp((#Ft.Wt.Cl#-100),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.24.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.24.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.24.00:Y]
[Ms.Mt.Cstm.24.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.24.00:X]+6*#sc#)
Y=([Mt.Cstm.24.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ft.Wt.Cl]
Command1=[!Delay 16][!WriteKeyValue Variables "Ft.Wt.Cl" "(clamp($UserInput$,0,1000))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.24.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.25.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(477*#sc#)
[Mt.Cstm.25.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.25.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.25.00:Y]+16*#sc#)
Text=+#Ft.Wt.Bd#
[Mt.Cstm.25.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.25.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.25.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Bd" "(clamp((#Ft.Wt.Bd#+100),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.25.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.25.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.25.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Bd" "(clamp((#Ft.Wt.Bd#-100),0,1000))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.25.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.25.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.25.00:Y]
[Ms.Mt.Cstm.25.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.25.00:X]+6*#sc#)
Y=([Mt.Cstm.25.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Ft.Wt.Bd]
Command1=[!Delay 16][!WriteKeyValue Variables "Ft.Wt.Bd" "(clamp($UserInput$,0,1000))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.25.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.26.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(554*#sc#)
[Mt.Cstm.26.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.26.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.26.00:Y]+16*#sc#)
Text=#Le.St#x
[Mt.Cstm.26.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.26.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.26.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.St" "(clamp((#Le.St#+0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.26.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.26.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.26.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.St" "(clamp((#Le.St#-0.1),0,1))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.26.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.26.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.26.00:Y]
[Ms.Mt.Cstm.26.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.26.00:X]+6*#sc#)
Y=([Mt.Cstm.26.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Le.St]
Command1=[!Delay 16][!WriteKeyValue Variables "Le.St" "(clamp($UserInput$,0,1))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.26.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.27.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(631*#sc#)
[Mt.Cstm.27.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.27.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.27.00:Y]+16*#sc#)
Text=#Le.Dt#px
[Mt.Cstm.27.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.27.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.27.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Dt" "(clamp((#Le.Dt#+1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.27.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.27.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.27.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Dt" "(clamp((#Le.Dt#-1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.27.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.27.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.27.00:Y]
[Ms.Mt.Cstm.27.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.27.00:X]+6*#sc#)
Y=([Mt.Cstm.27.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Le.Dt]
Command1=[!Delay 16][!WriteKeyValue Variables "Le.Dt" "(clamp($UserInput$,0,65535))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.27.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.27.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(631*#sc#)
[Mt.Cstm.27.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.27.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.27.00:Y]+16*#sc#)
Text=#Le.Dt#px
[Mt.Cstm.27.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.27.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.27.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Dt" "(clamp((#Le.Dt#+1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.27.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.27.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.27.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Dt" "(clamp((#Le.Dt#-1),0,65535))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.27.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.27.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.27.00:Y]
[Ms.Mt.Cstm.27.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.27.00:X]+6*#sc#)
Y=([Mt.Cstm.27.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Le.Dt]
Command1=[!Delay 16][!WriteKeyValue Variables "Le.Dt" "(clamp($UserInput$,0,65535))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.27.01][!Redraw]
DynamicVariables=1

[Mt.Cstm.28.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.00
X=(489*#sc#)
Y=(708*#sc#)
[Mt.Cstm.28.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Cstm.01
X=([Mt.Cstm.28.00:X]-[Mt.Zn:X]+6*#sc#)
Y=([Mt.Cstm.28.00:Y]+16*#sc#)
Text=#Le.Ag#°
[Mt.Cstm.28.02]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.02
X=([Mt.Cstm.28.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.28.00:Y]+8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Ag" "(clamp((#Le.Ag#+15),0,360))" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Cstm.28.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl|St.Cstm.03
X=([Mt.Cstm.28.00:XW]-[Mt.Zn:X]-16*#sc#)
Y=([Mt.Cstm.28.00:YH]-16*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Le.Ag" "(clamp((#Le.Ag#-15),0,360))" "#MdFl#"][!Delay 16][!Refresh]
[CMt.Cstm.28.01]
Meter=Shape
MeterStyle=St.ZnCt3|St.Cstm.04
X=([Mt.Cstm.28.00:X]-[Mt.Zn:X])
Y=[Mt.Cstm.28.00:Y]
[Ms.Mt.Cstm.28.01]
Measure=Plugin
Plugin=InputText
X=([Mt.Cstm.28.00:X]+6*#sc#)
Y=([Mt.Cstm.28.00:Y]+6*#sc#)
W=(52*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue=[#Le.Ag]
Command1=[!Delay 16][!WriteKeyValue Variables "Le.Ag" "(clamp($UserInput$,0,360))" "#MdFl#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Cstm.28.01][!Redraw]
DynamicVariables=1
[Mt.Cstm.28.04]
Meter=Shape
MeterStyle=St.ZnCt3
X=(331*#sc#)
Y=(716*#sc#)
Shape=Ellipse (10*#sc#),(10*#sc#),(6*#sc#) | StrokeWidth (1*#sc#) | Stroke Color #Cl.Gn.Fg.Gn# | #da.bg#
Shape2=Ellipse (16*#sc#),(10*#sc#),(3*#sc#) | StrokeWidth (1*#sc#) | Stroke Color #Cl.Gn.Fg.Gn# | Fill Color #Cl.Gn.Bg.Op# | Rotate #Le.Ag#,(-2*#sc#),(4*#sc#)
DynamicVariables=1

[Ms.Active]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1

[Mt.Wrng.12]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(224*#sc#)
Y=(247*#sc#)
ToolTipText=#St.UserExperienceWrng.0001#
Hidden=((#Cl.Sh#=0)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)<576):((#Cl.Sh#=1)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>144):((#Cl.Sh#=2)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>96):((#Cl.Sh#=3)?(abs(#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#-#Cl.Fg.R#-#Cl.Fg.G#-#Cl.Fg.B#)>192):1))))
[Mt.Wrng.14]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(192*#sc#)
Y=(400*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=((#Ft.Wt.Gn#>200)&&(#Ft.Wt.Gn#<700))
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Gn" "#Dv.Ft.Wt.Gn#" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Wrng.15]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(192*#sc#)
Y=(477*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=((#Ft.Sc.Gn#>0.8)&&(#Ft.Sc.Gn#<1.4))
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Sc.Gn" "1" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Wrng.17]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(192*#sc#)
Y=(631*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=(#Op.Fg#>0.5)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Op.Fg" "1" "#MdFl#"][!Delay 16][!Refresh]
[Mt.Wrng.22]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(484*#sc#)
Y=(247*#sc#)
ToolTipText=#St.UserExperienceWrng.0001#
Hidden=(#Cl.Sh#=3?(Abs((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)-(#Cl.Fg.R#+#Cl.Fg.G#+#Cl.Fg.B#))<192?0:1):1)
[Mt.Wrng.25]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(452*#sc#)
Y=(477*#sc#)
ToolTipText=#St.UserExperienceWrng.0001##CRLF##St.UserExperienceWrng.0002#
Hidden=((#Ft.Wt.Bd#>=100)&&(#Ft.Wt.Bd#<=400))
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Wt.Bd" "200" "#MdFl#"][!Delay 16][!Refresh]

[Mt.Wrng.Pg]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(536*#sc#)
Y=(54*#sc#)
ToolTipText=#St.UserExperienceWrng.0003#
Hidden=(([&Ms.Active:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=1)?0:1)
LeftMouseUpAction=[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!Update]