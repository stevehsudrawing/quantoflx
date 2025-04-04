[Variables]
BackorQuit=0

[Rainmeter]
RightMouseUpAction=[!Refresh]
MouseOverAction=[!Update]
MouseLeaveAction=[!Update]
OnRefreshAction=[!Update]#Wizd.ORA#

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
[Mt.Rz]
Meter=Shape
MeterStyle=St.Rz|St.ZnCt
Y=(48*#Sc#)
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#-48*#Sc#) | #Da.Sk# | #Da.Bg#
DynamicVariables=1

[St.Sk.Ic.01]
W=(16*#Sc#)
H=(16*#Sc#)

[Mt.WindowIcon]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Wizd.Im#
X=((48+8)*#sc#)
Y=(16*#sc#)
W=(16*#sc#)
H=(16*#sc#)
[St.MainTt]
Text=#Wizd.Tt#
MeasureName=Ms.MainTt
X=((48+32)*#Sc#)
Y=(24*#Sc#)
StringAlign=LeftCenter
FontColor=#Cl.Gn.Fg.Gn#,(160*#Op.Fg#)
[St.Bt.Tt.01.Im]
DynamicVariables=1
ImageName=#@#Image\MonoIcons\16\Close.png
X=(#CURRENTCONFIGWIDTH#-(24+16/2)*#Sc#)
Y=((24-16/2)*#Sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"]#Wizd.ClAc#
ToolTipText=#Tm.Unload#
Group=Gp.NormalButton
[St.Bt.Tt.02.Im]
DynamicVariables=1
ImageName=#@#Image\MonoIcons\16\ALeftH.png
X=(#CURRENTCONFIGWIDTH#-(24+16/2)*#Sc#)
Y=((24-16/2)*#Sc#)
[Mt.MainTt]
Meter=String
MeterStyle=St.Ft|St.MainTt
[Mt.Bt.Tt.01.Im]
Meter=Image
MeterStyle=St.Mi|St.Sk.Ic.01|St.Sk.Ic.02|St.Bt.Tt.01.Im|St.Bt.Mt

[Mt.Da]
Meter=Shape
MeterStyle=St.Da

[Mt.Bt.Tt.02.Im]
Meter=Image
MeterStyle=St.Mi|St.Sk.Ic.01|St.Sk.Ic.02|St.Bt.Tt.02.Im
X=(16*#sc#)

[St.Sk.Ic.02]
ImageTint=#Cl.Gn.Fg.Gn#,(160*#Op.Fg#)

[HMt.Bt.Tt.01.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Hv
X=(#CURRENTCONFIGWIDTH#-(24+40/2)*#Sc#)
Y=((24-40/2)*#Sc#)
Shape=Rectangle (-4*#sc#),(-4*#sc#),(48*#sc#),(48*#sc#) | #Da.Sk# | Fill Color 196,43,28
Shape2=Rectangle (-5*#sc#),(-5*#sc#),(50*#sc#),(50*#sc#) | #Da.Sk# | Fill Color 250,128,100,(128*((#Hl.Op#=0)?0:1))
Shape3=Rectangle (-3*#sc#),(-3*#sc#),(46*#sc#),(46*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (-4*#sc#),(-4*#sc#),(48*#sc#),(48*#sc#) | #Da.Sk# | Fill LinearGradient Gdnt_Cstm
Gdnt_Cstm=270 | 255,255,255,(128*((#Hl.Op#=0)?0:1)) ; 0 | 255,255,255,(64*((#Hl.Op#=0)?0:1)) ; 0.499 | 250,128,100,0 ; 0.5 | 250,128,100,(128*((#Hl.Op#=0)?0:1)) ; 1
DynamicVariables=1
Group=HMt.Bt.Tt.01.Im
[HMt.Bt.Tt.01.02]
Meter=Image
MeterStyle=St.ZnCt|St.Sk.Ic.01|St.Sk.Ic.02|St.Bt.Tt.01.Im|St.Hv
X=(12*#sc#)r
Y=(12*#sc#)r
ImageTint=255,255,255
Group=HMt.Bt.Tt.01.Im

[Mt.MainTtA]
Meter=String
MeterStyle=St.Ft|St.MainTt
[Mt.Bt.Tt.01.ImA]
Meter=Image
MeterStyle=St.Mi|St.Sk.Ic.01|St.Sk.Ic.02|St.Bt.Tt.01.Im
[Mt.Bt.Tt.02.ImA]
Meter=Image
MeterStyle=St.Mi|St.Sk.Ic.01|St.Sk.Ic.02|St.Bt.Tt.02.Im
X=(16*#sc#)
ToolTipText=#Tm.Back#
Hidden=#HdBkBt#
MouseOverAction=[!ShowMeter HMt.Bt.Tt.02.ImA][!Redraw]
MouseLeaveAction=[!HideMeter HMt.Bt.Tt.02.ImA][!Redraw]
LeftMouseUpAction=#BkBtAc#
Group=Gp.NormalButton

[HMt.Bt.Tt.02.ImA]
Meter=Shape
MeterStyle=St.ZnCt
X=(4*#sc#)
Y=(4*#sc#)
Shape=Rectangle 0,0,(40*#sc#),(40*#sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1

[Mt.Sl]
Meter=Shape
MeterStyle=St.ZnCt
Y=(48*#Sc#)
Shape=Rectangle (#Cr#),0,(#CURRENTCONFIGWIDTH#-(#Cr#)*2),(#CURRENTCONFIGHEIGHT#-48*2*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Sl#,(Min((128*(1+#Op.Bg#)),255))
Shape2=Rectangle (#Cr#-#sc#),(-#sc#),(#CURRENTCONFIGWIDTH#-(#Cr#-#sc#)*2),(#CURRENTCONFIGHEIGHT#-47*2*#Sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #Da.Sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#Cr#),0,(#CURRENTCONFIGWIDTH#-(#Cr#)*2),(#CURRENTCONFIGHEIGHT#-48*2*#Sc#),(#Cr#/2),(#Cr#/2)
Shape4=Rectangle (#sc#),(-48*#Sc#),(#CURRENTCONFIGWIDTH#-2*#sc#),(#CURRENTCONFIGHEIGHT#)
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Combine Shape | Intersect Shape4
DynamicVariables=1

[Mt.Cancel]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp
Shape=Rectangle (-#sc#),(-#sc#),((48+2)*#sc#+[Mt.CancelText:W]),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,(48*#sc#+[Mt.CancelText:W]),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,(48*#sc#+[Mt.CancelText:W]),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape5=Rectangle 0,0,(48*#sc#+[Mt.CancelText:W]),(32*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #da.sk# | Extend Hover
X=(#CURRENTCONFIGWIDTH#-[Mt.Cancel:W]-8*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-[Mt.Cancel:H]-8*#sc#)
LeftMouseUpAction=#NtBtAc#
DynamicVariables=1
Hidden=#HdNtBt#
Group=Gp.NormalButton
[Mt.CancelText]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#NtBtTx#
X=([Mt.Cancel:X]+[Mt.Cancel:W]/2)
Y=([Mt.Cancel:Y]+[Mt.Cancel:H]/2)
StringAlign=CenterCenter
Hidden=#HdNtBt#
Group=Gp.NormalButton

[St.Ps.START]
X=(24*#sc#)
Y=([Mt.Title:YH]+8*#sc#)
[St.Ps.Tx.XN.01]
X=(16*#sc#)R
Y=(-4*#sc#)r
[St.Ps.Tx.YN.01]
X=0r
Y=(16*#sc#)R
[St.Ps.Tx.YN.01F]
X=(24*#sc#)
Y=(16*#sc#)R
[St.Ps.Tx.YN.02]
X=0r
Y=0R
[St.Ps.Tx.YN.02F]
X=(24*#sc#)
Y=0R

[St.TxW.GnTx]
W=(#CURRENTCONFIGWIDTH#-48*#sc#)
ClipString=2
[St.TxW.OpTx]
W=(#CURRENTCONFIGWIDTH#-(48+16*4)*#sc#)
ClipString=2

[St.Title]
FontSize=(12*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Ac.Fg.Sl#
X=(24*#sc#)
Y=((48+15)*#sc#)

[St.Option]
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[[#CURRENTSECTION].02:H]+[[#CURRENTSECTION].03:H]),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
[St.OptionTextTitle]
FontSize=(12*#sc#*#Ft.Sc.Gn#)
[St.OptionText]
FontColor=#Cl.Gn.Fg.Gn#,192
[St.NextArrowIcon]
ImageName=#@#Image\MonoIcons\16\ARightH
ImageTint=#Cl.Ac.Bg.Gn#
X=(16*#sc#)r
Y=(16*#sc#)r
W=(16*#sc#)
H=(16*#sc#)

[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[St.ZnCt]
Group=Gp.Normal

[Mt.Zn2]
Meter=Shape
MeterStyle=St.Zn
[Mt.Void2]
Meter=String
Container=Mt.Zn2

[St.Gp.QUIT]
Group=Gp.QUIT
Hidden=1

[St.Sk.Sp.01]
Shape=Rectangle (-#sc#),(-#sc#),((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-(4-2)*#sc#),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Bkgn
Shape5=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-32*2*#sc#)/2-4*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#PgTtl#