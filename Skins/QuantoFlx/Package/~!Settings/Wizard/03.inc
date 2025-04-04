[Variables]
NtBtAc_00=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
NtBtAc_01=[!WriteKeyValue "Variables" "Page" "10" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Pg.Tt=#St.Setup.0400#
Pg.Im=#Pk@#Image\Setup\01

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[#NtBtAc_[#Temp.Sel.Pg_03]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=([Mt.Pg.Tt:H]+[Mt.Op.00:H]+[Mt.Op.01:H]+[Mt.SpLkZn.01:H]+(16-4+36)*#sc#)
DynamicVariables=1

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.SelOption|St.Bt.Sp|St.Ps.START
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Temp.Sel.Pg_03" "00" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.SelOptionTextTitle
Text=#St.Setup.0410#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.SelOptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0411#

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.SelOption|St.Bt.Sp|St.Ps.Tx.YN.03F
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Temp.Sel.Pg_03" "01" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.SelOptionTextTitle
Text=#St.Setup.0420#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.SelOptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0421#

[Mt.SelIdt]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.SelIdt
[Mt.SelIdtIm]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.SelIdtIm

[Mt.SpLkZn.01]
Meter=Shape
MeterStyle=St.ZnCt_Wd
Shape=Rectangle (#sc#),(#sc#),((430-4)*#sc#),([Mt.SpLk.02:H]+[Mt.SpLk.03:H]+12*2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#,128
Shape2=Rectangle 0,0,((430-2)*#sc#),([Mt.SpLk.02:H]+[Mt.SpLk.03:H]+(12*2+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),((430-4)*#sc#),([Mt.SpLk.02:H]+[Mt.SpLk.03:H]+12*2*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Y=([Mt.Op.01:YH]-18*#sc#+8*#sc#)
DynamicVariables=1
[Mt.SpLk.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Ft.CmTxFm|St.TxW.GnTx|St.Ps.Tx.YN.01F
X=(12*#sc#)
Y=([Mt.SpLkZn.01:Y]-18*#sc#+12*#sc#)
W=((430-12*2)*#sc#)
Text=#St.Setup.0503#
FontColor=#Cl.Gn.Fg.Gn#,192
[Mt.SpLk.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Ft.CmTxFm|St.TxW.GnTx|St.Ps.Tx.YN.02|St.Ft.Splk.Sl
X=(12*#sc#)
W=((430-12*2)*#sc#)
Text=#St.Setup.0504#
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Guide-for-Quanto-Original-Users"]
FontColor=#Cl.Ac.Bg.Gn#,192