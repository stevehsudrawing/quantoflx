[Variables]
Bl.Ty_0=Blur
Bl.Ty_1=Acrylic
Bl.Bd_0=None
Bl.Bd_1=All
Bl.Cn_0.NSRC_0=None
Bl.Cn_1.NSRC_0=Round
Bl.Cn_2.NSRC_0=RoundSmall
Bl.Cn_0.NSRC_1=None
Bl.Cn_1.NSRC_1=None
Bl.Cn_2.NSRC_1=None

[Ms.Bl]
Measure=Plugin
Plugin=FrostedGlass
Type=[#Bl.Ty_[#Bl.Bg.Ty]]
Border=[#Bl.Bd_[#Bl.Bg.Bd]]
Corner=[#Bl.Cn_[#Bl.Bg.Cn].NSRC_[#NSRC]]
DynamicVariables=1
; Special thanks to theAzack9