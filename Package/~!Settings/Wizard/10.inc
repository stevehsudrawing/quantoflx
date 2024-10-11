[Variables]
Pg.Tt=#St.Setup.0500#
Pg.Im=#Pk@#Image\Setup\03

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "03" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][#RefreshA_[#Em]]

Bt.Nx.Hd=1
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[#NtBtAc_[#Temp.Sel.Pg_04]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=([Mt.Pg.Tt:H]+[Mt.Text.01:H]+[Mt.Op.00:H]+[Mt.Op.01:H]+[Mt.Op.02:H]+(16-4+54)*#sc#)
DynamicVariables=1

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.GnTx|St.Ft.CmTxFm|St.Ps.START
Text=#St.Setup.0501#

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Option|St.Bt.Sp|St.Ps.Tx.YN.01F
DynamicVariables=1
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\RestorationWizard" "Main.ini"][!SetWindowPosition 50% 50% 50% 50% "#ROOTCONFIG#\Package\~!Settings\RestorationWizard"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.NextArrowIcon
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0510#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Option|St.Bt.Sp|St.Ps.Tx.YN.03F
DynamicVariables=1
LeftMouseUpAction=[!Manage "Themes"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.NextArrowIcon
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0520#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0521#

[Mt.Op.02]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Option|St.Bt.Sp|St.Ps.Tx.YN.03F
Shape=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(24*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(24*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Wrng.Bg.Gn#,16
Shape3=Rectangle 0,0,((430-2)*#sc#),(26*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape4=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(24*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),(#Cr#/2),(#Cr#/2)
Shape5=Combine Shape3 | Exclude Shape4
Shape6=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(24*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "04" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][#RefreshA_[#Em]]
[Mt.Op.02.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Wrng.Fg.Gn#
[Mt.Op.02.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0530#
[Mt.Op.02.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Setup.0531#
