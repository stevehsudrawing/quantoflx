[Variables]
PW=4
PH=(1/2*#Quantity#+1)
DvdLns=(14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*#PW#-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0)

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

[Ms.DftTte]
Measure=String
String=#Path#
RegExpSubstitute=1
Substitute="(.*)+\\":""

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Cstm.Gp.Main|St.Ft|St.Title|St.Ft.Bd
Text=#Title#
X=(16*#sc#)
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

[St.Cstm.Ps.Nx.01]
X=0r
Y=(32*#sc#)r

[St.Cstm.Ps.Im.St.01]
X=((12+4)*#sc#)
Y=((8+48)*#sc#)
[St.Cstm.Im.01]
MeasureName=Ms.#CURRENTSECTION#
ImageTint=255,255,255,(255*#Op.Fg#)
W=(16*#Sc#)
H=(16*#Sc#)
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.#CURRENTSECTION#" "Open"]
RightMouseUpAction=[!CommandMeasure "Ms.#CURRENTSECTION#" "ContextMenu"]

[Mt.01_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Im.St.01
[Mt.02_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.03_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.04_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.05_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.06_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.07_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.08_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.09_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.10_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.11_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.12_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.13_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.14_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.15_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.16_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.17_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.18_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.19_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.20_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.21_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.22_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.23_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.24_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.25_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.26_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.27_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.28_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.29_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.30_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.31_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01
[Mt.32_I]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.Nx.01

[St.Cstm.Ps.Tx.St.01]
X=((36+4)*#sc#)
Y=((8+48)*#sc#)
[St.Cstm.Tx.01]
MeasureName=Ms.#CURRENTSECTION#
W=(64*#Sc#*#PW#-(36+12)*#sc#)
ClipString=1
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.#CURRENTSECTION#" "Open"]
RightMouseUpAction=[!CommandMeasure "Ms.#CURRENTSECTION#" "ContextMenu"]
InlinePattern=\.\S+$
InlineSetting=Color | #Cl.Gn.Fg.Gn#,((128+128*#HideExtensions#)*#Op.Fg#)

[Mt.01_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Tx.St.01
[Mt.02_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.03_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.04_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.05_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.06_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.07_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.08_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.09_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.10_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.11_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.12_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.13_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.14_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.15_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.16_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.17_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.18_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.19_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.20_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.21_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.22_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.23_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.24_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.25_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.26_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.27_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.28_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.29_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.30_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.31_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[Mt.32_T]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01

[St.Cstm.Ps.Hv.St.01]
X=0
Y=(48*#sc#)
[St.Cstm.Hv.01]
Shape=Rectangle 0,0,(64*#Sc#*#PW#),(32*#Sc#) | #da.sk# | Extend Hover
DynamicVariables=1
[Mt.01_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Hv.St.01
[Mt.02_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.03_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.04_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.05_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.06_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.07_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.08_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.09_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.10_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.11_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.12_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.13_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.14_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.15_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.16_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.17_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.18_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.19_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.20_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.21_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.22_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.23_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.24_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.25_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.26_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.27_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.28_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.29_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.30_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.31_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01
[Mt.32_H]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Hv.01|St.Bt.Sp|St.Cstm.Ps.Nx.01

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

[Mt.Nothing]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=#Tm.Nothing.0001#
StringAlign=CenterCenter
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2+16*#sc#)
ClipString=2
W=(#CURRENTCONFIGWIDTH#-32*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
Hidden=(([&Ms.FileCount]+[&Ms.FolderCount])>0)

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Rsz
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "Resizing_A.ini"]
MouseActionCursorName=SIZE_NS