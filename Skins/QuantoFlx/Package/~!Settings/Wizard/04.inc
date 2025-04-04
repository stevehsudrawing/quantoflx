[Variables]
Pg.Tt=#St.Setup.0700#
Pg.Im=#Pk@#Image\Setup\01

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[!WriteKeyValue "Variables" "Page" "05" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp
Shape=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | Fill Color #Cl.Gn.Bg.Ti# | #da.sk# 
Shape2=Rectangle (-#sc#),(-#sc#),((200+2)*#sc#),((32+2)*#sc#),(#Cr#/2+#sc#),(#Cr#/2+#sc#) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
X=((215-200/2)*#sc#)
Y=((215+128)*#sc#)
MouseActionCursor=1
MouseActionCursorName=TEXT
LeftMouseUpAction=[!ShowMeter "C#CURRENTSECTION#"][!Redraw][!CommandMeasure "Ms.#CURRENTSECTION#" "ExecuteBatch 1"]
[Mt.Op.00.01]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=#Us.Nm#
X=(8*#sc#)r
Y=(16*#sc#)r
StringAlign=LeftCenter
[Mt.Op.00.02]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Edit
W=(16*#sc#)
H=(16*#sc#)
X=(((215-200/2+200)*#sc#)-24*#sc#)
Y=(((215+128)*#sc#)+8*#sc#)
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft
Text=#St.Setup.0701#
FontColor=#Cl.Gn.Fg.Gn#,192
StringAlign=CenterCenter
X=(((215-200/2)*#sc#)+(200*#sc#)/2)
Y=(((215+128)*#sc#)-16*#sc#)
[CMt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt_Wd
Shape=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | Fill Color #Cl.Gn.Bg.Ti# | #da.sk# 
Shape2=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | Fill Color #Cl.Ac.Bg.Gn# | #da.sk#
Shape3=Rectangle 0,0,(200*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | Offset 0,(-2*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
X=((215-200/2)*#sc#)
Y=((215+128)*#sc#)
Hidden=1
[Ms.Mt.Op.00.00]
Measure=Plugin
Plugin=InputText
X=([Mt.Op.00.00:X]+6*#sc#)
Y=([Mt.Op.00.00:Y]+6*#sc#)
W=([Mt.Op.00.00:W]-12*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#Us.Nm]
Command1=[!Delay 16][!WriteKeyValue Variables "Us.Nm" "$UserInput$" "#@#Config\Settings.inc"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.Op.00.00][!Redraw]
DynamicVariables=1

[Ms.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=0
IconCache=#@#Cache\Icon\
IconSize=1
ReturnValue=Path
FileInitialDirectory=%HOMEDRIVE%\
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue Variables "Us.Im" "$Path$" "#@#Config\Settings.inc"][!Refresh]

[Mt.Zn.Cstm]
Meter=Shape
X=(((448+215)*#sc#)-96*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#-96*#sc#)
Shape=Ellipse (96*#sc#),(96*#sc#),(96*#sc#) | #da.sk# | Fill Color 255,255,255,(255*#Vr.GlCtOp#)
DynamicVariables=1
Group=Gp.Normal

[Mt.UserImageBg]
Meter=Image
Container=Mt.Zn.Cstm
Group=Gp.Normal
ImageName=#@#Image\MonoIcons\128\DefaultUserImage
ImageTint=#Cl.Gn.Fg.Gn#,128
W=(96*2*#sc#)
H=(96*2*#sc#)
[Mt.UserImage]
Meter=Image
MeterStyle=St.Bt.Mt
Container=Mt.Zn.Cstm
Group=Gp.Normal
ImageName=#Us.Im#
W=(96*2*#sc#)
H=(96*2*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseImage 1"]
ToolTipText=#St.Setup.0702#
MouseActionCursor=1
MouseActionCursorName=HAND
[GHMt.UserImage.01]
Meter=Shape
Container=Mt.Zn.Cstm
Group=Gp.Normal|HMt.UserImage
Y=((96*2-32)*#sc#)
Shape=Rectangle 0,0,(96*2*#sc#),(32*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#,192
Shape2=Rectangle 0,0,(96*2*#sc#),(-2*#sc#) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(96*2*#sc#),(2*#sc#) | #da.sk# | Fill Color 255,255,255,64
DynamicVariables=1
Hidden=1
[GHMt.UserImage.02]
Meter=Image
MeterStyle=St.Mi|St.Sl
Container=Mt.Zn.Cstm
Group=Gp.Normal|HMt.UserImage
ImageName=#@#Image\MonoIcons\16\SearchForImage
X=((96*2*#sc#-16)/2)
Y=(8*#sc#)r
W=(16*#sc#)
H=(16*#sc#)
Hidden=1