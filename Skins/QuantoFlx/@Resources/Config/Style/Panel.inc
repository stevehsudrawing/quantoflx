[Variables]
Gl.ORA=[!Zpos #RmSk.DL#][!SetTransparency "(255*#RmSk.Op#)"][!Draggable "(1-#RmSk.Lk#)"]
Gl.MOA=[#|Gl.MOA|.Em_[#Em]]
Gl.MLA=[#|Gl.MLA|.Em_[#Em]]

Bnd.L=0
; Left Binding (0/1)
Bnd.R=0
; Right Binding (0/1)
Bnd.T=0
; Top Binding (0/1)
Bnd.B=0
; Bottom Binding (0/1)

Pn.Zn.Or=(#Sp#-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Pn.Zn.DC=(#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Pn.Zn.Gn=(#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Pn.Zn.P1=(#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*#PW#+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*#PH#+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0))
Pn.Zn.P2=(#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*#PW#+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0))
Pn.Zn.Sq=(1),(1),(64*#Sc#*#PW#-2),(64*#Sc#*#PH#-2)
Fl.Cl.Bg=Fill Color #Cl.Gn.Bg.Gn#
; Fill in Background color
Fl.Cl.Le=Fill Color 255,255,255,(255*#Le.St#*#Op.Bg_Cstm#*(1-#Bnd.T#))
; Fill in light color (white)

MOA.AutoQ_0=[!ShowMeter Mt.Rsz]
MLA.AutoQ_0=[!HideMeter Mt.Rsz]
MOA.AutoQ_1=[]
MLA.AutoQ_1=[]

[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Panels
DefaultAlwaysOnTop=#RmSk.DL#
SkinWidth=(64*#Sc#*(#PW#))
SkinHeight=(64*#Sc#*(#PH#))
MiddleMouseUpAction=#Ac.Variants#
OnRefreshAction=#Gl.ORA#
MouseOverAction=#Gl.MOA#
MouseLeaveAction=#Gl.MLA#

@include=#@#Config\BlurMode\#Bl.Gl.Md#\Panel.inc

[St.Pn]
; General Panel Style
Shape=Rectangle #Pn.Zn.P2# | #Da.Sk# | #Fl.Cl.Bd#
Shape2=Rectangle #Pn.Zn.P1# | #Da.Sk# | #Fl.Cl.Bd#
Shape3=Rectangle #Pn.Zn.Gn#
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend FlClBG_#PnGdnt.Enab#
Shape7=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend Hover
Shape8=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Bd#*#Op.Bg_Cstm#)
Shape9=Rectangle #Pn.Zn.Sq#
Shape10=Combine Shape8 | Exclude Shape9
;Shape11=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 0,0,0,(255)
;Shape12=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 255,255,255,(255)
;Shape13=Rectangle #Pn.Zn.Gn# | Offset -2,-2
;Shape14=Rectangle #Pn.Zn.Gn# | Offset 2,2
;Shape15=Combine Shape11 | Exclude Shape13
;Shape16=Combine Shape12 | Exclude Shape14
;Shape17=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 128,128,128,(255)
;Shape18=Combine Shape17 | Exclude Shape13 | Exclude Shape14
FlClBG_0=#Fl.Cl.Bg#,(255*#Op.Bg#*#Op.Bg_Cstm#*(1-#PnGdnt.Enab#))
FlClBG_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg#*#Op.Bg_Cstm#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg#*#Op.Bg_Cstm#) ; 1
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1

[St.PnQRsz_1]
MouseOverAction=[!ShowMeter Mt.Rsz][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Rsz][!Redraw]

[St.PnSr]
MouseOverAction=[!ShowMeter Mt.Srbr][#MOA.AutoQ_[#AutoQ]][#MOA.TcMd_[&Ms.Calc.IsFull][#TcMd]][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Srbr][#MLA.AutoQ_[#AutoQ]][#MLA.TcMd_[&Ms.Calc.IsFull][#TcMd]][!Redraw]
MouseScrollUpAction=[!SetVariable "Index" "(Clamp((#Index#-#IdxSpLt#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUA#[!Update][!Redraw]
MouseScrollDownAction=[!SetVariable "Index" "(Clamp((#Index#+#IdxSpLt#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDA#[!Update][!Redraw]

[St.Zn]
; "Panel Zone" Style
X=(#Ppos.X#)
Y=(#Ppos.Y#)
Shape=Rectangle #Pn.Zn.Or# | #da.sk#
DynamicVariables=1

[St.Le]
; Light Effect Style as an independent meter
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill LinearGradient GdntHlL
Shape2=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape3=Rectangle #Pn.Zn.DC#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Le#
Shape6=Rectangle #Pn.Zn.Gn# | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape7=Combine Shape5 | Exclude Shape6
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
DynamicVariables=1

[St.Le.Rtt]
Shape8=Ellipse ((32*min(#PW#,#PH#))*#sc#+(#Ppos.X#)),((32*min(#PW#,#PH#))*#sc#+(#Ppos.Y#)),(((24*min(#PW#,#PH#)))*#sc#)
Shape9=Combine Shape | Exclude Shape8
Shape10=Ellipse ((32*min(#PW#,#PH#))*#sc#+(#Ppos.X#)),((32*min(#PW#,#PH#))*#sc#+(#Ppos.Y#)),(((24*min(#PW#,#PH#)))*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.01
Shape11=Ellipse (((32*min(#PW#,#PH#))-((24*min(#PW#,#PH#)))*1.725*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),(((32*min(#PW#,#PH#))-((24*min(#PW#,#PH#)))*1.725*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),(((24*min(#PW#,#PH#)))*2*#sc#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Ellipse ((32*min(#PW#,#PH#))*#sc#+(#Ppos.X#)),((32*min(#PW#,#PH#))*#sc#+(#Ppos.Y#)),(((24*min(#PW#,#PH#)))*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.02
Shape14=Combine Shape13 | Intersect Shape11
Shape15=Ellipse ((32*min(#PW#,#PH#))*#sc#+(#Ppos.X#)),((32*min(#PW#,#PH#))*#sc#+(#Ppos.Y#)),((((24*min(#PW#,#PH#)))-1)*#sc#) | #da.bg# | StrokeWidth (2*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03
GdntHlL_Cstm.01=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#*2) ; 0 | 255,255,255,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 1.0
GdntHlL_Cstm.02=#Le.Ag# | 0,0,0,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 0,0,0,0 ; 1.0
GdntHlL_Cstm.03=#Le.Ag# | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,0 ; 1.0

[St.RlB]
Shape=Ellipse ((32*min(#PW#,#PH#))*#Sc#),((32*min(#PW#,#PH#))*#Sc#),((24*min(#PW#,#PH#))*#Sc#) | StrokeWidth (1*#Sc#) | Stroke Color #Cl.Gn.Fg.Gn#,(48*#Op.Fg#) | Fill Color 0,0,0,0
DynamicVariables=1
[St.Rl]
MeasureName=Ms.Rl
X=(8*min(#PW#,#PH#)*#Sc#)
Y=(8*min(#PW#,#PH#)*#Sc#)
W=(48*min(#PW#,#PH#)*#Sc#)
H=(48*min(#PW#,#PH#)*#Sc#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(min(#PW#,#PH#)*#Sc#)
LineStart=(23*min(#PW#,#PH#)*#Sc#)
LineLength=(24*min(#PW#,#PH#)*#Sc#)
LineColor=#Cl.Ac.Bg.Gn#,(255*#Op.Fg#)
Solid=1
AntiAlias=1
DynamicVariables=1

[St.TitleBg]
Shape=Rectangle 0,0,(64*#PW#*#sc#),(32*#sc#) | #da.sk# | Fill Color #cl.gn.fg.Gn#,(16*#Op.Bg#*#Op.Bg_Cstm#)
DynamicVariables=1
[St.Title]
X=(12*#sc#)
Y=(16*#sc#)
W=((64*#PW#-12*2)*#sc#)
StringAlign=LeftCenter
ClipString=1
DynamicVariables=1

[St.Gp.MvBts]
Group=Gp.MvBts
Hidden=1
[St.Sp.MvBts]
Shape=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle (-#sc#),(-#sc#),((24+2)*#sc#),((24+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
[St.Bt.MvPre]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-#IdxSpLt#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUA#[!Update][!Redraw]
[St.Bt.MvNxt]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+#IdxSpLt#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDA#[!Update][!Redraw]
[St.Bt.MvPrePg]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-#DisQ#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUAPg#[!Update][!Redraw]
[St.Bt.MvNxtPg]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+#DisQ#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDAPg#[!Update][!Redraw]
[St.Im.MvBts]
W=(16*#sc#)
H=(16*#sc#)
DynamicVariables=1

[St.Srbr.Ver]
Shape=Rectangle (64*#Sc#*#PW#-4*#Sc#-#sp#),(#Cr#+(64*#Sc#*#PH#-#Cr#*2)*#Index#*1/Max(#MaxQ#,1)),(4*#sc#),((64*#Sc#*#PH#-#Cr#*2)*#DisQ#/Max(#MaxQ#,1)),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(64*(max(#Cl.SwBd#,1))*#op.fg#*[Ms.Calc.IsFull])
DynamicVariables=1
Hidden=1
[St.Im.MvPre.Ver]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPre.00:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Ver.01]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+0*#sc#)
[St.Im.MvPrePg.Ver.02]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+8*#sc#)
[St.Im.MvNxt.Ver]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxt.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Ver.01]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+0*#sc#)
[St.Im.MvNxtPg.Ver.02]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+8*#sc#)
[St.Srbr.Hor]
Shape=Rectangle (#Cr#+(64*#Sc#*#PW#-#Cr#*2)*#Index#*1/Max(#MaxQ#,1)),(64*#Sc#*#PH#-4*#Sc#-#sp#),((64*#Sc#*#PW#-#Cr#*2)*#DisQ#/Max(#MaxQ#,1)),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(64*(max(#Cl.SwBd#,1))*#op.fg#*[Ms.Calc.IsFull])
DynamicVariables=1
Hidden=1
[St.Im.MvPre.Hor]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPre.00:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]+0*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]+8*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvNxt.Hor]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxt.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]+0*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]+8*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)