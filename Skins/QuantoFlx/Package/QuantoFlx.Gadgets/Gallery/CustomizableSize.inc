[Rainmeter]
Update=(#UpdateDivider#*1000)
;OnRefreshAction=#Gl.ORA#[!UpdateMeasure Ms.Quote][!Update]
MiddleMouseUpAction=[]

[Variables]
Oa.Em_0=[!CommandMeasure "Ms.An" "Execute 1"][!ShowMeterGroup Cstm.Gp.01][!Redraw]
La.Em_0=[!CommandMeasure "Ms.An" "Execute 2"][!HideMeterGroup Cstm.Gp.01][!Redraw]
Oa.Em_1=[!ShowMeterGroup Cstm.Gp.01][!ShowMeterGroup AnGp][!Redraw]
La.Em_1=[!HideMeterGroup Cstm.Gp.01][!HideMeterGroup AnGp][!Redraw]
An0=0

[Ms.An]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FI,1,40
ActionList2=Repeat FO,1,40
FI=[!SetVariable An0 "(Clamp((#An0#+0.025),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
FO=[!SetVariable An0 "(Clamp((#An0#-0.025),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
DynamicVariables=1

[Ms.Quote]
Measure=Plugin
Plugin=QuotePlugin
PathName=#PathName#
Subfolders=#Subfolders#
FileFilter=*.png;*.jpg;*.bmp;*.gif;*.tif;.webp
DynamicVariables=1

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
MouseOverAction=[#Oa.Em_[#Em]]
MouseLeaveAction=[#La.Em_[#Em]]

[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
[Mt.Zn2]
Meter=Shape
MeterStyle=St.Zn

[Mt.Image]
Meter=Image
MeterStyle=St.ZnCt
MeasureName=Ms.Quote
ImageTint=255,255,255,(255*#Op.Fg#)
W=(64*#PW#*#Sc#)
H=(64*#PH#*#Sc#)
PreserveAspectRatio=2

[St.Cstm.Gp.01]
Group=Cstm.Gp.01
Hidden=1

[St.Cstm.Ps.Nx.01]
X=(-32*#sc#)r
Y=0r

[St.Cstm.Im.01]
W=(16*#Sc#)
H=(16*#Sc#)
[St.Cstm.Hv.01]
Shape=Rectangle 0,0,(24*#Sc#),(24*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
Hidden=1

[Mt.CtBr.00]
Meter=Shape
MeterStyle=St.ZnCt2
Shape=Rectangle (#Sp#*2),(#Sp#*2),(64*#PW#*#sc#-#Sp#*4),(32*#sc#),(Min((#Cr#-#Sp#*2),16*#sc#)),(Min((#Cr#-#Sp#*2),16*#sc#)) | #da.sk# | Fill Color #cl.gn.Bg.Gn#,(#Em#=0?(205*#An0#):255)
Shape2=Rectangle (#Sp#*2),(#Sp#*2),(64*#PW#*#sc#-#Sp#*4),(32*#sc#),(Min((#Cr#-#Sp#*2),16*#sc#)),(Min((#Cr#-#Sp#*2),16*#sc#)) | #da.sk# | Fill LinearGradient GdntHlL_Cstm
GdntHlL_Cstm=#Le.Ag# | 255,255,255,(#Em#=0?(128*#Hl.Op#*#Op.Bg_Cstm#*#An0#):128*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(#Em#=0?(64*#Hl.Op#*#Op.Bg_Cstm#*#An0#):64*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(#Em#=0?(32*#Hl.Op#*#Op.Bg_Cstm#*#An0#):32*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
DynamicVariables=1
Hidden=#Em#
Group=AnGp
[Ms.Mt.CtBr.01.01]
Measure=String
String=[&Ms.Quote]
RegExpSubstitute=1
Substitute="\S+\\":""
DynamicVariables=1
[Ms.Mt.CtBr.01.02]
Measure=String
String=[Ms.Quote]
Substitute="\[Ms.Mt.CtBr.01.01]":""
DynamicVariables=1
[Mt.CtBr.0S]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Gp.01
X=([Mt.CtBr.00:X]+#Sp#*2+4*#Sc#+#Sp#)
Y=([Mt.CtBr.00:Y]+#Sp#*2+16*#Sc#)
Text=[Ms.Mt.CtBr.01.01]
StringAlign=LeftCenter
W=(64*#PW#*#sc#-#Sp#*4-(128+8)*#Sc#)
ClipString=1
ToolTipText=[Ms.Mt.CtBr.01.02]
[Mt.CtBr.01]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Bt.Gn|St.Cstm.Gp.01
X=(64*#PW#*#sc#-#Sp#*4-20*#sc#)
Y=([Mt.CtBr.00:Y]+#Sp#*2+8*#Sc#)
ImageName=#@#Image\MonoIcons\16\Settings
LeftMouseUpAction=#Ac.Skin_Settings#
ToolTipText=#Tm.Skin_Settings#
[Mt.CtBr.02]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.Nx.01|St.Bt.Gn|St.Cstm.Gp.01
ImageName=#@#Image\MonoIcons\16\Open
LeftMouseUpAction=["#PathName#"]
ToolTipText=#Tm.Open_this_folder#
[Mt.CtBr.03]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.Nx.01|St.Bt.Gn|St.Cstm.Gp.01
ImageName=#@#Image\MonoIcons\16\Refresh
LeftMouseUpAction=[!UpdateMeasure Ms.Quote][!Update]
ToolTipText=#Tm.Next_image#
[Mt.CtBr.04]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.Nx.01|St.Bt.Gn|St.Cstm.Gp.01
ImageName=#@#Image\MonoIcons\16\ZoomIn
LeftMouseUpAction=["[&Ms.Quote]"]
ToolTipText=#Tm.View#

[HMt.CtBr.01]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Hv.01
X=([Mt.CtBr.01:X]-4*#Sc#)
Y=([Mt.CtBr.01:Y]-4*#Sc#)
[HMt.CtBr.02]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Hv.01|St.Cstm.Ps.Nx.01
[HMt.CtBr.03]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Hv.01|St.Cstm.Ps.Nx.01
[HMt.CtBr.04]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Hv.01|St.Cstm.Ps.Nx.01

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Gp.01|St.Rsz
ImageTint=255,255,255,255