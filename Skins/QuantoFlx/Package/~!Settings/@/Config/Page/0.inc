[Variables]
Pg.Ty=Settings

OpLs.Units.Dc=[#OpLs.Units.Dc_[#Un]]
OpLs.UserImage.Dc=#Us.Im#

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=1
Mt.Op.12----=1
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=0
Mt.Op.18----=0
Mt.Op.21----=1
Mt.Op.22----=1
Mt.Op.23----=1
Mt.Op.24----=1
Mt.Op.25----=1
Mt.Op.26----=1
Mt.Op.27----=1
Mt.Op.28----=1

; Internal Name of this option to display
; If not needed, write "Null"
Mt.Op.11-----=Null
Mt.Op.12-----=Null
Mt.Op.13-----=Language
Mt.Op.14-----=TimeFormat
Mt.Op.15-----=Units
Mt.Op.16-----=Username
Mt.Op.17-----=UserImage
Mt.Op.18-----=RefreshSystemSettings
Mt.Op.21-----=Null
Mt.Op.22-----=Null
Mt.Op.23-----=Null
Mt.Op.24-----=Null
Mt.Op.25-----=Null
Mt.Op.26-----=Null
Mt.Op.27-----=Null
Mt.Op.28-----=Null

; Option Width
; 0 - Short
; 1 - Wide
Mt.Op.11------=0
Mt.Op.12------=0
Mt.Op.13------=1
Mt.Op.14------=1
Mt.Op.15------=1
Mt.Op.16------=1
Mt.Op.17------=1
Mt.Op.18------=1
Mt.Op.21------=0
Mt.Op.22------=0
Mt.Op.23------=0
Mt.Op.24------=0
Mt.Op.25------=0
Mt.Op.26------=0
Mt.Op.27------=0
Mt.Op.28------=0

; Display description or not
; 0 - Hide
; 1 - Show
Mt.Op.11-------=0
Mt.Op.12-------=0
Mt.Op.13-------=0
Mt.Op.14-------=1
Mt.Op.15-------=1
Mt.Op.16-------=0
Mt.Op.17-------=1
Mt.Op.18-------=1
Mt.Op.21-------=0
Mt.Op.22-------=0
Mt.Op.23-------=0
Mt.Op.24-------=0
Mt.Op.25-------=0
Mt.Op.26-------=0
Mt.Op.27-------=0
Mt.Op.28-------=0

; The control type of this option
; 0 - Hide
; 1 - Long box (Text Input)
; 2 - Long box (Context Menu)
; 3 - Switcher
; 4 - Small box (Text Input)
; 5 - Small box (Context Menu)
; 6 - Switcher (No text)
Mt.Op.11--------=0
Mt.Op.12--------=0
Mt.Op.13--------=2
Mt.Op.14--------=3
Mt.Op.15--------=3
Mt.Op.16--------=1
Mt.Op.17--------=0
Mt.Op.18--------=0
Mt.Op.21--------=0
Mt.Op.22--------=0
Mt.Op.23--------=0
Mt.Op.24--------=0
Mt.Op.25--------=0
Mt.Op.26--------=0
Mt.Op.27--------=0
Mt.Op.28--------=0

; The Variable to modify
; If not needed, write "Null"
Mt.Op.11---------=Null
Mt.Op.12---------=Null
Mt.Op.13---------=Lg
Mt.Op.14---------=Tf
Mt.Op.15---------=Un
Mt.Op.16---------=Us.Nm
Mt.Op.17---------=Null
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Null
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Null
Mt.Op.27---------=Null
Mt.Op.28---------=Null

; Text displays in/beside the control
; If not needed, you can leave it blank
Mt.Op.11----------=
Mt.Op.12----------=
Mt.Op.13----------=[#[#Lg]]
Mt.Op.14----------=[#Tm.[#Tf]]
Mt.Op.15----------=[#Tm.[#Un]]
Mt.Op.16----------=[#Us.Nm]
Mt.Op.17----------=
Mt.Op.18----------=
Mt.Op.21----------=
Mt.Op.22----------=
Mt.Op.23----------=
Mt.Op.24----------=
Mt.Op.25----------=
Mt.Op.26----------=
Mt.Op.27----------=
Mt.Op.28----------=

CmLs.Main.CMSS_Mt.Op.13---.T01=#en-us#
CmLs.Main.CMSS_Mt.Op.13---.T02=#zh-hans#
CmLs.Main.CMSS_Mt.Op.13---.T03=#zh-hant#
CmLs.Main.CMSS_Mt.Op.13---.T04=
CmLs.Main.CMSS_Mt.Op.13---.A01=[!WriteKeyValue "Variables" "Lg" "en-us" "#MdFl#"][!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.13---.A02=[!WriteKeyValue "Variables" "Lg" "zh-hans" "#MdFl#"][!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.13---.A03=[!WriteKeyValue "Variables" "Lg" "zh-hant" "#MdFl#"][!WriteKeyValue "Variables" "PrvPgLsIndx" "0" "#CURRENTSKINSETTINGS#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.13---.A04=[]

ORA.CA.-1=[]
ORA.CA.0=[]
ORA.CA.1=[!Delay 32][!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\Preview" "Main.ini"]

TipIndex=0

CrrtDrv=C

[Rainmeter]
OnRefreshAction=[#ORA.SD.[&Ms.StringDetect]][#ORA.CA.[&Ms.Active.Preview:IsActive("#ROOTCONFIG#\Package\~!Settings\Preview")]][!Delay 16][!PauseMeasure "Ms.DYN"][!SetVariable "CrrtDrv" "[Ms.Sy.Drv]"]

[Mt.Cstm.16.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
X=(393*#sc#)
Y=((170+77*6)*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseImage 1"]
[Mt.Cstm.16.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Browse_files#

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
Command1=[!WriteKeyValue Variables "Us.Im" "$Path$" "#MdFl#"][!Refresh]

[Ms.Sy.Vr]
Measure=SysInfo
SysInfoType=OS_VERSION
RegExpSubstitute=1
Substitute="Windows ":"","Vista":"7","Server.*":"8"
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Fm]
Measure=Calc
Formula=(Clamp((Round([&Ms.Sy.Vr],0)),7,11))
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Dp]
Measure=String
String=Windows #Sy.Vr#
RegExpSubstitute=1
Substitute="^Windows 11$":"#Tm.Windows_11_or_Newer#","^Windows 8$":"#Tm.Windows_8_or_Other#","^Windows 7$":"#Tm.Windows_7_or_Older#"
[Ms.Sy.Dpi]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
OutputType=Value
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Drv]
Measure=String
String=%HOMEDRIVE%
Substitute=":":""
DynamicVariables=1
UpdateDivider=-1

[Ms.Sy.Drv.Judge]
Measure=String
String=#Sy.Drv#
DynamicVariables=1
RegExpSubstitute=1
Substitute="^#CrrtDrv#$":"1","^[^1]$":"0"

[Mt.Cstm.17.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
X=(393*#sc#)
Y=((170+77*7)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sy.Vr" "[Ms.Sy.Vr.Fm]" "#MdFl#"][!WriteKeyValue "Variables" "Sy.Drv" "[Ms.Sy.Drv]" "#MdFl#"][!WriteKeyValue "Variables" "Sy.Dpi" "[Ms.Sy.Dpi]" "#MdFl#"][!Refresh]
[Mt.Cstm.17.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Refresh#

[Mt.Wrng.17]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(352*#sc#)
Y=(708*#sc#)
ToolTipText=#St.UserExperienceWrng.0006#
Hidden=((#Sy.Vr#=[Ms.Sy.Vr.Fm])&&([Ms.Sy.Drv.Judge])&&(#Sy.Dpi#=[Ms.Sy.Dpi]))
DynamicVariables=1

[Mt.UsIm.Zn]
Meter=Shape
Shape=Ellipse ((32/2)*#sc#),((32/2)*#sc#),((32/2)*#sc#) | #da.sk#
X=(65*#sc#+[Mt.Zn:X])
Y=(160*#sc#)
DynamicVariables=1
[Mt.UsIm.None]
Meter=Image
ImageName=#@#Image\MonoIcons\128\DefaultUserImage
ImageTint=#Cl.Gn.Fg.Gn#,128
Container=Mt.UsIm.Zn
W=(32*#sc#)
H=(32*#sc#)
DynamicVariables=1
[Mt.UsIm]
Meter=Image
ImageName=#Us.Im#
Container=Mt.UsIm.Zn
W=(32*#sc#)
H=(32*#sc#)
DynamicVariables=1

[Mt.UsIm.Hello]
Meter=String
MeterStyle=St.ZnCt2|St.Ft
Text=#Tm.Hello_User#
StringAlign=LeftCenter
FontSize=(12*#sc#*#Ft.Sc.Gn#)
X=((64+32+11)*#sc#)
Y=((160+32/2)*#sc#)
InlinePattern=#Us.Nm#
InlineSetting=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))

[Mt.DYN.00]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle (-1*#Sc#),(-1*#Sc#),((512+1*2)*#Sc#),((98+1*2)*#Sc#),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)),(#Cr#/2+1*#Sc#*(#Cr#>0?1:0)) | #Da.Sk# | #Fl.Cl.Ob#
Shape2=Rectangle 0,0,(512*#Sc#),(98*#Sc#),(#Cr#/2),(#Cr#/2)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle 0,0,(512*#Sc#),(98*#Sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,(64+64*#Op.Bg#)
DynamicVariables=1
X=(56*#sc#)
Y=(200*#sc#)
DynamicVariables=1
[Mt.DYN.Icon]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk@#Image\MonoIcons\20\InfoFull
W=(20*#sc#)
H=(20*#sc#)
X=(15*#sc#)r
Y=(15*#sc#)r
ImageTint=#Cl.Ac.Bg.Gn#

[Ms.DYN]
Measure=Plugin
Plugin=QuotePlugin
PathName=#Pk@#Config\Language\#Lg#\DoYouKnow.txt
UpdateDivider=-1
DynamicVariables=1
;Paused=1
[Ms.DYN.MaxQ]
Measure=Calc
Formula=([Mt.DYN.Title:H]+[Mt.DYN.Text:H]+[Mt.DYN.Change:H])
DynamicVariables=1
[Mt.DYN.TextZone]
Meter=Shape
Shape=Rectangle 0,0,(446*#sc#),(78*#sc#) | #da.sk#
X=(107*#sc#+[Mt.Zn:X])
Y=(210*#sc#)
DynamicVariables=1
MouseOverAction=[!ShowMeter Mt.DYN.Srbr][!Redraw]
MouseLeaveAction=[!HideMeter Mt.DYN.Srbr][!Redraw]
MouseScrollUpAction=[!SetVariable "TipIndex" "(Clamp((#TipIndex#-8*#sc#),0,(Max(([Ms.DYN.MaxQ]-(78*#sc#)),0))))"][!Update][!Redraw]
MouseScrollDownAction=[!SetVariable "TipIndex" "(Clamp((#TipIndex#+8*#sc#),0,(Max(([Ms.DYN.MaxQ]-(78*#sc#)),0))))"][!Update][!Redraw]
[Mt.DYN.Title]
Meter=String
MeterStyle=St.Ft|St.Ft.Bd
Container=Mt.DYN.TextZone
Text=#St.Do_You_Know.0001#
Y=(-#TipIndex#)
[Mt.DYN.Text]
Meter=String
MeterStyle=St.Ft
Container=Mt.DYN.TextZone
MeasureName=Ms.DYN
W=(446*#sc#)
ClipString=2
Y=0R
[Mt.DYN.Change]
Meter=String
MeterStyle=St.Ft|St.Ft.SpLk
Container=Mt.DYN.TextZone
Text=#St.Do_You_Know.0002#
W=(446*#sc#)
ClipString=2
Y=0R
LeftMouseUpAction=[!SetVariable "TipIndex" 0][!UnpauseMeasure "Ms.DYN"][!UpdateMeasure "Ms.DYN"][!Update][!Redraw][!Delay 16][!PauseMeasure "Ms.DYN"][!Update]
[Mt.DYN.Srbr]
Meter=Shape
Container=Mt.DYN.TextZone
Shape=Rectangle (446*#sc#-4*#Sc#),((78*#sc#)*#TipIndex#*1/Max([Ms.DYN.MaxQ],1)),(4*#sc#),((78*#sc#)*(78*#sc#)/Max([Ms.DYN.MaxQ],1)),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(64*(max(#Cl.SwBd#,1))*#op.fg#*((78*#sc#)<[Ms.DYN.MaxQ]))
DynamicVariables=1
Hidden=1