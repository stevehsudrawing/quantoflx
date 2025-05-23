[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.OK#
NtBtAc=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0220#

Mt.CheckBox.00--=Bs
Mt.CheckBox.01--=Op
Mt.CheckBox.02--=Le
Mt.CheckBox.03--=Hl
Mt.CheckBox.04--=Cl
Mt.CheckBox.05--=Ft
Mt.CheckBox.06--=Bl

@include=#Pk@#Config\Language\en-us\List.inc
@include2=#Pk@#Config\Language\#Lg#\List.inc
@include3=#@#Config\Language\en-us\Colors.inc
@include4=#@#Config\Language\#Lg#\Colors.inc

@include5=#Pk@#Config\SkinSettings\ThemeSelector.inc

|Mt.Op.30-------|.Bs.Avlb=1
|Mt.Op.31-------|.Bs.Avlb=1
|Mt.Op.32-------|.Bs.Avlb=1
|Mt.Op.40-------|.Bs.Avlb=1
|Mt.Op.41-------|.Bs.Avlb=1
|Mt.Op.42-------|.Bs.Avlb=1
|Mt.Op.50-------|.Bs.Avlb=1
|Mt.Op.51-------|.Bs.Avlb=1
|Mt.Op.52-------|.Bs.Avlb=1

Vr.Corners.Dc_0=#Tm.Square#
Vr.Corners.Dc_1=#Tm.Rounded#
Vr.Corners.Dc_2=#Tm.Slightly_Rounded#

Vr.BlurMode.Bg.0_Old=#Tm.0#
Vr.BlurMode.Gl.0_Old=#Tm.0#
Vr.BlurMode.Bg.1_Old=#Tm.Aero#
Vr.BlurMode.Gl.1_Old=#Tm.Aero#
Vr.BlurMode.Bg.2_Old=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#|Mt.Op.[#WriteIn]-------|.Bl.Bg.Ty]]; #Tm.Shadow#: [#Tm.[#|Mt.Op.[#WriteIn]-------|.Bl.Bg.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#|Mt.Op.[#WriteIn]-------|.Bl.Bg.Cn]])
Vr.BlurMode.Gl.2_Old=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#Bl.Gl.Ty]]; #Tm.Shadow#: [#Tm.[#Bl.Gl.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#Bl.Gl.Cn]])

Vr.BlurMode.Bg.0_New=#Tm.0#
Vr.BlurMode.Gl.0_New=#Tm.0#
Vr.BlurMode.Bg.1_New=#Tm.Aero#
Vr.BlurMode.Gl.1_New=#Tm.Aero#
Vr.BlurMode.Bg.2_New=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#Bl.Bg.Ty]]; #Tm.Shadow#: [#Tm.[#Bl.Bg.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#Bl.Bg.Cn]])
Vr.BlurMode.Gl.2_New=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#Bl.Gl.Ty]]; #Tm.Shadow#: [#Tm.[#Bl.Gl.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#Bl.Gl.Cn]])

St.Bs_0=(#Tm.Unavailable#)
St.Op_0=(#Tm.Unavailable#)
St.Le_0=(#Tm.Unavailable#)
St.Hl_0=(#Tm.Unavailable#)
St.Cl_0=(#Tm.Unavailable#)
St.Ft_0=(#Tm.Unavailable#)
St.Bl_0=(#Tm.Unavailable#)
St.Bs_1=#OpLs.ColorScheme.Nm#: [#OpLs.ColorScheme.Dc_[#|Mt.Op.[#WriteIn]-------|.Cl.Sh]]; #OpLs.CornerRadius.Nm#: [#|Mt.Op.[#WriteIn]-------|.Cr] px; #OpLs.Spacing.Nm#: [#|Mt.Op.[#WriteIn]-------|.Sp] px; #Tm.Panel_position_offset#: #Tm.Horizontal#: [#|Mt.Op.[#WriteIn]-------|.Ppos.X] px, #Tm.Vertical#: [#|Mt.Op.[#WriteIn]-------|.Ppos.Y] px
St.Op_1=#Tm.Background#: [#|Mt.Op.[#WriteIn]-------|.Op.Bg]x; #Tm.Foreground#: [#|Mt.Op.[#WriteIn]-------|.Op.Fg]x; #Tm.Borders#: [#|Mt.Op.[#WriteIn]-------|.Op.Bd]x
St.Le_1=#Tm.Intensity#: [#|Mt.Op.[#WriteIn]-------|.Le.St]x; #Tm.Distance#: [#|Mt.Op.[#WriteIn]-------|.Le.Dt]px; #Tm.Direction#: [#|Mt.Op.[#WriteIn]-------|.Le.Ag]°
St.Hl_1=#Tm.Intensity#: [#|Mt.Op.[#WriteIn]-------|.Hl.Op]x; #Tm.Borders#: [#|Mt.Op.[#WriteIn]-------|.Hl.Bd]px
St.Cl_1=#Tm.Accent#: [#Tm.Color.[&Ms.Calc.|Cl.Ac.R|_Old][&Ms.Calc.|Cl.Ac.G|_Old][&Ms.Calc.|Cl.Ac.B|_Old]] ([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.R], [#|Mt.Op.[#WriteIn]-------|.Cl.Ac.G], [#|Mt.Op.[#WriteIn]-------|.Cl.Ac.B]); #Tm.Foreground#: [#Tm.Color.[&Ms.Calc.|Cl.Fg.R|_Old][&Ms.Calc.|Cl.Fg.G|_Old][&Ms.Calc.|Cl.Fg.B|_Old]] ([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.R], [#|Mt.Op.[#WriteIn]-------|.Cl.Fg.G], [#|Mt.Op.[#WriteIn]-------|.Cl.Fg.B])
St.Ft_1=#Tm.General#: [#|Mt.Op.[#WriteIn]-------|.Ft.Fc.Gn] (#Tm.Scaling#: [#|Mt.Op.[#WriteIn]-------|.Ft.Sc.Gn]x; #Tm.Font_weight#: [#|Mt.Op.[#WriteIn]-------|.Ft.Wt.Gn]+[#|Mt.Op.[#WriteIn]-------|.Ft.Wt.Bd]); #Tm.Clock#: [#|Mt.Op.[#WriteIn]-------|.Ft.Fc.Cl] (#Tm.Scaling#: [#|Mt.Op.[#WriteIn]-------|.Ft.Sc.Cl]x; #Tm.Font_weight#: [#|Mt.Op.[#WriteIn]-------|.Ft.Wt.Cl])
St.Bl_1=#Tm.Background#: [#Vr.BlurMode.Bg.[#|Mt.Op.[#WriteIn]-------|.Bl.Bg.Md]_Old]; #Tm.Global#: [#Vr.BlurMode.Gl.[#|Mt.Op.[#WriteIn]-------|.Bl.Gl.Md]_Old]

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0401#

[St.Cstm.Im.01]
X=(24*#sc#)
Y=(8*#sc#)R
W=(16*#sc#)
H=(16*#sc#)
ImageName=#@#Image\MonoIcons\16\CheckBox[#|TEMP|.[#[#CURRENTSECTION]--].Remv]
ImageTint=[#Cl.Cb.[#|TEMP|.[#[#CURRENTSECTION]--].Remv]]
LeftMouseUpAction=[!WriteKeyValue "Variables" "|TEMP|.[#[#CURRENTSECTION]--].Remv" (1-[#|TEMP|.[#[#CURRENTSECTION]--].Remv]) "#CURRENTSKINSETTINGS#"][!Refresh]
[St.Cstm.Tx.01]
X=((16+8)*#sc#)r
Y=(-2*#sc#)r
W=(504*#sc#)
ClipString=2
FontWeight=(Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#*[#|TEMP|.[#[#CURRENTSECTION]-].Remv]),1,999))
LeftMouseUpAction=[!WriteKeyValue "Variables" "|TEMP|.[#[#CURRENTSECTION]-].Remv" (1-[#|TEMP|.[#[#CURRENTSECTION]-].Remv]) "#CURRENTSKINSETTINGS#"][!Refresh]
[St.Cstm.Tx.02]
X=0r
Y=0R
W=(504*#sc#)
ClipString=2
FontColor=#Cl.Gn.Fg.Gn#,128
;FontWeight=(Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#*[#|TEMP|.[#[#CURRENTSECTION]].Remv]),1,999))
Text=[#St.[#[#CURRENTSECTION]]_[#|Mt.Op.[#WriteIn]-------|.[#[#CURRENTSECTION]].Avlb]]

[Ms.Calc.|Cl.Ac.R|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.R]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.R]>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.G|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.G]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.G]>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.B|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.B]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Ac.B]>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.R|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.R]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.R]>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.G|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.G]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.G]>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.B|_Old]
Measure=Calc
Formula=(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.B]>=64)?(([#|Mt.Op.[#WriteIn]-------|.Cl.Fg.B]>=192)?2:1):0)

[Mt.CheckBox.00]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
Y=([Mt.Text.01:YH]+8*#sc#)
ImageName=#@#Image\MonoIcons\16\CheckBox-2
ImageAlpha=128
LeftMouseUpAction=[]
MouseActionCursorName=NO
[Mt.CheckBox.00-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Basic_parameters#
FontColor=#Cl.Gn.Fg.Gn#,192
LeftMouseUpAction=[]
MouseActionCursorName=NO
[Mt.CheckBox.00--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.01-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Opacity#
[Mt.CheckBox.01--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.02]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.02-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Light#
[Mt.CheckBox.02--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.03]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.03-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Crystal_effects#
[Mt.CheckBox.03--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.04]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.04-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Color#
[Mt.CheckBox.04--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.05]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.05-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Font_and_text#
[Mt.CheckBox.05--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02

[Mt.CheckBox.06]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.MOAHdCs|St.Cstm.Im.01
[Mt.CheckBox.06-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.MOAHdCs|St.Cstm.Tx.01
Text=#Tm.Blur_mode#
[Mt.CheckBox.06--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02