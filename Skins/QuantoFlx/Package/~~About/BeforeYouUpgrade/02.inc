[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0200#

Wizd.ORA=[!EnableMeasure "Ms.Calc.VersionCompare"]

[Mt.Zn.Wd]
Meter=Shape
Shape=Rectangle (#Cr#),(48*#Sc#),(#CURRENTCONFIGWIDTH#-(#Cr#)*2),(#CURRENTCONFIGHEIGHT#-48*2*#Sc#),(#Cr#),(#Cr#) | #Da.Sk#
DynamicVariables=1
Group=Gp.Normal
[Mt.SampleImage]
Meter=Image
Container=Mt.Zn.Wd
ImageName=#Pk@#Image\BeforeYouUpgrade\02
Y=(144*#sc#)
W=(#CURRENTCONFIGWIDTH#)
PreserveAspectRatio=1

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0201#

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[!Manage "Themes"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0210#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02