[Variables]
Disabled=0
Tf_0_Ex.Cstm=%#I %p
Tf_1_Ex.Cstm=%#H:%M

Vr.ClothingTips.00=0
Vr.ClothingTips.01=0
Vr.ClothingTips.02=0
Vr.ClothingTips.03=0
Vr.ClothingTips.04=0
Vr.ClothingTips.10=1
Vr.ClothingTips.11=1
Vr.ClothingTips.12=0
Vr.ClothingTips.13=0
Vr.ClothingTips.14=0
Vr.ClothingTips.20=2
Vr.ClothingTips.21=2
Vr.ClothingTips.22=1
Vr.ClothingTips.23=1
Vr.ClothingTips.24=0
Vr.ClothingTips.30=3
Vr.ClothingTips.31=3
Vr.ClothingTips.32=2
Vr.ClothingTips.33=2
Vr.ClothingTips.34=1
Vr.ClothingTips.40=4
Vr.ClothingTips.41=4
Vr.ClothingTips.42=4
Vr.ClothingTips.43=4
Vr.ClothingTips.44=4

[Rainmeter]
Update=1000

[Ms.WP.Main]
Measure=WebParser
URL=file://%TEMP%/QuantoFlx_WeatherForecast.json
RegExp=(?siU)"hourly_units"\s*:\s*{.*"temperature_2m"\s*:\s*"(.*)",.*"precipitation"\s*:\s*"(.*)",.*"surface_pressure"\s*:\s*"(.*)",.*"visibility"\s*:\s*"(.*)",.*"wind_speed_10m"\s*:\s*"(.*)",.*},.*"hourly"\s*:\s*{.*"apparent_temperature"\s*:\s*\[\s*(.*),.*\],.*"wind_speed_10m"\s*:\s*\[\s*(.*),.*\].*"daily"\s*:\s*{.*"apparent_temperature_max"\s*:\s*\[\s*(.*),\s*(.*),.*\],.*"apparent_temperature_min"\s*:\s*\[\s*(.*),\s*(.*),.*\],.*"wind_speed_10m_max"\s*:\s*\[\s*(.*),\s*(.*),.*\]
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

[Ms.WP.hourly_units.temperature_2m]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=1
DynamicVariables=1
Substitute="":"0"
[Ms.WP.hourly_units.precipitation]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=2
DynamicVariables=1
Substitute="":"0"
[Ms.WP.hourly_units.surface_pressure]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=3
DynamicVariables=1
Substitute="":"0"
[Ms.WP.hourly_units.visibility]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=4
DynamicVariables=1
Substitute="":"0"
[Ms.WP.hourly_units.wind_speed_10m]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=5
DynamicVariables=1
Substitute="":"0"

[Ms.WP.hourly.apparent_temperature.0h]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=6
DynamicVariables=1
Substitute="":"0"
[Ms.WP.hourly.wind_speed_10m.0h]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=7
DynamicVariables=1
Substitute="":"0"

[Ms.WP.daily.apparent_temperature_max.0d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=8
DynamicVariables=1
Substitute="":"0"
[Ms.WP.daily.apparent_temperature_max.1d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=9
DynamicVariables=1
Substitute="":"0"
[Ms.WP.daily.apparent_temperature_min.0d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=10
DynamicVariables=1
Substitute="":"0"
[Ms.WP.daily.apparent_temperature_min.1d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=11
DynamicVariables=1
Substitute="":"0"
[Ms.WP.daily.wind_speed_10m_max.0d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=12
DynamicVariables=1
Substitute="":"0"
[Ms.WP.daily.wind_speed_10m_max.1d]
Measure=WebParser
URL=[Ms.WP.Main]
StringIndex=13
DynamicVariables=1
Substitute="":"0"

[Ms.Calc.Current.hourly.apparent_temperature.0h]
Measure=Calc
Formula=(([Ms.WP.hourly.apparent_temperature.0h]<((#Un#=0)? 0:32))?0:(([Ms.WP.hourly.apparent_temperature.0h]<((#Un#=0)?10:50))?1:(([Ms.WP.hourly.apparent_temperature.0h]<((#Un#=0)?20:68))?2:(([Ms.WP.hourly.apparent_temperature.0h]<((#Un#=0)?30:86))?3:4))))
DynamicVariables=1

[Ms.Calc.Current.hourly.wind_speed_10m.0h]
Measure=Calc
Formula=(([Ms.WP.hourly.wind_speed_10m.0h]<(10*(1-0.088656*#Un#)))?0:(([Ms.WP.hourly.wind_speed_10m.0h]<(20*(1-0.088656*#Un#)))?1:(([Ms.WP.hourly.wind_speed_10m.0h]<(30*(1-0.088656*#Un#)))?2:(([Ms.WP.hourly.wind_speed_10m.0h]<(40*(1-0.088656*#Un#)))?3:4))))
DynamicVariables=1

[Ms.Calc.Current.daily.apparent_temperature_max.0d]
Measure=Calc
Formula=(([Ms.WP.daily.apparent_temperature_max.0d]<((#Un#=0)? 0:32))?0:(([Ms.WP.daily.apparent_temperature_max.0d]<((#Un#=0)?10:50))?1:(([Ms.WP.daily.apparent_temperature_max.0d]<((#Un#=0)?20:68))?2:(([Ms.WP.daily.apparent_temperature_max.0d]<((#Un#=0)?30:86))?3:4))))
DynamicVariables=1

[Ms.Calc.Current.daily.apparent_temperature_min.0d]
Measure=Calc
Formula=(([Ms.WP.daily.apparent_temperature_min.0d]<((#Un#=0)? 0:32))?0:(([Ms.WP.daily.apparent_temperature_min.0d]<((#Un#=0)?10:50))?1:(([Ms.WP.daily.apparent_temperature_min.0d]<((#Un#=0)?20:68))?2:(([Ms.WP.daily.apparent_temperature_min.0d]<((#Un#=0)?30:86))?3:4))))
DynamicVariables=1

[Ms.Calc.Current.daily.wind_speed_10m_max.0d]
Measure=Calc
Formula=(([Ms.WP.daily.wind_speed_10m_max.0d]<(10*(1-0.088656*#Un#)))?0:(([Ms.WP.daily.wind_speed_10m_max.0d]<(20*(1-0.088656*#Un#)))?1:(([Ms.WP.daily.wind_speed_10m_max.0d]<(30*(1-0.088656*#Un#)))?2:(([Ms.WP.daily.wind_speed_10m_max.0d]<(40*(1-0.088656*#Un#)))?3:4))))
DynamicVariables=1

[Ms.String.Current.daily.apparent_temperature_max.0d]
Measure=String
String=[#Tm.ClothingTips.[#Vr.ClothingTips.[&Ms.Calc.Current.daily.apparent_temperature_max.0d][&Ms.Calc.Current.daily.wind_speed_10m_max.0d]]]
DynamicVariables=1

[Ms.String.Current.daily.apparent_temperature_min.0d]
Measure=String
String=[#Tm.ClothingTips.[#Vr.ClothingTips.[&Ms.Calc.Current.daily.apparent_temperature_min.0d][&Ms.Calc.Current.daily.wind_speed_10m_max.0d]]]
DynamicVariables=1

[Ms.Calc.Current.daily.apparent_temperature_max.1d]
Measure=Calc
Formula=(([Ms.WP.daily.apparent_temperature_max.1d]<((#Un#=0)? 0:32))?0:(([Ms.WP.daily.apparent_temperature_max.1d]<((#Un#=0)?10:50))?1:(([Ms.WP.daily.apparent_temperature_max.1d]<((#Un#=0)?20:68))?2:(([Ms.WP.daily.apparent_temperature_max.1d]<((#Un#=0)?30:86))?3:4))))
DynamicVariables=1

[Ms.Calc.Current.daily.wind_speed_10m_max.1d]
Measure=Calc
Formula=(([Ms.WP.daily.wind_speed_10m_max.1d]<(10*(1-0.088656*#Un#)))?0:(([Ms.WP.daily.wind_speed_10m_max.1d]<(20*(1-0.088656*#Un#)))?1:(([Ms.WP.daily.wind_speed_10m_max.1d]<(30*(1-0.088656*#Un#)))?2:(([Ms.WP.daily.wind_speed_10m_max.1d]<(40*(1-0.088656*#Un#)))?3:4))))
DynamicVariables=1

[Ms.String.Current.daily.apparent_temperature_max.1d]
Measure=String
String=[#Tm.ClothingTips.[#Vr.ClothingTips.[&Ms.Calc.Current.daily.apparent_temperature_max.1d][&Ms.Calc.Current.daily.wind_speed_10m_max.1d]]]
DynamicVariables=1
