[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Panels|QuantoFlx.Gadgets\Weather

[St.Gp.Loading]
Group=Gp.Loading
Hidden=0
[St.Gp.Main]
Group=Gp.Main
Hidden=1
[St.Gp.Error]
Group=Gp.Error
Hidden=1

[St.Error.00]
ImageName=#@#Image\MonoIcons\32\Warning
W=(32*#sc#)
H=(32*#sc#)
X=((#CURRENTCONFIGWIDTH#-32*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-32*#sc#)/2)
ToolTipTitle=#Tm.Web_Error.0003#
ToolTipText=#St.Web_Error.0003#
[St.Error.01]
ImageName=#@#Image\MonoIcons\32\Warning
W=(32*#sc#)
H=(32*#sc#)
X=((#CURRENTCONFIGWIDTH#-32*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-32*#sc#)/2)
ToolTipTitle=#Tm.Web_Error.0002#
ToolTipText=#St.Web_Error.0002#

[St.Tx.Loading]
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
W=(#CURRENTCONFIGWIDTH#-32*#sc#)
H=(#CURRENTCONFIGHEIGHT#-32*#sc#)
ClipString=2
Text=#Tm.Loading#
StringAlign=CenterCenter