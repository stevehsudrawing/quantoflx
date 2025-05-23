[Variables]
; AIDA CONFIG
; Need help? Go to: https://github.com/stevehsudrawing/quantoflx/wiki/Manual-of-''Quanto-Flx-System''-Package#additional-configuration-files

CustomName=#Tm.Cooling_Fan# - #Index#

Expression=1
; Expression of Cooling Fan Speed
; 0 - Percentage, in "%" as its unit
; 1 - Specific value, fixed maximum value, in "RPM" as its unit
; 2 - Specific value, dynamic maximum value, in "RPM" as its unit

; Please set the "SMLs.CoolingFanSpeed.RSKN" variable to a registry key that
; reflects the fan speed.
SMLs.CoolingFanSpeed.Show=1
SMLs.CoolingFanSpeed.RSKN=Value.FCHA7
SMLs.CoolingFanSpeed.Sbtt=
SMLs.CoolingFanSpeed.Sufx=RPM

; If you do not know the registry key value corresponding to the maximum speed 
; of this fan, please set the "SMLs.MaxCoolingFanSpeed.Show" variable to 0 and 
; set the "Expression" to 0 or 1 (if set to 1, you need to set set a fixed 
; maximum value).
SMLs.MaxCoolingFanSpeed.Show=0
SMLs.MaxCoolingFanSpeed.RSKN=
SMLs.MaxCoolingFanSpeed.Sbtt=
SMLs.MaxCoolingFanSpeed.Sufx=RPM

; Fixed maximum value
MaxValue=50000