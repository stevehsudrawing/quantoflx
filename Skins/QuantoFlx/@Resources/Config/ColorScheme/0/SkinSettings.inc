[Variables]
Cl.Dt=(#Cl.Ac.Ar#>128?1:0)
Cl.Gn.Fg.Gn=0,0,0
Cl.Gn.Fg.Sd=0,0,0
Cl.Gn.Bg.Gn=(243+12*([#Bl.Bg.Md]=0?0:1)),(243+12*([#Bl.Bg.Md]=0?0:1)),(243+12*([#Bl.Bg.Md]=0?0:1))
Cl.Gn.Bg.Da=243,243,243
Cl.Gn.Bg.Sl=255,255,255
Cl.Gn.Bg.Op=255,255,255
Cl.Gn.Bg.Ti=255,255,255
Cl.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl.Ac.Fg.Sl=(#Cl.Ac.R#-64),(#Cl.Ac.G#-64),(#Cl.Ac.B#-64)
Cl.Ac.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Wrng.Fg.Gn=192,0,0
Cl.Wrng.Bg.Gn=255,0,0
Cl.SwBd=1
Fl.Cl.Hv=Fill Color #Cl.Gn.Fg.Gn#,(12)