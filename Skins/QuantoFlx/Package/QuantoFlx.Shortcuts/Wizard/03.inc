[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[!DisableMouseActionGroup "*" "Gp.Normal"][!ShowMeterGroup Gp.QUIT][!Redraw][!Update][!Update]
CfBtAc_0=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]
CfBtAc_1=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]

DfltStct_0=[!WriteKeyValue Variables "Stct_#Config#.Ic" "#Temp.StCt.Im.Cl#" "#Pk@#Config\SkinSettings\CustomShortcutList.inc"]
DfltStct_1=
AlwMdTg_0=
AlwMdTg_1=[!WriteKeyValue Variables "StCt.Tg" "#Temp.StCt.Tg#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.TgPm" "#Temp.StCt.TgPm#" "#Pk@#Config\SkinSettings\#Config#.inc"]
AlwMdNm_0=
AlwMdNm_1=[!WriteKeyValue Variables "StCt.Nm" "#Temp.StCt.Nm#" "#Pk@#Config\SkinSettings\#Config#.inc"]

HdNtBt=0
NtBtTx=#Tm.Apply#
NtBtAc=[!HideMeterGroup "Gp.NormalButton"][!ShowMeterGroup "AnGp.01"][#DfltStct_[#DfltStct]][#AlwMdTg_[#AlwMdTg]][#AlwMdNm_[#AlwMdNm]][!WriteKeyValue Variables "StCt.Im.Cl" "#Temp.StCt.Im.Cl#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.Im.Mn" "#Temp.StCt.Im.Mn#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.2x2.UIII" "#Temp.StCt.2x2.UIII#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.2x2.Im.Cl" "#Temp.StCt.2x2.Im.Cl#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.2x2.Im.Mn" "#Temp.StCt.2x2.Im.Mn#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.4x2.UIII" "#Temp.StCt.4x2.UIII#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.4x2.Im.Cl" "#Temp.StCt.4x2.Im.Cl#" "#Pk@#Config\SkinSettings\#Config#.inc"][!WriteKeyValue Variables "StCt.4x2.Im.Mn" "#Temp.StCt.4x2.Im.Mn#" "#Pk@#Config\SkinSettings\#Config#.inc"][!CommandMeasure "Ms.Cstm.An" "Execute 1"][!Redraw ""]

An1=0

[Ms.Cstm.An]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat RepA_1,25,25 | InsA_1
RepA_1=[!SetVariable An1 "(Clamp((#An1#+1/25),0,1))"][!UpdateMeasure Ms.Cstm.An][!UpdateMeterGroup AnGp.01][!Redraw]
InsA_1=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][!Refresh]
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Settings.0500#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01
Text=#St.Settings.0501#

