[Variables]
; AIDA CONFIG
; Need help? Go to: https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-System''-Package#additional-configuration-files

Unit=2
; Actual Unit
; 0 - B
; 1 - kB
; 2 - MB
; 3 - GB

OperationMethod=1
; Operation Method of Total Video Memory
; 0 - Total Video Memory is already known
; 1 - Free Video Memory + Used Video Memory

SMLs.FreeVideoMemory.Show=1
SMLs.FreeVideoMemory.RSKN=Value.SFREEVMEM
SMLs.FreeVideoMemory.Sbtt=
SMLs.FreeVideoMemory.Sufx=

SMLs.UsedVideoMemory.Show=1
SMLs.UsedVideoMemory.RSKN=Value.SUSEDVMEM
SMLs.UsedVideoMemory.Sbtt=
SMLs.UsedVideoMemory.Sufx=

SMLs.TotalVideoMemory.Show=0
SMLs.TotalVideoMemory.RSKN=
SMLs.TotalVideoMemory.Sbtt=
SMLs.TotalVideoMemory.Sufx=
