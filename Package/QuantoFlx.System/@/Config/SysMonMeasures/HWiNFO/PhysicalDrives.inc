[Ms.Registry.Name]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=Sensor#SMLs.Temperature.RSKN#
Substitute="^(.*]: )":"","(:.*)$":""
Paused=(1-#SMLs.Temperature.Show#)
Disabled=(1-#SMLs.Temperature.Show#)
DynamicVariables=1
UpdateDivider=-1

[Ms.Registry.Temperature]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Temperature.RSKN#
Substitute=#SMLs.Temperature.Sbtt#
Paused=(1-#SMLs.Temperature.Show#)
Disabled=(1-#SMLs.Temperature.Show#)
DynamicVariables=1