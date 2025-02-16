[Rainmeter]
SolidColor=0,0,0,0
MiddleMouseUpAction=#Ac.Variants#

[Variables]
Status=1
TTT.Status_0=#Tm.Show_Skins#
TTT.Status_1=#Tm.Hide_Skins#
TTT.Lock_0=#Tm.Lock_the_Layout#
TTT.Lock_1=#Tm.Unlock_the_Layout#
LMUA.Status_0=[!ShowFade *][!HideGroup "Quanto_Flx.Shortcut\AutoHide_1"]
LMUA.Status_1=[!HideFade *]

[St.UsIg.Zn]
MeterStyle=St.Bt.Gn
Shape=Ellipse (24*#sc.cstm#),(24*#sc.cstm#),(24*#sc.cstm#) | #da.sk# | Fill Color 255,255,255,(255*#Op.Bg_Cstm#)
DynamicVariables=1
LeftMouseUpAction=["Shell:::{59031a47-3f72-44a7-89c5-5595fe6b30ee}"]
MouseActionCursor=1
MouseActionCursorName=HAND
ToolTipText=#Tm.User_s_Folder#
Hidden=#HUI#
[St.UsIg.Null]
ImageName=#@#Image\MonoIcons\128\DefaultUserImage.png
W=(48*#sc.cstm#)
H=(48*#sc.cstm#)
ImageTint=#Cl.Bt.TR#
Container=Mt.UsIg.Zn
DynamicVariables=1
[St.UsIg]
ImageName=#Us.Im#
W=(48*#sc.cstm#)
H=(48*#sc.cstm#)
DynamicVariables=1
Container=Mt.UsIg.Zn
[St.UsIg.Bd]
Shape=Ellipse (24*#sc.cstm#),(24*#sc.cstm#),(24*#sc.cstm#) | #da.sk# | Fill Color #Cl.Bt.TR#,(255*#Op.Bg_Cstm#)
Shape2=Ellipse (24*#sc.cstm#),(24*#sc.cstm#),(23*#sc.cstm#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Hidden=#HUI#
[HSt.UsIg.Zn]
Shape=Ellipse (24*#sc.cstm#),(24*#sc.cstm#),(24*#sc.cstm#) | #da.sk# | Fill Color 255,255,255,(255*#Op.Bg_Cstm#*0.1)
DynamicVariables=1
Hidden=1

[St.Cstm.Im.01]
W=(32*#sc.cstm#)
H=(32*#sc.cstm#)
SolidColor=0,0,0,1

[St.Cstm.Hv.01]
Shape=Rectangle (-8*#sc.cstm#),(-8*#sc.cstm#),(48*#sc.cstm#),(48*#sc.cstm#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Bt.TR#,(255*#Op.Bg_Cstm#*0.1)
DynamicVariables=1
Hidden=1
[St.Cstm.Hv.02]
Shape=Rectangle (-8*#sc.cstm#),(-8*#sc.cstm#),(48*#sc.cstm#),(48*#sc.cstm#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Bt.LL#,(255*#Op.Bg_Cstm#*0.1)
DynamicVariables=1
Hidden=1

[St.Manage_Project]
ImageTint=#Cl.Bt.TR#,(255*#Op.Bg_Cstm#)
ImageName=#Pk@#Image\MonoIcons\32\Settings
LeftMouseUpAction=#Ac.Manage_Project#
ToolTipText=#Tm.Manage_Project#
[St.Show_or_Hide_Skins]
ImageTint=#Cl.Bt.TR#,(255*#Op.Bg_Cstm#)
ImageName=#Pk@#Image\MonoIcons\32\Visible_#Status#
LeftMouseUpAction=[#LMUA.Status_[#Status]][!ShowFade][!SetVariable "Status" "(1-#Status#)"][!Update]
ToolTipText=[#TTT.Status_[#Status]]
[St.Lock]
ImageTint=#Cl.Bt.TR#,(255*#Op.Bg_Cstm#)
ImageName=#Pk@#Image\MonoIcons\32\Lock_#RmSk.Lk#
LeftMouseUpAction=[!WriteKeyValue "Variables" "RmSk.Lk" "(1-#RmSk.Lk#)" "#@#Config\Settings.inc"][!SetVariable "RmSk.Lk" "(1-#RmSk.Lk#)"][!Draggable "#RmSk.Lk#" "*"][!Update]
ToolTipText=[#TTT.Lock_[#RmSk.Lk]]
[St.Power]
ImageTint=#Cl.Bt.LL#,(255*#Op.Bg_Cstm#)
ImageName=#Pk@#Image\MonoIcons\32\Power
LeftMouseUpAction=[!SetVariable "CM" "#Sk.Nm#.CMPower"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "#Sk.Nm#.CMCommon"][!Delay 16][!Update]
ToolTipText=#Tm.Power#
[St.Start]
ImageTint=#Cl.Bt.LL#,(255*#Op.Bg_Cstm#)
ImageName=#Pk@#Image\MonoIcons\32\Windows_#SIS#
LeftMouseUpAction=["#@#Applications\OpenStartMenu.exe"]
ToolTipText=#Tm.Start#
Hidden=#HS#

[Ms.Now]
Measure=Time
Format=%H
[Ms.Greeting]
Measure=Calc
Formula=(([Ms.Now]>3)&&([Ms.Now]<12)?1:(([Ms.Now]>11)&&([Ms.Now]<18)?2:(([Ms.Now]>17)&&([Ms.Now]<24)?3:4)))
DynamicVariables=1
[Ms.Date]
Measure=Time
Format=[#Tf.Dt]
DynamicVariables=1
FormatLocale=#Lg#