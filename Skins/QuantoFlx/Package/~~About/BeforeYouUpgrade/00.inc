[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0000#

Wizd.ORA=[!EnableMeasure "Ms.Calc.VersionCompare"]

[Mt.Zn.Wd]
Meter=Shape
Shape=Rectangle (#Cr#),(48*#Sc#),(#CURRENTCONFIGWIDTH#-(#Cr#)*2),(#CURRENTCONFIGHEIGHT#-48*2*#Sc#),(#Cr#),(#Cr#) | #Da.Sk#
DynamicVariables=1
Group=Gp.Normal
[Mt.SampleImage]
Meter=Image
Container=Mt.Zn.Wd
ImageName=#Pk@#Image\BeforeYouUpgrade\00
Y=(144*#sc#)
W=(#CURRENTCONFIGWIDTH#)
PreserveAspectRatio=1

[Ms.String.Version]
Measure=String
String=#Name# (#Tm.Build# #TagName#)

[Mt.Title]
MeasureName=Ms.String.Version

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0001#

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=["#HtmlUrl#"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0010#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Guide-of-Upgrading-Quanto-Flx"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0020#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02