[Variables]
Cl.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl.Gn.Fg.Gn=(#Cl.Dt#=1?0:255),(#Cl.Dt#=1?0:255),(#Cl.Dt#=1?0:255)
Cl.Gn.Fg.Sd=0,0,0
Cl.Gn.Bg.Gn=(#Cl.Dt#=1?(243+12*([#Bl.Bg.Md]=0?0:1)):32),(#Cl.Dt#=1?(243+12*([#Bl.Bg.Md]=0?0:1)):32),(#Cl.Dt#=1?(243+12*([#Bl.Bg.Md]=0?0:1)):32)
Cl.Gn.Bg.Da=(#Cl.Dt#=1?243:32),(#Cl.Dt#=1?243:32),(#Cl.Dt#=1?243:32)
Cl.Gn.Bg.Sl=(#Cl.Dt#=1?255:24),(#Cl.Dt#=1?255:24),(#Cl.Dt#=1?255:24)
Cl.Gn.Bg.Op=(#Cl.Dt#=1?255:44),(#Cl.Dt#=1?255:44),(#Cl.Dt#=1?255:44)
Cl.Gn.Bg.Ti=(#Cl.Dt#=1?255:56),(#Cl.Dt#=1?255:56),(#Cl.Dt#=1?255:56)
Cl.Ac.Fg.Gn=(#Cl.Dt#=1?(255*#Cl.Dt#):(255*(1-#Cl.Dt#))),(#Cl.Dt#=1?(255*#Cl.Dt#):(255*(1-#Cl.Dt#))),(#Cl.Dt#=1?(255*#Cl.Dt#):(255*(1-#Cl.Dt#)))
Cl.Ac.Fg.Sl=(#Cl.Dt#=1?#Cl.Ac.R#-64:#Cl.Ac.R#+64),(#Cl.Dt#=1?#Cl.Ac.G#-64:#Cl.Ac.G#+64),(#Cl.Dt#=1?#Cl.Ac.B#-64:#Cl.Ac.B#+64)
Cl.Ac.Bg.Gn=(#Cl.Dt#=1?#Cl.Ac.R#:((#Cl.Ac.R#+#Cl.Fg.R#)/2)),(#Cl.Dt#=1?#Cl.Ac.G#:((#Cl.Ac.G#+#Cl.Fg.G#)/2)),(#Cl.Dt#=1?#Cl.Ac.B#:((#Cl.Ac.B#+#Cl.Fg.B#)/2))
Cl.Wrng.Fg.Gn=(#Cl.Dt#=1?128:255),(#Cl.Dt#=1?0:128),(#Cl.Dt#=1?0:128)
Cl.Wrng.Bg.Gn=(#Cl.Dt#=1?255:255),(#Cl.Dt#=1?0:0),(#Cl.Dt#=1?0:0)
Cl.SwBd=(#Cl.Dt#=1?1:0)
Fl.Cl.Hv=Fill LinearGradient GdntHv | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*((#Hl.Op#=0)?0:1))