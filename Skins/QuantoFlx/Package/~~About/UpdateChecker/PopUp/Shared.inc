[Rainmeter]
Update=360000
DefaultAnchorX=100%
DefaultAnchorY=100%
DefaultDraggable=0
RightMouseUpAction=[!Refresh]
OnRefreshAction=[!Draggable 0][!SetWindowPosition (#WORKAREAX#+#WORKAREAWIDTH#-16*#sc#) (#WORKAREAY#+#WORKAREAHEIGHT#-16*#sc#) 100% 100%][!Delay 16]

[Ms.Detect]
Measure=Calc
Formula=#UpdateDetected#
IfCondition=([Ms.Detect]=0)
IfTrueAction=[!DeactivateConfig "#CURRENTCONFIG#"]
DynamicVariables=1

[Ms.Registry.NotificationSound]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=AppEvents\Schemes\Apps\.Default\Notification.Default\.Current
DynamicVariables=1

[Ms.String.DownloadFile]
Measure=String
String=#DownloadUrl#
DynamicVariables=1
RegExpSubstitute=1
Substitute=".*/":""

[Ms.FileView]
Measure=Plugin
Plugin=FileView
Path=#DownloadPath#
ShowDotDot=0
ShowFolder=0
ShowHidden=0
ShowSystem=0
WildcardSearch=[Ms.String.DownloadFile]
DynamicVariables=1
Group=Gp.Ms.FV
[Ms.FileView.P1]
Measure=Plugin
Plugin=FileView
Path=[Ms.FileView]
Index=1
Type=FileName
IfMatch="[Ms.String.DownloadFile]"
IfMatchAction=[!ActivateConfig "#CURRENTCONFIG#" "Ready.ini"]
DynamicVariables=1
Group=Gp.Ms.FV

[Ms.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=[#Dv.Sy_[#Sy.Vr].FlCs.UNS]
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=0
IconCache=#@#Cache\Icon\
IconSize=1
ReturnValue=Path
FileInitialDirectory=%USERPROFILE%\Downloads
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue Variables "DownloadPath" "$Path$" "#Pk@#Config\SkinSettings\UpdateChecker\Silent.inc"][!WriteKeyValue Variables "DownloadFilePath" "$Path$\[Ms.String.DownloadFile]" "#Pk@#Config\SkinSettings\UpdateChecker\Silent.inc"][!SetVariable  "DownloadPath" "$Path$"][!HideMeterGroup "Gp.Mt.Bt.01"][!ShowMeterGroup Gp.Mt.Bt.02"][!HideMeter Mt.CloseButton][!HideMeter Mt.MoreButton][!EnableMeasure "Ms.WebParser.Download"][!Redraw]

[Ms.WebParser.Download]
Measure=WebParser
URL=#DownloadUrl#
UpdateRate=-1
Flags=ForceReload | NoCookies
FinishAction=[!CommandMeasure "Ms.RunCommand.01" "Run"]
OnConnectErrorAction=[!ActivateConfig "#CURRENTCONFIG#" "DownloadFailed.ini"]
OnDownloadErrorAction=[!ActivateConfig "#CURRENTCONFIG#" "DownloadFailed.ini"]
Download=1
DownloadFile=1
DynamicVariables=1
Disabled=1

[Ms.RunCommand.01]
Measure=Plugin
Plugin=RunCommand
Parameter=rename "#CURRENTPATH#\DownloadFile\1" "[Ms.String.DownloadFile]"
FinishAction=[!CommandMeasure "Ms.RunCommand.02" "Run"]
DynamicVariables=1
[Ms.RunCommand.02]
Measure=Plugin
Plugin=RunCommand
Parameter=xcopy "#CURRENTPATH#\DownloadFile\[Ms.String.DownloadFile]" "#DownloadPath#" /s /i /y /c /r
FinishAction=[!CommandMeasure "Ms.RunCommand.03" "Run"]
DynamicVariables=1
[Ms.RunCommand.03]
Measure=Plugin
Plugin=RunCommand
Parameter=rmdir "#CURRENTPATH#\DownloadFile" /s /q
FinishAction=[!ActivateConfig "#CURRENTCONFIG#" "DownloadCompleted.ini"]
DynamicVariables=1

[Ms.TransTime.PublishedAt]
Measure=Time
TimeStamp=#PublishedAt#
Format=#Tf.Dt#
FormatLocale=#Lg#
DynamicVariables=1
[Ms.TransString.Body]
Measure=String
String=#Body#
DynamicVariables=1
RegExpSubstitute=1
Substitute="`":"''","\\r\\n\\r\\n":"#CRLF#","\\r\\n":"#CRLF#","\[":"","\]":"","\(http.*\)":""

[St.Icon]
ImageName=#@#Image\Quanto
W=(16*#sc#)
H=(16*#sc#)
X=((24-8)*#sc#)
Y=((24-8)*#sc#)
DynamicVariables=1
[St.Title]
Text=Quanto Flx
StringAlign=LeftCenter
X=(48*#sc#)
Y=(24*#sc#)
[St.CloseButton]
ImageName=#@#Image\MonoIcons\12\Close
W=(12*#sc#)
H=(12*#sc#)
X=(330*#sc#)
Y=(18*#sc#)
LeftMouseUpAction=[!DeactivateConfig "#CURRENTCONFIG#"]
[St.HCloseButton]
X=(-6*#sc#)r
Y=(-6*#sc#)r
Shape=Rectangle 0,0,((12+12)*#sc#),((12+12)*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1
[St.MoreButton]
ImageName=#@#Image\MonoIcons\12\More
W=(12*#sc#)
H=(12*#sc#)
X=((330-36)*#sc#)
Y=(18*#sc#)
LeftMouseUpAction=[!SkinCustomMenu]
[St.HMoreButton]
X=(-6*#sc#)r
Y=(-6*#sc#)r
Shape=Rectangle 0,0,((12+12)*#sc#),((12+12)*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
DynamicVariables=1
Hidden=1

[St.Text.00]
X=(16*#sc#)
Y=(48*#sc#)

[St.Cstm.Tx.01]
X=0r
Y=0R
W=(328*#sc#)
ClipString=2

[St.Cstm.Sp.01]
Shape=Rectangle 0,0,(160*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend FlClBG
Shape2=Rectangle (-#sc#),(-#sc#),((160+2)*#sc#),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+1)),((#Cr#=0)?0:(#Cr#/2+1)), | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(160*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(160*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
[St.Cstm.Sp.02]
Shape=Rectangle 0,0,(328*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend FlClBG
Shape2=Rectangle (-#sc#),(-#sc#),((328+2)*#sc#),((32+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+1)),((#Cr#=0)?0:(#Cr#/2+1)), | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(328*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(328*#sc#),(32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
DynamicVariables=1
[St.Cstm.Tx.02]
X=(80*#sc#)r
Y=(16*#sc#)r
W=(128*#sc#)
ClipString=2
StringAlign=CenterCenter
[St.Cstm.Tx.03]
X=(164*#sc#)r
Y=(16*#sc#)r
W=(296*#sc#)
ClipString=2
StringAlign=CenterCenter