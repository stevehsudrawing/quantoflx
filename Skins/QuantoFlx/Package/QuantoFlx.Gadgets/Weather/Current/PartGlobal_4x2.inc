[Variables]
Index=0
IdxSpLt=(16*#sc#)
MaxQ=([Mt.Tx.Title:H]+[Mt.Tx.Text:H]+4*#sc#)
DisQ=([Mt.Tx.Zn:H])
PMSUA=[]
PMSDA=[]
PMSUAPg=[]
PMSDAPg=[]
AutoQ=1

[Ms.Calc.IsFull]
Measure=Calc
Formula=(#MaxQ#>#DisQ#)
DynamicVariables=1

[St.Tx.Zn]
X=(#Ppos.X#+(128+16/2)*#sc#)
Y=(#Ppos.X#+16*#sc#)
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-(128+16*1.5)*#sc#),((128-(16*2))*#sc#) | #da.sk#
DynamicVariables=1

[St.Tx.Title]
Container=Mt.Tx.Zn
DynamicVariables=1
Y=(-#Index#)
W=(#CURRENTCONFIGWIDTH#-(128+16*1.5)*#sc#)
ClipString=2
StringAlign=LeftTop
FontSize=(12*#Sc#*#Ft.Sc.Gn#)
[St.Tx.Text]
Container=Mt.Tx.Zn
X=0r
Y=(4*#sc#)R
W=(#CURRENTCONFIGWIDTH#-(128+16*1.5)*#sc#)
ClipString=2
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
DynamicVariables=1

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.PnSr
[Mt.Le]
Meter=Shape
MeterStyle=St.Le|St.Le.Rtt
Shape16=Rectangle (#Ppos.X#+(128+10-8)*#sc#),(#Ppos.Y#+10*#sc#),(#CURRENTCONFIGWIDTH#-(128+10*2-8)*#sc#),(#CURRENTCONFIGHEIGHT#-10*2*#sc#),(#Cr#/2),(#Cr#/2)
Shape17=Combine Shape9 | Exclude Shape16
Shape18=Rectangle (#Ppos.X#+(128+9-8)*#sc#),(#Ppos.Y#+9*#sc#),(#CURRENTCONFIGWIDTH#-(128+9*2-8)*#sc#),(#CURRENTCONFIGHEIGHT#-9*2*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#*#Op.Bg_Cstm#)
Shape19=Combine Shape18 | Exclude Shape16

[Mt.Tx.Zn]
Meter=Shape
MeterStyle=St.Tx.Zn
[Mt.Tx.Title]
Meter=String
MeterStyle=St.Gp.Main|St.Ft|St.Tx.Title|St.Tx.Title_Part|St.Ft.Bd
[Mt.Tx.Text]
Meter=String
MeterStyle=St.Gp.Main|St.Ft|St.Tx.Text|St.Tx.Text_Part|St.Ft.CmTxFm

[Mt.Srbr]
Meter=Shape
MeterStyle=St.ZnCt|St.Srbr.Ver
[Mt.Bt.MvPrePg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPrePg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=(12*#sc#)
[Mt.Bt.MvNxtPg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxtPg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+24)*#sc#)
[Mt.Bt.MvPrePg.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.01
[Mt.Bt.MvPrePg.02]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPrePg.Ver.02
[Mt.Bt.MvNxtPg.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.01
[Mt.Bt.MvNxtPg.02]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxtPg.Ver.02
[Mt.Bt.MvPre.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPre
X=(#CURRENTCONFIGWIDTH#-(12+24+32)*#sc#)
Y=(12*#sc#)
[Mt.Bt.MvNxt.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxt
X=(#CURRENTCONFIGWIDTH#-(12+24+32)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+24)*#sc#)
[Mt.Bt.MvPre.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPre.Ver
[Mt.Bt.MvNxt.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxt.Ver