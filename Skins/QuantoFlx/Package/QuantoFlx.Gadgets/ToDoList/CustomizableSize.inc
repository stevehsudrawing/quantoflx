[Variables]
PW=4
PH=(#Quantity#+1)

II0=None
II1=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))

IS00=None
IS10=None
IS01=Strikethrough
IS11=Color | #Cl.Gn.Fg.Gn#,128

C0=#Cl.Gn.Fg.Gn#,48
C1=#Cl.Ac.Bg.Gn#

0t1=[!WriteKeyValue "Variables" "EVENT___________1.Hdn" "[#EVENT___________0.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Clr" "[#EVENT___________0.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Cpd" "[#EVENT___________0.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Ttl" "[#EVENT___________0.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Tme" "[#EVENT___________0.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
1t2=[!WriteKeyValue "Variables" "EVENT___________2.Hdn" "[#EVENT___________1.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Clr" "[#EVENT___________1.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Cpd" "[#EVENT___________1.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Ttl" "[#EVENT___________1.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Tme" "[#EVENT___________1.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
2t3=[!WriteKeyValue "Variables" "EVENT___________3.Hdn" "[#EVENT___________2.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Clr" "[#EVENT___________2.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Cpd" "[#EVENT___________2.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Ttl" "[#EVENT___________2.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Tme" "[#EVENT___________2.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
3t4=[!WriteKeyValue "Variables" "EVENT___________4.Hdn" "[#EVENT___________3.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Clr" "[#EVENT___________3.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Cpd" "[#EVENT___________3.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Ttl" "[#EVENT___________3.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Tme" "[#EVENT___________3.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
4t5=[!WriteKeyValue "Variables" "EVENT___________5.Hdn" "[#EVENT___________4.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Clr" "[#EVENT___________4.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Cpd" "[#EVENT___________4.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Ttl" "[#EVENT___________4.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Tme" "[#EVENT___________4.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
5t6=[!WriteKeyValue "Variables" "EVENT___________6.Hdn" "[#EVENT___________5.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Clr" "[#EVENT___________5.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Cpd" "[#EVENT___________5.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Ttl" "[#EVENT___________5.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Tme" "[#EVENT___________5.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
6t7=[!WriteKeyValue "Variables" "EVENT___________7.Hdn" "[#EVENT___________6.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Clr" "[#EVENT___________6.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Cpd" "[#EVENT___________6.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Ttl" "[#EVENT___________6.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Tme" "[#EVENT___________6.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]

1t0=[!WriteKeyValue "Variables" "EVENT___________0.Hdn" "[#EVENT___________1.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Clr" "[#EVENT___________1.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Cpd" "[#EVENT___________1.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Ttl" "[#EVENT___________1.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Tme" "[#EVENT___________1.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
2t1=[!WriteKeyValue "Variables" "EVENT___________1.Hdn" "[#EVENT___________2.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Clr" "[#EVENT___________2.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Cpd" "[#EVENT___________2.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Ttl" "[#EVENT___________2.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Tme" "[#EVENT___________2.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
3t2=[!WriteKeyValue "Variables" "EVENT___________2.Hdn" "[#EVENT___________3.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Clr" "[#EVENT___________3.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Cpd" "[#EVENT___________3.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Ttl" "[#EVENT___________3.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Tme" "[#EVENT___________3.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
4t3=[!WriteKeyValue "Variables" "EVENT___________3.Hdn" "[#EVENT___________4.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Clr" "[#EVENT___________4.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Cpd" "[#EVENT___________4.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Ttl" "[#EVENT___________4.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Tme" "[#EVENT___________4.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
5t4=[!WriteKeyValue "Variables" "EVENT___________4.Hdn" "[#EVENT___________5.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Clr" "[#EVENT___________5.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Cpd" "[#EVENT___________5.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Ttl" "[#EVENT___________5.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Tme" "[#EVENT___________5.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
6t5=[!WriteKeyValue "Variables" "EVENT___________5.Hdn" "[#EVENT___________6.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Clr" "[#EVENT___________6.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Cpd" "[#EVENT___________6.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Ttl" "[#EVENT___________6.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Tme" "[#EVENT___________6.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
7t6=[!WriteKeyValue "Variables" "EVENT___________6.Hdn" "[#EVENT___________7.Hdn]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Clr" "[#EVENT___________7.Clr]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Cpd" "[#EVENT___________7.Cpd]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Ttl" "[#EVENT___________7.Ttl]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Tme" "[#EVENT___________7.Tme]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]

0C=[!WriteKeyValue "Variables" "EVENT___________0.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
1C=[!WriteKeyValue "Variables" "EVENT___________1.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
2C=[!WriteKeyValue "Variables" "EVENT___________2.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
3C=[!WriteKeyValue "Variables" "EVENT___________3.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
4C=[!WriteKeyValue "Variables" "EVENT___________4.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
5C=[!WriteKeyValue "Variables" "EVENT___________5.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
6C=[!WriteKeyValue "Variables" "EVENT___________6.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
7C=[!WriteKeyValue "Variables" "EVENT___________7.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]
MC=[!WriteKeyValue "Variables" "EVENT___________M.Hdn" "1" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________M.Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________M.Cpd" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________M.Ttl" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________M.Tme" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"]

Index=#PrvIndex#
MaxQ=(([Ms.Current]+1)*2)
DisQ=(2*#Quantity#)
PMSUA=[]
PMSDA=[]
PMSUAPg=[]
PMSDAPg=[]
AutoQ=0

DvdLns=(14*#sc#+(#Ppos.X#)),((10+38+32)*#sc#+(#Ppos.Y#)),((64*#PW#-20-8)*#sc#),(#sc#),(#Cr#>0?(1/2*#sc#):0),(#Cr#>0?(1/2*#sc#):0)

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn
MouseOverAction=[!ShowMeter Mt.Srbr][!ShowMeter Mt.Rsz][#MOA.TcMd_1[#TcMd]][!Update][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Srbr][!HideMeter Mt.Rsz][#MLA.TcMd_1[#TcMd]][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable "Index" "(Clamp((#Index#-1),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!SetVariable "Index" "(Clamp((#Index#+1),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
[Mt.Zn_Cstm]
Meter=Shape
MeterStyle=St.Zn
Shape2=Rectangle 0,0,(64*#PW#*#sc#),(48*#sc#)
Shape3=Rectangle 0,(#CURRENTCONFIGHEIGHT#-16*#sc#),(64*#PW#*#sc#),(16*#sc#)
Shape4=Combine Shape | Exclude Shape2 | Exclude Shape3
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[St.ZnCt_Cstm]
Container=Mt.Zn_Cstm
DynamicVariables=1
[Mt.Le]
Meter=Shape
MeterStyle=St.Le
Shape8=Rectangle (10*#sc#+(#Ppos.X#)),((10+38)*#sc#+(#Ppos.Y#)),((64*#PW#-20)*#sc#),((64*#PH#-20-38)*#sc#),(#Cr#/2),(#Cr#/2)
Shape9=Combine Shape | Exclude Shape8
Shape10=Rectangle (10*#sc#+(#Ppos.X#)-#sc#),((10+38)*#sc#+(#Ppos.Y#)-#sc#),((64*#PW#-20)*#sc#+2*#sc#),((64*#PH#-20-38)*#sc#+2*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Hl.Op#)
Shape11=Combine Shape10 | Exclude Shape8
Shape12=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>1)))
Shape13=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>2))) | Offset 0,(32*#sc#)
Shape14=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>3))) | Offset 0,(32*2*#sc#)
Shape15=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>4))) | Offset 0,(32*3*#sc#)
Shape16=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>5))) | Offset 0,(32*4*#sc#)
Shape17=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>6))) | Offset 0,(32*5*#sc#)
Shape18=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>7))) | Offset 0,(32*6*#sc#)
Shape19=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>8))) | Offset 0,(32*7*#sc#)
Shape20=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>9))) | Offset 0,(32*8*#sc#)
Shape21=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>10))) | Offset 0,(32*9*#sc#)
Shape22=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>11))) | Offset 0,(32*10*#sc#)
Shape23=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>12))) | Offset 0,(32*11*#sc#)
Shape24=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>13))) | Offset 0,(32*12*#sc#)
Shape25=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>14))) | Offset 0,(32*13*#sc#)
Shape26=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>15))) | Offset 0,(32*14*#sc#)
Shape27=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>16))) | Offset 0,(32*15*#sc#)
Shape28=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>17))) | Offset 0,(32*16*#sc#)
Shape29=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>18))) | Offset 0,(32*17*#sc#)
Shape30=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>19))) | Offset 0,(32*18*#sc#)
Shape31=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>20))) | Offset 0,(32*19*#sc#)
Shape32=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>21))) | Offset 0,(32*20*#sc#)
Shape33=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>22))) | Offset 0,(32*21*#sc#)
Shape34=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>23))) | Offset 0,(32*22*#sc#)
Shape35=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>24))) | Offset 0,(32*23*#sc#)
Shape36=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>25))) | Offset 0,(32*24*#sc#)
Shape37=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>26))) | Offset 0,(32*25*#sc#)
Shape38=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>27))) | Offset 0,(32*26*#sc#)
Shape39=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>28))) | Offset 0,(32*27*#sc#)
Shape40=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>29))) | Offset 0,(32*28*#sc#)
Shape41=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=1)?0:(128*#Hl.Op#*((#Quantity#*2)>30))) | Offset 0,(32*29*#sc#)
Shape42=Rectangle #DvdLns# | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,((#Index#%2=0)?0:(128*#Hl.Op#*((#Quantity#*2)>31))) | Offset 0,(32*30*#sc#)

[Ms.Time]
Measure=Time
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#

[Ms.________0]
Measure=Time
TimeStamp=#EVENT___________0.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________1]
Measure=Time
TimeStamp=#EVENT___________1.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________2]
Measure=Time
TimeStamp=#EVENT___________2.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________3]
Measure=Time
TimeStamp=#EVENT___________3.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________4]
Measure=Time
TimeStamp=#EVENT___________4.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________5]
Measure=Time
TimeStamp=#EVENT___________5.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________6]
Measure=Time
TimeStamp=#EVENT___________6.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#
[Ms.________7]
Measure=Time
TimeStamp=#EVENT___________7.Tme#
Format=[#Tf_[#Tf]_Ex] | [#Tf.Dt.St]
FormatLocale=#Lg#

[Ms.Current]
Measure=Calc
Formula=((1-#EVENT___________0.Hdn#)+(1-#EVENT___________1.Hdn#)+(1-#EVENT___________2.Hdn#)+(1-#EVENT___________3.Hdn#)+(1-#EVENT___________4.Hdn#)+(1-#EVENT___________5.Hdn#)+(1-#EVENT___________6.Hdn#)+(1-#EVENT___________7.Hdn#))
DynamicVariables=1

[St.Cstm.Tx.01]
W=((256-40*2)*#Sc#)
ClipString=1
Text=[#EVENT__[#CURRENTSECTION].Ttl]
StringAlign=LeftCenter
Hidden=[#EVENT__[#CURRENTSECTION].Hdn]
InlinePattern=.*
InlineSetting=[#IS0[#EVENT__[#CURRENTSECTION].Cpd]]
InlinePattern2=.*
InlineSetting2=[#IS1[#EVENT__[#CURRENTSECTION].Cpd]]
InlinePattern3=.*
InlineSetting3=[#II[#EVENT__[#CURRENTSECTION].Clr]]
MouseActionCursor=1
MouseActionCursorName=TEXT
LeftMouseUpAction=[!CommandMeasure Ms.#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter Mt.#CURRENTSECTION#][!Redraw]

[St.Cstm.Tx.02]
W=((256-40*2)*#Sc#)
ClipString=1
MeasureName=Ms.#CURRENTSECTION#
StringAlign=LeftCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
FontSize=(9*#Sc#)
Hidden=[#EVENT___[#CURRENTSECTION].Hdn]

[St.Cstm.Sp.01]
Shape=Rectangle 0,0,(4*#Sc#),(32*#Sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Fill Color [#C[#EVENT_[#CURRENTSECTION].Clr]]
DynamicVariables=1
Hidden=[#EVENT_[#CURRENTSECTION].Hdn]

[St.Cstm.Sp.02]
Shape=Rectangle 0,(2*#sc#),(256*#Sc#),((64-4)*#Sc#),((Min((#Cr#-2*#sc#),0))),((Min((#Cr#-2*#sc#),0))) | #da.sk# | Fill Color 0,0,0,0
DynamicVariables=1
Hidden=[#EVENT____[#CURRENTSECTION].Hdn]
MouseOverAction=[!HideMeter ___[#CURRENTSECTION]][!ShowMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!ShowMeter ___[#CURRENTSECTION]][!HideMeterGroup #CURRENTSECTION#][!Redraw]

[St.Cstm.Sp.03]
Shape=Rectangle 0,0,(24*#Sc#),((64-6*2)*#Sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Gn#
Hidden=1

[St.Cstm.Sp.04]
Shape=Rectangle 0,0,((256-40*2+4*2)*#Sc#),((20+4*2)*#Sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape2=Rectangle 0,0,((256-40*2+4*2)*#Sc#),((20+4*2)*#Sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape3=Rectangle (1*#Sc#),(1*#Sc#),(((256-40*2+4*2)-2)*#Sc#),(((20+4*2)-2)*#Sc#),(#Cr#/2-1*#sc#),(#Cr#/2-1*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,((256-40*2+4*2)*#Sc#),((20+4*2)*#Sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape6=Rectangle 0,(-2*#Sc#),((256-40*2+4*2)*#Sc#),((20+4*2)*#Sc#),(#Cr#/2),(#Cr#/2)
Shape7=Combine Shape5 | Exclude Shape6
Hidden=1

[St.Cstm.Im.01]
ImageName=#@#Image\MonoIcons\16\CheckBox[#EVENT_____[#CURRENTSECTION].Cpd]
ImageTint=[#Cl.Cb.[#EVENT_____[#CURRENTSECTION].Cpd]],(255*#Op.Fg#)
ToolTipText=#Tm.Solved#
W=(16*#Sc#)
H=(16*#Sc#)
LeftMouseUpAction=[!WriteKeyValue Variables EVENT_____[#CURRENTSECTION].Cpd "(1-[#EVENT_____[#CURRENTSECTION].Cpd])" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue Variables EVENT_____[#CURRENTSECTION].Tme "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Hidden=1

[St.Cstm.Im.02]
ImageName=#Pk@#Image\MonoIcons\16\Star_[#EVENT______[#CURRENTSECTION].Clr]
ImageTint=[#Cl.Cb.[#EVENT______[#CURRENTSECTION].Clr]],(255*#Op.Fg#)
ToolTipText=#Tm.Highlight#
W=(16*#Sc#)
H=(16*#Sc#)
LeftMouseUpAction=[!WriteKeyValue Variables EVENT______[#CURRENTSECTION].Clr "(1-[#EVENT______[#CURRENTSECTION].Clr])" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue Variables EVENT______[#CURRENTSECTION].Tme "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Hidden=1

[St.Cstm.Im.03]
ImageName=#@#Image\MonoIcons\16\Remove
ImageTint=#Cl.Wrng.Fg.Gn#,(255*#Op.Fg#)
ToolTipText=#Tm.Remove#
W=(16*#Sc#)
H=(16*#Sc#)
Hidden=1

[St.Cstm.Ps.YNx.01]
X=0r
Y=(64*#Sc#)r


[_______0]
Meter=Shape
Y=((48-32*#Index#)*#sc#)
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02
[_______1]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______2]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______3]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______4]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______5]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______6]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01
[_______7]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.02|St.Cstm.Ps.YNx.01

[__________0]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01
X=(22*#Sc#)
Y=((16+48-32*#Index#)*#Sc#)
[__________1]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________2]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________3]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________4]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________5]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________6]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01
[__________7]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.01|St.Cstm.Ps.YNx.01

[_________0]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01
X=(40*#Sc#)
Y=((22+48-32*#Index#)*#Sc#)
[_________1]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________2]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________3]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________4]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________5]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________6]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01
[_________7]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.01|St.Cstm.Ps.YNx.01

[________0]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02
X=(40*#Sc#)
Y=((42+48-32*#Index#)*#Sc#)
[________1]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________2]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________3]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________4]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________5]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________6]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01
[________7]
Meter=String
MeterStyle=St.ZnCt_Cstm|St.Ft|St.Cstm.Tx.02|St.Cstm.Ps.YNx.01

[Mt.AZ]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Bt.Gn
Shape=Rectangle 0,(16*#Sc#),(256*#Sc#),(32*#Sc#),((Min((#Cr#-2*#sc#),0))),((Min((#Cr#-2*#sc#),0))) | #da.sk# | Fill Color 0,0,0,0
DynamicVariables=1
Y=((48+[Ms.Current]*64-32*#Index#)*#Sc#)
LeftMouseUpAction=[!Update][!Delay 16][!WriteKeyValue "Variables" "EVENT___________[Ms.Current].Hdn" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________[Ms.Current].Clr" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________[Ms.Current].Ttl" "#Tm.Event#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________[Ms.Current].Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]

[HMt.AZ]
Meter=Shape
MeterStyle=St.ZnCt_Cstm
Y=((48+[Ms.Current]*64-32*#Index#)*#Sc#)
Shape=Rectangle 0,0,(256*#Sc#),(64*#Sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,12
DynamicVariables=1
Hidden=1

[Mt.AI]
Meter=Image
MeterStyle=St.ZnCt_Cstm
ImageName=#Pk@#Image\MonoIcons\16\Add
ImageTint=#Cl.Gn.Fg.Gn#,128
X=(16*#Sc#)
Y=((8+16+[Ms.Current]*64+48-32*#Index#)*#Sc#)
H=(16*#Sc#)
W=(16*#Sc#)
DynamicVariables=1
[Mt.AT]
Meter=String
Text=#Tm.Add_an_event#
MeterStyle=St.ZnCt_Cstm|St.Ft
X=([Mt.AI:XW]+8*#Sc#)
Y=((32+[Ms.Current]*64+48-32*#Index#)*#Sc#)
StringAlign=LeftCenter
FontColor=#Cl.Gn.Fg.Gn#,128


[______0]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01
X=(16*#Sc#)
Y=((24-10+48-32*#Index#)*#Sc#)
Group=_______0
[______1]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______1
[______2]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______2
[______3]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______3
[______4]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______4
[______5]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______5
[______6]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______6
[______7]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.01|St.Cstm.Ps.YNx.01
Group=_______7

[_____0]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02
X=(16*#Sc#)
Y=((24+10+48-32*#Index#)*#Sc#)
Group=_______0
[_____1]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______1
[_____2]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______2
[_____3]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______3
[_____4]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______4
[_____5]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______5
[_____6]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______6
[_____7]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.02|St.Cstm.Ps.YNx.01
Group=_______7

[IR0]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03
X=((256-10-22-#TcMd#*(12+24+32))*#Sc#)
Y=((24+48-32*#Index#)*#Sc#)
Group=_______0
LeftMouseUpAction=[#1t0][#2t1][#3t2][#4t3][#5t4][#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR1]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______1
LeftMouseUpAction=[#2t1][#3t2][#4t3][#5t4][#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR2]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______2
LeftMouseUpAction=[#3t2][#4t3][#5t4][#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR3]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______3
LeftMouseUpAction=[#4t3][#5t4][#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR4]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______4
LeftMouseUpAction=[#5t4][#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR5]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______5
LeftMouseUpAction=[#6t5][#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR6]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______6
LeftMouseUpAction=[#7t6][#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[IR7]
Meter=Image
MeterStyle=St.ZnCt_Cstm|St.Cstm.Im.03|St.Cstm.Ps.YNx.01
Group=_______7
LeftMouseUpAction=[#7C][!WriteKeyValue "Variables" "PrvIndex" "(Clamp(#Index#,0,Max(([Ms.Current]-2),0)))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]

[Mt._________0]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04
X=((36)*#Sc#)
Y=((10+48-32*#Index#)*#Sc#)
[Mt._________1]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________2]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________3]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________4]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________5]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________6]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01
[Mt._________7]
Meter=Shape
MeterStyle=St.ZnCt_Cstm|St.Cstm.Sp.04|St.Cstm.Ps.YNx.01

[Ms._________0]
Measure=Plugin
Plugin=InputText
X=([Mt._________0:X]+4*#Sc#)
Y=([Mt._________0:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________0.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________0.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________0.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________0][!Redraw]
DynamicVariables=1

[Ms._________1]
Measure=Plugin
Plugin=InputText
X=([Mt._________1:X]+4*#Sc#)
Y=([Mt._________1:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________1.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________1.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________1.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________1][!Redraw]
DynamicVariables=1

[Ms._________2]
Measure=Plugin
Plugin=InputText
X=([Mt._________2:X]+4*#Sc#)
Y=([Mt._________2:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________2.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________2.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________2.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________2][!Redraw]
DynamicVariables=1

[Ms._________3]
Measure=Plugin
Plugin=InputText
X=([Mt._________3:X]+4*#Sc#)
Y=([Mt._________3:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________3.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________3.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________3.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________3][!Redraw]
DynamicVariables=1

[Ms._________4]
Measure=Plugin
Plugin=InputText
X=([Mt._________4:X]+4*#Sc#)
Y=([Mt._________4:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________4.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________4.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________4.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________4][!Redraw]
DynamicVariables=1

[Ms._________5]
Measure=Plugin
Plugin=InputText
X=([Mt._________5:X]+4*#Sc#)
Y=([Mt._________5:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________5.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________5.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________5.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________5][!Redraw]
DynamicVariables=1

[Ms._________6]
Measure=Plugin
Plugin=InputText
X=([Mt._________6:X]+4*#Sc#)
Y=([Mt._________6:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________6.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________6.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________6.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________6][!Redraw]
DynamicVariables=1

[Ms._________7]
Measure=Plugin
Plugin=InputText
X=([Mt._________7:X]+4*#Sc#)
Y=([Mt._________7:Y]+4*#Sc#)
W=((256-40*2)*#Sc#)
H=(20*#Sc#)
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
FocusDismiss=1
DefaultValue=[#EVENT___________7.Ttl]
Command1=[!WriteKeyValue Variables "EVENT___________7.Ttl" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "EVENT___________7.Tme" "[Ms.Time:Timestamp]" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "PrvIndex" "#Index#" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter Mt._________7][!Redraw]
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Title|St.Ft.Bd
Text=#Title#
X=(16*#sc#)
Y=(26*#sc#)
W=(#CURRENTCONFIGWIDTH#-96*#sc#)
ClipString=1
FontSize=(12*#sc#*#Ft.Sc.Gn#)

[St.ImBt.01]
W=(16*#sc#)
H=(16*#sc#)
[St.ImBtH.01]
Shape=Rectangle 0,0,(20*#sc#),(20*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | #Fl.Cl.Hv#
DynamicVariables=1
Hidden=1
[Mt.ImBt.Ss]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Bt.Gn|St.ImBt.01
ImageName=#@#Image\MonoIcons\16\Settings
X=((256-32)*#sc#)
Y=(18*#sc#)
ToolTipText=#Tm.Skin_Settings#
LeftMouseUpAction=#Ac.Skin_Settings#
[HMt.ImBt.Ss]
Meter=Shape
MeterStyle=St.ZnCt|St.ImBtH.01
X=([Mt.ImBt.Ss:X]-2*#sc#)
Y=([Mt.ImBt.Ss:Y]-2*#sc#)

[Ms.Page.01]
Measure=Calc
Formula=(Round((#Index#+1)/2))
DynamicVariables=1
[Ms.Page.02]
Measure=Calc
Formula=([Ms.Current]<#Quantity#?[Ms.Current]:(Round(#Index#/2)+#Quantity#))
DynamicVariables=1
[Mt.Page]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=[Ms.Page.01] - [Ms.Page.02]
StringAlign=RightCenter
X=((64*#PW#-16-16-8)*#Sc#)
Y=(26*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
Hidden=([Ms.Current]=0)

[Mt.Bt.MvPrePg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvPrePg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=((12+40)*#sc#)
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-3),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
[Mt.Bt.MvNxtPg.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxtPg
X=(#CURRENTCONFIGWIDTH#-(12+24)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+32)*#sc#)
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+3),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
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
Y=((12+40)*#sc#)
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-1),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
[Mt.Bt.MvNxt.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Bt.Sp|St.Sp.MvBts|St.Bt.MvNxt
X=(#CURRENTCONFIGWIDTH#-(12+24+32)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(12+32)*#sc#)
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+1),0,(clamp((([Ms.Current]+1)*2-2*#Quantity#),0,(16-#Quantity#*2)))))"][!UpdateMeasure Ms.Page.01][!UpdateMeasure Ms.Page.02][!UpdateMeter *][!Redraw]
[Mt.Bt.MvPre.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvPre.Ver
[Mt.Bt.MvNxt.01]
Meter=Image
MeterStyle=St.ZnCt|St.Gp.MvBts|St.Mi|St.Sl|St.Im.MvBts|St.Im.MvNxt.Ver

[Mt.Srbr]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle (64*#Sc#*#PW#-4*#Sc#-#sp#),(#Cr#+(64*#Sc#*#PH#-2*#Cr#)*#Index#/(16-#Quantity#-(7-clamp([Ms.Current],1,7))*2)),(4*#sc#),((64*#Sc#*#PH#-2*#Cr#)*#Quantity#/(16-#Quantity#-(7-clamp([Ms.Current],1,7))*2)),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(96*#op.fg#*(Min(([Ms.Current]+1),8)<=#Quantity#?0:1))
DynamicVariables=1

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Rsz
LeftMouseDownAction=[!WriteKeyValue "Variables" "PrvIndex" "0" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!ActivateConfig "#CURRENTCONFIG#" "Resizing.ini"]
MouseActionCursorName=SIZE_NS