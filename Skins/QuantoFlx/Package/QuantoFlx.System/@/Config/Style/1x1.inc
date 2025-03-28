[Rainmeter]
OnRefreshAction=[!Update]
Update=(1000*(1+#Em#))

[Variables]
PW=1
PH=1

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
X=(20*#sc#)
Y=(20*#sc#)
W=(24*#sc#)
H=(24*#sc#)

[Mt.1x1Tx]
Meter=String
MeterStyle=St.Gp.Alter|St.ZnCt|St.Ft
Text=#Pn.Dsply1x1#
FontSize=(14*#sc#*#Ft.Sc.Gn#)
StringAlign=CenterCenter
X=(32*#sc#)
Y=(32*#sc#)

[St.Im.Enab_1]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
LeftMouseUpAction=#Pn.Im.LMUA#
MouseActionCursor=1
MouseActionCursorName=HAND
[HMt.1x1Tx]
Meter=Shape
MeterStyle=St.ZnCt|St.Im.Enab_#Pn.Im.Enab#
Shape=Ellipse (32*#Sc#),(32*#Sc#),(24*#Sc#) | #da.sk# | Extend Hover
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