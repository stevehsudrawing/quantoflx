[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "05" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0200#

Tm.Bs_0=
Tm.Bs_1="#Tm.Basic_parameters#; "
Tm.Op_0=
Tm.Op_1="#Tm.Opacity#; "
Tm.Le_0=
Tm.Le_1="#Tm.Light#; "
Tm.Hl_0=
Tm.Hl_1="#Tm.Crystal_effects#; "
Tm.Cl_0=
Tm.Cl_1="#Tm.Color#; "
Tm.Ft_0=
Tm.Ft_1="#Tm.Font_and_text#; "
Tm.Bl_0=
Tm.Bl_1="#Tm.Blur_mode#; "

; #Tm.Basic_parameters#; 
; #Tm.Opacity#; 
; #Tm.Light#; 
; #Tm.Crystal_effects#; 
; #Tm.Color#; 
; #Tm.Font_and_text#; 
; #Tm.Blur_mode#; 

[Ms.Text.01.01]
Measure=String
String=[#Tm.Bs_[#|TEMP|.Bs.Ovrd]][#Tm.Op_[#|TEMP|.Op.Ovrd]][#Tm.Le_[#|TEMP|.Le.Ovrd]][#Tm.Hl_[#|TEMP|.Hl.Ovrd]][#Tm.Cl_[#|TEMP|.Cl.Ovrd]][#Tm.Ft_[#|TEMP|.Ft.Ovrd]][#Tm.Bl_[#|TEMP|.Bl.Ovrd]]
RegExpSubstitute=1
Substitute="; $":"","^$":"(#Tm.None#)"
[Ms.Text.01.02]
Measure=String
String=[#Tm.Bs_[#|TEMP|.Bs.Remv]][#Tm.Op_[#|TEMP|.Op.Remv]][#Tm.Le_[#|TEMP|.Le.Remv]][#Tm.Hl_[#|TEMP|.Hl.Remv]][#Tm.Cl_[#|TEMP|.Cl.Remv]][#Tm.Ft_[#|TEMP|.Ft.Remv]][#Tm.Bl_[#|TEMP|.Bl.Remv]]
RegExpSubstitute=1
Substitute="; $":"","^$":"(#Tm.None#)"

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0201#
MeasureName=Ms.Text.01.01
MeasureName2=Ms.Text.01.02

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0210#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0211#

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.01F
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][!Refresh]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0220#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
;Text=#St.Setup.0221#