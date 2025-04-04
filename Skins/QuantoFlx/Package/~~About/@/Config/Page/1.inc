[Variables]
Pg.Ty=Empty
@include=#@#Config\Language\en-us\TimeDatePlacematic.inc
@include2=#@#Config\Language\#Lg#\TimeDatePlacematic.inc
Srl=#PrvSrl#

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

[Ms.TransTime]
Measure=Time
TimeStamp=#Project.UdDt#
Format=#Tf.Dt#
FormatLocale=#Lg#
DynamicVariables=1

[Ms.Changelog]
Measure=WebParser
URL=file://#@#Config/Changelog.txt
RegExp=[^\f]+
CodePage=65001
Flags=ForceReload
DynamicVariables=1
RegExpSubstitute=1

[Mt.ScrollZone]
Meter=Shape
X=(48*#sc#+[Mt.Zn:X])
Y=(144*#sc#)
Shape=Rectangle 0,0,(528*#sc#),(624*#sc#) | #da.sk# | #da.bg#
DynamicVariables=1
MouseOverAction=[!ShowMeter Mt.ScrollBar][#MOA.TcMd_1[#TcMd]][!Redraw]
MouseLeaveAction=[!HideMeter Mt.ScrollBar][#MLA.TcMd_1[#TcMd]][!Redraw]
MouseScrollUpAction=[!SetVariable "Srl" "(Clamp((#Srl#-64*#sc#),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
MouseScrollDownAction=[!SetVariable "Srl" "(Clamp((#Srl#+64*#sc#),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
[Mt.ScrollBar]
Meter=Shape
MeterStyle=St.ZnPg
X=(#CURRENTCONFIGWIDTH#-[Mt.Zn:X]-6*#sc#)
Y=(144*#sc#)
Shape=Rectangle (0),(#Cr#+624*#sc#*#Srl#*1/Max(([Mt.Text:H]-64*#sc#),1)),(6*#sc#),(624*#sc#*(528*#sc#)/Max(([Mt.Text:H]-64*#sc#),1)),(#Cr#>0?(3*#sc#):0),(#Cr#>0?(3*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(128*((([Mt.Text:H]-64*#sc#)-528*#sc#)>(528*#sc#)))
DynamicVariables=1
Hidden=1
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
LeftMouseUpAction=[!SetVariable "Srl" "(Clamp((#Srl#-64*#sc#),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
[St.Bt.MvNxt]
LeftMouseUpAction=[!SetVariable "Srl" "(Clamp((#Srl#+64*#sc#),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
[St.Bt.MvPrePg]
LeftMouseUpAction=[!SetVariable "Srl" "(Clamp((#Srl#-(528*#sc#)),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
[St.Bt.MvNxtPg]
LeftMouseUpAction=[!SetVariable "Srl" "(Clamp((#Srl#+(528*#sc#)),0,(max((([Mt.Text:H]-64*#sc#)-528*#sc#),0))))"][!Update]
[St.Im.MvBts]
W=(16*#sc#)
H=(16*#sc#)
DynamicVariables=1
[St.Im.MvPre.Ver]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPre.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Ver.01]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+0*#sc#)
[St.Im.MvPrePg.Ver.02]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+8*#sc#)
[St.Im.MvNxt.Ver]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxt.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Ver.01]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+0*#sc#)
[St.Im.MvNxtPg.Ver.02]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+8*#sc#)
[St.Im.MvPre.Hor]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPre.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]-[Mt.Zn:X]+0*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]-[Mt.Zn:X]+8*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvNxt.Hor]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxt.00:X]-[Mt.Zn:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]-[Mt.Zn:X]+0*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]-[Mt.Zn:X]+8*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)
[Mt.Bt.MvPrePg.00]
Meter=Shape
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPrePg
X=(#CURRENTCONFIGWIDTH#-[Mt.Zn:X]-(24)*#sc#)
Y=((144)*#sc#)
[Mt.Bt.MvNxtPg.00]
Meter=Shape
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxtPg
X=(#CURRENTCONFIGWIDTH#-[Mt.Zn:X]-(24)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(24)*#sc#)
[Mt.Bt.MvPrePg.01]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.01
[Mt.Bt.MvPrePg.02]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.02
[Mt.Bt.MvNxtPg.01]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.01
[Mt.Bt.MvNxtPg.02]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.02
[Mt.Bt.MvPre.00]
Meter=Shape
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPre
X=(#CURRENTCONFIGWIDTH#-[Mt.Zn:X]-(24)*#sc#)
Y=((144+24)*#sc#)
[Mt.Bt.MvNxt.00]
Meter=Shape
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxt
X=(#CURRENTCONFIGWIDTH#-[Mt.Zn:X]-(24)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(24+24)*#sc#)
[Mt.Bt.MvPre.01]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPre.Ver
[Mt.Bt.MvNxt.01]
Meter=Image
MeterStyle=St.ZnPg|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxt.Ver

[Mt.Text]
Meter=String
MeterStyle=St.ZnPg|St.Ft|St.Ft.Ww|St.Ft.CmTxFm
Text=[Ms.Changelog]
W=((528-24)*#sc#)
X=(60*#sc#)
Y=(156*#sc#-#Srl#)