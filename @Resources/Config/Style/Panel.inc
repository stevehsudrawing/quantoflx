[Variables]
Pn.Zn.D1=(#Sp#),(#Sp#),(64*#Sc#*#PW#-#Sp#*2),(64*#Sc#*#PH#-#Sp#*2),(Max(#Cr#-#Sp#-#Le.Dt#/2,0)),(Max(#Cr#-#Sp#-#Le.Dt#/2,0))
Pn.Zn.Gn=(#Sp#),(#Sp#),(64*#Sc#*#PW#-#Sp#*2),(64*#Sc#*#PH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Pn.Zn.P1=(#Sp#/2),(#Sp#/2),(64*#Sc#*#PW#-#Sp#),(64*#Sc#*#PH#-#Sp#),(Max(#Cr#-#Sp#/2,0)),(Max(#Cr#-#Sp#/2,0))
Pn.Zn.P2=0,0,(64*#Sc#*#PW#),(64*#Sc#*#PH#),(Max(#Cr#,0)),(Max(#Cr#,0))
Fl.Cl.Bg=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg#)
; Fill in Background color
Fl.Cl.Le=Fill Color 255,255,255,(255*#Le.St#)
; Fill in light color (white)

Bl.Md_0.Ty_0=None
Bl.Md_0.Ty_1=None
Bl.Md_1.Ty_0=None
Bl.Md_1.Ty_1=None
Bl.Md_2.Ty_0=Blur
Bl.Md_2.Ty_1=Acrylic

Bl.Md_0.Cn_0=None
Bl.Md_0.Cn_1=None
Bl.Md_0.Cn_2=None
Bl.Md_0.Cn_3=None
Bl.Md_1.Cn_0=None
Bl.Md_1.Cn_1=None
Bl.Md_1.Cn_2=None
Bl.Md_1.Cn_3=None
Bl.Md_2.Cn_0=None
Bl.Md_2.Cn_1=All
Bl.Md_2.Cn_2=Round
Bl.Md_2.Cn_3=RoundSmall

[Rainmeter]
Blur=([#Bl.Gl.Md]=1?1:0)
BlurRegion=2,(#Sp#),(#Sp#),(64*#Sc#*#PW#-#Sp#*2),(64*#Sc#*#PH#-#Sp#*2),(Max(#Cr#-#Sp#,0)*2),(Max(#Cr#-#Sp#,0)*2)

[St.Pn]
; General Panel Style
Shape= Rectangle #Pn.Zn.P2# | #Da.Sk# | #Fl.Cl.Bd#
Shape2=Rectangle #Pn.Zn.P1# | #Da.Sk# | #Fl.Cl.Bd#
Shape3=Rectangle #Pn.Zn.Gn# | #Da.Sk#
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Bg#
DynamicVariables=1

[St.Zn]
; "Panel Zone" Style
Shape= Rectangle #Pn.Zn.Gn# | #Da.Sk#
DynamicVariables=1

[St.Le]
; Light Effect Style as an independent meter
Shape= Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Le#
Shape2=Rectangle #Pn.Zn.D1# | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1

[Ms.Bl]
Measure=Plugin
Plugin=FrostedGlass
Type=[#Bl.Md_[#Bl.Gl.Md].Ty_[#Bl.Gl.Ty]]
Corner=[#Bl.Md_[#Bl.Gl.Md].Cn_[#Bl.Gl.Cn]]
DynamicVariables=1