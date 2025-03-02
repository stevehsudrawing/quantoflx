[Variables]
Cl.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl.Gn.Fg.Gn=255,255,255
Cl.Gn.Fg.Sd=0,0,0
Cl.Gn.Bg.Gn=32,32,32
Cl.Gn.Bg.Da=32,32,32
Cl.Gn.Bg.Sl=24,24,24
Cl.Gn.Bg.Op=44,44,44
Cl.Gn.Bg.Ti=56,56,56
Cl.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl.Ac.Fg.Sl=(#Cl.Ac.R#+64),(#Cl.Ac.G#+64),(#Cl.Ac.B#+64)
Cl.Ac.Bg.Gn=(#Cl.Ac.R#+32),(#Cl.Ac.G#+32),(#Cl.Ac.B#+32)
Cl.Wrng.Fg.Gn=255,128,128
Cl.Wrng.Bg.Gn=255,0,0
Cl.SwBd=0
Fl.Cl.Hv=Fill LinearGradient GdntHv | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*((#Hl.Op#=0)?0:1))