[Mt.Anc.01]
Meter=String
MeterStyle=St.ZnCt
X=(32*#sc#)
Y=(32*#sc#)R

[Mt.Prv.1x1.00]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.Anc.01:X])
Y=([Mt.Anc.01:Y])
Shape=Rectangle (-#sc#+#Sp#),(-#sc#+#Sp#),((64+2)*#sc#-#Sp#*2),((64+2)*#sc#-#Sp#*2),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle (#Sp#),(#Sp#),(64*#sc#-#Sp#*2),(64*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0))
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle (#Sp#),(#Sp#),(64*#sc#-#Sp#*2),(64*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
DynamicVariables=1
[Mt.Prv.1x1.00Zn]
Meter=Shape
X=([Mt.Anc.01:X])
Y=([Mt.Anc.01:Y])
Shape=Rectangle (#Sp#),(#Sp#),(64*#sc#-#Sp#*2),(64*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk#
DynamicVariables=1
[Mt.Prv.1x1.Ic_Cl]
Meter=Image
ImageName=#Temp.StCt.Im.Cl#
Container=Mt.Prv.1x1.00Zn
X=(12*#sc#)
Y=(12*#sc#)
W=(40*#sc#)
H=(40*#sc#)
PreserveAspectRatio=1
[Mt.Prv.1x1.Ic_Mn]
Meter=Image
ImageName=#Temp.StCt.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#
Container=Mt.Prv.1x1.00Zn
X=(12*#sc#)
Y=(12*#sc#)
W=(40*#sc#)
H=(40*#sc#)
PreserveAspectRatio=1

[Mt.Prv.2x2.00]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.Anc.01:X]+96*#sc#)
Y=([Mt.Anc.01:Y])
Shape=Rectangle (-#sc#+#Sp#),(-#sc#+#Sp#),((64*2+2)*#sc#-#Sp#*2),((64*2+2)*#sc#-#Sp#*2),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle (#Sp#),(#Sp#),(64*2*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0))
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle (#Sp#),(#Sp#),(64*2*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
DynamicVariables=1
[Mt.Prv.2x2.00Zn]
Meter=Shape
X=([Mt.Anc.01:X]+96*#sc#)
Y=([Mt.Anc.01:Y])
Shape=Rectangle (#Sp#),(#Sp#),(64*2*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk#
DynamicVariables=1
[Mt.Prv.2x2.Ic_Cl]
Meter=Image
ImageName=#Temp.StCt.Im.Cl#
Container=Mt.Prv.2x2.00Zn
X=(24*#sc#)
Y=(24*#sc#)
W=(80*#sc#)
H=(80*#sc#)
PreserveAspectRatio=1
Hidden=#Temp.StCt.2x2.UIII#
[Mt.Prv.2x2.Ic_Mn]
Meter=Image
ImageName=#Temp.StCt.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#
Container=Mt.Prv.2x2.00Zn
X=(24*#sc#)
Y=(24*#sc#)
W=(80*#sc#)
H=(80*#sc#)
PreserveAspectRatio=1
Hidden=#Temp.StCt.2x2.UIII#
[Mt.Prv.2x2.Im_Cl]
Meter=Image
ImageName=#Temp.StCt.2x2.Im.Cl#
Container=Mt.Prv.2x2.00Zn
W=(128*#sc#)
H=(128*#sc#)
PreserveAspectRatio=2
Hidden=(1-#Temp.StCt.2x2.UIII#)
[Mt.Prv.2x2.Im_Mn]
Meter=Image
ImageName=#Temp.StCt.2x2.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#
Container=Mt.Prv.2x2.00Zn
W=(128*#sc#)
H=(128*#sc#)
PreserveAspectRatio=2
Hidden=(1-#Temp.StCt.2x2.UIII#)

[Mt.Prv.4x2.00]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.Anc.01:X]+256*#sc#)
Y=([Mt.Anc.01:Y])
Shape=Rectangle (-#sc#+#Sp#),(-#sc#+#Sp#),((64*4+2)*#sc#-#Sp#*2),((64*2+2)*#sc#-#Sp#*2),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))),((#Cr#=0)?0:(Max((#Cr#+#sc#-#Sp#),0))) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle (#Sp#),(#Sp#),(64*4*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0))
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle (#Sp#),(#Sp#),(64*4*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
DynamicVariables=1
[Mt.Prv.4x2.00Zn]
Meter=Shape
X=([Mt.Anc.01:X]+256*#sc#)
Y=([Mt.Anc.01:Y])
Shape=Rectangle (#Sp#),(#Sp#),(64*4*#sc#-#Sp#*2),(64*2*#sc#-#Sp#*2),(#Cr#-#Sp#),(Max((#Cr#-#Sp#),0)) | #da.sk#
DynamicVariables=1
[Mt.Prv.4x2.Ic_Cl]
Meter=Image
ImageName=#Temp.StCt.Im.Cl#
Container=Mt.Prv.4x2.00Zn
X=(88*#sc#)
Y=(24*#sc#)
W=(80*#sc#)
H=(80*#sc#)
PreserveAspectRatio=1
Hidden=#Temp.StCt.4x2.UIII#
[Mt.Prv.4x2.Ic_Mn]
Meter=Image
ImageName=#Temp.StCt.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#
Container=Mt.Prv.4x2.00Zn
X=(108*#sc#)
Y=(24*#sc#)
W=(80*#sc#)
H=(80*#sc#)
PreserveAspectRatio=1
Hidden=#Temp.StCt.4x2.UIII#
[Mt.Prv.4x2.Im_Cl]
Meter=Image
ImageName=#Temp.StCt.4x2.Im.Cl#
Container=Mt.Prv.4x2.00Zn
W=(256*#sc#)
H=(128*#sc#)
PreserveAspectRatio=2
Hidden=(1-#Temp.StCt.4x2.UIII#)
[Mt.Prv.4x2.Im_Mn]
Meter=Image
ImageName=#Temp.StCt.4x2.Im.Mn#
ImageTint=#Cl.Gn.Fg.Gn#
Container=Mt.Prv.4x2.00Zn
W=(256*#sc#)
H=(128*#sc#)
PreserveAspectRatio=2
Hidden=(1-#Temp.StCt.4x2.UIII#)

[Mt.ApplyTip.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ps.Tx.YN.01
Text=#Tm.Applying#
X=(24*#sc#)
Y=([Mt.Prv.4x2.00:YH]+24*#sc#)
Group=AnGp.01
Hidden=1
[Mt.ApplyTip.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Ps.Tx.YN.01
X=((#CURRENTCONFIGWIDTH#-360*#sc#)/2)
Shape=Rectangle 0,0,(360*#sc#),(16*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,24
Shape2=Rectangle 0,0,(360*#sc#),(16*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,24
Shape3=Rectangle (#sc#),(#sc#),((360-2)*#sc#),((16-2)*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,24
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=AnGp.01
Hidden=1
[Mt.ApplyTip.02Zn]
Meter=Shape
X=([Mt.ApplyTip.02:X])
Y=([Mt.ApplyTip.02:Y])
Shape=Rectangle 0,0,(360*#sc#),(16*#sc#) | #da.sk#
DynamicVariables=1
Group=AnGp.01
Hidden=1
[Mt.ApplyTip.03]
Meter=Shape
Container=Mt.ApplyTip.02Zn
X=(#sc#)
Y=(#sc#)
Shape=Rectangle 0,0,(360*#An1#*#sc#),(14*#sc#) | #da.sk# | Fill Color 6,176,37
Shape2=Rectangle (#sc#),(#sc#),((360*#An1#-2)*#sc#),(#sc#) | #da.sk# | Fill Color 255,255,255,64
DynamicVariables=1
Group=AnGp.01
Hidden=1