[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le|St.Le.Rtt

[Mt.Sp.Rtt]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle ((((-(4)-18))/4)*#sc#),(((-(4))/4)*#sc#),(((96)/4)*#sc#),((((4)*2)/4)*#sc#),(#Cr#>0?(((4)/4)*#sc#):0),(#Cr#>0?(((4)/4)*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Fg#) | Rotate ([Ms.Min:%]/100*360-90),(((((4)+18))/4)*#sc#),((((4))/4)*#sc#)
Shape2=Rectangle ((((-(6)-12))/4)*#sc#),(((-(6))/4)*#sc#),(((80)/4)*#sc#),((((6)*2)/4)*#sc#),(#Cr#>0?(((6)/4)*#sc#):0),(#Cr#>0?(((6)/4)*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(255*#Op.Fg#) | Rotate ([Ms.Hour:%]/100*360-60),(((((6)+12))/4)*#sc#),(((6)/4)*#sc#)
X=(32*#sc#)
Y=(32*#sc#)
DynamicVariables=1

[Ms.Rl]
Measure=Time
Format=%S
MinValue=0
MaxValue=60
DynamicVariables=1
Disabled=#Em#
[Mt.RlB]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Ellipse ((64/2)*#Sc#),((64/2)*#Sc#),(24*#Sc#) | StrokeWidth (#Sc#) | Stroke Color #Cl.Gn.Fg.Gn#,(48*#Op.Fg#) | Fill Color 0,0,0,0
DynamicVariables=1
ToolTipTitle=[Ms.Time] [Ms.AMPM]
ToolTipText=[Ms.Date]#CRLF#[Ms.LocalName] | UTC [Ms.Timezone]
[Mt.Rl]
Meter=Roundline
MeterStyle=St.ZnCt
MeasureName=Ms.Rl
X=((16/2)*#Sc#)
Y=((16/2)*#Sc#)
W=((96/2)*#Sc#)
H=((96/2)*#Sc#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(2*#Sc#)
LineStart=(23*#Sc#)
LineLength=(25*#Sc#)
LineColor=#Cl.Ac.Bg.Gn#,(255*#Op.Fg#)
Solid=1
AntiAlias=1
DynamicVariables=1
Hidden=(#Em#)