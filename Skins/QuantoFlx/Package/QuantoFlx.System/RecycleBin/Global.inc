[Rainmeter]
Update=1000
OnRefreshAction=#Gl.ORA#[!Update]

[Ms.RecycleManager]
Measure=RecycleManager
DynamicVariables=1
[Ms.RecycleManager.Size]
Measure=RecycleManager
RecycleType=Size
DynamicVariables=1
[Ms.RecycleManager.Calc]
Measure=Calc
Formula=([Ms.RecycleManager]<>0)
DynamicVariables=1

[Ms.DragNDrop]
Measure=Plugin
Plugin=Drag&Drop
Action=Delete
OnDropAction=[!Update][!Log """#Tm.Delete_Message.0001#"""][!Delay 1000][!Update]
; Special thanks to theAzack9

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.Bt.Sp
LeftMouseUpAction=["shell:::{645FF040-5081-101B-9F08-00AA002F954E}"]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[Mt.Im]
Meter=Image
MeterStyle=St.ZnCt
ImageName=[#CstmIm_[&Ms.RecycleManager.Calc]]
ImageTint=255,255,255,(255*#Op.Fg#)
X=(#CURRENTCONFIGWIDTH#/2-20*#Sz#*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2-20*#Sz#*#sc#)
W=(40*#Sz#*#sc#)
H=(40*#Sz#*#sc#)
DynamicVariables=1
ToolTipText=#Tm.Recycle_Bin#