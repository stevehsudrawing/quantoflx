[Variables]
Cl.Dt=(#Cl.Ac.Ar#>128?1:0)
Cl.Gn.Fg.Gn=255,255,255
Cl.Gn.Fg.Sd=255,255,255
Cl.Gn.Bg.Gn=0,0,0
Cl.Gn.Bg.Da=0,0,0
Cl.Gn.Bg.Sl=0,0,0
Cl.Gn.Bg.Op=0,0,0
Cl.Gn.Bg.Ti=0,0,0
Cl.Ac.Fg.Gn=0,0,0
Cl.Ac.Fg.Sl=255,255,255
Cl.Ac.Bg.Gn=(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.R#>0)?((#Cl.Ac.R#>128)?2:1.5):0):2)),(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.G#>0)?((#Cl.Ac.G#>128)?2:1.5):0):2)),(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.B#>0)?((#Cl.Ac.B#>128)?2:1.5):0):2))
Cl.Wrng.Fg.Gn=255,96,96
Cl.Wrng.Bg.Gn=255,96,96
Cl.SwBd=4
Fl.Cl.Hv=Fill Color #Cl.Gn.Fg.Gn#,0 | StrokeWidth (2*#sc#) | Stroke Color 255,255,255