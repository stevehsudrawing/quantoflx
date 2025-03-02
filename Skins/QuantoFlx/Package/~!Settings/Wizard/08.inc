[Variables]
Pg.Tt=
Pg.Im=#@#Image\Null

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "05" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Apply#
Bt.Nx.Ac=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "LoadLayout.ini"]

Bt.Ex.Hd=0
Bt.Ex.Tx=#St.Setup.0302#
Bt.Ex.Ac=["https://github.com/stevehsudrawing/quantoflx/wiki/Frequently-Asked-Questions#it-fails-to-initialize-quanto-flx-and-i-can-t-even-launch-rainmeter-any-more"]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[Ms.WlPp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey="Control Panel\Desktop"
RegValue=WallPaper
DynamicVariables=1
RegExpSubstitute=1
Substitute="^0$":"#@#Image\Null.png"
[Ms.DtCl]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey="Control Panel\Colors"
RegValue=Background
Substitute=" ":",","":"0,0,0"
DynamicVariables=1

[Mt.Zn.DsktpPv]
Meter=Shape
X=(416*#sc#)
Y=(91*#sc#-12*#sc#)
Shape=Rectangle 0,0,(440*#sc#),(330*#sc#),(#Cr#),(#Cr#) | #da.sk# | Fill Color 255,255,255,(255*#Vr.GlCtOp#)
DynamicVariables=1
Group=Gp.Normal
[St.Zn.DsktpPv]
Container=Mt.Zn.DsktpPv
Group=Gp.Normal
[Mt.Dsktp.DtCl]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
Shape=Rectangle 0,0,(440*#sc#),(330*#sc#) | #da.sk# | Fill Color [Ms.DtCl]
DynamicVariables=1
[Mt.Dsktp.WlPp]
Meter=Image
MeterStyle=St.Zn.DsktpPv
MeasureName=Ms.WlPp
W=(440*#sc#)
H=(330*#sc#)
PreserveAspectRatio=2
[Mt.Dsktp.Prvw]
Meter=Image
MeterStyle=St.Zn.DsktpPv
ImageName=#Pk@#Image\Setup\04
X=(440*#sc#-[[#CURRENTSECTION]:W])
W=(440*(704/#SCREENAREAHEIGHT#)*#sc#)
PreserveAspectRatio=1
DynamicVariables=1

[Mt.Pg.Tt_Cstm]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd
Text=#St.Setup.0300#
Y=((#CURRENTCONFIGHEIGHT#-([Mt.Pg.Tt_Cstm:H]+[Mt.Tx_Cstm.01:H]+16*#sc#))/2-12*#sc#)
FontSize=(18*#sc#*#Ft.Sc.Gn#)
W=(346*#sc#)
ClipString=2
X=(40*#sc#)
[Mt.Tx_Cstm.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.CmTxFm
Text=#St.Setup.0301#
W=(346*#sc#)
ClipString=2
X=0r
Y=(16*#sc#)R
