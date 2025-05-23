[Rainmeter]
MiddleMouseUpAction=#Ac.Variants#

[St.Cstm.Tx.01]
Text=[#[#CURRENTSECTION]_Nm]
FontColor=#Ft.Cl.Cstm#,(255*#Op.Bg_Cstm#)
FontSize=(10*#sc#*#Ft.Sc.Cstm#)
FontWeight=(Clamp(#Ft.Wt.Cstm#,1,999))
LeftMouseUpAction=["[#[#CURRENTSECTION]_Tg]"]
SolidColor=0,0,0,1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "FontColor" "#Ft.Cl.Cstm#"][!SetOption "#CURRENTSECTION#" "FontWeight" "(Clamp((#Ft.Wt.Cstm#+200*#BdHlEf#),1,999))"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "FontColor" "#Ft.Cl.Cstm#,(255*#Op.Bg_Cstm#)"][!SetOption "#CURRENTSECTION#" "FontWeight" "(Clamp(#Ft.Wt.Cstm#,1,999))"][!Update][!Redraw]

[Mt.01]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Cstm.Tx.02
[Mt.02]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01|St.Cstm.Tx.02
Hidden=(#Quantity#<2)
[Mt.03]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01|St.Cstm.Tx.02
Hidden=(#Quantity#<3)
[Mt.04]
Meter=String
MeterStyle=St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01|St.Cstm.Tx.02
Hidden=(#Quantity#<4)
[Mt.05]
Meter=String
MeterStyle=St.Cstm.Ps.Nx.01