[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "02" "#CURRENTSKINSETTINGS#"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

; Overwrite / Remove

Ac.|TEMP|.Bs.00=
Ac.|TEMP|.Bs.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bs.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Sh"  "#Cl.Sh#"  "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cr"     "#Cr#"     "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Sp"     "#Sp#"     "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ppos.X" "#Ppos.X#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ppos.Y" "#Ppos.Y#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Bs.01=
Ac.|TEMP|.Bs.11=

Ac.|TEMP|.Op.00=
Ac.|TEMP|.Op.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bg" "#Op.Bg#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Fg" "#Op.Fg#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bd" "#Op.Bd#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Op.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bg" "#[Ms.String.|Op.Bg|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Fg" "#[Ms.String.|Op.Fg|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bd" "#[Ms.String.|Op.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Op.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bg" "#[Ms.String.|Op.Bg|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Fg" "#[Ms.String.|Op.Fg|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Op.Bd" "#[Ms.String.|Op.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

Ac.|TEMP|.Le.00=
Ac.|TEMP|.Le.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Dt" "#Le.Dt#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Ag" "#Le.Ag#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.St" "#Le.St#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Le.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Dt" "#[Ms.String.|Le.Dt|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Ag" "#[Ms.String.|Le.Ag|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.St" "#[Ms.String.|Le.St|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Le.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Dt" "#[Ms.String.|Le.Dt|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.Ag" "#[Ms.String.|Le.Ag|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Le.St" "#[Ms.String.|Le.St|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

Ac.|TEMP|.Hl.00=
Ac.|TEMP|.Hl.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Op" "#Hl.Op#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Bd" "#Hl.Bd#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Cl" "#Hl.Cl#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Hl.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Op" "#[Ms.String.|Hl.Op|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Bd" "#[Ms.String.|Hl.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Cl" "#[Ms.String.|Hl.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Hl.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Op" "#[Ms.String.|Hl.Op|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Bd" "#[Ms.String.|Hl.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Hl.Cl" "#[Ms.String.|Hl.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

Ac.|TEMP|.Cl.00=
Ac.|TEMP|.Cl.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.R" "#Cl.Ac.R#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.G" "#Cl.Ac.G#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.B" "#Cl.Ac.B#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.R" "#Cl.Fg.R#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.G" "#Cl.Fg.G#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.B" "#Cl.Fg.B#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Cl.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.R" "#[Ms.String.|Cl.Ac.R|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.G" "#[Ms.String.|Cl.Ac.G|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.B" "#[Ms.String.|Cl.Ac.B|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.R" "#[Ms.String.|Cl.Fg.R|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.G" "#[Ms.String.|Cl.Fg.G|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.B" "#[Ms.String.|Cl.Fg.B|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Cl.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.R" "#[Ms.String.|Cl.Ac.R|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.G" "#[Ms.String.|Cl.Ac.G|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Ac.B" "#[Ms.String.|Cl.Ac.B|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.R" "#[Ms.String.|Cl.Fg.R|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.G" "#[Ms.String.|Cl.Fg.G|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Cl.Fg.B" "#[Ms.String.|Cl.Fg.B|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

Ac.|TEMP|.Ft.00=
Ac.|TEMP|.Ft.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Gn" "#Ft.Fc.Gn#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Cl" "#Ft.Fc.Cl#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Gn" "#Ft.Wt.Gn#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Bd" "#Ft.Wt.Bd#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Cl" "#Ft.Wt.Cl#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Gn" "#Ft.Sc.Gn#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Cl" "#Ft.Sc.Cl#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Ft.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Gn" "#[Ms.String.|Ft.Fc.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Cl" "#[Ms.String.|Ft.Fc.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Gn" "#[Ms.String.|Ft.Wt.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Bd" "#[Ms.String.|Ft.Wt.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Cl" "#[Ms.String.|Ft.Wt.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Gn" "#[Ms.String.|Ft.Sc.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Cl" "#[Ms.String.|Ft.Sc.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Ft.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Gn" "#[Ms.String.|Ft.Fc.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Fc.Cl" "#[Ms.String.|Ft.Fc.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Gn" "#[Ms.String.|Ft.Wt.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Bd" "#[Ms.String.|Ft.Wt.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Wt.Cl" "#[Ms.String.|Ft.Wt.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Gn" "#[Ms.String.|Ft.Sc.Gn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Ft.Sc.Cl" "#[Ms.String.|Ft.Sc.Cl|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

Ac.|TEMP|.Bl.00=
Ac.|TEMP|.Bl.10=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Avlb" "1" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Md" "#Bl.Bg.Md#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Ty" "#Bl.Bg.Ty#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Bd" "#Bl.Bg.Bd#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Cn" "#Bl.Bg.Cn#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Md" "#Bl.Gl.Md#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Ty" "#Bl.Gl.Ty#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Bd" "#Bl.Gl.Bd#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Cn" "#Bl.Gl.Cn#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Bl.01=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Md" "#[Ms.String.|Bl.Bg.Md|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Ty" "#[Ms.String.|Bl.Bg.Ty|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Bd" "#[Ms.String.|Bl.Bg.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Cn" "#[Ms.String.|Bl.Bg.Cn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Md" "#[Ms.String.|Bl.Gl.Md|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Ty" "#[Ms.String.|Bl.Gl.Ty|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Bd" "#[Ms.String.|Bl.Gl.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Cn" "#[Ms.String.|Bl.Gl.Cn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]
Ac.|TEMP|.Bl.11=[!Delay 16][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Avlb" "0" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Md" "#[Ms.String.|Bl.Bg.Md|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Ty" "#[Ms.String.|Bl.Bg.Ty|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Bd" "#[Ms.String.|Bl.Bg.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Bg.Cn" "#[Ms.String.|Bl.Bg.Cn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Md" "#[Ms.String.|Bl.Gl.Md|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Ty" "#[Ms.String.|Bl.Gl.Ty|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Bd" "#[Ms.String.|Bl.Gl.Bd|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Bl.Gl.Cn" "#[Ms.String.|Bl.Gl.Cn|]" "#Pk@#Config\SkinSettings\ThemeSelector.inc"]

HdNtBt=0
NtBtTx=#Tm.Save#
NtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#CURRENTSKINSETTINGS#"][!WriteKeyValue "Variables" "|Mt.Op.#WriteIn#-------|.Nm" "#|TEMP|.Nm#" "#Pk@#Config\SkinSettings\ThemeSelector.inc"][#Ac.|TEMP|.Bs.[#|TEMP|.Bs.Ovrd][#|TEMP|.Bs.Remv]][#Ac.|TEMP|.Op.[#|TEMP|.Op.Ovrd][#|TEMP|.Op.Remv]][#Ac.|TEMP|.Le.[#|TEMP|.Le.Ovrd][#|TEMP|.Le.Remv]][#Ac.|TEMP|.Hl.[#|TEMP|.Hl.Ovrd][#|TEMP|.Hl.Remv]][#Ac.|TEMP|.Cl.[#|TEMP|.Cl.Ovrd][#|TEMP|.Cl.Remv]][#Ac.|TEMP|.Ft.[#|TEMP|.Ft.Ovrd][#|TEMP|.Ft.Remv]][#Ac.|TEMP|.Bl.[#|TEMP|.Bl.Ovrd][#|TEMP|.Bl.Remv]][!Delay 16][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"]#Wizd.ClAc#

PgTtl=#St.Setup.0100#

[Ms.String.|Cl.Sh|]
Measure=String
String=Cl.Sh#
[Ms.String.|Cr|]
Measure=String
String=Cr#
[Ms.String.|Sp|]
Measure=String
String=Sp#
[Ms.String.|Ppos.X|]
Measure=String
String=Ppos.X#
[Ms.String.|Ppos.Y|]
Measure=String
String=Ppos.Y#
[Ms.String.|Op.Bg|]
Measure=String
String=Op.Bg#
[Ms.String.|Op.Fg|]
Measure=String
String=Op.Fg#
[Ms.String.|Op.Bd|]
Measure=String
String=Op.Bd#
[Ms.String.|Le.Dt|]
Measure=String
String=Le.Dt#
[Ms.String.|Le.Ag|]
Measure=String
String=Le.Ag#
[Ms.String.|Le.St|]
Measure=String
String=Le.St#
[Ms.String.|Hl.Op|]
Measure=String
String=Hl.Op#
[Ms.String.|Hl.Bd|]
Measure=String
String=Hl.Bd#
[Ms.String.|Hl.Cl|]
Measure=String
String=Hl.Cl#
[Ms.String.|Cl.Ac.R|]
Measure=String
String=Cl.Ac.R#
[Ms.String.|Cl.Ac.G|]
Measure=String
String=Cl.Ac.G#
[Ms.String.|Cl.Ac.B|]
Measure=String
String=Cl.Ac.B#
[Ms.String.|Cl.Fg.R|]
Measure=String
String=Cl.Fg.R#
[Ms.String.|Cl.Fg.G|]
Measure=String
String=Cl.Fg.G#
[Ms.String.|Cl.Fg.B|]
Measure=String
String=Cl.Fg.B#
[Ms.String.|Ft.Fc.Gn|]
Measure=String
String=Ft.Fc.Gn#
[Ms.String.|Ft.Fc.Cl|]
Measure=String
String=Ft.Fc.Cl#
[Ms.String.|Ft.Wt.Gn|]
Measure=String
String=Ft.Wt.Gn#
[Ms.String.|Ft.Wt.Bd|]
Measure=String
String=Ft.Wt.Bd#
[Ms.String.|Ft.Wt.Cl|]
Measure=String
String=Ft.Wt.Cl#
[Ms.String.|Ft.Sc.Gn|]
Measure=String
String=Ft.Sc.Gn#
[Ms.String.|Ft.Sc.Cl|]
Measure=String
String=Ft.Sc.Cl#
[Ms.String.|Bl.Bg.Md|]
Measure=String
String=Bl.Bg.Md#
[Ms.String.|Bl.Bg.Ty|]
Measure=String
String=Bl.Bg.Ty#
[Ms.String.|Bl.Bg.Bd|]
Measure=String
String=Bl.Bg.Bd#
[Ms.String.|Bl.Bg.Cn|]
Measure=String
String=Bl.Bg.Cn#
[Ms.String.|Bl.Gl.Md|]
Measure=String
String=Bl.Gl.Md#
[Ms.String.|Bl.Gl.Ty|]
Measure=String
String=Bl.Gl.Ty#
[Ms.String.|Bl.Gl.Bd|]
Measure=String
String=Bl.Gl.Bd#
[Ms.String.|Bl.Gl.Cn|]
Measure=String
String=Bl.Gl.Cn#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.START|St.Ft.CmTxFm
Text=#St.Setup.0101#

[Mt.TextInput.00]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.Text.01:X])
Y=([Mt.Text.01:YH]+16*#sc#)
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-(128*2)*#sc#),(32*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-(128*2)*#sc#),(32*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,128
Shape3=Rectangle (#sc#),(#sc#),(#CURRENTCONFIGWIDTH#-(128*2+2)*#sc#),((32-2)*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
LeftMouseUpAction=[!ShowMeter C#CURRENTSECTION#][!CommandMeasure "Ms.#CURRENTSECTION#" "ExecuteBatch 1"][!Redraw]
MouseActionCursor=1
MouseActionCursorName=TEXT
[Mt.TextInput.00T]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#|TEMP|.Nm#
X=([Mt.TextInput.00:X]+8*#sc#)
Y=([Mt.TextInput.00:Y]+[Mt.TextInput.00:H]/2)
W=([Mt.TextInput.00:W]-8*2*#sc#)
ClipString=1
StringAlign=LeftCenter
[CMt.TextInput.00]
Meter=Shape
MeterStyle=St.ZnCt
X=([Mt.TextInput.00:X])
Y=([Mt.TextInput.00:Y])
Shape=Rectangle (#sc#),(#sc#),(#CURRENTCONFIGWIDTH#-(128*2+2)*#sc#),((32-2)*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle 0,(32*#sc#),(#CURRENTCONFIGWIDTH#-(128*2)*#sc#),(-2*#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
DynamicVariables=1
Hidden=1
[Ms.Mt.TextInput.00]
Measure=Plugin
Plugin=InputText
X=([Mt.TextInput.00:X]+6*#sc#)
Y=([Mt.TextInput.00:Y]+6*#sc#)
W=([Mt.TextInput.00:W]-6*2*#sc#)
H=(20*#sc#)
SolidColor=#Cl.Gn.Bg.Op#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=#|TEMP|.Nm#
Command1=[!Delay 16][!WriteKeyValue Variables "|TEMP|.Nm" "$UserInput$" "#CURRENTSKINSETTINGS#"][!Delay 16][!Refresh]
OnDismissAction=[!HideMeter CMt.TextInput.00][!Redraw]
DynamicVariables=1
