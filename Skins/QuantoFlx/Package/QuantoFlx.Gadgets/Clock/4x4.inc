[Variables]
Nm.01.00=
Nm.02.00=
Nm.03.00=
Nm.04.00=
Nm.05.00=
Nm.06.00=
Nm.07.00=
Nm.08.00=
Nm.09.00=
Nm.10.00=
Nm.11.00=
Nm.12.00=

Nm.01.01=1
Nm.02.01=2
Nm.03.01=3
Nm.04.01=4
Nm.05.01=5
Nm.06.01=6
Nm.07.01=7
Nm.08.01=8
Nm.09.01=9
Nm.10.01=10
Nm.11.01=11
Nm.12.01=12

Nm.01.02=I
Nm.02.02=II
Nm.03.02=III
Nm.04.02=IV
Nm.05.02=V
Nm.06.02=VI
Nm.07.02=VII
Nm.08.02=VIII
Nm.09.02=IX
Nm.10.02=X
Nm.11.02=XI
Nm.12.02=XII

Nm.01.03.01=丑
Nm.03.03.01=寅
Nm.05.03.01=卯
Nm.07.03.01=辰
Nm.09.03.01=巳
Nm.11.03.01=午
Nm.01.03.00=未
Nm.03.03.00=申
Nm.05.03.00=酉
Nm.07.03.00=戌
Nm.09.03.00=亥
Nm.11.03.00=子
Nm.01.03=[#Nm.01.03.0[&Ms.CDH.Judge.02]]
Nm.02.03=‧
Nm.03.03=[#Nm.03.03.0[&Ms.CDH.Judge.02]]
Nm.04.03=‧
Nm.05.03=[#Nm.05.03.0[&Ms.CDH.Judge.02]]
Nm.06.03=‧
Nm.07.03=[#Nm.07.03.0[&Ms.CDH.Judge.02]]
Nm.08.03=‧
Nm.09.03=[#Nm.09.03.0[&Ms.CDH.Judge.02]]
Nm.10.03=‧
Nm.11.03=[#Nm.11.03.0[&Ms.CDH.Judge.02]]
Nm.12.03=‧

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
Shape8=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#)*2*#sc#)
Shape9=Combine Shape | Exclude Shape8
Shape10=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.01
Shape11=Ellipse ((128-(49+8*#ScndHnd#)*3.45*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-(49+8*#ScndHnd#)*3.45*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#)*4*#sc#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.02
Shape14=Combine Shape13 | Intersect Shape11
Shape15=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#)*2*#sc#)
Shape16=Ellipse ((128-1*(1+2*#ScndHnd#)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-1*(1+2*#ScndHnd#)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#+1/2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape17=Combine Shape16 | Exclude Shape15
Shape18=Ellipse ((128-2*(1+2*#ScndHnd#)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-2*(1+2*#ScndHnd#)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#+1)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape19=Combine Shape18 | Exclude Shape15
Shape20=Ellipse ((128-3*(1+2*#ScndHnd#)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-3*(1+2*#ScndHnd#)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#+3/2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape21=Combine Shape20 | Exclude Shape15
Shape22=Ellipse ((128-4*(1+2*#ScndHnd#)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-4*(1+2*#ScndHnd#)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*#ScndHnd#+2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape23=Combine Shape22 | Exclude Shape15
Shape24=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),(((49+8*#ScndHnd#)*2-2)*#sc#) | #da.bg# | StrokeWidth (4*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03
GdntHlL_Cstm.01=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#*2) ; 0 | 255,255,255,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 1.0
GdntHlL_Cstm.02=#Le.Ag# | 0,0,0,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 0,0,0,0 ; 1.0
GdntHlL_Cstm.03=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,0 ; 1.0

[Ms.CDH.Judge.01]
Measure=Time
Format=%#H
DynamicVariables=1
[Ms.CDH.Judge.02]
Measure=Calc
Formula=(([Ms.CDH.Judge.01]>=1)&&([Ms.CDH.Judge.01]<13))
DynamicVariables=1

[Mt.RlB]
Meter=Shape
MeterStyle=St.ZnCt|St.RlB
Hidden=#ScndHnd#
[Mt.Rl]
Meter=Roundline
MeterStyle=St.ZnCt|St.Rl
Hidden=((#Em#=1)||(#ScndHnd#=1))

[Mt.Sp.Rtt]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle ((-1-36)*#sc#),(-#sc#),(128*#sc#),(2*#sc#),(#Cr#>0?(#sc#):0),(#Cr#>0?(#sc#):0) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(((#Em#=1)||(#ScndHnd#=0))?0:(255*#Op.Fg#)) | Rotate ([Ms.Rl:%]/100*360-90),((1+36)*#sc#),(#sc#)
Shape2=Rectangle ((-2-18)*#sc#),(-2*#sc#),(86*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Fg#) | Rotate ([Ms.Min:%]/100*360-90),((2+18)*#sc#),(2*#sc#)
Shape3=Rectangle ((-3-12)*#sc#),(-3*#sc#),(64*#sc#),(6*#sc#),(#Cr#>0?(3*#sc#):0),(#Cr#>0?(3*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(255*#Op.Fg#) | Rotate ([Ms.Hour:%]/100*360-60),((3+12)*#sc#),(3*#sc#)
X=(128*#sc#)
Y=(128*#sc#)
DynamicVariables=1

[Mt.TmZnNm]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=#TmZnNm#
StringAlign=CenterCenter
X=(128*#Sc#)
Y=(86*#Sc#)
W=(150*#sc#)
ClipString=2
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
[Mt.FAMPM]
Meter=String
MeterStyle=St.ZnCt|St.Ft
MeasureName=Ms.FAMPM
StringAlign=CenterCenter
X=(128*#Sc#)
Y=(170*#Sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
FontSize=(12*#Sc#*#Ft.Sc.Gn#)
Hidden=#AHT#

[St.Ft.Cstm.01]
Text=[#Nm.[#CURRENTSECTION].[#MainNm]]
StringAlign=CenterCenter
FontSize=(16*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
Hidden=(1-#ShowFace#)

[12]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Bd|St.Ft.Cstm.01
X=((128+(76+12*#ScndHnd#)*cos(-90*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(-90*PI/180))*#sc#+#Ppos.Y.Nm#)
[03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.01
X=((128+(76+12*#ScndHnd#)*cos(0*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(0*PI/180))*#sc#+#Ppos.Y.Nm#)
[06]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.01
X=((128+(76+12*#ScndHnd#)*cos(90*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(90*PI/180))*#sc#+#Ppos.Y.Nm#)
[09]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.01
X=((128+(76+12*#ScndHnd#)*cos(180*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(180*PI/180))*#sc#+#Ppos.Y.Nm#)

[St.Sp.Cstm.01]
Shape=Ellipse 0,0,(2*#sc#) | #Da.Sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
DynamicVariables=1
[St.Ft.Cstm.02]
Text=[#Nm.[#CURRENTSECTION].[#MainNm]]
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
Hidden=((#ShowFace#=1)?((#MainNm#=3)?0:(1-#OthrNm#)):1)

[01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(-60*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(-60*PI/180))*#sc#+#Ppos.Y.Nm#)
[02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(-30*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(-30*PI/180))*#sc#+#Ppos.Y.Nm#)
[04]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(30*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(30*PI/180))*#sc#+#Ppos.Y.Nm#)
[05]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(60*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(60*PI/180))*#sc#+#Ppos.Y.Nm#)
[07]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(120*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(120*PI/180))*#sc#+#Ppos.Y.Nm#)
[08]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(150*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(150*PI/180))*#sc#+#Ppos.Y.Nm#)
[10]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(210*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(210*PI/180))*#sc#+#Ppos.Y.Nm#)
[11]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Cstm.02
X=((128+(76+12*#ScndHnd#)*cos(240*PI/180))*#sc#+#Ppos.X.Nm#)
Y=((128+(76+12*#ScndHnd#)*sin(240*PI/180))*#sc#+#Ppos.Y.Nm#)

[Mt.Musk.01]
Meter=Shape
MeterStyle=St.ZnCt
X=(128*#sc#)
Y=(128*#sc#)
Shape=Rectangle  (-2*#sc#),(-(88+12*#ScndHnd#)*#sc#),(4*#sc#),(16*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape2=Rectangle ((88+12*#ScndHnd#)*#sc#),(-2*#sc#),(-16*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape3=Rectangle (-2*#sc#),((88+12*#ScndHnd#)*#sc#),(4*#sc#),(-16*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape4=Rectangle (-(88+12*#ScndHnd#)*#sc#),(-2*#sc#),(16*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#) 
DynamicVariables=1
Hidden=(((#ShowFace#=1)&&(#MainNm#=0))?0:1)
[Mt.Musk.02]
Meter=Shape
MeterStyle=St.ZnCt
X=(128*#sc#)
Y=(128*#sc#)
Shape=Ellipse ((80+12*#ScndHnd#)*cos(-60*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(-60*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape2=Ellipse ((80+12*#ScndHnd#)*cos(-30*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(-30*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape3=Ellipse ((80+12*#ScndHnd#)*cos(30*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(30*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape4=Ellipse ((80+12*#ScndHnd#)*cos(60*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(60*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape5=Ellipse ((80+12*#ScndHnd#)*cos(120*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(120*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape6=Ellipse ((80+12*#ScndHnd#)*cos(150*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(150*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape7=Ellipse ((80+12*#ScndHnd#)*cos(-150*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(-150*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape8=Ellipse ((80+12*#ScndHnd#)*cos(-120*PI/180)*#sc#),((80+12*#ScndHnd#)*sin(-120*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#Op.Fg#)
DynamicVariables=1
Hidden=((#ShowFace#=1)&&(#MainNm#<>3)&&((#OthrNm#=0)||(#MainNm#=0))?0:1)