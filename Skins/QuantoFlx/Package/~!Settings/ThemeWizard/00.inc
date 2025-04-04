[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0000#

Mt.CheckBox.01--=Op
Mt.CheckBox.02--=Le
Mt.CheckBox.03--=Hl
Mt.CheckBox.04--=Cl
Mt.CheckBox.05--=Ft
Mt.CheckBox.06--=Bl

Vr.Corners.Dc_0=#Tm.Square#
Vr.Corners.Dc_1=#Tm.Rounded#
Vr.Corners.Dc_2=#Tm.Slightly_Rounded#

Vr.BlurMode.Bg.0=#Tm.0#
Vr.BlurMode.Gl.0=#Tm.0#
Vr.BlurMode.Bg.1=#Tm.Aero#
Vr.BlurMode.Gl.1=#Tm.Aero#
Vr.BlurMode.Bg.2=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#Bl.Bg.Ty]]; #Tm.Shadow#: [#Tm.[#Bl.Bg.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#Bl.Bg.Cn]])
Vr.BlurMode.Gl.2=#Tm.Plugin# (#Tm.Acrylic#: [#Tm.[#Bl.Gl.Ty]]; #Tm.Shadow#: [#Tm.[#Bl.Gl.Bd]]; #OpLs.CornerRadius.Nm#: [#Vr.Corners.Dc_[#Bl.Gl.Cn]])

@include=#Pk@#Config\Language\en-us\List.inc
@include2=#Pk@#Config\Language\#Lg#\List.inc
@include3=#@#Config\Language\en-us\Colors.inc
@include4=#@#Config\Language\#Lg#\Colors.inc

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0001#

[St.Cstm.Im.01]
X=(24*#sc#)
Y=(8*#sc#)R
W=(16*#sc#)
H=(16*#sc#)
ImageName=#@#Image\MonoIcons\16\CheckBox[#|TEMP|.[#[#CURRENTSECTION]--].Avlb]
ImageTint=[#Cl.Cb.[#|TEMP|.[#[#CURRENTSECTION]--].Avlb]]
LeftMouseUpAction=[!WriteKeyValue "Variables" "|TEMP|.[#[#CURRENTSECTION]--].Avlb" (1-[#|TEMP|.[#[#CURRENTSECTION]--].Avlb]) "#CURRENTSKINSETTINGS#"][!Refresh]
[St.Cstm.Tx.01]
X=((16+8)*#sc#)r
Y=(-2*#sc#)r
W=(504*#sc#)
ClipString=2
FontWeight=(Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#*[#|TEMP|.[#[#CURRENTSECTION]-].Avlb]),1,999))
LeftMouseUpAction=[!WriteKeyValue "Variables" "|TEMP|.[#[#CURRENTSECTION]-].Avlb" (1-[#|TEMP|.[#[#CURRENTSECTION]-].Avlb]) "#CURRENTSKINSETTINGS#"][!Refresh]
[St.Cstm.Tx.02]
X=0r
Y=0R
W=(504*#sc#)
ClipString=2
FontColor=#Cl.Gn.Fg.Gn#,128

[Ms.Calc.|Cl.Ac.R|]
Measure=Calc
Formula=((#Cl.Ac.R#>=64)?((#Cl.Ac.R#>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.G|]
Measure=Calc
Formula=((#Cl.Ac.G#>=64)?((#Cl.Ac.G#>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.B|]
Measure=Calc
Formula=((#Cl.Ac.B#>=64)?((#Cl.Ac.B#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.R|]
Measure=Calc
Formula=((#Cl.Fg.R#>=64)?((#Cl.Fg.R#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.G|]
Measure=Calc
Formula=((#Cl.Fg.G#>=64)?((#Cl.Fg.G#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.B|]
Measure=Calc
Formula=((#Cl.Fg.B#>=64)?((#Cl.Fg.B#>=192)?2:1):0)

[Mt.CheckBox.00]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Im.01
Y=([Mt.Text.01:YH]+8*#sc#)
ImageName=#@#Image\MonoIcons\16\CheckBox1.png
ImageTint=#Cl.Gn.Fg.Gn#,128
LeftMouseUpAction=[]
MouseActionCursor=1
MouseActionCursorName=NO
[Mt.CheckBox.00-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Ft.Bd
Text=#Tm.Basic_parameters#
FontColor=#Cl.Gn.Fg.Gn#,192
LeftMouseUpAction=[]
MouseActionCursor=1
MouseActionCursorName=NO
[Mt.CheckBox.00--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.02
Text=#OpLs.ColorScheme.Nm#: [#OpLs.ColorScheme.Dc_[#Cl.Sh]]; #OpLs.CornerRadius.Nm#: #Cr# px; #OpLs.Spacing.Nm#: #Sp# px; #Tm.Panel_position_offset#: #Tm.Horizontal#: #Ppos.X# px, #Tm.Vertical#: #Ppos.Y# px

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
Text=#Tm.Background#: #Op.Bg#x; #Tm.Foreground#: #Op.Fg#x; #Tm.Borders#: #Op.Bd#x

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
Text=#Tm.Intensity#: #Le.St#x; #Tm.Distance#: #Le.Dt#px; #Tm.Direction#: #Le.Ag#°

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
Text=#Tm.Intensity#: #Hl.Op#x; #Tm.Borders#: #Hl.Bd#px

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
Text=#Tm.Accent#: [#Tm.Color.[&Ms.Calc.|Cl.Ac.R|][&Ms.Calc.|Cl.Ac.G|][&Ms.Calc.|Cl.Ac.B|]] (#Cl.Ac.R#, #Cl.Ac.G#, #Cl.Ac.B#); #Tm.Foreground#: [#Tm.Color.[&Ms.Calc.|Cl.Fg.R|][&Ms.Calc.|Cl.Fg.G|][&Ms.Calc.|Cl.Fg.B|]] (#Cl.Fg.R#, #Cl.Fg.G#, #Cl.Fg.B#)

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
Text=#Tm.General#: #Ft.Fc.Gn# (#Tm.Scaling#: #Ft.Sc.Gn#x; #Tm.Font_weight#: #Ft.Wt.Gn#+#Ft.Wt.Bd#); #Tm.Clock#: #Ft.Fc.Cl# (#Tm.Scaling#: #Ft.Sc.Cl#x; #Tm.Font_weight#: #Ft.Wt.Cl#)

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
Text=#Tm.Background#: [#Vr.BlurMode.Bg.[#Bl.Bg.Md]]; #Tm.Global#: [#Vr.BlurMode.Gl.[#Bl.Gl.Md]]