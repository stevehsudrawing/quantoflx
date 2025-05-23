[Rainmeter]
SkinHeight=(64*#Length#)
SkinWidth=(64*#sc#)
MiddleMouseUpAction=#Ac.Variants#
MouseOverAction=[!ShowMeter Mt.Rsz][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Rsz][!Redraw]

[Mt.Main]
Meter=Shape
Shape=Rectangle ((#CURRENTCONFIGWIDTH#-#SW#)/2),(((64*#sc#-#SW#)/2)*#Shorten#),(#SW#),(64*(#Length#-#Shorten#)+#SW#*#Shorten#),(Max(#Cr.Cstm#,#SW#/2)),(Max(#Cr.Cstm#,#SW#/2)) | #da.sk# | Fill Color #Cl.Cstm#,(255*#Op.Bg_Cstm#)
DynamicVariables=1

[Mt.Rsz]
Meter=Image
MeterStyle=St.Mi|St.Rsz
X=(#CURRENTCONFIGWIDTH#-16*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "ResizingH.ini"]
MouseActionCursorName=SIZE_NS
ImageTint=#Cl.Cstm#
