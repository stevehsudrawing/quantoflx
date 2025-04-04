[Rainmeter]
Update=1000
OnRefreshAction=#Gl.ORA#[!Update]

[Variables]
An0=0

Oa.|Enab.Anim|_0.|Em|_0=[!HideMeterGroup Gp.Alter]
La.|Enab.Anim|_0.|Em|_0=[!ShowMeterGroup Gp.Alter]
Oa.|Enab.Anim|_0.|Em|_1=[!HideMeterGroup Gp.Alter]
La.|Enab.Anim|_0.|Em|_1=[!ShowMeterGroup Gp.Alter]
Oa.|Enab.Anim|_1.|Em|_0=[!CommandMeasure "Ms.An" "Execute 1"]
La.|Enab.Anim|_1.|Em|_0=[!CommandMeasure "Ms.An" "Execute 2"]
Oa.|Enab.Anim|_1.|Em|_1=[!ShowMeterGroup AnGp]
La.|Enab.Anim|_1.|Em|_1=[!HideMeterGroup AnGp]

Oa.|Enab.Rate|_0=
La.|Enab.Rate|_0=
Oa.|Enab.Rate|_1=[!ShowMeterGroup Gp.RateSystem.0[Ms.RatingSystem]]
La.|Enab.Rate|_1=[!HideMeterGroup Gp.RateSystem.0[Ms.RatingSystem]]

Mt.Info.TTTt_0=
Mt.Info.TTTx_0=#Sc.Inactive.0001#
Mt.Info.TTTt_1=[Ms.Title]
Mt.Info.TTTx_1=[Ms.Artist]#CRLF#[Ms.Album]#CRLF#[Ms.Position.String] / [Ms.Duration.String]#CRLF##Tm.Click_to_copy_information#

|Mt.VolumeButton|.LUMA_0=[!CommandMeasure "Ms.Status" "SetVolume 100"][!Update][!Redraw]
|Mt.VolumeButton|.LUMA_1=[!CommandMeasure "Ms.Status" "SetVolume 0"][!Update][!Redraw]

Tx.IAE_0=""
Tx.IAE_1=" - %2"

PlayerPath.PlayerName_AIMP=%ProgramFiles%\AIMP\AIMP.exe
PlayerPath.PlayerName_CAD=%ProgramFiles%\foobar2000\foobar2000.exe
PlayerPath.PlayerName_iTunes=%ProgramFiles%\iTunes\iTunes.exe
PlayerPath.PlayerName_Spotify=%ProgramFiles%\Spotify\Spotify.exe
PlayerPath.PlayerName_Winamp=%ProgramFiles%\Winamp\Winamp.exe
PlayerPath.PlayerName_WMP=%ProgramFiles(x86)%\Windows Media Player\wmplayer.exe
PlayerPath.PlayerName_WLM=

