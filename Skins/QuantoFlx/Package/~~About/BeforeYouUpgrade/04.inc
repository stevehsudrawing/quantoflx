[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "03" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][!Refresh]

PgTtl=#St.Setup.0400#

Wizd.ORA=[!EnableMeasure "Ms.Calc.VersionCompare"]

Vr.CstmA.Gdnt_01=0
Vr.CstmA.Gdnt_02=0
Vr.CstmA.Gdnt_03=0

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0401#

[Mt.Text.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.Splk
Y=(512*#sc#)
StringAlign=LeftBottom
Text=#St.Setup.0402#
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Guide-of-Upgrading-Quanto-Flx#process-of-upgrading"]

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat AL.CstmA.Gdnt_01,10,20
ActionList2=Repeat AL.CstmA.GdnI_01,10,20
ActionList3=Repeat AL.CstmA.Gdnt_02,10,20
ActionList4=Repeat AL.CstmA.GdnI_02,10,20
ActionList5=Repeat AL.CstmA.Gdnt_03,10,20 | AL.CstmA.NextPge
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.GdnI_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#-1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Gdnt_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.GdnI_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#-1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Gdnt_03=[!SetVariable Vr.CstmA.Gdnt_03 "(Clamp((#Vr.CstmA.Gdnt_03#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
;AL.CstmA.NextPge=[!Refresh]
AL.CstmA.NextPge=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!Delay 16]["#DownloadFilePath#"][!DeactivateConfig "#CURRENTCONFIG#"]
DynamicVariables=1
[Mt.QuantoFlx]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\Quanto.png
W=((128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)
H=((128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)
X=((#CURRENTCONFIGWIDTH#-(128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)/2)
Y=((#CURRENTCONFIGWIDTH#-(128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)/2)
MouseOverAction=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
MouseLeaveAction=[!CommandMeasure "Ms.An_Cstm" "Execute 2"][!CommandMeasure "Ms.An_Cstm" "Execute 4"]
LeftMouseDownAction=[!CommandMeasure "Ms.An_Cstm" "Execute 3"]
LeftMouseUpAction=[!CommandMeasure "Ms.An_Cstm" "Execute 5"]
MouseActionCursor=1
MouseActionCursorName=HAND
Group=Gp.AL.CstmA.Gdnt_02
[HMt.QuantoFlx]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,(32*#sc#),(128*#sc#),(96*#sc#),(4*#sc#),(4*#sc#) | #da.sk# | Fill Color 255,255,255,(48*(#Vr.CstmA.Gdnt_01#))
Shape2=Rectangle (8*#sc#),0,(56*#sc#),(36*#sc#),(4*#sc#),(4*#sc#)
Shape3=Combine Shape | Union Shape2 | Scale (1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))),(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))),0,0
DynamicVariables=1
X=0r
Y=0r
Group=Gp.AL.CstmA.Gdnt_01|Gp.AL.CstmA.Gdnt_02
[Mt.Blank]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#),(#Cr#),(#Cr#) | Fill Color #Cl.Gn.Bg.Gn# | #da.sk# | Scale (1*(sqrt(sqrt(#Vr.CstmA.Gdnt_03#)))),(1*(sqrt(sqrt(#Vr.CstmA.Gdnt_03#))))
DynamicVariables=1
Group=Gp.AL.CstmA.Gdnt_03
