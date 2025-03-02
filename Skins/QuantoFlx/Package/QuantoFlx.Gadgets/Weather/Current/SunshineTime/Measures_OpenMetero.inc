[Variables]
Disabled=0
Tf_0_Ex.Cstm=%#I %p
Tf_1_Ex.Cstm=%#H:%M

[Rainmeter]
Update=1000

[Ms.WP.Main]
Measure=WebParser
URL=file://%TEMP%/QuantoFlx_WeatherForecast.json
RegExp=(?siU)"sunrise"\s*:\s*\[\s*"(.*)",.*"(.*)",.*\],.*"sunset"\s*:\s*\[\s*"(.*)",.*\]
UpdateRate=-1
FinishAction=[!Delay 16][!ShowMeterGroup Gp.Main][!HideMeterGroup Gp.Loading][!HideMeterGroup Gp.Error][!Update][!Redraw]
OnConnectErrorAction=[!HideMeterGroup Gp.Main][!HideMeterGroup Gp.Loading][!ShowMeter Mt.Error.00][!Update][!Redraw]
OnRegExpErrorAction=[!Delay 16][!EnableMeasure "Ms.WP.error"][!HideMeterGroup Gp.Main][!HideMeterGroup Gp.Loading][!ShowMeter Mt.Error.01][!Update][!Redraw]
Disabled=#Disabled#

[Ms.WP.error]
Measure=WebParser
URL=file://%TEMP%/QuantoFlx_WeatherForecast.json
RegExp=(?siU)"reason"\s*:\s*"(.*)"
UpdateRate=-1
FinishAction=[!Update][!Redraw]
Disabled=1
[Ms.WP.error.reason]
Measure=WebParser
URL=[Ms.WP.error]
StringIndex=1
DynamicVariables=1
Substitute="":"0"

[Ms.WP.daily.sunrise.0d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=1
DynamicVariables=1
Substitute="":"1601-01-01T00:00"
[Ms.WP.daily.sunrise.1d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=2
DynamicVariables=1
Substitute="":"1601-01-01T00:00"

[Ms.WP.daily.sunset.0d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=3
DynamicVariables=1
Substitute="":"1601-01-01T12:00"

[Ms.Time.daily.sunrise.0d]
Measure=Time
TimeStamp=[Ms.WP.daily.sunrise.0d]
TimeStampFormat=%Y-%m-%dT%H:%M
Format=[#Tf_[#Tf]_Ex]
FormatLocale=#Lg#
DynamicVariables=1
[Ms.Time.daily.sunrise.1d]
Measure=Time
TimeStamp=[Ms.WP.daily.sunrise.1d]
TimeStampFormat=%Y-%m-%dT%H:%M
Format=[#Tf_[#Tf]_Ex]
FormatLocale=#Lg#
DynamicVariables=1
[Ms.Time.daily.sunset.0d]
Measure=Time
TimeStamp=[Ms.WP.daily.sunset.0d]
TimeStampFormat=%Y-%m-%dT%H:%M
Format=[#Tf_[#Tf]_Ex]
FormatLocale=#Lg#
DynamicVariables=1

[Ms.Time]
Measure=Time
Format=[#Tf_[#Tf]_Ex]
DynamicVariables=1

[Ms.Calc.IsDay]
Measure=Calc
Formula=(([Ms.Time:TimeStamp]>=[Ms.Time.daily.sunrise.0d:TimeStamp])&&([Ms.Time:TimeStamp]<[Ms.Time.daily.sunset.0d:TimeStamp]))
DynamicVariables=1
[Ms.Calc.CurrentClamp]
Measure=Calc
Formula=([Ms.Time:TimeStamp])
MinValue=([Ms.Time.daily.sunrise.0d:TimeStamp])
MaxValue=([Ms.Time.daily.sunset.0d:TimeStamp])
DynamicVariables=1

[Ms.Calc.SunshineHourOfToday]
Measure=Calc
Formula=(([Ms.Time.daily.sunset.0d:TimeStamp]-[Ms.Time.daily.sunrise.0d:TimeStamp])/(60*60))
DynamicVariables=1