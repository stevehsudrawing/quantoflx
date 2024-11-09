[Variables]
@include=#@#Config\Language\en-us\TimeDatePlacematic.inc
@include2=#@#Config\Language\#Lg#\TimeDatePlacematic.inc

Pg.Tt=#St.Setup.0600#
Pg.Im=#Pk@#Image\Setup\02

Bt.Bk.Hd=0
Bt.Bk.Ac=[!WriteKeyValue "Variables" "Page" "01" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][#RefreshA_[#Em]]

Bt.Nx.Hd=0
Bt.Nx.Tx=#St.Setup.0602#
Bt.Nx.Ac=["https://github.com/SteveHsuDrawing/quantoflx/releases"]

Bt.Ex.Hd=1
Bt.Ex.Tx=#Tm.Next#
Bt.Ex.Ac=[]

ORA=[]

[Ms.MaxQ]
Measure=Calc
Formula=([Mt.Pg.Tt:H]+[Mt.Changelog:H]+32*#sc#)
DynamicVariables=1

[Ms.Version]
Measure=String
String=Quanto Flx #Project.Vrsn# #Project.VrSx# (#Tm.Build# #Project.VBld#)
[Mt.Pg.Tt]
MeasureName=Ms.Version

[Ms.TransTime]
Measure=Time
TimeStamp=#Project.UdDt#
Format=#Tf.Dt#
FormatLocale=#Lg#
DynamicVariables=1
[Mt.Changelog]
Meter=String
MeterStyle=St.ZnCt_Wd|St.Ft|St.Sl|St.Ft.CmTxFm|St.Ps.START
Text=#St.Setup.0601##CRLF##CRLF#This is the initial version of "Quanto Flx". Not to be confused with "Quanto Original".
MeasureName=Ms.TransTime
W=(430*#sc#)
ClipString=2