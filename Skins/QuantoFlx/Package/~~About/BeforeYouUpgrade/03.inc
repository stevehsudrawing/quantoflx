[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0300#

Wizd.ORA=[!EnableMeasure "Ms.Calc.VersionCompare"]

[Mt.Zn.Wd]
Meter=Shape
Shape=Rectangle (#Cr#),(48*#Sc#),(#CURRENTCONFIGWIDTH#-(#Cr#)*2),(#CURRENTCONFIGHEIGHT#-48*2*#Sc#),(#Cr#),(#Cr#) | #Da.Sk#
DynamicVariables=1
Group=Gp.Normal
[Mt.SampleImage]
Meter=Image
Container=Mt.Zn.Wd
ImageName=#Pk@#Image\BeforeYouUpgrade\03
Y=(144*#sc#)
W=(#CURRENTCONFIGWIDTH#)
PreserveAspectRatio=1

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0301#