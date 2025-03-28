[Variables]
Pg.Tt=#St.Setup.0201#
Pg.Im=#@#Image\Null

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "04" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#Tm.Next#
Bt.Nx.Ac=[!WriteKeyValue "Variables" "Page" "08" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

PVX=(24*#sc#)
PVY=((24+32)*#sc#)
Cl_Pv.|Cl.Sh|_0.Dt=(#Cl.Ac.Ar#>128?1:0)
Cl_Pv.|Cl.Sh|_0.Gn.Fg.Gn=0,0,0
Cl_Pv.|Cl.Sh|_0.Gn.Fg.Sd=0,0,0
Cl_Pv.|Cl.Sh|_0.Gn.Bg.Gn=255,255,255
Cl_Pv.|Cl.Sh|_0.Gn.Bg.Da=243,243,243
Cl_Pv.|Cl.Sh|_0.Gn.Bg.Sl=255,255,255
Cl_Pv.|Cl.Sh|_0.Gn.Bg.Op=255,255,255
Cl_Pv.|Cl.Sh|_0.Gn.Bg.Ti=255,255,255
Cl_Pv.|Cl.Sh|_0.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl_Pv.|Cl.Sh|_0.Ac.Fg.Sl=(#Cl.Ac.R#-64),(#Cl.Ac.G#-64),(#Cl.Ac.B#-64)
Cl_Pv.|Cl.Sh|_0.Ac.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_0.Wrng.Fg.Gn=192,0,0
Cl_Pv.|Cl.Sh|_0.Wrng.Bg.Gn=255,0,0
Cl_Pv.|Cl.Sh|_0.SwBd=1

Cl_Pv.|Cl.Sh|_1.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl_Pv.|Cl.Sh|_1.Gn.Fg.Gn=255,255,255
Cl_Pv.|Cl.Sh|_1.Gn.Fg.Sd=0,0,0
Cl_Pv.|Cl.Sh|_1.Gn.Bg.Gn=32,32,32
Cl_Pv.|Cl.Sh|_1.Gn.Bg.Da=32,32,32
Cl_Pv.|Cl.Sh|_1.Gn.Bg.Sl=24,24,24
Cl_Pv.|Cl.Sh|_1.Gn.Bg.Op=44,44,44
Cl_Pv.|Cl.Sh|_1.Gn.Bg.Ti=56,56,56
Cl_Pv.|Cl.Sh|_1.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl_Pv.|Cl.Sh|_1.Ac.Fg.Sl=(#Cl.Ac.R#+64),(#Cl.Ac.G#+64),(#Cl.Ac.B#+64)
Cl_Pv.|Cl.Sh|_1.Ac.Bg.Gn=(#Cl.Ac.R#+32),(#Cl.Ac.G#+32),(#Cl.Ac.B#+32)
Cl_Pv.|Cl.Sh|_1.Wrng.Fg.Gn=255,128,128
Cl_Pv.|Cl.Sh|_1.Wrng.Bg.Gn=255,0,0
Cl_Pv.|Cl.Sh|_1.SwBd=0

Cl_Pv.|Cl.Sh|_2.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl_Pv.|Cl.Sh|_2.Gn.Fg.Gn=255,255,255
Cl_Pv.|Cl.Sh|_2.Gn.Fg.Sd=0,0,0
Cl_Pv.|Cl.Sh|_2.Gn.Bg.Gn=0,0,0
Cl_Pv.|Cl.Sh|_2.Gn.Bg.Da=0,0,0
Cl_Pv.|Cl.Sh|_2.Gn.Bg.Sl=0,0,0
Cl_Pv.|Cl.Sh|_2.Gn.Bg.Op=16,16,16
Cl_Pv.|Cl.Sh|_2.Gn.Bg.Ti=32,32,32
Cl_Pv.|Cl.Sh|_2.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl_Pv.|Cl.Sh|_2.Ac.Fg.Sl=(#Cl.Ac.R#+64),(#Cl.Ac.G#+64),(#Cl.Ac.B#+64)
Cl_Pv.|Cl.Sh|_2.Ac.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_2.Wrng.Fg.Gn=255,128,128
Cl_Pv.|Cl.Sh|_2.Wrng.Bg.Gn=255,0,0
Cl_Pv.|Cl.Sh|_2.SwBd=1

Cl_Pv.|Cl.Sh|_3.Dt=(#Cl.Ac.Ar#>159?1:0)
Cl_Pv.|Cl.Sh|_3.Gn.Fg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl_Pv.|Cl.Sh|_3.Gn.Fg.Sd=0,0,0
Cl_Pv.|Cl.Sh|_3.Gn.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Gn.Bg.Da=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Gn.Bg.Sl=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Gn.Bg.Op=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Gn.Bg.Ti=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Ac.Fg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Ac.Fg.Sl=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
Cl_Pv.|Cl.Sh|_3.Ac.Bg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl_Pv.|Cl.Sh|_3.Wrng.Fg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl_Pv.|Cl.Sh|_3.Wrng.Bg.Gn=(#Cl.Fg.R#),(#Cl.Fg.G#),(#Cl.Fg.B#)
Cl_Pv.|Cl.Sh|_3.SwBd=0

Cl_Pv.|Cl.Sh|_4.Dt=(#Cl.Ac.Ar#>128?1:0)
Cl_Pv.|Cl.Sh|_4.Gn.Fg.Gn=255,255,255
Cl_Pv.|Cl.Sh|_4.Gn.Fg.Sd=255,255,255
Cl_Pv.|Cl.Sh|_4.Gn.Bg.Gn=0,0,0
Cl_Pv.|Cl.Sh|_4.Gn.Bg.Da=0,0,0
Cl_Pv.|Cl.Sh|_4.Gn.Bg.Sl=0,0,0
Cl_Pv.|Cl.Sh|_4.Gn.Bg.Op=0,0,0
Cl_Pv.|Cl.Sh|_4.Gn.Bg.Ti=0,0,0
Cl_Pv.|Cl.Sh|_4.Ac.Fg.Gn=0,0,0
Cl_Pv.|Cl.Sh|_4.Ac.Fg.Sl=255,255,255
Cl_Pv.|Cl.Sh|_4.Ac.Bg.Gn=(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.R#>0)?((#Cl.Ac.R#>128)?2:1.5):0):2)),(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.G#>0)?((#Cl.Ac.G#>128)?2:1.5):0):2)),(128*(#Cl.Ac.Ar#>0?((#Cl.Ac.B#>0)?((#Cl.Ac.B#>128)?2:1.5):0):2))
Cl_Pv.|Cl.Sh|_4.Wrng.Fg.Gn=255,96,96
Cl_Pv.|Cl.Sh|_4.Wrng.Bg.Gn=255,96,96
Cl_Pv.|Cl.Sh|_4.SwBd=8
Cl_Pv.|Cl.Sh|_4.HvSt=10

|Mt.Op.00-------|.Nm=#Tm.Theme.00#
|Mt.Op.00-------|.Avlb=1
|Mt.Op.00-------|.Op.Avlb=1
|Mt.Op.00-------|.Le.Avlb=1
|Mt.Op.00-------|.Hl.Avlb=1
|Mt.Op.00-------|.Cl.Avlb=0
|Mt.Op.00-------|.Ft.Avlb=0
|Mt.Op.00-------|.Bl.Avlb=0
|Mt.Op.00-------|.Cl.Sh=0
|Mt.Op.00-------|.Cr=10
|Mt.Op.00-------|.Sp=2
|Mt.Op.00-------|.Ppos.X=0
|Mt.Op.00-------|.Ppos.Y=0
|Mt.Op.00-------|.Op.Bg=0.8
|Mt.Op.00-------|.Op.Fg=1
|Mt.Op.00-------|.Op.Bd=0.1
|Mt.Op.00-------|.Le.Dt=1
|Mt.Op.00-------|.Le.Ag=270
|Mt.Op.00-------|.Le.St=0.2
|Mt.Op.00-------|.Hl.Op=0
|Mt.Op.00-------|.Hl.Bd=1
|Mt.Op.00-------|.Hl.Cl=0

|Mt.Op.01-------|.Nm=#Tm.Theme.01#
|Mt.Op.01-------|.Avlb=1
|Mt.Op.01-------|.Op.Avlb=1
|Mt.Op.01-------|.Le.Avlb=1
|Mt.Op.01-------|.Hl.Avlb=1
|Mt.Op.01-------|.Cl.Avlb=0
|Mt.Op.01-------|.Ft.Avlb=0
|Mt.Op.01-------|.Bl.Avlb=0
|Mt.Op.01-------|.Cl.Sh=0
|Mt.Op.01-------|.Cr=0
|Mt.Op.01-------|.Sp=2
|Mt.Op.01-------|.Ppos.X=0
|Mt.Op.01-------|.Ppos.Y=0
|Mt.Op.01-------|.Op.Bg=0.8
|Mt.Op.01-------|.Op.Fg=1
|Mt.Op.01-------|.Op.Bd=0
|Mt.Op.01-------|.Le.Dt=1
|Mt.Op.01-------|.Le.Ag=270
|Mt.Op.01-------|.Le.St=0
|Mt.Op.01-------|.Hl.Op=0
|Mt.Op.01-------|.Hl.Bd=1
|Mt.Op.01-------|.Hl.Cl=0

|Mt.Op.02-------|.Nm=#Tm.Theme.02#
|Mt.Op.02-------|.Avlb=1
|Mt.Op.02-------|.Op.Avlb=1
|Mt.Op.02-------|.Le.Avlb=1
|Mt.Op.02-------|.Hl.Avlb=1
|Mt.Op.02-------|.Cl.Avlb=0
|Mt.Op.02-------|.Ft.Avlb=0
|Mt.Op.02-------|.Bl.Avlb=0
|Mt.Op.02-------|.Cl.Sh=3
|Mt.Op.02-------|.Cr=10
|Mt.Op.02-------|.Sp=2
|Mt.Op.02-------|.Ppos.X=0
|Mt.Op.02-------|.Ppos.Y=0
|Mt.Op.02-------|.Op.Bg=1
|Mt.Op.02-------|.Op.Fg=1
|Mt.Op.02-------|.Op.Bd=0
|Mt.Op.02-------|.Le.Dt=1
|Mt.Op.02-------|.Le.Ag=270
|Mt.Op.02-------|.Le.St=0
|Mt.Op.02-------|.Hl.Op=0
|Mt.Op.02-------|.Hl.Bd=1
|Mt.Op.02-------|.Hl.Cl=0

|Mt.Op.03-------|.Nm=#Tm.Theme.07#
|Mt.Op.03-------|.Avlb=1
|Mt.Op.03-------|.Op.Avlb=1
|Mt.Op.03-------|.Le.Avlb=1
|Mt.Op.03-------|.Hl.Avlb=1
|Mt.Op.03-------|.Cl.Avlb=0
|Mt.Op.03-------|.Ft.Avlb=0
|Mt.Op.03-------|.Bl.Avlb=0
|Mt.Op.03-------|.Cl.Sh=1
|Mt.Op.03-------|.Cr=10
|Mt.Op.03-------|.Sp=2
|Mt.Op.03-------|.Ppos.X=0
|Mt.Op.03-------|.Ppos.Y=0
|Mt.Op.03-------|.Op.Bg=0.8
|Mt.Op.03-------|.Op.Fg=1
|Mt.Op.03-------|.Op.Bd=0.2
|Mt.Op.03-------|.Le.Dt=1
|Mt.Op.03-------|.Le.Ag=270
|Mt.Op.03-------|.Le.St=0.2
|Mt.Op.03-------|.Hl.Op=0.3
|Mt.Op.03-------|.Hl.Bd=1
|Mt.Op.03-------|.Hl.Cl=0

|Mt.Op.10-------|.Nm=#Tm.Theme.03#
|Mt.Op.10-------|.Avlb=1
|Mt.Op.10-------|.Op.Avlb=1
|Mt.Op.10-------|.Le.Avlb=1
|Mt.Op.10-------|.Hl.Avlb=1
|Mt.Op.10-------|.Cl.Avlb=0
|Mt.Op.10-------|.Ft.Avlb=0
|Mt.Op.10-------|.Bl.Avlb=0
|Mt.Op.10-------|.Cl.Sh=1
|Mt.Op.10-------|.Cr=10
|Mt.Op.10-------|.Sp=2
|Mt.Op.10-------|.Ppos.X=0
|Mt.Op.10-------|.Ppos.Y=0
|Mt.Op.10-------|.Op.Bg=0.8
|Mt.Op.10-------|.Op.Fg=1
|Mt.Op.10-------|.Op.Bd=0.1
|Mt.Op.10-------|.Le.Dt=1
|Mt.Op.10-------|.Le.Ag=270
|Mt.Op.10-------|.Le.St=0.2
|Mt.Op.10-------|.Hl.Op=0
|Mt.Op.10-------|.Hl.Bd=1
|Mt.Op.10-------|.Hl.Cl=0

|Mt.Op.11-------|.Nm=#Tm.Theme.04#
|Mt.Op.11-------|.Avlb=1
|Mt.Op.11-------|.Op.Avlb=1
|Mt.Op.11-------|.Le.Avlb=1
|Mt.Op.11-------|.Hl.Avlb=1
|Mt.Op.11-------|.Cl.Avlb=0
|Mt.Op.11-------|.Ft.Avlb=0
|Mt.Op.11-------|.Bl.Avlb=0
|Mt.Op.11-------|.Cl.Sh=2
|Mt.Op.11-------|.Cr=0
|Mt.Op.11-------|.Sp=2
|Mt.Op.11-------|.Ppos.X=0
|Mt.Op.11-------|.Ppos.Y=0
|Mt.Op.11-------|.Op.Bg=0.5
|Mt.Op.11-------|.Op.Fg=1
|Mt.Op.11-------|.Op.Bd=0
|Mt.Op.11-------|.Le.Dt=1
|Mt.Op.11-------|.Le.Ag=270
|Mt.Op.11-------|.Le.St=0
|Mt.Op.11-------|.Hl.Op=0
|Mt.Op.11-------|.Hl.Bd=1
|Mt.Op.11-------|.Hl.Cl=0

|Mt.Op.12-------|.Nm=#Tm.Theme.05#
|Mt.Op.12-------|.Avlb=1
|Mt.Op.12-------|.Op.Avlb=1
|Mt.Op.12-------|.Le.Avlb=1
|Mt.Op.12-------|.Hl.Avlb=1
|Mt.Op.12-------|.Cl.Avlb=0
|Mt.Op.12-------|.Ft.Avlb=0
|Mt.Op.12-------|.Bl.Avlb=0
|Mt.Op.12-------|.Cl.Sh=2
|Mt.Op.12-------|.Cr=10
|Mt.Op.12-------|.Sp=2
|Mt.Op.12-------|.Ppos.X=0
|Mt.Op.12-------|.Ppos.Y=0
|Mt.Op.12-------|.Op.Bg=0
|Mt.Op.12-------|.Op.Fg=1
|Mt.Op.12-------|.Op.Bd=0
|Mt.Op.12-------|.Le.Dt=1
|Mt.Op.12-------|.Le.Ag=270
|Mt.Op.12-------|.Le.St=0
|Mt.Op.12-------|.Hl.Op=0
|Mt.Op.12-------|.Hl.Bd=1
|Mt.Op.12-------|.Hl.Cl=0

|Mt.Op.13-------|.Nm=#Tm.Theme.08#
|Mt.Op.13-------|.Avlb=1
|Mt.Op.13-------|.Op.Avlb=1
|Mt.Op.13-------|.Le.Avlb=1
|Mt.Op.13-------|.Hl.Avlb=1
|Mt.Op.13-------|.Cl.Avlb=0
|Mt.Op.13-------|.Ft.Avlb=0
|Mt.Op.13-------|.Bl.Avlb=0
|Mt.Op.13-------|.Cl.Sh=4
|Mt.Op.13-------|.Cr=0
|Mt.Op.13-------|.Sp=1
|Mt.Op.13-------|.Ppos.X=0
|Mt.Op.13-------|.Ppos.Y=0
|Mt.Op.13-------|.Op.Bg=1
|Mt.Op.13-------|.Op.Fg=1
|Mt.Op.13-------|.Op.Bd=1
|Mt.Op.13-------|.Le.Dt=0
|Mt.Op.13-------|.Le.Ag=270
|Mt.Op.13-------|.Le.St=0
|Mt.Op.13-------|.Hl.Op=0
|Mt.Op.13-------|.Hl.Bd=1
|Mt.Op.13-------|.Hl.Cl=0

Vr.|Mt.Op.00-------|=00
Vr.|Mt.Op.01-------|=01
Vr.|Mt.Op.02-------|=02
Vr.|Mt.Op.03-------|=03
Vr.|Mt.Op.10-------|=10
Vr.|Mt.Op.11-------|=11
Vr.|Mt.Op.12-------|=12
Vr.|Mt.Op.13-------|=13

Ac.|Mt.Op.00-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.00-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.00-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.00-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.00-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.00-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.00-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.00-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.00-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.00-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.00-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.00-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.00-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.00-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.00-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.01-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.01-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.01-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.01-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.01-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.01-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.01-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.01-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.01-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.01-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.01-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.01-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.01-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.01-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.01-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.02-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.02-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.02-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.02-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.02-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.02-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.02-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.02-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.02-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.02-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.02-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.02-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.02-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.02-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.02-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.03-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.03-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.03-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.03-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.03-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.03-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.03-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.03-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.03-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.03-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.03-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.03-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.03-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.03-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.03-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.10-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.10-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.10-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.10-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.10-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.10-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.10-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.10-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.10-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.10-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.10-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.10-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.10-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.10-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.10-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.11-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.11-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.11-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.11-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.11-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.11-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.11-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.11-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.11-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.11-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.11-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.11-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.11-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.11-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.11-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.12-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.12-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.12-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.12-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.12-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.12-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.12-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.12-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.12-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.12-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.12-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.12-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.12-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.12-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.12-------|.Hl.Cl]" "#@#Config\Settings.inc"]
Ac.|Mt.Op.13-------|.Avlb_1=[!Delay 16][!WriteKeyValue "Variables" "Cl.Sh" "[#|Mt.Op.13-------|.Cl.Sh]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr" "[#|Mt.Op.13-------|.Cr]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp" "[#|Mt.Op.13-------|.Sp]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "[#|Mt.Op.13-------|.Ppos.X]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "[#|Mt.Op.13-------|.Ppos.Y]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Op.Bg" "[#|Mt.Op.13-------|.Op.Bg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg" "[#|Mt.Op.13-------|.Op.Fg]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd" "[#|Mt.Op.13-------|.Op.Bd]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Le.Dt" "[#|Mt.Op.13-------|.Le.Dt]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag" "[#|Mt.Op.13-------|.Le.Ag]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St" "[#|Mt.Op.13-------|.Le.St]" "#@#Config\Settings.inc"][!Delay 16][!WriteKeyValue "Variables" "Hl.Op" "[#|Mt.Op.13-------|.Hl.Op]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd" "[#|Mt.Op.13-------|.Hl.Bd]" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl" "[#|Mt.Op.13-------|.Hl.Cl]" "#@#Config\Settings.inc"]

@include=#@#Config\Language\en-us\Colors.inc
@include2=#@#Config\Language\#Lg#\Colors.inc
@include3=#Pk@#Config\Language\en-us\Preview.inc
@include4=#Pk@#Config\Language\#Lg.Pk#\Preview.inc

[Ms.MaxQ]
Measure=Calc
Formula=0
DynamicVariables=1

[St.Cstm.Sp.01.01]
Shape=Rectangle 0,0,(104*#sc#),(104*#sc#),(#Cr#/2),(#Cr#/2) | #Da.Sk# | Fill Color #Cl.Gn.Bg.Op#,128
Shape2=Rectangle ((12)*#sc#),((12)*#sc#),(64*#Sc#*(1.25)),(64*#Sc#*(1.25)),(Max(([#|[#CURRENTSECTION]|.Cr]),0)),(Max(([#|[#CURRENTSECTION]|.Cr]),0)) | #Da.Sk# | Fill Color [#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]|.Cl.Sh].Gn.Fg.Sd],(128*([#|[#CURRENTSECTION]|.Op.Bd]))
Shape3=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])/2+(([#|[#CURRENTSECTION]|.Ppos.X])/2)),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])/2+(([#|[#CURRENTSECTION]|.Ppos.Y])/2)),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])),(Max((([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp])/2),0)),(Max((([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp])/2),0)) | #Da.Sk# | Fill Color [#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]|.Cl.Sh].Gn.Fg.Sd],(128*([#|[#CURRENTSECTION]|.Op.Bd]))
Shape4=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0))
Shape5=Combine Shape2 | Exclude Shape4
Shape6=Combine Shape3 | Exclude Shape4
Shape7=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)) | #Da.Sk# | Fill Color [#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]|.Cl.Sh].Gn.Bg.Gn],(255*([#|[#CURRENTSECTION]|.Op.Bg]))
Shape8=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)) | #Da.Sk# | Fill LinearGradient GdntHlL
Shape9=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)) | #Da.Sk# | Fill Color 255,255,255,(255*([#|[#CURRENTSECTION]|.Hl.Op]))
Shape10=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])+([#|[#CURRENTSECTION]|.Hl.Bd])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])+([#|[#CURRENTSECTION]|.Hl.Bd])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2-([#|[#CURRENTSECTION]|.Hl.Bd])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2-([#|[#CURRENTSECTION]|.Hl.Bd])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp])-([#|[#CURRENTSECTION]|.Hl.Bd]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp])-([#|[#CURRENTSECTION]|.Hl.Bd]),0))
Shape11=Combine Shape9 | Exclude Shape10
Shape12=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)) | #Da.Sk# | Fill Color [#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]|.Cl.Sh].Gn.Bg.Gn],(255*(([#|[#CURRENTSECTION]|.Le.St]))*(1-#Bnd.T#))
Shape13=Rectangle ((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+([#|[#CURRENTSECTION]|.Sp])+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(64*#Sc#*(1.25)-([#|[#CURRENTSECTION]|.Sp])*2),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)),(Max(([#|[#CURRENTSECTION]|.Cr])-([#|[#CURRENTSECTION]|.Sp]),0)) | Offset (-cos(PI/180*([#|[#CURRENTSECTION]|.Le.Ag]))*#Le.Dt#),(-sin(PI/180*([#|[#CURRENTSECTION]|.Le.Ag]))*#Le.Dt#)
Shape14=Combine Shape12 | Exclude Shape13
Shape15=Rectangle ((12)*#sc#+8*#sc#+([#|[#CURRENTSECTION]|.Ppos.X])),((12)*#sc#+64*#sc#+([#|[#CURRENTSECTION]|.Ppos.Y])),(64*#sc#),(8*#sc#),((([#|[#CURRENTSECTION]|.Cr])=0)?0:(4*#sc#)),((([#|[#CURRENTSECTION]|.Cr])=0)?0:(4*#sc#)) | #da.sk# | Fill Color [#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]|.Cl.Sh].Ac.Bg.Gn],(255*[#|[#CURRENTSECTION]|.Op.Fg])
GdntHlL=([#|[#CURRENTSECTION]|.Le.Ag]) | 255,255,255,(255*([#|[#CURRENTSECTION]|.Hl.Op])) ; 0 | 255,255,255,(128*([#|[#CURRENTSECTION]|.Hl.Op])) ; 0.499 | 0,0,0,(128*([#|[#CURRENTSECTION]|.Hl.Op])) ; 0.5 | 0,0,0,0 ; 1
Shape16=Rectangle 0,0,(104*#sc#),(104*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
Shape17=Rectangle 0,0,(104*#sc#),(104*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | #Fl.Cl.Ob#
Shape18=Rectangle (#sc#),(#sc#),((104-2)*#sc#),((104-2)*#sc#),(max(#Cr#/2,0)),(max(#Cr#/2,0))
Shape19=Combine Shape17 | Exclude Shape18
;Shape20=Rectangle (98*#sc#),(100*#sc#),(32*#sc#),(22*#sc#),(2*#sc#),(2*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
;Shape21=Rectangle (97*#sc#),(99*#sc#),(34*#sc#),(24*#sc#),(3*#sc#),(3*#sc#) | #da.sk# | #Fl.Cl.Ob#
;Shape22=Rectangle (98*#sc#),(100*#sc#),(32*#sc#),(22*#sc#),(2*#sc#),(2*#sc#)
;Shape23=Combine Shape21 | Exclude Shape22
;Shape24=Rectangle (100*#sc#), (102*#sc#), (8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Op.Avlb])
;Shape25=Rectangle ((100+10)*#sc#), (102*#sc#), (8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Le.Avlb])
;Shape26=Rectangle ((100+10*2)*#sc#),(102*#sc#), (8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Hl.Avlb])
;Shape27=Rectangle (100*#sc#), ((102+10)*#sc#),(8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Cl.Avlb])
;Shape28=Rectangle ((100+10)*#sc#), ((102+10)*#sc#),(8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Ft.Avlb])
;Shape29=Rectangle ((100+10*2)*#sc#),((102+10)*#sc#),(8*#sc#),(8*#sc#),(#sc#),(#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#,(255*[#|[#CURRENTSECTION]|.Bl.Avlb])
;Shape30=Ellipse (47*#sc#),(111*#sc#),(12*#sc#) | #da.sk# | Fill Color [#|[#CURRENTSECTION]|.Cl.Ac.R],[#|[#CURRENTSECTION]|.Cl.Ac.G],[#|[#CURRENTSECTION]|.Cl.Ac.B],(255*[#|[#CURRENTSECTION]|.Cl.Avlb])
;Shape31=Ellipse (47*#sc#),(111*#sc#),(6*#sc#) | #da.sk# | Fill Color [#|[#CURRENTSECTION]|.Cl.Fg.R],[#|[#CURRENTSECTION]|.Cl.Fg.G],[#|[#CURRENTSECTION]|.Cl.Fg.B],(255*[#|[#CURRENTSECTION]|.Cl.Avlb])
LeftMouseUpAction=[#Ac.|[#CURRENTSECTION]|.Avlb_[#|[#CURRENTSECTION]|.Avlb]][#RefreshA_[#Em]]
DynamicVariables=1
[St.Cstm.Sp.02]
Shape=Rectangle 0,0,(104*#sc#),(104*#sc#),(#Cr#/2),(#Cr#/2) | #da.bg# | StrokeWidth (2*#sc#) | Stroke Color #Cl.Ac.Bg.Gn#
Hidden=((0=[#|[#CURRENTSECTION]---|.Avlb])||(#Cl.Sh#<>[#|[#CURRENTSECTION]---|.Cl.Sh])||(#Cr#<>[#|[#CURRENTSECTION]---|.Cr])||(#Sp#<>[#|[#CURRENTSECTION]---|.Sp])||(#Ppos.X#<>[#|[#CURRENTSECTION]---|.Ppos.X])||(#Ppos.Y#<>[#|[#CURRENTSECTION]---|.Ppos.Y])(#Le.Dt#<>[#|[#CURRENTSECTION]---|.Le.Dt])||(#Le.Ag#<>[#|[#CURRENTSECTION]---|.Le.Ag])||(#Le.St#<>[#|[#CURRENTSECTION]---|.Le.St])||(#Hl.Op#<>[#|[#CURRENTSECTION]---|.Hl.Op])||(#Hl.Bd#<>[#|[#CURRENTSECTION]---|.Hl.Bd])||(#Hl.Cl#<>[#|[#CURRENTSECTION]---|.Hl.Cl])||(#Op.Bg#<>[#|[#CURRENTSECTION]---|.Op.Bg])||(#Op.Fg#<>[#|[#CURRENTSECTION]---|.Op.Fg])||(#Op.Bd#<>[#|[#CURRENTSECTION]---|.Op.Bd])||)
DynamicVariables=1
[St.Cstm.Tx.01]
Text=Aa
FontSize=(30*#Sc#)
StringAlign=CenterCenter
FontColor=[#Cl_Pv.|Cl.Sh|_[#|[#CURRENTSECTION]-|.Cl.Sh].Gn.Fg.Gn],(255*[#|[#CURRENTSECTION]-|.Op.Fg])
Hidden=(1-[#|[#CURRENTSECTION]-|.Avlb])

[St.Cstm.Ps.XN.01]
X=((104+3)*#sc#)r
Y=0r
[St.Cstm.Ps.YN.01]
X=([Mt.Op.00-------:X])
Y=((104+3)*#sc#)r
[St.Cstm.Ps.YN.02]
X=([Mt.Op.00-------:X]+[Mt.Op.00-------:W]/2)
Y=((104+3)*#sc#)r

[Mt.Op.00-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Ps.START
X=(#sc#)
[Mt.Op.01-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01
[Mt.Op.02-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01
[Mt.Op.03-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01
[Mt.Op.10-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.YN.01
X=(#sc#)
[Mt.Op.11-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01
[Mt.Op.12-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01
[Mt.Op.13-------]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp|St.Cstm.Sp.01.01|St.Cstm.Ps.XN.01

[Mt.Op.00------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01
X=(53*#sc#)
Y=(49*#sc#+([Mt.Pg.Tt:YH]-4*#sc#))
[Mt.Op.01------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01
[Mt.Op.02------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01
[Mt.Op.03------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01
[Mt.Op.10------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YN.01
X=(53*#sc#)
[Mt.Op.11------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01
[Mt.Op.12------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01
FontColor=#Cl.Gn.Fg.Gn#
[Mt.Op.13------]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.XN.01

[Mt.Op.00----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START
X=(#sc#)
[Mt.Op.01----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01
[Mt.Op.02----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01
[Mt.Op.03----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01
[Mt.Op.10----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.YN.01
X=(#sc#)
[Mt.Op.11----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01
[Mt.Op.12----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01
[Mt.Op.13----]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Cstm.Sp.02|St.Ps.START|St.Cstm.Ps.XN.01

;[Mt.SelIdt]
;Meter=Shape
;MeterStyle=St.ZnCt_Wd|St.SelIdt

[Ms.Calc.|Cl.Ac.R|]
Measure=Calc
Formula=((#Cl.Ac.R#>=64)?((#Cl.Ac.R#>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.G|]
Measure=Calc
Formula=((#Cl.Ac.G#>=64)?((#Cl.Ac.G#>=192)?2:1):0)
[Ms.Calc.|Cl.Ac.B|]
Measure=Calc
Formula=((#Cl.Ac.B#>=64)?((#Cl.Ac.B#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.R|]
Measure=Calc
Formula=((#Cl.Fg.R#>=64)?((#Cl.Fg.R#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.G|]
Measure=Calc
Formula=((#Cl.Fg.G#>=64)?((#Cl.Fg.G#>=192)?2:1):0)
[Ms.Calc.|Cl.Fg.B|]
Measure=Calc
Formula=((#Cl.Fg.B#>=64)?((#Cl.Fg.B#>=192)?2:1):0)

[Mt.Op.06]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp
Y=([Mt.Op.10-------:YH]+(-18+2)*#sc#)
Shape=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,((430-2)*#sc#),((48+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "06" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
[Mt.Op.06.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl
ImageName=#Pk@#Image\MonoIcons\20\AccentColor
W=(20*#sc#)
H=(20*#sc#)
X=(14*#sc#)r
Y=(14*#sc#)r
[Mt.Op.06.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=#OpLs.AccentColor.Nm#
X=(14*#sc#)R
Y=([Mt.Op.06:Y]+(-18+24)*#sc#)
StringAlign=LeftCenter
[Mt.Op.06.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=[#Tm.Color.[&Ms.Calc.|Cl.Ac.R|][&Ms.Calc.|Cl.Ac.G|][&Ms.Calc.|Cl.Ac.B|]]
X=([Mt.Op.06:XW]+(-448-76)*#sc#)
Y=([Mt.Op.06:Y]+(-18+24)*#sc#)
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,192
[Mt.Op.06.04]
Meter=Shape
MeterStyle=St.ZnCt_Wd
Shape=Rectangle 0,0,(30*#sc#),(30*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
X=([Mt.Op.06:XW]+(-448-76+8)*#sc#)
Y=([Mt.Op.06:Y]+(-18+10)*#sc#)
[Mt.Op.06.05]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Op.06:XW]+(-448-76+8+30+8)*#sc#)
Y=([Mt.Op.06:Y]+(-18+16)*#sc#)
W=(18*#sc#)
H=(18*#sc#)

[Mt.Op.07]
Meter=Shape
MeterStyle=St.ZnCt_Wd|St.Bt.Sp
Y=([Mt.Op.06:YH]+(-18+2)*#sc#)
Shape=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,((430-2)*#sc#),((48+2)*#sc#),((#Cr#=0)?0:(#Cr#/2+#sc#)),((#Cr#=0)?0:(#Cr#/2+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (#sc#),(#sc#),((430-4)*#sc#),(48*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Extend Hover
Hidden=(#Cl.Sh#<>3)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "07" "#CURRENTSKINSETTINGS#"][#RefreshA_[#Em]]
[Mt.Op.07.01]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi|St.Sl
ImageName=#Pk@#Image\MonoIcons\20\ForegroundColor
W=(20*#sc#)
H=(20*#sc#)
X=(14*#sc#)r
Y=(14*#sc#)r
Hidden=(#Cl.Sh#<>3)
[Mt.Op.07.02]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=#OpLs.ForegroundColor.Nm#
X=(14*#sc#)R
Y=([Mt.Op.07:Y]+(-18+24)*#sc#)
StringAlign=LeftCenter
Hidden=(#Cl.Sh#<>3)
[Mt.Op.07.03]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl
Text=[#Tm.Color.[&Ms.Calc.|Cl.Fg.R|][&Ms.Calc.|Cl.Fg.G|][&Ms.Calc.|Cl.Fg.B|]]
X=([Mt.Op.07:XW]+(-448-76)*#sc#)
Y=([Mt.Op.07:Y]+(-18+24)*#sc#)
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,192
Hidden=(#Cl.Sh#<>3)
[Mt.Op.07.04]
Meter=Shape
MeterStyle=St.ZnCt_Wd
Shape=Rectangle 0,0,(30*#sc#),(30*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
X=([Mt.Op.07:XW]+(-448-76+8)*#sc#)
Y=([Mt.Op.07:Y]+(-18+10)*#sc#)
Hidden=(#Cl.Sh#<>3)
[Mt.Op.07.05]
Meter=Image
MeterStyle=St.ZnCt_Wd|St.Mi
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Op.07:XW]+(-448-76+8+30+8)*#sc#)
Y=([Mt.Op.07:Y]+(-18+16)*#sc#)
W=(18*#sc#)
H=(18*#sc#)
Hidden=(#Cl.Sh#<>3)
[Mt.Op.07.06]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft
Text=Aa
FontColor=#Cl.Fg.R#,#Cl.Fg.G#,#Cl.Fg.B#
X=([Mt.Op.07.04:X]+[Mt.Op.07.04:W]/2-448*#sc#)
Y=([Mt.Op.07.04:Y]+[Mt.Op.07.04:H]/2-18*#sc#)
StringAlign=CenterCenter
FontSize=(12*#sc#)

@include3=#Pk@#Config\ColorScheme_Preview\Main.inc