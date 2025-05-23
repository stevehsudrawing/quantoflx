[Variables]
Pg.Ty=AddSkins
; Page Type (About/AddSkins/Empty/Settings/Shortcuts)

Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=0
Mt.Op.18----=0
Mt.Op.21----=0
Mt.Op.22----=0
Mt.Op.23----=0
Mt.Op.24----=0
Mt.Op.25----=0
Mt.Op.26----=0
Mt.Op.27----=0
Mt.Op.28----=0
; Show or hide this option

Mt.Op.11-----=ShortcutGroups\01
Mt.Op.12-----=ShortcutGroups\02
Mt.Op.13-----=ShortcutGroups\03
Mt.Op.14-----=ShortcutGroups\04
Mt.Op.15-----=ShortcutGroups\05
Mt.Op.16-----=ShortcutGroups\06
Mt.Op.17-----=ShortcutGroups\07
Mt.Op.18-----=ShortcutGroups\08
Mt.Op.21-----=ShortcutGroups\09
Mt.Op.22-----=ShortcutGroups\10
Mt.Op.23-----=ShortcutGroups\11
Mt.Op.24-----=ShortcutGroups\12
Mt.Op.25-----=ShortcutGroups\13
Mt.Op.26-----=ShortcutGroups\14
Mt.Op.27-----=ShortcutGroups\15
Mt.Op.28-----=ShortcutGroups\16
; Internal name of this option, in order to display information.
; If it is not needed / this option is hidden, write "Null"

Mt.Op.11------=0
Mt.Op.12------=0
Mt.Op.13------=0
Mt.Op.14------=0
Mt.Op.15------=0
Mt.Op.16------=0
Mt.Op.17------=0
Mt.Op.18------=0
Mt.Op.21------=0
Mt.Op.22------=0
Mt.Op.23------=0
Mt.Op.24------=0
Mt.Op.25------=0
Mt.Op.26------=0
Mt.Op.27------=0
Mt.Op.28------=0
; If 0 is written, a checkbox and an upper-right arrow will appear to the right of the option.
; If 1 is written, a right arrow will appear to the right of the option

[Mt.Cstm.HelpButton]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl|St.Bt.Gn
ImageName=#@#Image\MonoIcons\16\HelpButton
X=(544*#sc#)
Y=(64*#sc#)
W=(16*#sc#)
H=(16*#sc#)
ToolTipText=#Tm.Learn_about_Shortcut_Group#
LeftMouseUpAction=["https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-Shortcuts''-Package#Shortcut-Group-and-Auto-Hide-Function"]
[HMt.Cstm.HelpButton]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(20*#sc#),(20*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | #Fl.Cl.Hv#
GdntHv=#GdntHv#
X=(-2*#sc#)r
Y=(-2*#sc#)r
Hidden=1