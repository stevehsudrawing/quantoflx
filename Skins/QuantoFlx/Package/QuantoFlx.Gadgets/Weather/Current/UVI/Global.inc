[Mt.UVI.00]
Meter=Image
MeterStyle=St.Gp.Main|St.ZnCt
ImageName=#Pk@#Image\UVI
W=(#CURRENTCONFIGHEIGHT#)
H=(#CURRENTCONFIGHEIGHT#)
[Mt.UVI.01]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft
Text=UVI
X=(#CURRENTCONFIGHEIGHT#/2)
Y=(18*#sc#*#Sz#)
StringAlign=CenterCenter
FontSize=(5*#sc#*#sz#)
FontColor=#Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
[Mt.UVI.02]
Meter=Shape
MeterStyle=St.Gp.Main|St.ZnCt
Shape=Rectangle ((32-0.5-6)*#sc#*#sz#),((32-0.5)*#sc#*#sz#),((18+6)*#sc#*#sz#),(#sc#*#sz#),((#Cr#=0)?0:(#sc#*#sz#)),((#Cr#=0)?0:(#sc#*#sz#)) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn# | Rotate (([Ms.Calc.CurrentClamp:%]/100)*270-225),((0.5+6)*#sc#*#sz#),(0.5*#sc#*#sz#)
Shape2=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(3*#sc#*#sz#)
Shape3=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(2*#sc#*#sz#)
Shape4=Combine Shape | Union Shape2 | Exclude Shape3
DynamicVariables=1
[Mt.UVI.03]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft
Text=[Ms.WP.hourly.uv_index.0h:1]
X=(#CURRENTCONFIGHEIGHT#/2)
Y=(50*#sc#*#Sz#)
StringAlign=CenterCenter
FontSize=(6*#sc#*#sz#)