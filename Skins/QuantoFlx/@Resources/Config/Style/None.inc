[Variables]
Gl.ORA=[!Zpos #RmSk.DL#][!SetTransparency "(255*#RmSk.Op#)"][!Draggable "(1-#RmSk.Lk#)"]
Gl.MOA=[#|Gl.MOA|.Em_[#Em]]
Gl.MLA=[#|Gl.MLA|.Em_[#Em]]

[Rainmeter]
Group=Quanto_Flx
DefaultAlwaysOnTop=#RmSk.DL#
OnRefreshAction=#Gl.ORA#
MouseOverAction=#Gl.MOA#
MouseLeaveAction=#Gl.MLA#

[Mt.GlobalBg]
Meter=Shape
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#),(#Cr#),(#Cr#) | #da.sk# | Extend Hover
Shape2=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#),(#Cr#),(#Cr#) | #da.sk# | Extend Hover
Shape3=Rectangle (#sc#),(#sc#),(#CURRENTCONFIGWIDTH#-2*#sc#),(#CURRENTCONFIGHEIGHT#-2*#sc#),(max(#Cr#-#sc#,0)),(max(#Cr#-#sc#,0))
Shape4=Combine Shape2 | Exclude Shape3
Hover=#da.bg#
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "Fill Color #Cl.Ac.Bg.Gn#,64"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
DynamicVariables=1
Hidden=(1-#SSBWCIO#)