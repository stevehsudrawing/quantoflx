[Variables]
DW=(#SCREENAREAWIDTH#-#WORKAREAWIDTH#)
DH=(#SCREENAREAHEIGHT#-#WORKAREAHEIGHT#)

[Rainmeter]
DefaultAlwaysOnTop=-2
RightMouseUpAction=[]
MiddleMouseUpAction=[]
DefaultDraggable=0
OnRefreshAction=[!KeepOnScreen 1][!Zpos -2]

[St.Cstm.Bt.Sp]
Hover=#Da.Bg#
GdntHv=#GdntHv#
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "Fill Color #Cl.Eb#,32"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
