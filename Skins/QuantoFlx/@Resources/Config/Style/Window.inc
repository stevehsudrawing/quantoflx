[Variables]
An0=0
NSRC=0

Pn.Zn.D1=(#sc#),(#sc#),((64*#PW#-2)*#Sc#),((64*#PH#-2)*#Sc#),(#Bl.Bg.Md#=2?0:(Max(#Cr#-#sc#,0))),(#Bl.Bg.Md#=2?0:(Max(#Cr#-#sc#,0)))
Pn.Zn.Gn=0,0,(64*#Sc#*#PW#),(64*#Sc#*#PH#),(#Bl.Bg.Md#=2?0:#Cr#),(#Bl.Bg.Md#=2?0:#Cr#)
Fl.Cl.Bd=Fill Color #Cl.Gn.Fg.Gn#,(24*#Op.Bd#)
Fl.Cl.Bg=Fill Color #Cl.Gn.Bg.Gn#,(#Bl.Bg.Md#=0?255:(255*#Op.Bg#))
Fl.Cl.Le=Fill Color 255,255,255,(255*#Le.St#)
Fl.Cl.Da=Fill Color #Cl.Gn.Bg.Da#,(#Em#=0?(255*#An0#):255)

Fa.Em_0=[!CommandMeasure "Ms.An" "Execute 2"][!Redraw]
Ua.Em_0=[!CommandMeasure "Ms.An" "Execute 1"][!Redraw]
Fa.Em_1=[!HideMeter Mt.Da][!Redraw]
Ua.Em_1=[!ShowMeter Mt.Da][!Redraw]

[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Windows
DefaultSnapEdges=0
OnFocusAction=[#Fa.Em_[#Em]]
OnUnfocusAction=[#Ua.Em_[#Em]]
OnRefreshAction=[!SnapEdges 0][!Update]
SkinWidth=(64*#Sc#*(#PW#))
SkinHeight=(64*#Sc#*(#PH#))

@include=#@#Config\BlurMode\#Bl.Bg.Md#\Window.inc

[St.Pn]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Bg#
Shape2=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Ob#
Shape3=Rectangle #Pn.Zn.D1#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[St.Da]
; Background when unselected
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color #Cl.Gn.Bg.Da#,(#Em#=0?(255*#An0#):255)
Shape2=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Ob#
Shape3=Rectangle #Pn.Zn.D1#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=#Em#
Group=AnGp

[St.Zn]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk#
DynamicVariables=1

[St.Le]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Le#
Shape2=Rectangle #Pn.Zn.Gn# | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill LinearGradient Gdnt_Hl
Shape5=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#)
Shape6=Rectangle (#Hl.Bd#),(#Hl.Bd#),(64*#Sc#*#PW#-2*#Hl.Bd#),(64*#Sc#*#PH#-2*#Hl.Bd#),(#Bl.Bg.Md#=2?0:(#Cr#-#Hl.Bd#)),(#Bl.Bg.Md#=2?0:(#Cr#-#Hl.Bd#))
Shape7=Combine Shape5 | Exclude Shape6
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#); 0 | 255,255,255,0; 0.5
DynamicVariables=1

[Ms.An]
; Animation Measure
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FI,1,10
ActionList2=Repeat FO,1,10
FI=[!SetVariable An0 "(Clamp((#An0#+0.1),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
FO=[!SetVariable An0 "(Clamp((#An0#-0.1),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
DynamicVariables=1