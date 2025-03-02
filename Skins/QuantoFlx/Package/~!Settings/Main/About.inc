[Variables]
HdTp=1

[Mt.Ab.Im]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk.MnIm#
X=(72*#Sc#)
Y=(168*#sc#)
W=(480*#sc#)
PreserveAspectRatio=1
DynamicVariables=1

[St.Cu.Tx.01]
FontColor=#Cl.Gn.Fg.Gn#,128
[St.Cu.Ps.Tx.Dn.01]
X=0r
Y=(4*#sc#)R
[St.Cu.Ps.Tx.Dn.02]
X=0r
Y=(8*#sc#)R

[Mt.Tx.00.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
X=(72*#sc#)
Y=(8*#sc#)R
W=(480*#sc#)
ClipString=2
Text=#Pk.Info#
[Mt.Tx.01.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Tx.01
X=0r
Y=(16*#sc#)R
Text=#Tm.Author#
[Mt.Tx.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=#Pk.Athr#
[Mt.Tx.02.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Tx.01|St.Cu.Ps.Tx.Dn.02
Text=#Tm.Version#
[Mt.Tx.02.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=#Pk.Vrsn# (#Tm.Build# #Pk.VBld#)
[Mt.Tx.03.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Tx.01|St.Cu.Ps.Tx.Dn.02
Text=#Tm.Supports_To#
[Mt.Tx.03.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=Quanto Flx #Pk.SpTo# (#Tm.Build# #Pk.SpVB#)
[Mt.Tx.04.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Splk.Sl|St.Cu.Ps.Tx.Dn.02
Text=#Tm.Website#
Hidden=#Pk.Wbst.Hd#
LeftMouseUpAction=["#Pk.Wbst#"]