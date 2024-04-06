[Variables]
TotalVM=1

[Ms.Registry.FreeVideoMemory]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.FreeVideoMemory.RSKN#
Substitute=#SMLs.FreeVideoMemory.Sbtt#
Paused=(1-#SMLs.FreeVideoMemory.Show#)
Disabled=(1-#SMLs.FreeVideoMemory.Show#)
DynamicVariables=1

[Ms.Registry.UsedVideoMemory]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.UsedVideoMemory.RSKN#
Substitute=#SMLs.UsedVideoMemory.Sbtt#
Paused=(1-#SMLs.UsedVideoMemory.Show#)
Disabled=(1-#SMLs.UsedVideoMemory.Show#)
DynamicVariables=1

[Ms.Registry.TotalVideoMemory]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.TotalVideoMemory.RSKN#
Substitute=#SMLs.TotalVideoMemory.Sbtt#
Paused=(1-#SMLs.TotalVideoMemory.Show#)
Disabled=(1-#SMLs.TotalVideoMemory.Show#)
DynamicVariables=1

[Ms.Registry.FreeVideoMemoryPer]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.FreeVideoMemoryPer.RSKN#
Substitute=#SMLs.FreeVideoMemoryPer.Sbtt#
Paused=(1-#SMLs.FreeVideoMemoryPer.Show#)
Disabled=(1-#SMLs.FreeVideoMemoryPer.Show#)
DynamicVariables=1

[Ms.Registry.UsedVideoMemoryPer]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.UsedVideoMemoryPer.RSKN#
Substitute=#SMLs.UsedVideoMemoryPer.Sbtt#
Paused=(1-#SMLs.UsedVideoMemoryPer.Show#)
Disabled=(1-#SMLs.UsedVideoMemoryPer.Show#)
DynamicVariables=1

[Ms.Calc.Free]
Measure=Calc
Formula=([Ms.Registry.FreeVideoMemory]*1024**#Unit#)
DynamicVariables=1

[Ms.Calc.Used]
Measure=Calc
Formula=([Ms.Registry.UsedVideoMemory]*1024**#Unit#)
DynamicVariables=1

[Ms.Calc.Total_0]
Measure=Calc
Formula=([Ms.Registry.TotalVideoMemory]*1024**#Unit#)
IfCondition=([Ms.Calc.Total_0]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_0]"]
DynamicVariables=1
Paused=(#OperationMethod#<>0)
Disabled=(#OperationMethod#<>0)
[Ms.Calc.Total_1]
Measure=Calc
Formula=([Ms.Calc.Free]+[Ms.Calc.Used])
IfCondition=([Ms.Calc.Total_1]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_1]"]
DynamicVariables=1
Paused=(#OperationMethod#<>1)
Disabled=(#OperationMethod#<>1)
[Ms.Calc.Total_2]
Measure=Calc
Formula=([Ms.Calc.Free]/([Ms.Registry.UsedVideoMemoryPer]/100))
IfCondition=([Ms.Calc.Total_2]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_2]"]
DynamicVariables=1
Paused=(#OperationMethod#<>2)
Disabled=(#OperationMethod#<>2)
[Ms.Calc.Total_3]
Measure=Calc
Formula=([Ms.Calc.Used]/([Ms.Registry.FreeVideoMemoryPer]/100))
IfCondition=([Ms.Calc.Total_3]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_3]"]
DynamicVariables=1
Paused=(#OperationMethod#<>3)
Disabled=(#OperationMethod#<>3)
[Ms.Calc.Total_4]
Measure=Calc
Formula=([Ms.Calc.Free]/(1-([Ms.Registry.FreeVideoMemoryPer]/100)))
IfCondition=([Ms.Calc.Total_4]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_4]"]
DynamicVariables=1
Paused=(#OperationMethod#<>4)
Disabled=(#OperationMethod#<>4)
[Ms.Calc.Total_5]
Measure=Calc
Formula=([Ms.Calc.Used]/(1-([Ms.Registry.UsedVideoMemoryPer]/100)))
IfCondition=([Ms.Calc.Total_5]<>#TotalVM#)
IfTrueAction=[!SetVariable "TotalVM" "[Ms.Calc.Total_5]"]
DynamicVariables=1
Paused=(#OperationMethod#<>5)
Disabled=(#OperationMethod#<>5)

[Ms.Calc.Percentage]
Measure=Calc
Formula=(([Ms.Calc.Used]/[&Ms.Calc.Total_[#OperationMethod]])*100)
MinValue=0
MaxValue=100
DynamicVariables=1