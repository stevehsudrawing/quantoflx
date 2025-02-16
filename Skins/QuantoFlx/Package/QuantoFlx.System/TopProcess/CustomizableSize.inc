[Variables]
PW=4
PH=(((1-#HideTitle#)+1+#Quantity#)/2)

[Rainmeter]
Update=(1000*(1+#Em#))

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
MouseOverAction=[!ShowMeter Mt.Rsz][!Update][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Rsz][!Update][!Redraw]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Zn_Cstm]
Meter=Shape
MeterStyle=St.Zn
Shape2=Rectangle (10*#sc#),((48-32*#HideTitle#)*#sc#),((64*#PW#-20)*#sc#),(64*(#PH#-1+((1/2)*#HideTitle#))*#sc#)
Shape3=Combine Shape | Intersect Shape2
[St.ZnCt_Cstm]
Container=Mt.Zn_Cstm
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
Shape8=Rectangle (10*#sc#+(#Ppos.X#)),((10+38-38*#HideTitle#)*#sc#+(#Ppos.Y#)),((64*#PW#-20)*#sc#),((64*#PH#-20-38+(38*#HideTitle#))*#sc#),(#Cr#/2),(#Cr#/2)
Shape9=Combine Shape | Exclude Shape8
Shape10=Rectangle (10*#sc#+(#Ppos.X#)-#sc#),((10+38-38*#HideTitle#)*#sc#+(#Ppos.Y#)-#sc#),((64*#PW#-20)*#sc#+2*#sc#),((64*#PH#-20-38+(38*#HideTitle#))*#sc#+2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape11=Combine Shape10 | Exclude Shape8

[Mt.TitleIcon]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#ImageName#
ImageTint=#Cl.Gn.Fg.Gn#
W=(16*#sc#)
H=(16*#sc#)
X=(16*#sc#)
Y=(18*#sc#)
Hidden=#HideTitle#

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Cstm.Gp.Main|St.Ft|St.Title|St.Ft.Bd
Text=#Tm.Top_Process#
X=(8*#sc#)R
Y=(26*#sc#)
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=LeftCenter
Hidden=#HideTitle#

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
Hidden=#HideTitle#
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
[St.Cstm.Ps.Nx.01]
X=0r
Y=32r
[St.Cstm.Ps.Tx.01]
Y=((64-32*#HideTitle#)*#sc#)
[St.Cstm.Ps.Sp.01]
Y=((48+32-2-32*#HideTitle#)*#sc#)
[St.Cstm.Ps.Hg.01]
Y=48

[St.Cstm.Tx.01]
StringAlign=LeftCenter
X=(16*#sc#)
W=(112*#sc#)
ClipString=1
[St.Cstm.Tx.02]
StringAlign=RightCenter
X=((256-16)*#sc#)
Hidden=([&Ms.[#CURRENTSECTION]-----:%]=0)
[St.Cstm.Tx.03]
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter
X=(192*#sc#)
Hidden=([&Ms.[#CURRENTSECTION]---:%]=0)

[1]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Tx.01
[2]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[3]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[4]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[5]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01
[6]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.Nx.01

[1-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Tx.01
[2-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Nx.01
[3-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Nx.01
[4-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Nx.01
[5-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Nx.01
[6-]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.Nx.01

[1--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Sp.01
[2--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Nx.01
[3--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Nx.01
[4--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Nx.01
[5--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Nx.01
[6--]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.Nx.01

[1---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Tx.01
[2---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Nx.01
[3---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Nx.01
[4---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Nx.01
[5---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Nx.01
[6---]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.03|St.Cstm.Ps.Nx.01

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
X=((64*#PW#-8-16)*#sc#)
Y=((64*#PH#-8-16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "Resizing.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NS
Hidden=1