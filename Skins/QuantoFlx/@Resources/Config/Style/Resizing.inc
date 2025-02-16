[Rainmeter]
Group=Quanto_Flx
OnRefreshAction=[!ZPos 1][!Update]

[Variables]
MACN_00=SIZE_NWSE
MACN_10=SIZE_WE
MACN_01=SIZE_NS
MACN_11=SIZE_NWSE

DA.AlwX_0=
DA.AlwY_0=
DA.AlwX_1=
DA.AlwY_1=

PW=0
PH=0

[Ms.Mouse]
Measure=Plugin
Plugin=Mouse
MouseMoveAction=[!SetVariable "Rsz.MusX" "(Max($MouseX$,64*#Rsz.MinW#*#sc#))"][!SetVariable "Rsz.MusY" "(Max($MouseY$,64*#Rsz.MinH#*#sc#))"][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure Ms.Mouse "Stop"][!Update][!ZPos #DftZpos#]#Rsz.LMUA#
RelativeToSkin=1
DynamicVariables=1

[Ms.CalcW]
Measure=Calc
Formula=(Clamp((Round(#Rsz.MusX#/(64*#sc#))),#Rsz.MinW#,#Rsz.MaxW#))
DynamicVariables=1
[Ms.CalcH]
Measure=Calc
Formula=(Clamp((Round(#Rsz.MusY#/(64*#sc#))),#Rsz.MinH#,#Rsz.MaxH#))
DynamicVariables=1
[Ms.CalcQX]
Measure=Calc
Formula=(Clamp((Round((#Rsz.MusX#-#Rsz.CalcQ.Sub#)/(#Rsz.CalcQ.Dvd#))),#Rsz.MinQ#,#Rsz.MaxQ#))
DynamicVariables=1
[Ms.CalcQY]
Measure=Calc
Formula=(Clamp((Round((#Rsz.MusY#-#Rsz.CalcQ.Sub#)/(#Rsz.CalcQ.Dvd#))),#Rsz.MinQ#,#Rsz.MaxQ#))
DynamicVariables=1

[Rainmeter]
SkinWidth=((#Rsz.MaxW#)*64*#sc#)
SkinHeight=((#Rsz.MaxH#)*64*#sc#)
MouseOverAction=[!CommandMeasure Ms.Mouse "Start"]
RightMouseUpAction=[]
OnRefreshAction=[!CommandMeasure Ms.Mouse "Start"]

[Mt.Main]
Meter=Shape
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#),(#SCREENAREAHEIGHT#) | #da.sk# | Fill Color 0,0,0,1
Shape2=Rectangle 0,0,(Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#))),(Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#))),(#Cr#),(#Cr#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(64)
Shape3=Rectangle 0,0,(Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#))),(Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#))),(#Cr#),(#Cr#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255)
Shape4=Rectangle (#sc#),(#sc#),(Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#))-2*#sc#),(Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#))-2*#sc#),(max(#Cr#-#sc#,0)),(max(#Cr#-#sc#,0))
Shape5=Combine Shape3 | Exclude Shape4
Shape6=Rectangle 0,0,(Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#))),(Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#))),(#Cr#),(#Cr#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*((((#Rsz.MaxW#*64*#sc#)<#Rsz.MusX#))||(((#Rsz.MaxH#*64*#sc#)<#Rsz.MusY#))))
Shape7=Rectangle (2*#sc#),(2*#sc#),(Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#))-2*#sc#*2),(Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#))-2*#sc#*2),(max(#Cr#-2*#sc#,0)),(max(#Cr#-2*#sc#,0))
Shape8=Combine Shape6 | Exclude Shape7
Shape9=Rectangle 0,0,(#Rsz.MaxW#*64*#sc#),(#Rsz.MaxH#*64*#sc#),(#Cr#),(#Cr#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*((((#Rsz.MaxW#*64*#sc#)<#Rsz.MusX#))&&(((#Rsz.MaxH#*64*#sc#)<#Rsz.MusY#))))
Shape10=Rectangle (3*#sc#),(3*#sc#),((#Rsz.MaxW#*64*#sc#)-3*#sc#*2),((#Rsz.MaxH#*64*#sc#)-3*#sc#*2),(max(#Cr#-3*#sc#,0)),(max(#Cr#-3*#sc#,0))
Shape11=Combine Shape9 | Exclude Shape10
DynamicVariables=1
LeftMouseDownAction=[!CommandMeasure Ms.Mouse "Start"]
MouseLeaveAction=[!CommandMeasure Ms.Mouse "Stop"][!Update][!ZPos #DftZpos#]#Rsz.LMUA#
MouseActionCursor=1
MouseActionCursorName=[#MACN_[#Rsz.AlwX][#Rsz.AlwY]]

[Mt.SizePvw.00]
Meter=Shape
X=((Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#)))-16*#sc#)
Y=((Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#)))-16*#sc#)
Shape=Rectangle (8*#sc#),(8*#sc#),(-[Mt.SizePvw.01:W]-16*#sc#),(-[Mt.SizePvw.01:H]-16*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
DynamicVariables=1
[Mt.SizePvw.01]
Meter=String
MeterStyle=St.Ft|St.Sl
Text=#Rsz.Dspl#
X=((Min(#Rsz.MusX#,(#Rsz.MaxW#*64*#sc#)))-16*#sc#)
Y=((Min(#Rsz.MusY#,(#Rsz.MaxH#*64*#sc#)))-16*#sc#)
StringAlign=RightBottom

[Mt.Zn]
Meter=Shape
Shape=Rectangle 0,0,0,0 | #da.sk#
DynamicVariables=1