[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.PnSr
[Mt.Le]
Meter=Shape
MeterStyle=St.Le|St.Le.Rtt

[Mt.Tx.Title]
Meter=String
MeterStyle=St.Gp.Main|St.Ft|St.Tx.Title_Part
DynamicVariables=1
X=((64+4)*#sc#)
Y=(32*#sc#)
W=(#CURRENTCONFIGWIDTH#-(64+4+10)*#sc#)
ClipString=2
StringAlign=LeftCenter
FontSize=(12*#Sc#*#Ft.Sc.Gn#)