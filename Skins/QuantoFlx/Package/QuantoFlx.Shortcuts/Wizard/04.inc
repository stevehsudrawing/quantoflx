[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]
CfBtAc_0=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]
CfBtAc_1=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

[Mt.CancelText]
Text=#Tm.Close#

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Settings.0600#

[Ms.Mt.Text.01]
Measure=String
String=##Config#
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01
Text=#St.Settings.0601#
MeasureName=Ms.#CURRENTSECTION#

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.00.02:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!SkinCustomMenu]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0700#

[Mt.Op.01.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.01.02:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!Refresh "#ROOTCONFIG#\Package\QuantoFlx.Shortcuts\#Config#"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0800#