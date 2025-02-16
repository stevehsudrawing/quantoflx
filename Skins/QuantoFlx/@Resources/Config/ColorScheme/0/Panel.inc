[Variables]
; Determine if Accent Color is a "bright color" (Formula)
; 0 - NO
; 1 - YES
; "DynamicVariables=1" is required
; (#Cl.Dt#)   - Original - If it is a "bright color" -> 1
; (1-#Cl.Dt#) - Reversed - If it is a "bright color" -> 0
Cl.Dt=(#Cl.Ac.Ar#>128?1:0)

; Foreground / Divider / Borders / Font
Cl.Gn.Fg.Gn=0,0,0

; Panel Shadow
Cl.Gn.Fg.Sd=0,0,0

; Background
Cl.Gn.Bg.Gn=255,255,255

; Background when the window is unselected
Cl.Gn.Bg.Da=243,243,243

; Solid Background, usually used in pages
Cl.Gn.Bg.Sl=255,255,255

; Option
Cl.Gn.Bg.Op=255,255,255

; Text Input Box
Cl.Gn.Bg.Ti=255,255,255

; Accent: Foreground
Cl.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))

; Accent: Title
Cl.Ac.Fg.Sl=(#Cl.Ac.R#-64),(#Cl.Ac.G#-64),(#Cl.Ac.B#-64)

; Accent: Background
Cl.Ac.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#

; Warning Color: Foreground
Cl.Wrng.Fg.Gn=192,0,0

; Warning Color: Background
Cl.Wrng.Bg.Gn=255,0,0

; Show Button Borders
Cl.SwBd=1

; Hover Strength
Fl.Cl.Hv=Fill Color #Cl.Gn.Fg.Gn#,(12)