[Ms.An]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FI,1,40
ActionList2=Repeat FO,1,40
FI=[!SetVariable An0 "(Clamp((#An0#+0.025),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
FO=[!SetVariable An0 "(Clamp((#An0#-0.025),0,1))"][!UpdateMeasure Ms.An][!UpdateMeterGroup AnGp][!Redraw]
DynamicVariables=1
Paused=(1-#Enab.Anim#)
Disabled=(1-#Enab.Anim#)

[St.Cstm.Pn.01]
MouseOverAction=[!ShowMeterGroup Gp.Control][#Oa.|Enab.Anim|_[#Enab.Anim].|Em|_[#Em]][#Oa.|Enab.Rate|_[#Enab.Rate]][!Update][!Redraw]
MouseLeaveAction=[!HideMeterGroup Gp.Control][#La.|Enab.Anim|_[#Enab.Anim].|Em|_[#Em]][#La.|Enab.Rate|_[#Enab.Rate]][!Update][!Redraw]

[St.Gp.Alter]
Group=Gp.Alter
[St.Gp.Control]
Group=Gp.Control
Hidden=1

[St.Cstm.Im.MainCtrl]
W=(20*#sc#)
H=(20*#sc#)
[St.Cstm.Hv.MainCtrl]
X=(-10*#Sc#)r
Y=(-10*#Sc#)r
Shape=Ellipse (20*#sc#),(20*#sc#),(20*#sc#) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1
[St.Cstm.Hv.MainCtrlPrv]
X=(-10*#Sc#)r
Y=(-10*#Sc#)r
Shape=Ellipse (12*#sc#),(20*#sc#),(12*#sc#) | #da.sk# | #Fl.Cl.Hv#
Shape2=Rectangle (12*#sc#),(8*#sc#),(48*#sc#),(24*#sc#)
Shape3=Ellipse (60*#sc#),(20*#sc#),(20*#sc#)
Shape4=Combine Shape | Union Shape2 | Exclude Shape3
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1
[St.Cstm.Hv.MainCtrlNxt]
X=(-10*#Sc#)r
Y=(-10*#Sc#)r
Shape=Ellipse (28*#sc#),(20*#sc#),(12*#sc#) | #da.sk# | #Fl.Cl.Hv#
Shape2=Rectangle (-20*#sc#),(8*#sc#),(48*#sc#),(24*#sc#)
Shape3=Ellipse (-20*#sc#),(20*#sc#),(20*#sc#)
Shape4=Combine Shape | Union Shape2 | Exclude Shape3
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1

[Ms.Volume.Calc]
Measure=Calc
Formula=(([Ms.Volume]>0)?(([Ms.Volume]>25)?(([Ms.Volume]>50)?(([Ms.Volume]>75)?3:2):1):0):-1)
DynamicVariables=1
[Ms.Volume.Calc.Abs]
Measure=Calc
Formula=([Ms.Volume]<>0)
DynamicVariables=1
[Ms.Duration.String]
Measure=String
String=Z[Ms.Duration]
DynamicVariables=1
Substitute="Z0":"","Z":""
[Ms.Position.String]
Measure=String
String=Z[Ms.Position]
DynamicVariables=1
Substitute="Z0":"","Z":""

[Ms.IsCoverExist]
Measure=String
String=[Ms.Cover]
DynamicVariables=1
RegExpSubstitute=1
Substitute="^(.+)$":"1","^$":"0"
[Ms.IsAlbumExist]
Measure=String
String=[Ms.Album]
DynamicVariables=1
RegExpSubstitute=1
Substitute="^(.+)$":"1","^$":"0"

[St.EmptyCover]
ImageName=#Pk@#Image\MonoIcons\256\EmptyAlbum
ImageTint=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)
PreserveAspectRatio=1
Hidden=([Ms.IsCoverExist])
DynamicVariables=1

[St.Cover]
MeasureName=Ms.Cover
ImageTint=255,255,255,(255*#Op.Fg#)
PreserveAspectRatio=2
DynamicVariables=1

[St.PlayPauseBd_Rl.01]
MeasureName=Ms.Progress
W=(40*#Sc#)
H=(40*#Sc#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(2*#Sc#)
LineStart=(18*#Sc#)
LineLength=(20*#Sc#)
LineColor=#Cl.Ac.Bg.Gn#
Solid=1
AntiAlias=1
DynamicVariables=1
[St.PlayPauseBd_Sp.01]
Shape=Ellipse (20*#sc#),(20*#sc#),(19*#sc#) | Fill Color #Cl.Gn.bg.Op#,(255*#Op.Bg#*[Ms.SupportsPlayPause]) | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*[Ms.SupportsPlayPause])
DynamicVariables=1
[St.PlayPauseBd_Sp.02]
Shape=Ellipse (20*#sc#),(20*#sc#),(19*#sc#) | Fill Color #Cl.Gn.bg.Op#,(255*#Op.Bg#*[Ms.SupportsPlayPause]) | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*[Ms.SupportsPlayPause])
Shape2=Ellipse (20*#sc#),(20*#sc#),(20*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.01
Shape3=Ellipse ((20-10*3.45*cos(#Le.Ag#*PI/180))*#sc#),((20-10*3.45*sin(#Le.Ag#*PI/180))*#sc#),(20*2*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Ellipse (20*#sc#),(20*#sc#),(20*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.02
Shape6=Combine Shape5 | Intersect Shape3
Shape7=Rectangle (-40*#sc#),(8*#sc#),(40*3*#sc#),(24*#sc#),(12*#sc#),(12*#sc#) | StrokeWidth (2*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03 | Fill LinearGradient GdntHlL_Cstm.04
Shape8=Ellipse (20*#sc#),(20*#sc#),(20*#sc#)
Shape9=Combine Shape7 | Exclude Shape8
Shape10=Rectangle ((-40-1)*#sc#),((8-1)*#sc#),((40*3+2)*#sc#),((24+2)*#sc#),((12+1)*#sc#),((12+1)*#sc#) | #da.sk# | Fill Color 0,0,0,(255*#Hl.Op#*#Op.Bg_Cstm#)
Shape11=Ellipse (20*#sc#),(20*#sc#),(21*#sc#)
Shape12=Rectangle (-40*#sc#),(8*#sc#),(40*3*#sc#),(24*#sc#),(12*#sc#),(12*#sc#)
Shape13=Combine Shape10 | Union Shape11 | Exclude Shape12 | Exclude Shape8
GdntHlL_Cstm.01=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#*2) ; 0 | 255,255,255,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 1.0
GdntHlL_Cstm.02=#Le.Ag# | 0,0,0,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 0,0,0,0 ; 1.0
GdntHlL_Cstm.03=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 1.0
GdntHlL_Cstm.04=#Le.Ag# | 255,255,255,(255*#Hl.Op#*#Op.Bg_Cstm#) ; 0 | 255,255,255,(128*#Hl.Op#*#Op.Bg_Cstm#) ; 0.499 | 0,0,0,(64*#Hl.Op#*#Op.Bg_Cstm#) ; 0.5 | 0,0,0,0 ; 1
DynamicVariables=1

[St.PlayPause]
X=([Mt.PlayPauseBd:X]+10*#Sc#)
Y=([Mt.PlayPauseBd:Y]+10*#Sc#)
ImageName=#Pk@#Image\MonoIcons\20\State_[Ms.State]
ImageTint=#cl.gn.fg.Gn#,(64*(1+[Ms.SupportsPlayPause]*3))
LeftMouseUpAction=#Ac.Play_or_Pause#[!Update][!Redraw]
ToolTipText=#Tm.Play_or_Pause#
[St.NextTrack]
X=([Mt.PlayPause:X]+40*#Sc#)
Y=([Mt.PlayPause:Y])
ImageName=#Pk@#Image\MonoIcons\20\NextTrack
ImageTint=#cl.gn.fg.Gn#,(64*(1+[Ms.SupportsSkipNext]*3))
LeftMouseUpAction=#Ac.Next#[!Update][!Redraw]
ToolTipText=#Tm.Next#
[St.PreviousTrack]
X=([Mt.PlayPause:X]-40*#Sc#)
Y=([Mt.PlayPause:Y])
ImageName=#Pk@#Image\MonoIcons\20\PreviousTrack
ImageTint=#cl.gn.fg.Gn#,(64*(1+[Ms.SupportsSkipPrevious]*3))
LeftMouseUpAction=#Ac.Previous#[!Update][!Redraw]
ToolTipText=#Tm.Previous#

[St.Position]
MeasureName=Ms.Position.String
StringAlign=LeftCenter
FontSize=(9*#sc#*#Ft.Sc.Gn#)
Fontcolor=#cl.gn.fg.Gn#,(255*[Ms.SupportsSetPosition])
[St.Duration]
MeasureName=Ms.Duration.String
StringAlign=LeftCenter
FontSize=(9*#sc#*#Ft.Sc.Gn#)
Fontcolor=#cl.gn.fg.Gn#,(128*[Ms.SupportsSetPosition])

[St.Cstm.Im.AddiCtrl]
W=(16*#sc#)
H=(16*#sc#)
[St.Cstm.Hv.AddiCtrl]
X=(-4*#Sc#)r
Y=(-4*#Sc#)r
Shape=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1
[St.Cstm.MAC]
W=(12*#sc#)
H=(12*#sc#)
MouseActionCursor=1
MouseActionCursorName=HAND

[St.Repeat]
ImageName=#Pk@#Image\MonoIcons\16\Repeat_[Ms.Repeat]
ImageTint=#cl.gn.fg.Gn#,(64*(1+([Ms.Repeat]>0?1:0)*3)*#op.fg#*[Ms.SupportsToggleRepeatMode])
LeftMouseUpAction=#Ac.Repeat#
ToolTipText=#Tm.Repeat##CRLF##Tm.Click_to_toggle#
[St.Shuffle]
ImageName=#Pk@#Image\MonoIcons\16\Shuffle
X=([Mt.Repeat:X])
Y=([Mt.Repeat:Y]+24*#Sc#)
ImageTint=#cl.gn.fg.Gn#,(64*(1+[Ms.Shuffle]*3)*#op.fg#*[Ms.SupportsToggleShuffleActive])
LeftMouseUpAction=#Ac.Shuffle#
ToolTipText=#Tm.Shuffle##CRLF##Tm.Click_to_toggle#
[St.Open]
ImageName=#@#Image\MonoIcons\16\Open
X=([Mt.Repeat:X]+24*#Sc#)
Y=([Mt.Repeat:Y])
LeftMouseUpAction=["#PlayerPath#"]
ToolTipText=#Tm.Open_the_Player#
[St.Settings]
ImageName=#@#Image\MonoIcons\16\Settings
X=([Mt.Repeat:X]+24*#Sc#)
Y=([Mt.Repeat:Y]+24*#Sc#)
LeftMouseUpAction=#Ac.Skin_Settings#
ToolTipText=#Tm.Skin_Settings#
[St.VolumeButton]
ImageName=#Pk@#Image\MonoIcons\16\Volume_[Ms.Volume.Calc]
W=(16*#sc#)
H=(16*#sc#)
Hidden=(1-[Ms.SupportsSetVolume])
DynamicVariables=1
LeftMouseUpAction=[#|Mt.VolumeButton|.LUMA_[&Ms.Volume.Calc.Abs]]

[St.Gp.RateSystem.02]
Group=Gp.RateSystem.02
Hidden=1
[Ms.Like]
Measure=Calc
Formula=([Ms.Rating]=5?1:0)
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)
[Ms.Dislike]
Measure=Calc
Formula=([Ms.Rating]=1?1:0)
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)

[St.Like]
Group=Gp.RateSystem.01|Gp.RateSystem.02
ImageName=#Pk@#Image\MonoIcons\16\Like_[&Ms.Like]
ImageTint=[#Cl.Cb.[&Ms.Like]],(255*#Op.Fg#)
ToolTipText=#Tm.Like#
LeftMouseUpAction=#Ac.ToggleThumbsUp#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]
[St.Dislike]
ImageName=#Pk@#Image\MonoIcons\16\Dislike_[&Ms.Dislike]
ImageTint=[#Cl.Cb.[&Ms.Dislike]],(255*#Op.Fg#)
ToolTipText=#Tm.Dislike#
LeftMouseUpAction=#Ac.ToggleThumbsDown#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]

[St.Gp.RateSystem.03]
Group=Gp.RateSystem.03
Hidden=1
[Ms.Star_1]
Measure=Calc
Formula=[Ms.Rating]>0?1:0
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)
[Ms.Star_2]
Measure=Calc
Formula=[Ms.Rating]>1?1:0
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)
[Ms.Star_3]
Measure=Calc
Formula=[Ms.Rating]>2?1:0
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)
[Ms.Star_4]
Measure=Calc
Formula=[Ms.Rating]>3?1:0
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)
[Ms.Star_5]
Measure=Calc
Formula=[Ms.Rating]>4?1:0
DynamicVariables=1
Paused=(1-#Enab.Rate#)
Disabled=(1-#Enab.Rate#)

[St.Star_1]
ImageName=#Pk@#Image\MonoIcons\12\Star_[Ms.Star_1]
ImageTint=[#Cl.Cb.[&Ms.Star_1]],(255*#Op.Fg#)
ToolTipText=#St.Click_to_rate.0001#
LeftMouseUpAction=#Ac.SetRating_1#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]
[St.Star_2]
ImageName=#Pk@#Image\MonoIcons\12\Star_[Ms.Star_2]
X=([Mt.Star_1:X]+16*#sc#-(#Ppos.X#))
Y=([Mt.Star_1:Y]-(#Ppos.Y#))
ImageTint=[#Cl.Cb.[&Ms.Star_2]],(255*#Op.Fg#)
ToolTipText=#St.Click_to_rate.0001#
LeftMouseUpAction=#Ac.SetRating_2#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]
[St.Star_3]
ImageName=#Pk@#Image\MonoIcons\12\Star_[Ms.Star_3]
X=([Mt.Star_1:X]+16*2*#sc#-(#Ppos.X#))
Y=([Mt.Star_1:Y]-(#Ppos.Y#))
ImageTint=[#Cl.Cb.[&Ms.Star_3]],(255*#Op.Fg#)
ToolTipText=#St.Click_to_rate.0001#
LeftMouseUpAction=#Ac.SetRating_3#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]
[St.Star_4]
ImageName=#Pk@#Image\MonoIcons\12\Star_[Ms.Star_4]
X=([Mt.Star_1:X]+16*3*#sc#-(#Ppos.X#))
Y=([Mt.Star_1:Y]-(#Ppos.Y#))
ImageTint=[#Cl.Cb.[&Ms.Star_4]],(255*#Op.Fg#)
ToolTipText=#St.Click_to_rate.0001#
LeftMouseUpAction=#Ac.SetRating_4#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]
[St.Star_5]
ImageName=#Pk@#Image\MonoIcons\12\Star_[Ms.Star_5]
X=([Mt.Star_1:X]+16*4*#sc#-(#Ppos.X#))
Y=([Mt.Star_1:Y]-(#Ppos.Y#))
ImageTint=[#Cl.Cb.[&Ms.Star_5]],(255*#Op.Fg#)
ToolTipText=#St.Click_to_rate.0001#
LeftMouseUpAction=#Ac.SetRating_5#[!Update][!Redraw]
RightMouseUpAction=#Ac.SetRating_0#[!Update][!Redraw]

[St.InfoSd]
Shape=Ellipse (8*#sc#),(8*#sc#),(10*#sc#) | #da.sk# | Fill Color 0,0,0,16
Shape2=Ellipse (8*#sc#),(8*#sc#),(9*#sc#) | #da.sk# | Fill Color 0,0,0,16
[St.Info]
ImageName=#@#Image\MonoIcons\16\Info
X=([Mt.InfoSd:X])
Y=([Mt.InfoSd:Y])
W=(16*#Sc#)
H=(16*#Sc#)
ToolTipTitle=[#Mt.Info.TTTt_[&Ms.Status]]
ToolTipText=[#Mt.Info.TTTx_[&Ms.Status]]
LeftMouseUpAction=[!SetClip "#Tm.Title#: [Ms.Title]#CRLF##Tm.Artist#: [Ms.Artist]#CRLF##Tm.Album#: [Ms.Album]#CRLF##Tm.Duration#: [Ms.Duration.String]"]
DynamicVariables=1

[Ms.ProgressBar.01.Clamp]
Measure=Calc
Formula=([Ms.Progress])
MinValue=0
MaxValue=100
OnChangeAction=[!CommandMeasure "Ms.Status" "SetPosition [Ms.ProgressBar.01.Clamp:%,0]"][!Update][!Redraw]
DynamicVariables=1
Disabled=1
Group=Gp.Ms.ProgressBar
[Ms.ProgressBar.Mouse]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption "Ms.ProgressBar.01.Clamp" "Formula" "(100*(clamp(($MouseX$-([Mt.ProgressBar.00:X]-(#Ppos.X#))),0,([Mt.ProgressBar.00:W]))/([Mt.ProgressBar.00:W])))"][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure "Ms.ProgressBar.Mouse" "Stop"][!DisableMeasureGroup "Gp.Ms.ProgressBar"]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1
Disabled=1
Group=Gp.Ms.ProgressBar
[St.ProgressBar.00]
Shape=Rectangle 0,0,(64*#PW#*#Sc#-#sp#*4-5*2*#sc#),(12*#sc#) | #da.sk# | #Da.Bg#
Shape2=Rectangle 0,(5*#sc#),(64*#PW#*#Sc#-#sp#*4-5*2*#sc#),(2*#sc#),(#Cr#>0?(1*#sc#):0),(#Cr#>0?(1*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*[Ms.SupportsSetPosition])
Shape3=Rectangle 0,(4*#sc#),([Ms.Progress]/100*(64*#PW#*#Sc#-#sp#*4-5*2*#sc#)),(4*#sc#),(#Cr#>0?(1*#sc#):0),(#Cr#>0?(1*#sc#):0) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[Ms.SupportsSetPosition])
DynamicVariables=1
MouseOverAction=[!ShowMeter Mt.ProgressBar.01][!Redraw]
MouseLeaveAction=[!HideMeter Mt.ProgressBar.01][!Redraw]
LeftMouseDownAction=[!EnableMeasureGroup "Gp.Ms.ProgressBar"][!CommandMeasure "Ms.ProgressBar.Mouse" "Start"]
MouseScrollUpAction=[!CommandMeasure "Ms.Status" "SetPosition -1"][!Update][!Redraw]
MouseScrollDownAction=[!CommandMeasure "Ms.Status" "SetPosition +1"][!Update][!Redraw]
MouseActionCursor=1
MouseActionCursorName=HAND
ToolTipText=[Ms.Position.String]
[St.ProgressBar.01]
X=([Mt.ProgressBar.00:X]+[Ms.Progress]/100*(64*#PW#*#Sc#-#sp#*4-5*2*#sc#)-(#Ppos.X#))
Y=([Mt.ProgressBar.00:Y]-(#Ppos.Y#))
Shape=Ellipse 0,(6*#sc#),(9*#sc#) | #da.sk# | Fill Color #cl.gn.Bg.Op#,(255*[Ms.SupportsSetPosition])
Shape2=Ellipse 0,(6*#sc#),(10*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(32*[Ms.SupportsSetPosition])
Shape3=Ellipse 0,(6*#sc#),(9*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Ellipse 0,(6*#sc#),(5*#sc#) | #da.sk# | Fill Color #cl.Ac.Bg.Gn#,(255*[Ms.SupportsSetPosition])
DynamicVariables=1
Hidden=1

[Ms.VolumeBar.01.Clamp]
Measure=Calc
Formula=[Ms.Volume]
MinValue=0
MaxValue=100
OnChangeAction=[!CommandMeasure "Ms.Status" "SetVolume [Ms.VolumeBar.01.Clamp:%,0]"][!Update][!Redraw]
DynamicVariables=1
Disabled=1
Group=Gp.Ms.VolumeBar
[Ms.VolumeBar.Mouse]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption "Ms.VolumeBar.01.Clamp" "Formula" "(100*(clamp(($MouseX$-([Mt.VolumeBar.00:X])),0,([Mt.VolumeBar.00:W]))/([Mt.VolumeBar.00:W])))"][!Update][!Redraw]
LeftMouseUpAction=[!CommandMeasure "Ms.VolumeBar.Mouse" "Stop"][!DisableMeasureGroup "Gp.Ms.VolumeBar"]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1
Disabled=1
Group=Gp.Ms.VolumeBar
[St.VolumeBar.00]
Shape=Rectangle 0,0,(100*#sc#),(12*#sc#) | #da.sk# | #Da.Bg#
Shape2=Rectangle 0,(5*#sc#),(100*#sc#),(2*#sc#),(#Cr#>0?(1*#sc#):0),(#Cr#>0?(1*#sc#):0) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*[Ms.SupportsSetPosition])
Shape3=Rectangle 0,(4*#sc#),([Ms.Volume]/100*(100*#sc#)),(4*#sc#),(#Cr#>0?(1*#sc#):0),(#Cr#>0?(1*#sc#):0) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[Ms.SupportsSetPosition])
DynamicVariables=1
;MouseOverAction=[!ShowMeter Mt.VolumeBar.01][!Redraw]
;MouseLeaveAction=[!HideMeter Mt.VolumeBar.01][!Redraw]
LeftMouseDownAction=[!EnableMeasureGroup "Gp.Ms.VolumeBar"][!CommandMeasure "Ms.VolumeBar.Mouse" "Start"]
MouseScrollUpAction=[!CommandMeasure "Ms.Status" "SetVolume -2"][!Update][!Redraw]
MouseScrollDownAction=[!CommandMeasure "Ms.Status" "SetVolume +2"][!Update][!Redraw]
MouseActionCursor=1
MouseActionCursorName=HAND
ToolTipText=[Ms.Volume] %
Hidden=(1-[Ms.SupportsSetVolume])
[St.VolumeBar.01]
X=([Mt.VolumeBar.00:X]+[Ms.Volume]/100*(100*#sc#)-(#Ppos.X#))
Y=([Mt.VolumeBar.00:Y]-(#Ppos.Y#))
Shape=Ellipse 0,(6*#sc#),(9*#sc#) | #da.sk# | Fill Color #cl.gn.Bg.Op#,(255*[Ms.SupportsSetPosition])
Shape2=Ellipse 0,(6*#sc#),(10*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(32*[Ms.SupportsSetPosition])
Shape3=Ellipse 0,(6*#sc#),(9*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Ellipse 0,(6*#sc#),(5*#sc#) | #da.sk# | Fill Color #cl.Ac.Bg.Gn#,(255*[Ms.SupportsSetPosition])
DynamicVariables=1
Hidden=(1-[Ms.SupportsSetVolume])

[St.Hover]
Shape=Rectangle 0,0,(64*#PW#*#Sc#),(64*#PH#*#Sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Gn#,(#Em#=0?(192*#An0#):192)
DynamicVariables=1
Hidden=#Em#
Group=AnGp