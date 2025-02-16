[Variables]
@include=#Pk@#Config\ColorScheme_Preview\#Cl.Sh#.inc

FlCl_00=#Cl_Pv.Ac.Bg.Gn#
FlCl_01=#Cl_Pv.Gn.Fg.Gn#
FlCl_02=#Cl_Pv.Gn.Fg.Gn#
FlCl_03=#Cl_Pv.Gn.Fg.Gn#
FlCl_04=#Cl_Pv.Gn.Fg.Gn#
IcOp.01_00=(128*#Op.Fg#)
IcOp.02_00=(192*#Op.Fg#)
IcOp.03_00=(255*#Op.Fg#)
IcOp.01_01=(255*#Op.Fg#)
IcOp.02_01=(192*#Op.Fg#)
IcOp.03_01=(128*#Op.Fg#)
IcOp.01_02=(255*#Op.Fg#)
IcOp.02_02=(192*#Op.Fg#)
IcOp.03_02=(128*#Op.Fg#)
IcOp.01_03=((#Cl_Pv.Dt#=1?128:255)*#Op.Fg#)
IcOp.02_03=(192*#Op.Fg#)
IcOp.03_03=((#Cl_Pv.Dt#=1?255:128)*#Op.Fg#)
IcOp.01_04=(255*#Op.Fg#)
IcOp.02_04=(255*#Op.Fg#)
IcOp.03_04=(255*#Op.Fg#)

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
X=#PVX#
Y=#PVY#
Shape=Rectangle 0,0,(400*#sc#),(400*#sc#),(#Cr#),(#Cr#) | #da.sk# | Fill Color 255,255,255,(255*#Vr.GlCtOp#)
DynamicVariables=1
Group=Gp.Normal
[St.Zn.DsktpPv]
Container=Mt.Zn.DsktpPv
Group=Gp.Normal
[Mt.Dsktp.DtCl]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
Shape=Rectangle 0,0,(400*#sc#),(400*#sc#) | #da.sk# | Fill Color [Ms.DtCl]
DynamicVariables=1
[Mt.Dsktp.WlPp]
Meter=Image
MeterStyle=St.Zn.DsktpPv
MeasureName=Ms.WlPp
H=(600*#sc#)
PreserveAspectRatio=1

[St.Ft_Cstm]
FontColor=#Cl_Pv.Gn.Fg.Gn#,(255*#Op.Fg#)
[St.Mi_Cstm]
ImageTint=#Cl_Pv.Gn.Fg.Gn#,(255*#Op.Fg#)

[Mt.Dsktp.Pv.00.00]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(32*#sc#)
Y=(32*#sc#)
Shape=Rectangle 0,0,(64*(6)*#sc#),(64*(6)*#sc#),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape2=Rectangle (#Sp#/2+(#Ppos.X#/2)),(#Sp#/2+(#Ppos.Y#/2)),(64*(6)*#sc#-#Sp#),(64*(6)*#sc#-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape3=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Bg.Gn#,(255*0.5)
Shape7=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape8=Rectangle (#Sp#+(#Ppos.X#)+#Hl.Bd#),(#Sp#+(#Ppos.Y#)+#Hl.Bd#),(64*(6)*#sc#-(#Sp#+#Hl.Bd#)*2),(64*(6)*#sc#-(#Sp#+#Hl.Bd#)*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape9=Combine Shape7 | Exclude Shape8
Shape10=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#)
Shape11=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(64*(6)*#sc#-#Sp#*2),(64*(6)*#sc#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient Gdnt_Hl
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[Mt.Dsktp.Pv.01.00]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(64*#sc#)
Y=(64*#sc#)
Shape=Rectangle (#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*(4)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape2=Rectangle (#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape3=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Bg.Gn#,(255*#Op.Bg#)
Shape7=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient GdntHlL
Shape8=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape9=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape10=Combine Shape8 | Exclude Shape9
Shape11=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#*(1-#Bnd.T#))
Shape12=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape13=Combine Shape11 | Exclude Shape12
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
Shape14=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49)*2*#sc#)
Shape15=Combine Shape7 | Exclude Shape14
Shape16=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.01
Shape17=Ellipse ((128-(49)*3.45*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-(49)*3.45*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49)*4*#sc#)
Shape18=Combine Shape16 | Exclude Shape17
Shape19=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.02
Shape20=Combine Shape19 | Intersect Shape17
Shape21=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),(((49)*2-1)*#sc#) | #da.bg# | StrokeWidth (2*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03
Shape22=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),((49+8*0)*2*#sc#)
Shape23=Ellipse ((128-1*(1+2*0)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-1*(1+2*0)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*0+1/2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape24=Combine Shape23 | Exclude Shape22
Shape25=Ellipse ((128-2*(1+2*0)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-2*(1+2*0)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*0+1)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape26=Combine Shape25 | Exclude Shape22
Shape27=Ellipse ((128-3*(1+2*0)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-3*(1+2*0)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*0+3/2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape28=Combine Shape27 | Exclude Shape22
Shape29=Ellipse ((128-4*(1+2*0)*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((128-4*(1+2*0)*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49+8*0+2)*2*#sc#) | #da.sk# | Fill Color 0,0,0,(32*#Hl.Op#*#Op.Bg_Cstm#)
Shape30=Combine Shape29 | Exclude Shape22
Shape31=Ellipse (128*#sc#+(#Ppos.X#)),(128*#sc#+(#Ppos.Y#)),(((49+8*0)*2-2)*#sc#) | #da.bg# | StrokeWidth (4*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03
GdntHlL_Cstm.01=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#*2) ; 0 | 255,255,255,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 1.0
GdntHlL_Cstm.02=#Le.Ag# | 0,0,0,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 0,0,0,0 ; 1.0
GdntHlL_Cstm.03=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,0 ; 1.0
DynamicVariables=1
[Ms.Rl]
Measure=Calc
Formula=22.5
MinValue=0
MaxValue=60
DynamicVariables=1
[Mt.Dsktp.Pv.01.01]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(64*#sc#+#Ppos.X#)
Y=(64*#sc#+#Ppos.Y#)
Shape=Ellipse (64*2*#Sc#),(64*2*#Sc#),(49*2*#Sc#) | StrokeWidth (1*2*#Sc#) | Stroke Color #Cl_Pv.Gn.Fg.Gn#,(48*#Op.Fg#) | Fill Color 0,0,0,0
DynamicVariables=1
[Mt.Dsktp.Pv.01.02]
Meter=Roundline
MeterStyle=St.Zn.DsktpPv
MeasureName=Ms.Rl
X=((64+16*2)*#sc#+#Ppos.X#)
Y=((64+16*2)*#sc#+#Ppos.Y#)
W=(96*2*#Sc#)
H=(96*2*#Sc#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(2*2*#Sc#)
LineStart=(47*2*#Sc#)
LineLength=(49*2*#Sc#)
LineColor=#Cl_Pv.Ac.Bg.Gn#,(255*#Op.Fg#)
Solid=1
AntiAlias=1
DynamicVariables=1
[Mt.Dsktp.Pv.01.03]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=((64+128)*#sc#+#Ppos.X#)
Y=((64+128)*#sc#+#Ppos.Y#)
Shape=Rectangle ((-2-18)*#sc#),(-2*#sc#),(86*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Op.Fg#) | Rotate (50/100*360-90),((2+18)*#sc#),(2*#sc#)
Shape2=Rectangle ((-3-12)*#sc#),(-3*#sc#),(64*#sc#),(6*#sc#),(#Cr#>0?(3*#sc#):0),(#Cr#>0?(3*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(255*#Op.Fg#) | Rotate (((19/24)*360-60)),((3+12)*#sc#),(3*#sc#)
DynamicVariables=1
[Mt.Dsktp.Pv.01.04]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=((64+128)*#sc#+#Ppos.X#)
Y=((64+128)*#sc#+#Ppos.Y#)
Shape=Rectangle  (-2*#sc#),(-(88+12*0)*#sc#),(4*#sc#),(16*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape2=Rectangle ((88+12*0)*#sc#),(-2*#sc#),(-16*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape3=Rectangle (-2*#sc#),((88+12*0)*#sc#),(4*#sc#),(-16*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#) 
Shape4=Rectangle (-(88+12*0)*#sc#),(-2*#sc#),(16*#sc#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#) 
DynamicVariables=1
[Mt.Dsktp.Pv.01.05]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=((64+128)*#sc#+#Ppos.X#)
Y=((64+128)*#sc#+#Ppos.Y#)
Shape=Ellipse ((80+12*0)*cos(-60*PI/180)*#sc#),((80+12*0)*sin(-60*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape2=Ellipse ((80+12*0)*cos(-30*PI/180)*#sc#),((80+12*0)*sin(-30*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape3=Ellipse ((80+12*0)*cos(30*PI/180)*#sc#),((80+12*0)*sin(30*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape4=Ellipse ((80+12*0)*cos(60*PI/180)*#sc#),((80+12*0)*sin(60*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape5=Ellipse ((80+12*0)*cos(120*PI/180)*#sc#),((80+12*0)*sin(120*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape6=Ellipse ((80+12*0)*cos(150*PI/180)*#sc#),((80+12*0)*sin(150*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape7=Ellipse ((80+12*0)*cos(-150*PI/180)*#sc#),((80+12*0)*sin(-150*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape8=Ellipse ((80+12*0)*cos(-120*PI/180)*#sc#),((80+12*0)*sin(-120*PI/180)*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
DynamicVariables=1
[Mt.Dsktp.Pv.02.00]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(64*5*#sc#)
Y=(64*1*#sc#)
Shape=Rectangle (#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*(4)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape2=Rectangle (#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape3=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Bg.Gn#,(255*#Op.Bg#)
Shape7=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient GdntHlL
Shape8=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape9=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape10=Combine Shape8 | Exclude Shape9
Shape11=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#*(1-#Bnd.T#))
Shape12=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape13=Combine Shape11 | Exclude Shape12
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
Shape14=Rectangle (10*#sc#+(#Ppos.X#)),((10+38)*#sc#+(#Ppos.Y#)),((64*(4)-20)*#sc#),((64*(4)-20-38)*#sc#),(#Cr#/2),(#Cr#/2)
Shape15=Combine Shape7 | Exclude Shape14
Shape16=Rectangle (10*#sc#+(#Ppos.X#)-#sc#),((10+38)*#sc#+(#Ppos.Y#)-#sc#),((64*(4)-20)*#sc#+2*#sc#),((64*(4)-20-38)*#sc#+2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape17=Combine Shape16 | Exclude Shape14
Shape18=Rectangle (14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*(4)-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape19=Rectangle (14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*(4)-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#) | Offset 0,(32*#sc#)
Shape20=Rectangle (14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*(4)-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#) | Offset 0,(32*2*#sc#)
Shape21=Rectangle (14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*(4)-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#) | Offset 0,(32*3*#sc#)
Shape22=Rectangle (14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*(4)-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#) | Offset 0,(32*4*#sc#)
DynamicVariables=1
[Mt.Dsktp.Pv.02.01]
Meter=Image
MeterStyle=St.Zn.DsktpPv|St.Mi|St.Mi_Cstm
X=((64*5+16)*#sc#+#Ppos.X#)
Y=((64*1+18)*#sc#+#Ppos.Y#)
ImageName=#@#Image\MonoIcons\20\Quanto
W=(16*#sc#)
H=(16*#sc#)
[Mt.Dsktp.Pv.02.02]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Cstm.Gp.Main|St.Ft|St.Ft_Cstm|St.Title|St.Ft.Bd
X=(8*#sc#)R
Y=((64*1+26)*#sc#+#Ppos.Y#)
Text=Quanto Flx
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=LeftCenter
[St.Dsktp.Tx.01]
StringAlign=LeftCenter
W=((256-16*2)*#sc#)
ClipString=1
[St.Dsktp.Ps.YNx.01]
X=0r
Y=(32*#sc#)r
[Mt.Dsktp.Pv.02.03]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01
X=((64*5+16)*#sc#+#Ppos.X#)
Y=((64*1+64)*#sc#+#Ppos.Y#)
Text=Lorem ipsum dolor sit amet, consectetur adipiscing elit
[Mt.Dsktp.Pv.02.04]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01|St.Dsktp.Ps.YNx.01
Text=Dolor sit amet, consectetur adipiscing elit, sed do eiusmod
[Mt.Dsktp.Pv.02.05]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01|St.Dsktp.Ps.YNx.01
Text=Consectetur adipiscing elit, sed do eiusmod tempor
[Mt.Dsktp.Pv.02.06]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01|St.Dsktp.Ps.YNx.01
Text=Elit, sed do eiusmod tempor incididunt ut labore
[Mt.Dsktp.Pv.02.07]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01|St.Dsktp.Ps.YNx.01
Text=Tempor incididunt ut labore et dolore magna　aliqua
[Mt.Dsktp.Pv.02.08]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Dsktp.Tx.01|St.Dsktp.Ps.YNx.01
Text=Ut labore et dolore magna aliqua. Quis ipsum suspendisse
[Mt.Dsktp.Pv.03.00]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(64*1*#sc#)
Y=(64*5*#sc#)
Shape=Rectangle (#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*(4)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape2=Rectangle (#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*(4)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape3=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Bg.Gn#,(255*#Op.Bg#)
Shape7=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient GdntHlL
Shape8=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape9=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape10=Combine Shape8 | Exclude Shape9
Shape11=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#*(1-#Bnd.T#))
Shape12=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(4)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(4)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape13=Combine Shape11 | Exclude Shape12
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
Shape14=Rectangle (10*#sc#+(#Ppos.X#)),((10+38)*#sc#+(#Ppos.Y#)),((64*(4)-20)*#sc#),((64*(4)-20-48)*#sc#),(#Cr#/2),(#Cr#/2)
Shape15=Combine Shape7 | Exclude Shape14
Shape16=Rectangle (10*#sc#+(#Ppos.X#)-#sc#),((10+38)*#sc#+(#Ppos.Y#)-#sc#),((64*(4)-20)*#sc#+2*#sc#),((64*(4)-20-48)*#sc#+2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape17=Combine Shape16 | Exclude Shape14
DynamicVariables=1
[Mt.Dsktp.Pv.03.01]
Meter=Image
MeterStyle=St.Zn.DsktpPv|St.Mi|St.Mi_Cstm
ImageName=#Pk@#Image\MonoIcons\32\Drive_4
X=((64*1+32-16)*#sc#+#Ppos.X#)
Y=((64*5+32-16-4)*#sc#+#Ppos.Y#)
W=(32*#sc#)
H=(32*#sc#)
[Mt.Dsktp.Pv.03.02]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
Shape=Rectangle 0,(15*#sc#*(18/32)),(32*#sc#*(18/32)),(2*#sc#*(18/32))
Shape2=Rectangle (15*#sc#*(18/32)),0,(2*#sc#*(18/32)),(32*#sc#*(18/32))
Shape3=Rectangle 0,0,(15*#sc#*(18/32)),(15*#sc#*(18/32))
Shape4=Rectangle (17*#sc#*(18/32)),(17*#sc#*(18/32)),(15*#sc#*(18/32)),(15*#sc#*(18/32))
Shape5=Rectangle 0,0,(32*#sc#*(18/32)),(32*#sc#*(18/32)),((#Cr#/2)*(18/32)),((#Cr#/2)*(18/32)) | #Da.sk# | Fill Color [#FlCl_0[#Cl.Sh]],[#IcOp.01_0[#Cl.Sh]]
Shape6=Rectangle 0,0,(32*#sc#*(18/32)),(32*#sc#*(18/32)),((#Cr#/2)*(18/32)),((#Cr#/2)*(18/32)) | #Da.sk# | Fill Color [#FlCl_0[#Cl.Sh]],[#IcOp.02_0[#Cl.Sh]]
Shape7=Rectangle 0,0,(32*#sc#*(18/32)),(32*#sc#*(18/32)),((#Cr#/2)*(18/32)),((#Cr#/2)*(18/32)) | #Da.sk# | Fill Color [#FlCl_0[#Cl.Sh]],[#IcOp.03_0[#Cl.Sh]]
Shape8=Combine Shape5 | Intersect Shape3
Shape9=Combine Shape6 | Exclude Shape | Exclude Shape2 | Exclude Shape3 | Exclude Shape4
Shape10=Combine Shape7 | Intersect Shape4
DynamicVariables=1
X=((64*1+32-16)*#sc#+#Ppos.X#)
Y=((64*5+32-16-4)*#sc#+#Ppos.Y#)
[Mt.Dsktp.Pv.03.03]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft|St.Ft_Cstm|St.Ft.Bd
Text=#Tm.Local_Disk#
X=((64*1+60)*#sc#+#Ppos.X#)
Y=((64*5+18)*#sc#+#Ppos.Y#)
StringAlign=LeftCenter
DynamicVariables=1
[Mt.Dsktp.Pv.03.04]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft
Text=45.3 GB / 100.0 GB
X=((64*1+60)*#sc#+#Ppos.X#)
Y=((64*5+38)*#sc#+#Ppos.Y#)
StringAlign=LeftCenter
FontColor=#Cl_Pv.Gn.Fg.Gn#,(192*#Op.Fg#)
DynamicVariables=1
[Mt.Dsktp.Pv.03.05]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=((64*1+10)*#sc#+#Ppos.X#)
Y=((64*5+54)*#sc#+#Ppos.Y#)
Shape=Rectangle 0,0,(236*#sc#),(64*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl_Pv.Gn.Fg.Gn#,(64*#Op.Fg#)
Shape2=Rectangle (#sc#),(#sc#),((236-2)*#sc#),((64-2)*#sc#),(Max(#Cr#/2-#sc#,0)),(Max(#Cr#/2-#sc#,0))
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
[Mt.Dsktp.Pv.03.06]
Meter=Image
MeterStyle=St.Zn.DsktpPv
X=((64*1+10)*#sc#+#Ppos.X#)
Y=((64*5+54)*#sc#+#Ppos.Y#)
ImageName=#Pk@#Image\MonoGrid_29x4_8x8
ImageTint=#Cl_Pv.Gn.Fg.Gn#,(32*#Op.Fg#)
W=(236*#sc#)
H=(32*#sc#)
[Mt.Dsktp.Pv.03.07]
Meter=Image
MeterStyle=St.Zn.DsktpPv|St.Mi|St.Mi_Cstm
X=((64*1+256-16-10)*#sc#+#Ppos.X#)
Y=((64*5+32-8-10-4)*#sc#+#Ppos.Y#)
ImageName=#@#Image\MonoIcons\16\AUp
ImageTint=#Cl_Pv.Gn.Fg.Gn#,(128*#Op.Fg#)
W=(16*#sc#)
H=(16*#sc#)
[Mt.Dsktp.Pv.03.08]
Meter=Image
MeterStyle=St.Zn.DsktpPv|St.Mi|St.Mi_Cstm
X=((64*1+256-16-10)*#sc#+#Ppos.X#)
Y=((64*5+32-8+10-4)*#sc#+#Ppos.Y#)
ImageName=#@#Image\MonoIcons\16\ADown
ImageTint=#Cl_Pv.Ac.Bg.Gn#,(255*#Op.Fg#)
W=(16*#sc#)
H=(16*#sc#)

[Mt.Dsktp.Pv.04.00]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(64*5*#sc#)
Y=(64*5*#sc#)
Shape=Rectangle (#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*(2)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape2=Rectangle (#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*(2)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*(2)+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Fg.Sd#,(128*#Op.Bd#)
Shape3=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color #Cl_Pv.Gn.Bg.Gn#,(255*#Op.Bg#)
Shape7=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient GdntHlL
Shape8=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape9=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape10=Combine Shape8 | Exclude Shape9
Shape11=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#*(1-#Bnd.T#))
Shape12=Rectangle (#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*(2)-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*(2)-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape13=Combine Shape11 | Exclude Shape12
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
DynamicVariables=1
[Mt.Dsktp.Pv.04.01]
Meter=Image
MeterStyle=St.Zn.DsktpPv
DynamicVariables=1
X=((64*5)*#sc#+#Ppos.X#)
Y=((64*5)*#sc#+#Ppos.Y#)
W=(128*#sc#)
H=(128*#sc#)
PreserveAspectRatio=1
ImageName=#Pk@#Image\SampleShortcuts
ImageTint=255,255,255,(255*#Op.Fg#)

[Mt.Dsktp.Pv.Wrng]
Meter=Shape
MeterStyle=St.Zn.DsktpPv
X=(8*#sc#)
Y=(400-8*#sc#)
Shape=Rectangle 0,0,([Mt.Dsktp.Pv.Wrng.01:W]+12*2*#sc#),(-([Mt.Dsktp.Pv.Wrng.01:H]+12*#sc#)),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,([Mt.Dsktp.Pv.Wrng.01:W]+12*2*#sc#),(-([Mt.Dsktp.Pv.Wrng.01:H]+12*#sc#)),(#Cr#/2),(#Cr#/2)  | #da.sk# | Fill Color #Cl.Wrng.Bg.Gn#,16
Shape3=Rectangle 0,0,([Mt.Dsktp.Pv.Wrng.01:W]+12*2*#sc#),(-([Mt.Dsktp.Pv.Wrng.01:H]+12*#sc#)),(#Cr#/2),(#Cr#/2)  | #da.sk# | Fill Color #Cl.Wrng.Bg.Gn#,96
Shape4=Rectangle (#sc#),(-#sc#),([Mt.Dsktp.Pv.Wrng.01:W]+11*2*#sc#),(-([Mt.Dsktp.Pv.Wrng.01:H]+10*#sc#)),(Max(#Cr#/2-#sc#,0)),(Max(#Cr#/2-#sc#,0))
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
Hidden=((#Cl.Sh#=0)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)<576):((#Cl.Sh#=1)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>144):((#Cl.Sh#=2)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>96):((#Cl.Sh#=3)?(abs(#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#-#Cl.Fg.R#-#Cl.Fg.G#-#Cl.Fg.B#)>192):1))))
[Mt.Dsktp.Pv.Wrng.01]
Meter=String
MeterStyle=St.Zn.DsktpPv|St.Ft
Text=#St.UserExperienceWrng.0001#
FontColor=#Cl.Wrng.Fg.Gn#
X=(12*#sc#)r
Y=(-6*#sc#)r
ClipStringW=((400-24*2)*#sc#)
ClipString=2
StringAlign=LeftBottom
Hidden=((#Cl.Sh#=0)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)<576):((#Cl.Sh#=1)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>144):((#Cl.Sh#=2)?((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)>96):((#Cl.Sh#=3)?(abs(#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#-#Cl.Fg.R#-#Cl.Fg.G#-#Cl.Fg.B#)>192):1))))

