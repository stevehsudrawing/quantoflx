[Variables]
Cnbn=Combine Shape | Union Shape2 | Union Shape3 | Union Shape4

[Rainmeter]
MiddleMouseUpAction=#Ac.Variants#

[Mt.Pn]
Meter=Shape
Shape=Rectangle 0,0,(64*#sc#*#Length#),(64*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#,128
Shape2=Rectangle 0,0,(64*#sc#*#Length#),(64*#sc#) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),(64*#sc#*#Length#-2*#sc#),(64*#sc#-2*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!HideMeter Mt.SpTx][!ShowMeter Mt.Bt.00][!ShowMeter Mt.Bt.01][!ShowMeter Mt.Rsz][!Redraw]
MouseLeaveAction=[!ShowMeter Mt.SpTx][!HideMeter Mt.Bt.00][!HideMeter Mt.Bt.01][!HideMeter Mt.Rsz][!Redraw]

[Mt.Zn]
Meter=Shape
Shape=Rectangle 0,0,(64*#sc#*#Length#-#sc#),(64*#sc#) | #da.sk#
DynamicVariables=1

[Mt.Ct]
Meter=Shape
MeterStyle=St.ZnCt
X=(64*#sc#)
Shape=Rectangle (-#sc#),(-#sc#),(2*#sc#),(12*#sc#),(#sc#*(#Cr#>0?1:0)),(#sc#*(#Cr#>0?1:0)) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#
Shape2=Rectangle (-#sc#),(65*#sc#),(2*#sc#),(-12*#sc#),(#sc#*(#Cr#>0?1:0)),(#sc#*(#Cr#>0?1:0))
Shape3=Rectangle (-1/2*#sc#-32*#sc#),(-#sc#),(#sc#),(8*#sc#),(1/2*#sc#*(#Cr#>0?1:0)),(1/2*#sc#*(#Cr#>0?1:0))
Shape4=Rectangle (-1/2*#sc#-32*#sc#),(65*#sc#),(#sc#),(-8*#sc#),(1/2*#sc#*(#Cr#>0?1:0)),(1/2*#sc#*(#Cr#>0?1:0))
Shape5=#Cnbn#
Shape6=#Cnbn#  | Offset (64*1*#sc#) ,0
Shape7=#Cnbn#  | Offset (64*2*#sc#) ,0
Shape8=#Cnbn#  | Offset (64*3*#sc#) ,0
Shape9=#Cnbn#  | Offset (64*4*#sc#) ,0
Shape10=#Cnbn# | Offset (64*5*#sc#) ,0
Shape11=#Cnbn# | Offset (64*6*#sc#) ,0
Shape12=#Cnbn# | Offset (64*7*#sc#) ,0
Shape13=#Cnbn# | Offset (64*8*#sc#) ,0
Shape14=#Cnbn# | Offset (64*9*#sc#) ,0
Shape15=#Cnbn# | Offset (64*10*#sc#),0
Shape16=#Cnbn# | Offset (64*11*#sc#),0
Shape17=#Cnbn# | Offset (64*12*#sc#),0
Shape18=#Cnbn# | Offset (64*13*#sc#),0
Shape19=#Cnbn# | Offset (64*14*#sc#),0
Shape20=#Cnbn# | Offset (64*15*#sc#),0
Shape21=#Cnbn# | Offset (64*16*#sc#),0
Shape22=#Cnbn# | Offset (64*17*#sc#),0
Shape23=#Cnbn# | Offset (64*18*#sc#),0
Shape24=#Cnbn# | Offset (64*19*#sc#),0
Shape25=#Cnbn# | Offset (64*20*#sc#),0
Shape26=#Cnbn# | Offset (64*21*#sc#),0
Shape27=#Cnbn# | Offset (64*22*#sc#),0
Shape28=#Cnbn# | Offset (64*23*#sc#),0
Shape29=#Cnbn# | Offset (64*24*#sc#),0
Shape30=#Cnbn# | Offset (64*25*#sc#),0
Shape31=#Cnbn# | Offset (64*26*#sc#),0
Shape32=#Cnbn# | Offset (64*27*#sc#),0
Shape33=#Cnbn# | Offset (64*28*#sc#),0
Shape34=#Cnbn# | Offset (64*29*#sc#),0
Shape35=#Cnbn# | Offset (64*30*#sc#),0
Shape36=#Cnbn# | Offset (64*31*#sc#),0
Shape37=#Cnbn# | Offset (64*32*#sc#),0
Shape38=#Cnbn# | Offset (64*33*#sc#),0
Shape39=#Cnbn# | Offset (64*34*#sc#),0
Shape40=#Cnbn# | Offset (64*35*#sc#),0
Shape41=#Cnbn# | Offset (64*36*#sc#),0
Shape42=#Cnbn# | Offset (64*37*#sc#),0
Shape43=#Cnbn# | Offset (64*38*#sc#),0
Shape44=#Cnbn# | Offset (64*39*#sc#),0
Shape45=#Cnbn# | Offset (64*40*#sc#),0
Shape46=#Cnbn# | Offset (64*41*#sc#),0
Shape47=#Cnbn# | Offset (64*42*#sc#),0
Shape48=#Cnbn# | Offset (64*43*#sc#),0
Shape49=#Cnbn# | Offset (64*44*#sc#),0
Shape50=#Cnbn# | Offset (64*45*#sc#),0
Shape51=#Cnbn# | Offset (64*46*#sc#),0
Shape52=#Cnbn# | Offset (64*47*#sc#),0
Shape53=#Cnbn# | Offset (64*48*#sc#),0
Shape54=#Cnbn# | Offset (64*49*#sc#),0
Shape55=#Cnbn# | Offset (64*50*#sc#),0
Shape56=#Cnbn# | Offset (64*51*#sc#),0
Shape57=#Cnbn# | Offset (64*52*#sc#),0
Shape58=#Cnbn# | Offset (64*53*#sc#),0
Shape59=#Cnbn# | Offset (64*54*#sc#),0
Shape60=#Cnbn# | Offset (64*55*#sc#),0
Shape61=#Cnbn# | Offset (64*56*#sc#),0
Shape62=#Cnbn# | Offset (64*57*#sc#),0
Shape63=#Cnbn# | Offset (64*58*#sc#),0
Shape64=#Cnbn# | Offset (64*59*#sc#),0
Shape65=#Cnbn# | Offset (64*60*#sc#),0
Shape66=#Cnbn# | Offset (64*61*#sc#),0
Shape67=#Cnbn# | Offset (64*62*#sc#),0
Shape68=#Cnbn# | Offset (64*63*#sc#),0
DynamicVariables=1

[St.Cstm.Ft.01]
Text=#CURRENTSECTION#
StringAlign=CenterCenter
X=(64*#sc#)r
Y=0r
Hidden=(#CURRENTSECTION#<#Length#?0:1)

[1]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
X=(64*#sc#)
Y=(32*#sc#)
[2]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[3]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[4]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[5]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[6]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[7]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[8]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[9]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[10]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[11]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[12]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[13]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[14]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[15]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[16]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[17]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[18]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[19]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[20]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[21]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[22]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[23]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[24]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[25]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[26]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[27]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[28]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[29]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[30]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[31]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[32]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[33]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[34]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[35]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[36]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[37]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[38]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[39]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[40]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[41]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[42]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[43]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[44]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[45]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[46]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[47]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[48]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[49]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[50]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[51]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[52]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[53]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[54]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[55]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[56]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[57]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[58]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[59]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[60]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[61]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[62]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01
[63]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Ft.Bd|St.Cstm.Ft.01

[Ms.Calc]
Measure=Calc
Formula=(64*#sc#)
DynamicVariables=1
[Mt.SpTx]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=[Ms.Calc]px
StringAlign=CenterCenter
X=(32*#sc#)
Y=(32*#sc#)

[St.Cstm.Im.01]
W=(20*#sc#)
H=(20*#sc#)
Hidden=1
[St.Cstm.Sp.01]
Shape=Rectangle 0,0,(32*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,16
DynamicVariables=1
X=(-6*#sc#)r
Y=(-6*#sc#)r
Hidden=1

[Mt.Bt.00]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Bt.Gn
ImageName=#Pk@#Image\MonoIcons\20\Revolve
X=((32-20/2)*#sc#)
Y=((32-20/2)*#sc#)
LeftMouseUpAction=[!ActivateConfig "#CURRENTCONFIG#" "Vertical.ini"]
ToolTipText=#Tm.Revolve#
[HMt.Bt.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01
[Mt.Bt.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Bt.Gn
ImageName=#Pk@#Image\MonoIcons\20\Collapse
X=((32+64-20/2)*#sc#)
Y=((32-20/2)*#sc#)
LeftMouseUpAction=[!ActivateConfig "#CURRENTCONFIG#" "HorizontalS.ini"]
ToolTipText=#Tm.Collapse#
[HMt.Bt.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.01

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
X=(#CURRENTCONFIGWIDTH#-(4+16)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(4+16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "ResizingW.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_WE
Hidden=1