[Variables]
Cl.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl.Gn.Fg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl.Gn.Fg.Sd=0,0,0
Cl.Gn.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Gn.Bg.Da=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Gn.Bg.Sl=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Gn.Bg.Op=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Gn.Bg.Ti=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Ac.Fg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Ac.Fg.Sl=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl.Ac.Bg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl.Wrng.Fg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl.Wrng.Bg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
; "DynamicVariables=1" is ALL required
Cl.SwBd=0
Fl.Cl.Hv=Fill LinearGradient GdntHv | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*((#Hl.Op#=0)?0:1))