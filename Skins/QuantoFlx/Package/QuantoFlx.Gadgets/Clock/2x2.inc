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
Shape=Rectangle ((-1-18)*#sc#),(-#sc#),(64*#sc#),(2*#sc#),(#Cr#>0?(#sc#):0),(#Cr#>0?(#sc#):0) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(((#Em#=1)||(#ScndHnd#=0))?0:(255*#Op.Fg#)) | Rotate ([Ms.Rl:%]/100*360-90),((1+18)*#sc#),(#sc#)
Shape2=Rectangle ((-1-9)*#sc#),(-#sc#),(43*#sc#),(2*#sc#),(#Cr#>0?(#sc#):0),(#Cr#>0?(#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Fg#) | Rotate ([Ms.Min:%]/100*360-90),((1+9)*#sc#),(#sc#)
Shape3=Rectangle ((-3/2-6)*#sc#),(-3/2*#sc#),(32*#sc#),(3*#sc#),(#Cr#>0?(3/2*#sc#):0),(#Cr#>0?(3/2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(255*#Op.Fg#) | Rotate ([Ms.Hour:%]/100*360-60),((3/2+6)*#sc#),(3/2*#sc#)
X=(64*#sc#)
Y=(64*#sc#)
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
MeterStyle=St.ZnCt|St.RlB
Hidden=#ScndHnd#
[Mt.Rl]
Meter=Roundline
MeterStyle=St.ZnCt|St.Rl
Hidden=((#Em#=1)||(#ScndHnd#=1))

[Mt.TmZnNm]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.Timezone
StringAlign=CenterCenter
X=(64*#Sc#)
Y=(42*#Sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
[Mt.FAMPM]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.FAMPM
StringAlign=CenterCenter
X=(64*#Sc#)
Y=(86*#Sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
Hidden=#AHT#

[Mt.Musk.01]
Meter=Shape
MeterStyle=St.ZnCt
X=(64*#sc#)
Y=(64*#sc#)
Shape=Rectangle  (-#sc#),(-(44+6*#ScndHnd#)*#sc#),(2*#sc#),(8*#sc#),(#Cr#>0?#sc#:0),(#Cr#>0?#sc#:0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape2=Rectangle ((44+6*#ScndHnd#)*#sc#),(-#sc#),(-8*#sc#),(2*#sc#),(#Cr#>0?#sc#:0),(#Cr#>0?#sc#:0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape3=Rectangle (-#sc#),((44+6*#ScndHnd#)*#sc#),(2*#sc#),(-8*#sc#),(#Cr#>0?#sc#:0),(#Cr#>0?#sc#:0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape4=Rectangle (-(44+6*#ScndHnd#)*#sc#),(-#sc#),(8*#sc#),(2*#sc#),(#Cr#>0?#sc#:0),(#Cr#>0?#sc#:0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape5=Ellipse ((40+6*#ScndHnd#)*cos(-60*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(-60*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape6=Ellipse ((40+6*#ScndHnd#)*cos(-30*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(-30*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape7=Ellipse ((40+6*#ScndHnd#)*cos(30*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(30*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape8=Ellipse ((40+6*#ScndHnd#)*cos(60*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(60*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape9=Ellipse ((40+6*#ScndHnd#)*cos(120*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(120*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape10=Ellipse ((40+6*#ScndHnd#)*cos(150*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(150*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape11=Ellipse ((40+6*#ScndHnd#)*cos(-150*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(-150*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape12=Ellipse ((40+6*#ScndHnd#)*cos(-120*PI/180)*#sc#),((40+6*#ScndHnd#)*sin(-120*PI/180)*#sc#),(3/2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
DynamicVariables=1
Hidden=(1-#ShowFace#)