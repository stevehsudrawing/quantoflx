[Variables]
Pg.Tt=#St.Setup.0800#
Pg.Im=#Pk@#Image\Setup\07

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.OK#
Bt.Nx.Ac=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

St.Op.Ct.3_-1=Exclude Shape2 | Union Shape3
St.Op.Ct.3_0=Exclude Shape2 | Union Shape3
St.Op.Ct.3_1=Union Shape2 | Exclude Shape3

@include=#@#Config\Parameter\SystemDefault.inc

[Ms.MaxQ]
Measure=Calc
Formula=([Mt.Pg.Tt:H]+(75*5+27)*#sc#)
DynamicVariables=1

[St.Cstm.Op]
Shape=Rectangle (#sc#),(#sc#),(428*#sc#),(70*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,((428+2)*#sc#),((70+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),(428*#sc#),(70*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
[St.Cstm.OpIc]
W=(20*#sc#)
H=(20*#sc#)
DynamicVariables=1
[St.Cstm.OpTx]
StringAlign=LeftCenter

[St.Cstm.OpCt.Sp.SmBt]
Shape=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape2=Rectangle (-#sc#),(-#sc#),(34*#sc#),(34*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
[St.Cstm.OpCt.Im.SmBt]
X=(8*#sc#)r
Y=(8*#sc#)r
W=(16*#sc#)
H=(16*#sc#)

[St.Cstm.OpCt.Sp.SmSw_0]
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.0],(192+63*0)
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.0]
Shape3=Ellipse ((120+10+20*0)*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.0]
Shape4=Combine Shape | [#St.Op.Ct.3_0]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
[St.Cstm.OpCt.Sp.SmSw_1]
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.1],(192+63*1)
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.1]
Shape3=Ellipse ((120+10+20*1)*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.1]
Shape4=Combine Shape | [#St.Op.Ct.3_1]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover

[St.Cstm.Ps.OpIc.START]
X=([Mt.Op.01:X]+(-448+15)*#sc#)
Y=([Mt.Op.01:Y]+(-18+25)*#sc#)
[St.Cstm.Ps.OpTx.START]
X=([Mt.Op.01:X]+(-448+50)*#sc#)
Y=([Mt.Op.01:Y]+(-18+35)*#sc#)

[St.Cstm.Ps.YNx.01]
X=0r
Y=(75*#sc#)r

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Op|St.Ps.START
[Mt.Op.02]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Op|St.Ps.START|St.Cstm.Ps.YNx.01
[Mt.Op.03]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Op|St.Ps.START|St.Cstm.Ps.YNx.01
[Mt.Op.04]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Op|St.Ps.START|St.Cstm.Ps.YNx.01
[Mt.Op.05]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Op|St.Ps.START|St.Cstm.Ps.YNx.01

[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl|St.Cstm.OpIc|St.Cstm.Ps.OpIc.START
ImageName=#Pk@#Image\MonoIcons\20\TouchMode
[Mt.Op.02.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl|St.Cstm.OpIc|St.Cstm.Ps.YNx.01
ImageName=#Pk@#Image\MonoIcons\20\GeneralFontScaling
[Mt.Op.03.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl|St.Cstm.OpIc|St.Cstm.Ps.YNx.01
ImageName=#Pk@#Image\MonoIcons\20\BlurModeWB
[Mt.Op.04.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl|St.Cstm.OpIc|St.Cstm.Ps.YNx.01
ImageName=#Pk@#Image\MonoIcons\20\Animation
[Mt.Op.05.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl|St.Cstm.OpIc|St.Cstm.Ps.YNx.01
ImageName=#Pk@#Image\MonoIcons\20\HighContrast

[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Cstm.OpTx|St.Cstm.Ps.OpTx.START
Text=#OpLs.TouchMode.Nm#
[Mt.Op.02.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Cstm.OpTx|St.Cstm.Ps.YNx.01
Text=#OpLs.LargerText.Nm#
[Mt.Op.03.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Cstm.OpTx|St.Cstm.Ps.YNx.01
Text=#OpLs.DisableBackgroundBlur.Nm#
[Mt.Op.04.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Cstm.OpTx|St.Cstm.Ps.YNx.01
Text=#OpLs.DisableAnimations.Nm#
[Mt.Op.05.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Cstm.OpTx|St.Cstm.Ps.YNx.01
Text=#OpLs.HighContrastTheme.Nm#


[Mt.Op.01.03.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[#TcMd]],(192+63*[#TcMd])
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[#TcMd]]
Shape3=Ellipse ((120+10+20*[#TcMd])*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[#TcMd]]
Shape4=Combine Shape | [#St.Op.Ct.3_[#TcMd]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
X=([Mt.Op.01:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.01:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "TcMd" "(1-#TcMd#)" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
[Mt.Op.01.03.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.01:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.01:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.[#TcMd]]

[Mt.Op.02.03.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_0|St.Bt.Sp
X=([Mt.Op.02:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.02:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Sc.Gn" "1.2" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ft.Wt.Gn" "600" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=((#Ft.Sc.Gn#=1.2)&&(#Ft.Wt.Gn#=600))
[Mt.Op.02.03.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.02:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.02:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.0]
Hidden=((#Ft.Sc.Gn#=1.2)&&(#Ft.Wt.Gn#=600))
[Mt.Op.02.04.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_1|St.Bt.Sp
X=([Mt.Op.02:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.02:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Ft.Sc.Gn" "1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ft.Wt.Gn" "400" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=((#Ft.Sc.Gn#<>1.2)||(#Ft.Wt.Gn#<>600))
[Mt.Op.02.04.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.02:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.02:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.1]
Hidden=((#Ft.Sc.Gn#<>1.2)||(#Ft.Wt.Gn#<>600))

[Mt.Op.03.03.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_0|St.Bt.Sp
X=([Mt.Op.03:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.03:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bl.Bg.Md" "0" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Ty" "0" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Bd" "0" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Cn" "0" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=((#Sy.Vr#=8)||(#Bl.Bg.Md#<>[#Dv.Sy_[#Sy.Vr].Bl.Bg.Md]))
[Mt.Op.03.03.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.03:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.03:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.0]
Hidden=((#Sy.Vr#=8)||(#Bl.Bg.Md#<>[#Dv.Sy_[#Sy.Vr].Bl.Bg.Md]))
[Mt.Op.03.04.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_1|St.Bt.Sp
X=([Mt.Op.03:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.03:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bl.Bg.Md" "[#Dv.Sy_[#Sy.Vr].Bl.Bg.Md]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Ty" "[#Dv.Sy_[#Sy.Vr].Bl.Bg.Ty]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Bd" "[#Dv.Sy_[#Sy.Vr].Bl.Bg.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Bl.Bg.Cn" "[#Dv.Sy_[#Sy.Vr].Bl.Bg.Cn]" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=((#Sy.Vr#=8)||(#Bl.Bg.Md#=[#Dv.Sy_[#Sy.Vr].Bl.Bg.Md]))
[Mt.Op.03.04.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.03:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.03:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.1]
Hidden=((#Sy.Vr#=8)||(#Bl.Bg.Md#=[#Dv.Sy_[#Sy.Vr].Bl.Bg.Md]))
[Mt.Op.03.05.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.03:X]+(-448+413)*#sc#)
Y=([Mt.Op.03:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=#Tm.Unavailable#
FontColor=#Cl.Gn.Fg.Gn#,128
Hidden=(#Sy.Vr#<>8)

[Mt.Op.04.03.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_0|St.Bt.Sp
X=([Mt.Op.04:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.04:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Em" "1" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=(#Em#)
[Mt.Op.04.03.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.04:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.04:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.0]
Hidden=(#Em#)
[Mt.Op.04.04.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_1|St.Bt.Sp
X=([Mt.Op.04:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.04:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Em" "0" "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=(#Em#=0)
[Mt.Op.04.04.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.04:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.04:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.1]
Hidden=(#Em#=0)

[Mt.Op.05.03.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_0|St.Bt.Sp
X=([Mt.Op.05:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.05:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Temp.Sel.Pg_05" "08" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Cl.Sh"  "4"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=(#Cl.Sh#=4)
[Mt.Op.05.03.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.05:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.05:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.0]
Hidden=(#Cl.Sh#=4)
[Mt.Op.05.04.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.OpCt.Sp.SmSw_1|St.Bt.Sp
X=([Mt.Op.05:X]+(-448+373-120)*#sc#)
Y=([Mt.Op.05:Y]+(-18+19)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Temp.Sel.Pg_05" "00" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "Cl.Sh"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0.2" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "10"  "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.8" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0.1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"][#RefreshA_[#Em]]
Hidden=(#Cl.Sh#<>4)
[Mt.Op.05.04.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
X=([Mt.Op.05:X]+(-448+373-8)*#sc#)
Y=([Mt.Op.05:Y]+(-18+35)*#sc#)
StringAlign=RightCenter
Text=[#Tm.1]
Hidden=(#Cl.Sh#<>4)