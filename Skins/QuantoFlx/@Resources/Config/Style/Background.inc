[Variables]
DW=(#SCREENAREAWIDTH#-#WORKAREAWIDTH#)
DH=(#SCREENAREAHEIGHT#-#WORKAREAHEIGHT#)

[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Background
DefaultAlwaysOnTop=(clamp((#RmSk.DL#-1),-1,0))
DefaultLoadOrder=2
MiddleMouseUpAction=#Ac.Variants#
DefaultDraggable=1
OnRefreshAction=[!Draggable "(1-#RmSk.Lk#)"][!Zpos (clamp((#RmSk.DL#-1),-1,0))]

@include=#@#Config\BlurMode\#Bl.Bg.Md#\Background.inc

[St.Pn.00.00]
Shape=Rectangle 0,0,(#AW#),(#AH#),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | #Fl.Cl.Bd#
Shape2=Rectangle (#Sp#/2+(#Ppos.X#/2)),(#Sp#/2+(#Ppos.Y#/2)),(#AW#-#Sp#),(#AH#-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | #Fl.Cl.Bd#
Shape3=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Extend FlCl_#PnGdnt.Enab#
Shape7=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape8=Rectangle (#Sp#+(#Ppos.X#)+#Hl.Bd#),(#Sp#+(#Ppos.Y#)+#Hl.Bd#),(#AW#-(#Sp#+#Hl.Bd#)*2),(#AH#-(#Sp#+#Hl.Bd#)*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape9=Combine Shape7 | Exclude Shape8
Shape10=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#)
Shape11=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Pn.01.00]
Shape=Rectangle 0,0,(#AW#),(#AH#),(Max(#Cr#,0)),(Max(#Cr#,0)) | #Da.Sk# | #Fl.Cl.Bd#
Shape2=Rectangle (#Sp#/2+(#Ppos.X#/2)),(#Sp#/2+(#Ppos.Y#/2)),(#AW#-#Sp#),(#AH#-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0)) | #Da.Sk# | #Fl.Cl.Bd#
Shape3=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Extend FlCl_#PnGdnt.Enab#
Shape7=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape8=Rectangle (#Sp#+(#Ppos.X#)+#Hl.Bd#),(#Sp#+(#Ppos.Y#)+#Hl.Bd#),(#AW#-(#Sp#+#Hl.Bd#)*2),(#AH#-(#Sp#+#Hl.Bd#)*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Shape9=Combine Shape7 | Exclude Shape8
Shape10=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill Color 255,255,255,(255*#Le.St#)
Shape11=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Rectangle (#Sp#+(#Ppos.X#)),(#Sp#+(#Ppos.Y#)),(#AW#-#Sp#*2),(#AH#-#Sp#*2),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0)) | #Da.Sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Pn.02.00]
Shape=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Extend FlCl_#PnGdnt.Enab#
Shape2=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Pn.00.01]
Shape=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Extend FlCl_#PnGdnt.Enab#
Shape2=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Pn.01.01]
Shape=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Extend FlCl_#PnGdnt.Enab#
Shape2=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Pn.02.01]
Shape=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Extend FlCl_#PnGdnt.Enab#
Shape2=Rectangle 0,0,(#AW#),(#AH#),0,0 | #da.sk# | Fill LinearGradient Gdnt_Hl
FlCl_0=Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Bg_Cstm#)
FlCl_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg_Cstm#) ; 1
Gdnt_Hl=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#); 0 | 255,255,255,0; 0.5
DynamicVariables=1
[St.Zn]
Shape=Rectangle 0,0,(#AW#),(#AH#),(#Bl.Bg.Md#=2?0:#Cr#),(#Bl.Bg.Md#=2?0:#Cr#) | #da.sk#
DynamicVariables=1