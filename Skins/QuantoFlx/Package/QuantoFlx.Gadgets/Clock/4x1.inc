[Variables]
|Mt.TmZnNm|.Tx_0=[Ms.Date]
|Mt.TmZnNm|.Tx_1=UTC [Ms.Timezone] | #TmZnNm#

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[Ms.Gap]
Measure=Calc
Formula=((([Ms.Sec]%10)>=0)&&(([Ms.Sec]%10)<5))
DynamicVariables=1

[Mt.DayLight]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#Pk@#Image\MonoIcons\16\DayNight_[Ms.IsDay]
X=(22*#sc#)
Y=(22*#sc#)
W=(20*#sc#)
H=(20*#sc#)
[Mt.Time]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.Time
X=(64*#sc#)
Y=((32-8)*#sc#)
StringAlign=LeftCenter
FontSize=(16*#sc#*#Ft.Sc.Gn#)
[Mt.AMPM]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.AMPM
X=(4*#sc#)R
Y=(-16*#sc#)R
StringAlign=LeftBottom
[Mt.TmZnNm]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=[#|Mt.TmZnNm|.Tx_[&Ms.Gap]]
X=([Mt.Time:X])
Y=((32+12)*#sc#)
W=(178*#sc#)
ClipString=1
StringAlign=LeftCenter