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
MeterStyle=St.Le|St.Le.Rtt

[Ms.Gap]
Measure=Calc
Formula=((([Ms.Sec]%10)>=0)&&(([Ms.Sec]%10)<5))
DynamicVariables=1

[Mt.Sp.Rtt]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle ((((-(4)-18))/4)*#sc#),(((-(4))/4)*#sc#),(((96)/4)*#sc#),((((4)*2)/4)*#sc#),(#Cr#>0?(((4)/4)*#sc#):0),(#Cr#>0?(((4)/4)*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Fg#) | Rotate ([Ms.Min:%]/100*360-90),(((((4)+18))/4)*#sc#),((((4))/4)*#sc#)
Shape2=Rectangle ((((-(6)-12))/4)*#sc#),(((-(6))/4)*#sc#),(((80)/4)*#sc#),((((6)*2)/4)*#sc#),(#Cr#>0?(((6)/4)*#sc#):0),(#Cr#>0?(((6)/4)*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(255*#Op.Fg#) | Rotate ([Ms.Hour:%]/100*360-60),(((((6)+12))/4)*#sc#),(((6)/4)*#sc#)
X=(32*#sc#)
Y=(32*#sc#)
DynamicVariables=1

[Ms.Rl]
Measure=Time
Format=%S
MinValue=0
MaxValue=60
DynamicVariables=1
Disabled=#Em#
[Mt.RlB]
Meter=Shape
MeterStyle=St.ZnCt|St.RlB
Hidden=#ScndHnd#
[Mt.Rl]
Meter=Roundline
MeterStyle=St.ZnCt|St.Rl
Hidden=((#Em#=1)||(#ScndHnd#=1))
[Mt.Time]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.Time
X=((64+4)*#sc#)
Y=((#CURRENTCONFIGHEIGHT#-([Mt.Time:H]+[Mt.TmZnNm:H]-2*#sc#))/2)
StringAlign=Left
FontSize=(16*#sc#*#Ft.Sc.Gn#)
[Mt.AMPM]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.AMPM
X=(4*#sc#)R
Y=(-20*#sc#)R
StringAlign=Left
[Mt.TmZnNm]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=[#|Mt.TmZnNm|.Tx_[&Ms.Gap]]
X=([Mt.Time:X])
Y=([Mt.Time:YH]-2*#sc#)
W=(174*#sc#)
ClipString=1
StringAlign=Left