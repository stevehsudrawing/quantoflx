[Variables]
Pg.Tt=#St.Setup.0100#
Pg.Im=#Pk@#Image\Setup\00

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "01" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[Mt.TestPicBg]
Meter=Shape
MeterStyle=St.ZnCt_Wd
Shape=Rectangle 0,0,(430*#sc#),([Mt.TestPic:H]),(#Cr#/2),(#Cr#/2) | #da.sk#
Y=([Mt.TestPic:Y]-16*#sc#)
DynamicVariables=1
[Mt.TestPic]
Meter=Image
MeterStyle=St.ZnCt_Wd
ImageName=#Pk@#Image\HDPITest
ImageTint=0,0,0
X=((430-360)/2)
Y=([Mt.Pg.Tt:YH])
W=(360)
H=(100)
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01F|St.Ft.CmTxFm|St.MOAHdCs
Text=#St.Setup.0101#
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Frequently-Asked-Questions#skins-appeared-blurry-on-my-computer-screen"]