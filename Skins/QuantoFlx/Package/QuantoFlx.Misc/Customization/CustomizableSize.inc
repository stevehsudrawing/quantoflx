[Variables]
MOA.QRsz_0=
MLA.QRsz_0=
MOA.QRsz_1=[!ShowMeter "Mt.Rsz"][!Redraw]
MLA.QRsz_1=[!HideMeter "Mt.Rsz"][!Redraw]

[Rainmeter]
MiddleMouseUpAction=[]

[Mt.Zn]
Meter=Shape
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#) | #da.sk# | Fill Color 0,0,0,1
DynamicVariables=1
MouseOverAction=[#MOA.QRsz_[#QRsz]][!Redraw]
MouseLeaveAction=[#MLA.QRsz_[#QRsz]][!Redraw]

[Mt.Im]
Meter=Image
ImageName=#ImgPth#
LeftMouseUpAction=["#TgtPth#"]
ToolTipText=#TlTpTx#
W=(#ImgW#)
H=(#ImgH#)
PreserveAspectRatio=#ImgMAR#
Greyscale=#ImgGry#
ImageTint=#ImgTnt#,(255*#Op.Bg_Cstm#)
ImageRotate=#ImgRtt#
AntiAlias=1
DynamicVariables=1

[Mt.Rsz]
Meter=Image
MeterStyle=St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
ImageTint=255,255,255
X=(#CURRENTCONFIGWIDTH#-(16)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "Resizing.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NWSE
Hidden=1