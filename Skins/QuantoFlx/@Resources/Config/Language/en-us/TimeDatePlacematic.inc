[Variables]
; Global date format
; Learn more: https://docs.rainmeter.net/manual/measures/time/#FormatCodes
Tf.Dt=%A, %B %#d, %Y
; Shorter date format
Tf.Dt.St=%B %#d, %Y
; Label text on Calendar
; {$MName} - Month name
; {$Year}  - Year number
Tf.CLua.Lt={$MName}, {$Year}
; Uptime format
; Learn more: https://docs.rainmeter.net/manual/measures/uptime/#Format
Tf.Uptm=%4!i!d %3!i!h %2!i!m %1!i!s
; The following are the expressions of "0 days", "0 hours" and "0 minutes" in  
; Uptime respectively. The purpose of these strings is to eliminate redundant  
; strings through pairing when Uptime doesnot need to display higher-level     
; units than "seconds".
; It may contain spaces, so it needs to be enclosed in double quotes.
Tf.Uptm.0d="0d "
Tf.Uptm.0h="0h "
Tf.Uptm.0m="0m "

Tm.Current=Current
Tm.Now=Now

; The following are representations of time & dates
; e.g.:
;   Full format: >2024 年< 12 月 >31 日<
;   Correct settings:
;     Tm.Day_1=%1 日
;     Tm.Year_1=%1 年
Tm.1h=%1h
Tm.1m=%1m
Tm.1s=%1s
Tm.Day_1=%1
Tm.Year_1=%1

Tm.Years=Year(s)
Tm.Months=Month(s)
Tm.Days=Day(s)
Tm.Hours=Hour(s)
Tm.Minutes=Minute(s)
Tm.Seconds=Second(s)

Tm.St_Days=d
Tm.St_Hours=h
Tm.St_Minutes=m
Tm.St_Seconds=s

Tm.Yesterday=Yesterday
Tm.Today=Today
Tm.Tomorrow=Tomorrow

; Although most words related to time and date are automatically translated    
; using language codes, these words still need to be translated separately in  
; order to be used.

Tm.Sunday=Sunday
Tm.Monday=Monday
Tm.Tuesday=Tuesday
Tm.Wednesday=Wednesday
Tm.Thursday=Thursday
Tm.Friday=Friday
Tm.Saturday=Saturday
Tm.Sun=Sun
Tm.Mon=Mon
Tm.Tue=Tue
Tm.Wed=Wed
Tm.Thu=Thu
Tm.Fri=Fri
Tm.Sat=Sat

Tm.January=January
Tm.February=February
Tm.March=March
Tm.April=April
Tm.May=May
Tm.June=June
Tm.July=July
Tm.August=August
Tm.September=September
Tm.October=October
Tm.November=November
Tm.December=December
Tm.Jan=Jan
Tm.Feb=Feb
Tm.Mar=Mar
Tm.Apr=Apr
Tm.May=May
Tm.Jun=Jun
Tm.Jul=Jul
Tm.Aug=Aug
Tm.Sep=Sep
Tm.Oct=Oct
Tm.Nov=Nov
Tm.Dec=Dec

Tm.AM=AM
Tm.PM=PM

; Placematic nouns
Tm.North=North
Tm.NorthEast=North East
Tm.East=East
Tm.SouthEast=South East
Tm.South=South
Tm.SouthWest=South West
Tm.West=West
Tm.NorthWest=North West

Tm.N=N
Tm.NE=NE
Tm.E=E
Tm.SE=SE
Tm.S=S
Tm.SW=SW
Tm.W=W
Tm.NW=NW