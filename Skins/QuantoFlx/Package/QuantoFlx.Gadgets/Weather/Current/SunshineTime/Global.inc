[Variables]
Vr.|Mt.SunshineTime.00|.IT_0=#Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Vr.|Mt.SunshineTime.00|.IT_1=255,255,255,(255*#Op.Fg#)

[Mt.SunshineTime.00]
Meter=Image
MeterStyle=St.Gp.Main|St.ZnCt
ImageName=#Pk@#Image\SunshineTime_[Ms.Calc.IsDay]
ImageTint=[#Vr.|Mt.SunshineTime.00|.IT_[&Ms.Calc.IsDay]]
W=(#CURRENTCONFIGHEIGHT#)
H=(#CURRENTCONFIGHEIGHT#)
DynamicVariables=1
[Mt.SunshineTime.01]
Meter=Shape
MeterStyle=St.Gp.Main|St.ZnCt
Shape=Rectangle ((32-0.5-6)*#sc#*#sz#),((32-0.5)*#sc#*#sz#),((18+6)*#sc#*#sz#),(#sc#*#sz#),((#Cr#=0)?0:(#sc#*#sz#)),((#Cr#=0)?0:(#sc#*#sz#)) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(255*#Op.Fg#*[Ms.Calc.IsDay]) | Rotate (([Ms.Calc.CurrentClamp:%]/100)*270-225),((0.5+6)*#sc#*#sz#),(0.5*#sc#*#sz#)
Shape2=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(3*#sc#*#sz#)
Shape3=Ellipse (32*#sc#*#sz#),(32*#sc#*#sz#),(2*#sc#*#sz#)
Shape4=Combine Shape | Union Shape2 | Exclude Shape3
DynamicVariables=1
[Mt.SunshineTime.02]
Meter=Image
MeterStyle=St.Gp.Main|St.ZnCt
ImageName=#Pk@#Image\MonoIcons\32\Moon
ImageTint=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#*(1-[Ms.Calc.IsDay]))
W=(16*#sc#*#sz#)
H=(16*#sc#*#sz#)
X=((#CURRENTCONFIGHEIGHT#-16*#sc#*#sz#)/2)
Y=((#CURRENTCONFIGHEIGHT#-16*#sc#*#sz#)/2)
DynamicVariables=1
[Mt.SunshineTime.03]
Meter=String
MeterStyle=St.Gp.Main|St.ZnCt|St.Ft
Text=[#Tm.DayNight.[&Ms.Calc.IsDay]]
X=(#CURRENTCONFIGHEIGHT#/2)
Y=(50*#sc#*#Sz#)
StringAlign=CenterCenter
FontSize=(5*#sc#*#sz#)