[Variables]
Mt.Time.X_0=(12*#sc#)
Mt.Time.Y_0=(32*#sc#)
Mt.Time.A_0=LeftCenter
Mt.AMPM.X_0=(4*#sc#)R
Mt.AMPM.Y_0=(-24*#sc#)R
Mt.AMPM.A_0=LeftBottom

Mt.Time.X_1=((128*#sc#-[Mt.Time:W]-[Mt.AMPM:W])/2)
Mt.Time.Y_1=(32*#sc#)
Mt.Time.A_1=LeftCenter
Mt.AMPM.X_1=(4*#sc#)R
Mt.AMPM.Y_1=(-24*#sc#)R
Mt.AMPM.A_1=LeftBottom

Mt.Time.X_2=((128-12)*#sc#)
Mt.Time.Y_2=(32*#sc#)
Mt.Time.A_2=RightCenter
Mt.AMPM.X_2=((128-12-4)*#sc#-[Mt.Time:W])
Mt.AMPM.Y_2=(-24*#sc#)R
Mt.AMPM.A_2=RightBottom

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[Mt.Time]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.Time
X=[#Mt.Time.X_[#Align]]
Y=[#Mt.Time.Y_[#Align]]
StringAlign=[#Mt.Time.A_[#Align]]
FontSize=(24*#sc#*#Ft.Sc.Gn#)
ToolTipText=[Ms.Date]#CRLF#[Ms.LocalName] | UTC [Ms.Timezone]
[Mt.AMPM]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.AMPM
X=[#Mt.AMPM.X_[#Align]]
Y=[#Mt.AMPM.Y_[#Align]]
StringAlign=[#Mt.AMPM.A_[#Align]]