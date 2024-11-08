[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

PgTtl=#St.Setup.0100#

Index=0
IdxSpLt=1

[Ms.BackupDate]
Measure=Time
Format=%F
DynamicVariables=1
[Ms.Tx.Title]
Measure=String
String=#Bkup.Pth#\QuantoFlxBackup\[Ms.BackupDate]
DynamicVariables=1
[Mt.Title]
MeasureName=Ms.Tx.Title

[Ms.FI]
Measure=Plugin
Plugin=FolderInfo
Folder=#Sl.Fd#\@Resources\Config
InfoType=FileCount
[Ms.FI.Calc]
Measure=Calc
Formula=([Ms.FI]=1)
DynamicVariables=1

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0104#

[Mt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Option|St.Ps.Tx.YN.02F
LeftMouseUpAction=[!WriteKeyValue "Variables" "RestoreFromDefault" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Pk" "~!Settings" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Process.ini"][!Move 0 0 "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
ImageTint=#Cl.Ac.Bg.Gn#
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Setup.0101#
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
[Mt.List]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(528*#sc#),(432*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle (-#sc#),(-#sc#),(530*#sc#),(434*#sc#) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(528*#sc#),(432*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
X=(24*#sc#)
Y=(226*#sc#)
DynamicVariables=1
MouseOverAction=[!ShowMeter Mt.SrBr][!Redraw]
MouseLeaveAction=[!HideMeter Mt.SrBr][!Redraw]
MouseScrollUpAction=[!SetVariable "Index" "(Clamp((#Index#-1),0,(Max((([Ms.Fv.FC])-9),0))))"][!CommandMeasure "Ms.Fv.Main" "IndexUp"][!Update]
MouseScrollDownAction=[!SetVariable "Index" "(Clamp((#Index#+1),0,(Max((([Ms.Fv.FC])-9),0))))"][!CommandMeasure "Ms.Fv.Main" "IndexDown"][!Update]
[Mt.SrBr]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle ([Mt.List:W]-4*#sc#),([Mt.List:H]*(#Index#/(max([Ms.Fv.FC],1)))),(4*#sc#),([Mt.List:H]*(9/(max([Ms.Fv.FC],1)))),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(96*#op.fg#*[Ms.Calc.IsFull])
X=([Mt.List:X])
Y=([Mt.List:Y])
DynamicVariables=1
Hidden=1
[Mt.List.Tt]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx
Text=#St.Setup.0102#
X=(24*#sc#)
Y=([Mt.List:Y]-8*#sc#)
StringAlign=LeftBottom
[Mt.List.Tx]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx
Text=#St.Setup.0103#
X=(24*#sc#)
Y=([Mt.List:YH]+8*#sc#)

[Ms.Fv.Main]
Measure=Plugin
Plugin=FileView
Path=#ROOTCONFIGPATH#Package
Count=9
ShowDotDot=0
ShowFolder=0
ShowFile=1
HideExtensions=1
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.FC]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Type=FolderCount
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Calc.IsFull]
Measure=Calc
Formula=([Ms.Fv.FC]>9)
DynamicVariables=1

[Ms.Fv.Index.01.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=1
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "01" *]
IfNotMatchAction=[!EnableMouseAction "01" *]
[Ms.Fv.Index.02.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=2
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "02" *]
IfNotMatchAction=[!EnableMouseAction "02" *]
[Ms.Fv.Index.03.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=3
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "03" *]
IfNotMatchAction=[!EnableMouseAction "03" *]
[Ms.Fv.Index.04.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=4
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "04" *]
IfNotMatchAction=[!EnableMouseAction "04" *]
[Ms.Fv.Index.05.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=5
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "05" *]
IfNotMatchAction=[!EnableMouseAction "05" *]
[Ms.Fv.Index.06.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=6
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "06" *]
IfNotMatchAction=[!EnableMouseAction "06" *]
[Ms.Fv.Index.07.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=7
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "07" *]
IfNotMatchAction=[!EnableMouseAction "07" *]
[Ms.Fv.Index.08.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=8
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "08" *]
IfNotMatchAction=[!EnableMouseAction "08" *]
[Ms.Fv.Index.09.FN]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=9
Type=FileName
DynamicVariables=1
Group=Gp.Ms.Cstm.List
IfMatch=^$
IfMatchAction=[!DisableMouseAction "09" *]
IfNotMatchAction=[!EnableMouseAction "09" *]
[Ms.Fv.Index.01.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=1
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.02.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=2
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.03.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=3
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.04.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=4
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.05.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=5
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.06.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=6
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.07.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=7
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.08.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=8
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List
[Ms.Fv.Index.09.I]
Measure=Plugin
Plugin=FileView
Path=[Ms.Fv.Main]
Index=9
Type=FilePath
DynamicVariables=1
Group=Gp.Ms.Cstm.List

[St.Cstm.Ps.YN.01]
X=0r
Y=(48*#sc#)r

[St.Cstm.Sp.01]
Shape=Rectangle 0,0,([Mt.List:W]),(47*#sc#) | #da.sk# | Extend Hover
LeftMouseUpAction=[!WriteKeyValue "Variables" "RestoreFromDefault" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Pk" "[&Ms.Fv.Index.[#CURRENTSECTION].FN]" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Process.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]
DynamicVariables=1
Group=Gp.Mt.Cstm.List
[01]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01
X=([Mt.List:X])
Y=([Mt.List:Y])
[02]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[03]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[04]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[05]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[06]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[07]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[08]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01
[09]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Cstm.Sp.01|St.Cstm.Ps.YN.01

[St.Cstm.Im.01]
ImageName=[&Ms.Fv.Index.[#CURRENTSECTION]]
W=(16*#sc#)
H=(16*#sc#)
DynamicVariables=1
Group=Gp.Mt.Cstm.List
[01.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01
X=([Mt.List:X]+16*#sc#)
Y=([Mt.List:Y]+16*#sc#)
[02.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[03.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[04.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[05.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[06.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[07.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[08.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01
[09.I]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Cstm.Im.01|St.Cstm.Ps.YN.01

[St.Cstm.Tx.01]
MeasureName=Ms.Fv.Index.#CURRENTSECTION#
StringAlign=LeftCenter
W=([Mt.List:W]-(48+16)*#sc#)
ClipString=1
DynamicVariables=1
Group=Gp.Mt.Cstm.List
[01.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01
X=([Mt.List:X]+48*#sc#)
Y=([Mt.List:Y]+24*#sc#)
[02.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[03.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[04.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[05.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[06.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[07.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[08.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
[09.FN]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
