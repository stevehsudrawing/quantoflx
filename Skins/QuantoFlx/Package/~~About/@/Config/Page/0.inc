[Variables]
Pg.Ty=Empty
@include=#ROOTCONFIGPATH#Package\~~About\@\Config\SkinSettings\UpdateChecker\Silent.inc

[Mt.Ip.Im.01]
Meter=Image
MeterStyle=St.ZnPg
ImageName=#Pk@#Image\GetStarted\00.png
DynamicVariables=1
PreserveAspectRatio=1
Y=(#CURRENTCONFIGHEIGHT#-256*#sc#)
W=(576*#sc#)
ImageTint=255,255,255,32
Greyscale=1
[Mt.Ip.Im.02]
Meter=Image
MeterStyle=St.ZnCt2
ImageName=#@#Image\QuantoTitle.png
DynamicVariables=1
PreserveAspectRatio=1
X=((48+84)*#sc#)
Y=((145+20)*#sc#)
W=(360*#sc#)

[St.Cu.Tx.01]
FontColor=#Cl.Gn.Fg.Gn#,128
[St.Cu.Ps.Tx.Dn.01]
X=0r
Y=(4*#sc#)R
[St.Cu.Ps.Tx.Dn.02]
X=0r
Y=(8*#sc#)R

[Mt.Tx.01.01]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Tx.01
X=(72*#sc#)
Y=(280*#sc#)
Text=#Tm.Main_Author#
[Mt.Tx.01.02]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=#Project.Athr#
[Mt.Tx.02.01]
Meter=String
X=(Max([Mt.Tx.01.01:XW],[Mt.Tx.01.02:XW])+10*#sc#-[Mt.Zn:X])
Y=([Mt.Tx.01.01:Y])
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Tx.01|St.Cu.Ps.Tx.Dn.02
Text=#Tm.Version#
[Mt.Tx.02.02]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=#Project.Vrsn# #Project.VrSx# (#Tm.Build# #Project.VBld#)
[Mt.Tx.03.01]
Meter=String
X=(Max([Mt.Tx.02.01:XW],[Mt.Tx.02.02:XW])+10*#sc#-[Mt.Zn:X])
Y=([Mt.Tx.01.01:Y])
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Tx.01|St.Cu.Ps.Tx.Dn.02
Text=#Tm.License#
[Mt.Tx.03.02]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cu.Ps.Tx.Dn.01
Text=#Project.Licn#

[St.Cstm.Sp.01]
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),((480+1*2)*#Sc#),((40+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,(480*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,(480*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,(128+128*#Op.Bg#)
Shape5=Rectangle 0,0,(480*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Extend Hover
DynamicVariables=1

[St.Cstm.Ps.YNx.01]
X=0r
Y=(48*#sc#)r

[Ms.StringDetect1]
Measure=String
String=#Wbst.01.Lk#,#Wbst.02.Lk#
DynamicVariables=1
RegExpSubstitute=1
Substitute="^https://github.com/stevehsudrawing/quantoflx,https://www.patreon.com/quantoseries$|^https://github.com/stevehsudrawing/quantoflx,https://afdian.com/a/stevehsu$":"1","[^1]*":"0"

[Mt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Sp.01|St.Bt.Sp
;Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.01.Hd#)
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx"]
X=([Mt.Tx.01.02:X]-[Mt.Zn:X])
Y=([Mt.Tx.01.02:YH]+(8+48+32)*#sc#)
[Mt.Op.02]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Sp.01|St.Bt.Sp|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.02.Hd#)
LeftMouseUpAction=["#Wbst.02.Lk#"]
[Mt.Op.03]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Sp.01|St.Bt.Sp|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.03.Hd#)
LeftMouseUpAction=["#Wbst.03.Lk#"]
[Mt.Op.04]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Sp.01|St.Bt.Sp|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.04.Hd#)
LeftMouseUpAction=["#Wbst.04.Lk#"]
[Mt.Op.05]
Meter=Shape
MeterStyle=St.ZnCt2|St.Cstm.Sp.01|St.Bt.Sp|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.05.Hd#)
LeftMouseUpAction=["#Wbst.05.Lk#"]

[St.Cstm.Im.01]
W=(20*#sc#)
H=(20*#sc#)
[St.Cstm.Im.02]
W=(16*#sc#)
H=(16*#sc#)
ImageName=#@#Image\MonoIcons\16\Open

[Mt.Op.01.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01
ImageName=#Wbst.01.Im#
;Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.01.Hd#)
X=([Mt.Op.01:X]+10*#sc#-[Mt.Zn:X])
Y=([Mt.Op.01:Y]+10*#sc#)
[Mt.Op.02.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
ImageName=#Wbst.02.Im#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.02.Hd#)
[Mt.Op.03.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
ImageName=#Wbst.03.Im#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.03.Hd#)
[Mt.Op.04.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
ImageName=#Wbst.04.Im#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.04.Hd#)
[Mt.Op.05.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
ImageName=#Wbst.05.Im#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.05.Hd#)

[Mt.Op.01.OpIm]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.02
;Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.01.Hd#)
X=([Mt.Op.01:XW]-(10+16)*#sc#-[Mt.Zn:X])
Y=([Mt.Op.01:Y]+12*#sc#)
[Mt.Op.02.OpIm]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.02.Hd#)
[Mt.Op.03.OpIm]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.03.Hd#)
[Mt.Op.04.OpIm]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.04.Hd#)
[Mt.Op.05.OpIm]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.05.Hd#)

[St.Cstm.Tx.01]
W=(405*#sc#)
ClipString=2
StringAlign=LeftCenter

[Mt.Op.01.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01
Text=#Wbst.01.Tx#
;Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.01.Hd#)
X=([Mt.Op.01:X]+40*#sc#-[Mt.Zn:X])
Y=([Mt.Op.01:Y]+20*#sc#)
[Mt.Op.02.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
Text=#Wbst.02.Tx#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.02.Hd#)
[Mt.Op.03.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
Text=#Wbst.03.Tx#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.03.Hd#)
[Mt.Op.04.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
Text=#Wbst.04.Tx#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.04.Hd#)
[Mt.Op.05.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
Text=#Wbst.05.Tx#
Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1])||#Wbst.05.Hd#)

[Mt.Cstm.Title_ExtlLink]
Meter=String
MeterStyle=St.ZnCt2|St.Ft
FontColor=#Cl.Gn.Fg.Gn#,192
Text=#Tm.External_Links#
;Hidden=((1-[Ms.StringDetect])||(1-[Ms.StringDetect1]))
X=([Mt.Tx.01.02:X]-[Mt.Zn:X])
Y=([Mt.Op.01:Y]-8*#sc#)
StringAlign=LeftBottom

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt2
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),(((480-168*[Ms.StringDetect])+1*2)*#Sc#),((40+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((480-168*[Ms.StringDetect])*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((480-168*[Ms.StringDetect])*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,(128+128*#Op.Bg#)
Hover=Fill Color 0,0,0,0
X=([Mt.Tx.01.02:X]-[Mt.Zn:X])
Y=([Mt.Tx.01.02:YH]+8*#sc#)
DynamicVariables=1
Hidden=(1-[Ms.StringDetect])
[Mt.Op.00.00.Im]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi|St.Sl|St.Cstm.Im.01
ImageName=#@#Image\MonoIcons\20\Update
X=([Mt.Op.00.00:X]+10*#sc#-[Mt.Zn:X])
Y=([Mt.Op.00.00:Y]+10*#sc#)
Hidden=(1-[Ms.StringDetect])
[Mt.Op.00.00.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Cstm.Tx.01
Text=#Tm.Automatic_Update#
X=([Mt.Op.00.00:X]+40*#sc#-[Mt.Zn:X])
Y=([Mt.Op.00.00:Y]+20*#sc#)
Hidden=(1-[Ms.StringDetect])

[Ms.Active.01]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")] = 1
IfTrueAction=[!SetOption Mt.Op.00.03 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Op.00.03 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent" "Main.ini"][!Update]"""][!Update][!Redraw]

[Mt.Op.00.01]
Meter=Shape
MeterStyle=St.ZnCt2|St.Bt.Sp
X=([Mt.Op.00.00:XW]+8*#sc#-[Mt.Zn:X])
Y=[Mt.Op.00.00:Y]
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),(((112)*[Ms.StringDetect]+1*2)*#Sc#),((40+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,(128+128*#Op.Bg#)
Shape5=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Extend Hover
DynamicVariables=1
Hidden=(([Ms.StringDetect]=0)||(#UpdateDetected#))
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window" "Checking.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window"][!ZPos 1 "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window"]
[Mt.Op.00.01.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl
Text=#Tm.Check_Now#
StringAlign=CenterCenter
X=([Mt.Op.00.01:X]+[Mt.Op.00.01:W]/2-[Mt.Zn:X])
Y=([Mt.Op.00.01:Y]+[Mt.Op.00.01:H]/2)
W=([Mt.Op.00.01:W]-32*#sc#)
ClipString=2
Hidden=(([Ms.StringDetect]=0)||(#UpdateDetected#))
[Mt.Op.00.02]
Meter=Shape
MeterStyle=St.ZnCt2|St.Bt.Sp
X=([Mt.Op.00.00:XW]+8*#sc#-[Mt.Zn:X])
Y=[Mt.Op.00.00:Y]
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),(((112)*[Ms.StringDetect]+1*2)*#Sc#),((40+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape5=Rectangle 0,0,((112)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Extend Hover
DynamicVariables=1
Hidden=(([Ms.StringDetect]=0)||(1-#UpdateDetected#))
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window" "Main.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window"][!ZPos 1 "#ROOTCONFIG#\Package\~~About\UpdateChecker\Window"]
[Mt.Op.00.02.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Ft.Bd
Text=#Tm.Update_available#
FontColor=#Cl.Ac.Fg.Gn#
StringAlign=CenterCenter
X=([Mt.Op.00.02:X]+[Mt.Op.00.02:W]/2-[Mt.Zn:X])
Y=([Mt.Op.00.02:Y]+[Mt.Op.00.02:H]/2)
W=([Mt.Op.00.02:W]-8*#sc#)
ClipString=2
Hidden=(([Ms.StringDetect]=0)||(1-#UpdateDetected#))

[Mt.Op.00.03]
Meter=Shape
MeterStyle=St.ZnCt3
X=([Mt.Op.00.00:XW]-(160*[Ms.StringDetect]+8+4)*#sc#-[Mt.Zn:X])
Y=([Mt.Op.00.00:Y]+4*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]],(192+63*([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
GdntHv=#GdntHv#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
Hidden=(1-[Ms.StringDetect])
[Mt.Op.00.03.Tx]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]]
X=([Mt.Op.00.03:X]+110*#sc#-[Mt.Zn:X])
Y=([Mt.Op.00.03:Y]+18*#sc#)
StringAlign=RightCenter
Hidden=(1-[Ms.StringDetect])

[Mt.Op.00.04]
Meter=Shape
MeterStyle=St.ZnCt2
X=(380*#sc#)
Y=(250*#sc#)
Shape=Rectangle (-#sc#),(-#sc#),(([Mt.Op.00.04.Tx:W]+(16+2)*#sc#)),((24+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | Fill Color #Cl.Gn.Bg.Gn# | Rotate -15,0,0
Shape2=Rectangle (-#sc#),(-#sc#),(([Mt.Op.00.04.Tx:W]+(16+2)*#sc#)),((24+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | Fill Color #Cl.Wrng.Bg.Gn#,64 | Rotate -15,0,0
Shape3=Rectangle 0,0,(([Mt.Op.00.04.Tx:W]+(16)*#sc#)),(24*#sc#),(#Cr#/2),(#Cr#/2) | Rotate -15,0,0
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(([Mt.Op.00.04.Tx:W]+(16)*#sc#)),(24*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Wrng.Bg.Gn#,32 | Rotate -15,0,0
DynamicVariables=1
Hidden=([Ms.StringDetect])
Angle=15
[Mt.Op.00.04.Tx]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Ft.Bd
Text=UNOFFICIAL VERSION
X=((380+8)*#sc#)
Y=((250-1)*#sc#)
FontColor=#Cl.Wrng.Fg.Gn#
Hidden=([Ms.StringDetect])
Angle=(Rad(-15))

[Ms.Active]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1

[Mt.Op.00.05]
Meter=Shape
MeterStyle=St.ZnCt2|St.Bt.Sp
X=([Mt.Op.00.01:XW]+8*#sc#-[Mt.Zn:X])
Y=[Mt.Op.00.01:Y]
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),(((40)*[Ms.StringDetect]+1*2)*#Sc#),((40+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,((40)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,((40)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,(128+128*#Op.Bg#)
Shape5=Rectangle 0,0,((40)*[Ms.StringDetect]*#Sc#),(40*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Extend Hover
DynamicVariables=1
Hidden=(([Ms.StringDetect]=0)||([&Ms.Active:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]<>1))
LeftMouseUpAction=[!Delay 16][!WriteKeyValue "Variables" "FirstAU" "0" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "SkWideW" "#SkWide#" "#ROOTCONFIGPATH#Package\~~About\@\Config\SkinSettings\UpdateChecker\Silent.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent" "Settings.ini"][!Zpos 1 "#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent"][!Move #CURRENTCONFIGX# #CURRENTCONFIGY# "#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent"]
[Mt.Op.00.05.Tx]
Meter=Image
MeterStyle=St.ZnCt2|St.Mi
X=(([Mt.Op.00.01:XW]+8*#sc#-[Mt.Zn:X])+((40-16)*#sc#)/2)
Y=([Mt.Op.00.01:Y]+((40-16)*#sc#)/2)
W=(16*#sc#)
H=(16*#sc#)
Hidden=([Ms.StringDetect]=0)
ImageName=#@#Image\MonoIcons\16\Settings
ImageAlpha=(128+128*([&Ms.Active:IsActive("#ROOTCONFIG#\Package\~~About\UpdateChecker\Silent")]=1))

[Mt.Tx.SpTk]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Ft.Ww
FontSize=(8*#Sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,128
Text=#St.Special_Thanks_to.0001#
X=([Mt.Tx.01.01:X]-[Mt.Zn:X])
Y=(#CURRENTCONFIGHEIGHT#-24*#sc#)
W=(480*#sc#)
StringAlign=LeftBottom

;[Mt.EE]
;Meter=Shape
;MeterStyle=St.ZnCt2
;X=(536*#sc#)
;Y=(728*#sc#)
;Shape=Rectangle 0,0,(16*#sc#),(16*#sc#) | #da.sk# | #da.bg#
;LeftMouseUpAction=["https://www.youtube.com/watch?v=dQw4w9WgXcQ"]
;MouseActionCursor=1
;MouseActionCursorName=HAND
;Hidden=(1-[Ms.StringDetect])

[Mt.FAU.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((576-16-18)*#sc#)
Y=((160+234)*#sc#)
Shape=Rectangle (-[Mt.FAU.01:W]-8*#sc#),(-8*#sc#),([Mt.FAU.01:W]+16*#sc#),([Mt.FAU.01:H]+16*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend FlCl
Shape2=Path TRI | Offset (-40*#sc#),(-24*#sc#)
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle (-[Mt.FAU.01:W]-9*#sc#),(-9*#sc#),([Mt.FAU.01:W]+18*#sc#),([Mt.FAU.01:H]+18*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape5=Path TRI1 | Offset (-41*#sc#),(-25*#sc#)
Shape6=Rectangle (-[Mt.FAU.01:W]-8*#sc#),(-8*#sc#),([Mt.FAU.01:W]+16*#sc#),([Mt.FAU.01:H]+16*#sc#),(#Cr#/2),(#Cr#/2)
Shape7=Path TRI | Offset (-40*#sc#),(-24*#sc#)
Shape8=Combine Shape4 | Union Shape5 | Exclude Shape6 | Exclude Shape7
FlCl=Fill Color #Cl.Gn.Bg.Op#
TRI=0,(32*#sc#) | LineTo (32*#sc#),(32*#sc#) | LineTo (32*#sc#),0 | ClosePath
TRI1=0,(32.6*#sc#) | LineTo 0,(34*#sc#) | LineTo (34*#sc#),(34*#sc#) | LineTo (34*#sc#),0 | LineTo (32.6*#sc#),0 | ClosePath 
DynamicVariables=1
;Group=Gp.Sl.SuTt.FU
Hidden=(1-#FirstAU#)
[Mt.FAU.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=#St.Receive_the_latest_pre_release.0000#
FontColor=#Cl.Ac.Bg.Gn#
X=([Mt.FAU.00:X]-[Mt.Zn:X])
Y=([Mt.FAU.00:Y])
StringAlign=Right
;Group=Gp.Sl.SuTt.FU
Hidden=(1-#FirstAU#)
ClipStringW=(544*#sc#)
ClipString=2