[Variables]
@include=#@#Config\Parameter\SystemDefault.inc

HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.OK#
NtBtAc=[!WriteKeyValue "Variables" "PrvSrl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!ActivateConfig "#CURRENTCONFIG#" "Settings.ini"]

PgTtl=#St.Setup.0000#

MdVr=SwTo

@include2=ChoosePage.inc