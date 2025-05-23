[Rainmeter]
OnRefreshAction=[!Update]
Update=(1000*(1+#Em#))

[Variables]
PW=2
PH=2
ScndHnd=0

[Ms.PrgBCalc]
Measure=Calc
Formula=(Round(#Pn.PrgBCalc#))
MinValue=0
MaxValue=100
DynamicVariables=1

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
MouseOverAction=[!HideMeterGroup Gp.Normal][!ShowMeterGroup Gp.Alter][!Redraw]
MouseLeaveAction=[!ShowMeterGroup Gp.Normal][!HideMeterGroup Gp.Alter][!Redraw]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le|St.Le.Rtt

[St.Gp.Normal]
Group=Gp.Normal
Hidden=0
[St.Gp.Alter]
Group=Gp.Alter
Hidden=1

[Mt.Im]
Meter=Image
MeterStyle=St.Gp.Normal|St.ZnCt|St.Mi
ImageName=#Pn.Im#
X=((64-16)*#sc#)
Y=((64-16)*#sc#)
W=(32*#sc#)
H=(32*#sc#)

[Mt.1x1Tx]
Meter=String
MeterStyle=St.Gp.Alter|St.ZnCt|St.Ft
Text=#Pn.Dsply1x1#
FontSize=(20*#sc#*#Ft.Sc.Gn#)
StringAlign=CenterCenter
X=(64*#sc#)
Y=(64*#sc#)

[St.Im.Enab_1]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
LeftMouseUpAction=#Pn.Im.LMUA#
MouseActionCursor=1
MouseActionCursorName=HAND
[HMt.1x1Tx]
Meter=Shape
MeterStyle=St.ZnCt|St.Im.Enab_#Pn.Im.Enab#
Shape=Ellipse (64*#Sc#),(64*#Sc#),(49*#Sc#) | #da.sk# | Extend Hover
ToolTipText=#Pn.Tt##CRLF##Pn.Im.Tltt#
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1

[Mt.RlB]
Meter=Shape
MeterStyle=St.ZnCt|St.RlB
[Mt.Rl]
Meter=Roundline
MeterStyle=St.ZnCt|St.Rl
MeasureName=Ms.PrgBCalc