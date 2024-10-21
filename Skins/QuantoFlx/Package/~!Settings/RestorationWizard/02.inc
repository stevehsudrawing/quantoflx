[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Back#
NtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]

PgTtl=#St.Setup.0200#

[Ms.Tx.Title]
Measure=String
String=#Sl.Fd#
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0201#
MeasureName=Ms.Tx.Title

[Mt.SampleImage]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk@#Image\Setup\05
X=((#CURRENTCONFIGWIDTH#-448*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-448*#sc#)/2)
W=(448*#sc#)
H=(448*#sc#)
Greyscale=1
ImageTint=255,255,255,64