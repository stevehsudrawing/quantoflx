[Variables]
ScndHnd=0

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Zn_Cstm]
Meter=Shape
X=(#Ppos.X#+8*#sc#*#sz#)
Y=(#Ppos.Y#+8*#sc#*#sz#)
Shape=Ellipse (24*#Sc#*#Sz#),(24*#Sc#*#Sz#),(24*#Sc#*#Sz#) | #da.sk# | Fill Color 255,255,255,(255*#Op.Fg#)
DynamicVariables=1
[Mt.Void]
Meter=String
Container=Mt.Zn_Cstm
[Mt.Le]
Meter=Shape
MeterStyle=St.Le|St.Le.Rtt

[Mt.Loading]
Meter=String
MeterStyle=St.ZnCt|St.Gp.Loading|St.Ft|St.Tx.Loading
[Mt.Error.00]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.Error|St.Mi|St.Error.00
[Mt.Error.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.Error|St.Mi|St.Error.01
