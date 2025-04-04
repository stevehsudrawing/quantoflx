[Variables]
PW=4
PH=((2+#Quantity#)/2)

Mt.TitleIcon.IN_0=#Pk@#Image\MonoIcons\16\RSS
Mt.TitleIcon.IN_1=#Pk@#Image\RSS
Mt.TitleIcon.IT_0=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)
Mt.TitleIcon.IT_1=255,255,255,(255*#Op.Fg#)

DvdLns=(14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*#PW#-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0)

[Rainmeter]
Update=1000

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.PnSr
[Mt.Zn_Cstm]
Meter=Shape
MeterStyle=St.Zn
Shape2=Rectangle 0,0,(64*#PW#*#sc#),(48*#sc#)
Shape3=Rectangle 0,(#CURRENTCONFIGHEIGHT#-16*#sc#),(64*#PW#*#sc#),(16*#sc#)
Shape4=Combine Shape | Exclude Shape2 | Exclude Shape3
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[St.ZnCt_Cstm]
Container=Mt.Zn_Cstm
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
Shape8=Rectangle (10*#sc#+(#Ppos.X#)),((10+38)*#sc#+(#Ppos.Y#)),((64*#PW#-20)*#sc#),((64*#PH#-20-38)*#sc#),(#Cr#/2),(#Cr#/2)
Shape9=Combine Shape | Exclude Shape8
Shape10=Rectangle (10*#sc#+(#Ppos.X#)-#sc#),((10+38)*#sc#+(#Ppos.Y#)-#sc#),((64*#PW#-20)*#sc#+2*#sc#),((64*#PH#-20-38)*#sc#+2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape11=Combine Shape10 | Exclude Shape8
Shape12=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>1))
Shape13=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>2)) | Offset 0,(32*#sc#)
Shape14=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>3)) | Offset 0,(32*2*#sc#)
Shape15=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>4)) | Offset 0,(32*3*#sc#)
Shape16=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>5)) | Offset 0,(32*4*#sc#)
Shape17=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>6)) | Offset 0,(32*5*#sc#)
Shape18=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>7)) | Offset 0,(32*6*#sc#)
Shape19=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>8)) | Offset 0,(32*7*#sc#)
Shape20=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>9)) | Offset 0,(32*8*#sc#)
Shape21=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>10)) | Offset 0,(32*9*#sc#)
Shape22=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>11)) | Offset 0,(32*10*#sc#)
Shape23=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>12)) | Offset 0,(32*11*#sc#)
Shape24=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>13)) | Offset 0,(32*12*#sc#)
Shape25=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>14)) | Offset 0,(32*13*#sc#)
Shape26=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>15)) | Offset 0,(32*14*#sc#)
Shape27=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>16)) | Offset 0,(32*15*#sc#)
Shape28=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>17)) | Offset 0,(32*16*#sc#)
Shape29=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>18)) | Offset 0,(32*17*#sc#)
Shape30=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>19)) | Offset 0,(32*18*#sc#)
Shape31=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>20)) | Offset 0,(32*19*#sc#)
Shape32=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>21)) | Offset 0,(32*20*#sc#)
Shape33=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>22)) | Offset 0,(32*21*#sc#)
Shape34=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>23)) | Offset 0,(32*22*#sc#)
Shape35=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>24)) | Offset 0,(32*23*#sc#)
Shape36=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>25)) | Offset 0,(32*24*#sc#)
Shape37=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>26)) | Offset 0,(32*25*#sc#)
Shape38=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>27)) | Offset 0,(32*26*#sc#)
Shape39=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>28)) | Offset 0,(32*27*#sc#)
Shape40=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>29)) | Offset 0,(32*28*#sc#)
Shape41=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>30)) | Offset 0,(32*29*#sc#)
Shape42=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#*(#Quantity#>31)) | Offset 0,(32*30*#sc#)

[St.Cstm.Tx.01]
Text=[Ms.[#CURRENTSECTION].Ttl]
ToolTipText=[Ms.[#CURRENTSECTION].Ttl]
LeftMouseUpAction=["[Ms.[#CURRENTSECTION].URL]"]
StringAlign=LeftCenter
W=((256-16*2)*#sc#)
ClipString=1

[St.Cstm.Ps.YNx.01]
X=0r
Y=(32*#sc#)r

[St.Cstm.Hv.01]
Shape=Rectangle 0,0,(256*#sc#),(32*#sc#) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1


[Mt.TitleIcon]
Meter=Image
MeterStyle=St.ZnCt
ImageName=[#Mt.TitleIcon.IN_[#PnGdnt.Enab]]
ImageTint=[#Mt.TitleIcon.IT_[#PnGdnt.Enab]]
W=(16*#sc#)
H=(16*#sc#)
X=(16*#sc#)
Y=(18*#sc#)

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Cstm.Gp.Main|St.Ft|St.Title|St.Ft.Bd
Text=#Title#
X=(8*#sc#)R
Y=(26*#sc#)
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=LeftCenter

[Ms.Page.01]
Measure=Calc
Formula=#Index#+1
DynamicVariables=1
[Ms.Page.02]
Measure=Calc
Formula=#Index#+#Quantity#
DynamicVariables=1
[Mt.Page]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=[Ms.Page.01] - [Ms.Page.02]
StringAlign=RightCenter
X=((64*#PW#-16-16-8)*#Sc#)
Y=(26*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)

[Mt.SsImBt]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Bt.Gn
ImageName=#@#Image\MonoIcons\16\Settings
X=((256-16-16)*#sc#)
Y=(18*#sc#)
W=(16*#sc#)
H=(16*#sc#)
ToolTipText=#Tm.Skin_Settings#
LeftMouseUpAction=#Ac.Skin_Settings#
[HMt.SsImBt]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.SsImBt:X]-2*#sc#)
Y=([Mt.SsImBt:Y]-2*#sc#)
Shape=Rectangle 0,0,(20*#sc#),(20*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1

[01]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
X=(16*#sc#)
Y=((64-32*#Index#)*#sc#)
[02]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[03]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[04]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[05]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[06]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[07]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[08]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[09]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[10]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[11]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[12]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[13]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[14]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[15]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[16]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[17]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[18]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[19]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[20]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[21]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[22]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[23]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[24]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[25]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[26]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[27]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[28]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[29]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01
[30]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Bt.Gn|St.Cstm.Ps.YNx.01

[H01]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01
Y=((48-32*#Index#)*#sc#)
[H02]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H03]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H04]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H05]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H06]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H07]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H08]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H09]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H10]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H11]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H12]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H13]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H14]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H15]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H16]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H17]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H18]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H19]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H20]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H21]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H22]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H23]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H24]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H25]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H26]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H27]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H28]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H29]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01
[H30]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Cstm.Ps.YNx.01

[Mt.Srbr]
Meter=Shape
MeterStyle=St.ZnCt|St.Srbr.Ver
[Mt.Bt.MvPrePg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPrePg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=((12+40)*#sc#)
[Mt.Bt.MvNxtPg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxtPg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+32)*#sc#)
[Mt.Bt.MvPrePg.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.01
[Mt.Bt.MvPrePg.02]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.02
[Mt.Bt.MvNxtPg.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.01
[Mt.Bt.MvNxtPg.02]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.02
[Mt.Bt.MvPre.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPre
X=(#CURRENTCONFIGWIDTH#-(12+24+32)*#sc#)
Y=((12+40)*#sc#)
[Mt.Bt.MvNxt.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxt
X=(#CURRENTCONFIGWIDTH#-(12+24+32)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+32)*#sc#)
[Mt.Bt.MvPre.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPre.Ver
[Mt.Bt.MvNxt.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxt.Ver

[Mt.Wrng]
Meter=Image
Y=(24*#sc#+(#CURRENTCONFIGHEIGHT#-48*#sc#)/2)
MeterStyle=St.ZnCt|St.Mi|St.WrngIm

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Rsz
MouseActionCursorName=SIZE_NS