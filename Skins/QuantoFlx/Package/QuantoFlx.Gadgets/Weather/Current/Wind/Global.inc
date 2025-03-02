[Mt.Wind.00]
Meter=Shape
MeterStyle=St.Gp.Main|St.ZnCt
Shape=Path Path | Fill Color #Cl.Ac.Bg.Gn# | StrokeWidth (2*#sc#*#sz#) | Stroke Color #Cl.Ac.Bg.Gn# | StrokeLineJoin Round | Rotate (-180+[Ms.WP.hourly.wind_direction_10m.0h]),(5.25*#sc#*#sz#),(15*#sc#*#sz#)
Path=(12*#sc#*#sz#),(2*#sc#*#sz#) | LineTo (16*#sc#*#sz#),(22*#sc#*#sz#) | LineTo (8*#sc#*#sz#),(22*#sc#*#sz#) | ClosePath 1
X=(20*#sc#*#sz#)
Y=(20*#sc#*#sz#)
DynamicVariables=1
[St.Cstm.Tx.01]
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
FontSize=(5*#sc#*#sz#)
[St.Cstm.Ps.X.01]
X=(14*#sc#*#sz#)
[St.Cstm.Ps.X.02]
X=(32*#sc#*#sz#)
[St.Cstm.Ps.X.03]
X=((64-14)*#sc#*#sz#)
[St.Cstm.Ps.Y.01]
Y=(14*#sc#*#sz#)
[St.Cstm.Ps.Y.02]
Y=(32*#sc#*#sz#)
[St.Cstm.Ps.Y.03]
Y=((64-14)*#sc#*#sz#)
[Mt.Wind.01]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.X.02|St.Cstm.Ps.Y.01
Text=#Tm.N#
FontColor=#Cl.Gn.Fg.Gn#,(64+192*(([Ms.Calc.hourly.wind_direction_10m.0h]=7)||([Ms.Calc.hourly.wind_direction_10m.0h]=0)||([Ms.Calc.hourly.wind_direction_10m.0h]=1)))
[Mt.Wind.02]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.X.03|St.Cstm.Ps.Y.02
Text=#Tm.E#
FontColor=#Cl.Gn.Fg.Gn#,(64+192*(([Ms.Calc.hourly.wind_direction_10m.0h]=1)||([Ms.Calc.hourly.wind_direction_10m.0h]=2)||([Ms.Calc.hourly.wind_direction_10m.0h]=3)))
[Mt.Wind.03]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.X.02|St.Cstm.Ps.Y.03
Text=#Tm.S#
FontColor=#Cl.Gn.Fg.Gn#,(64+192*(([Ms.Calc.hourly.wind_direction_10m.0h]=3)||([Ms.Calc.hourly.wind_direction_10m.0h]=4)||([Ms.Calc.hourly.wind_direction_10m.0h]=5)))
[Mt.Wind.04]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.X.01|St.Cstm.Ps.Y.02
Text=#Tm.W#
FontColor=#Cl.Gn.Fg.Gn#,(64+192*(([Ms.Calc.hourly.wind_direction_10m.0h]=5)||([Ms.Calc.hourly.wind_direction_10m.0h]=6)||([Ms.Calc.hourly.wind_direction_10m.0h]=7)))
[Mt.Wind.05]
Meter=Shape
MeterStyle=St.Gp.Main|St.ZnCt
Shape=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(24.5*#sc#*#sz#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(48*#Op.Fg#)
Shape2=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(24*#sc#*#sz#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(48*#Op.Fg#)
Shape3=Combine Shape | Exclude Shape2
Shape4=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(24*#sc#*#sz#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape5=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(23*#sc#*#sz#) 
Shape6=Rectangle 0,0,(64*#sc#*#sz#),(32*#sc#*#sz#) | Rotate (-180-90+[Ms.WP.hourly.wind_direction_10m.0h]+90*(max([Ms.WP.hourly.wind_speed_10m.0h],0)/(37.0*(1-0.088656*#Un#)))),(32*#sc#*#sz#),(32*#sc#*#sz#)
Shape7=Rectangle 0,0,(64*#sc#*#sz#),(32*#sc#*#sz#) | Rotate (-180+90+[Ms.WP.hourly.wind_direction_10m.0h]-180*(max([Ms.WP.hourly.wind_speed_10m.0h],0)/(37.0*(1-0.088656*#Un#)))+90*(max([Ms.WP.hourly.wind_speed_10m.0h],0)/(37.0*(1-0.088656*#Un#)))),(32*#sc#*#sz#),(32*#sc#*#sz#)
Shape8=Combine Shape4 | Exclude Shape5 | Exclude Shape6 | Exclude Shape7
DynamicVariables=1
; 1 m/s = 2.237136 miles/h