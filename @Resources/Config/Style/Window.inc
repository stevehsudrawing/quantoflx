[Variables]
An0=0

Pn.Zn.D1=0,0,(64*#Sc#*#PW#),(64*#Sc#*#PH#),(#Bl.Bg.Md#=2?0:#Cr#),(#Bl.Bg.Md#=2?0:#Cr#)
Pn.Zn.Gn=0,0,(64*#Sc#*#PW#),(64*#Sc#*#PH#),(#Bl.Bg.Md#=2?0:#Cr#),(#Bl.Bg.Md#=2?0:#Cr#)
Fl.Cl.Bd=Fill Color #Cl.Gn.Fg.Gn#,(24*#Op.Bd#)
Fl.Cl.Bg=Fill Color #Cl.Gn.Bg.Gn#,(#Bl.Bg.Md#=0?255:(255*#Op.Bg#))
Fl.Cl.Le=Fill Color 255,255,255,(255*#Le.St#)
Fl.Cl.Da=Fill Color #Cl.Gn.Bg.Da#,(#Em#=0?(255*#An0#):255)

Fa.Em_0=[!Update][!CommandMeasure "Ms.An" "Execute 2"][!Redraw]
Ua.Em_0=[!Update][!CommandMeasure "Ms.An" "Execute 1"][!Redraw]
Fa.Em_1=[!HideMeter Mt.Da][!Redraw]
Ua.Em_1=[!ShowMeter Mt.Da][!Redraw]

[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Windows
Blur=([#Bl.Bg.Md]=1?1:0)
BlurRegion=2,0,0,(64*#Sc#*#PW#),(64*#Sc#*#PH#),(#Cr#*2),(#Cr#*2)
DefaultSnapEdges=0
OnFocusAction=[#Fa.Em_[#Em]]
OnUnfocusAction=[#Ua.Em_[#Em]]
OnRefreshAction=[!Update]
SkinWidth=(64*#Sc#*#PW#)
SkinHeight=(64*#Sc#*#PH#)

[St.Pn]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Bg#
DynamicVariables=1

[St.Da]
; Background when unselected
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color #Cl.Gn.Bg.Da#,(#Em#=0?(255*#An0#):255)
DynamicVariables=1
Hidden=#Em#
Group=AnGp

[St.Zn]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk#
DynamicVariables=1

[St.Le]
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Le#
Shape2=Rectangle #Pn.Zn.D1# | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1

[Ms.Bl]
Measure=Plugin
Plugin=FrostedGlass
Type=[#Bl.Md_[#Bl.Bg.Md].Ty_[#Bl.Bg.Ty]]
Border=[#Bl.Md_[#Bl.Bg.Md].Bd_[#Bl.Bg.Bd]]
Corner=[#Bl.Md_[#Bl.Bg.Md].Cn_[#Bl.Bg.Cn]]
DynamicVariables=1
; Special thanks to theAzack9

[Ms.An]
; Animation Measure
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FI,1,10
ActionList2=Repeat FO,1,10
FI=[!SetVariable An0 "(Clamp((#An0#+0.1),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
FO=[!SetVariable An0 "(Clamp((#An0#-0.1),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
DynamicVariables=1