[Rainmeter]
Update=1000
OnCloseAction=[!CommandMeasure "Ms.RunCommandRt" "Run"]

[St.Gp.Loading]
Group=Gp.Loading
Hidden=0
[St.Gp.Main]
Group=Gp.Main
Hidden=1
[St.Gp.Error]
Group=Gp.Error
Hidden=1

[St.Tx.Loading]
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
W=(#CURRENTCONFIGWIDTH#-32*#sc#)
H=(#CURRENTCONFIGHEIGHT#-32*#sc#)
ClipString=2
Text=#Tm.Loading#
StringAlign=CenterCenter
[St.Error.00]
ImageName=#@#Image\MonoIcons\32\Warning
W=(32*#sc#)
H=(32*#sc#)
X=((#CURRENTCONFIGWIDTH#-32*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-32*#sc#)/2)
ToolTipTitle=#Tm.Web_Error.0001#
ToolTipText=#St.Web_Error.0001#
[St.Error.01]
ImageName=#@#Image\MonoIcons\32\Warning
W=(32*#sc#)
H=(32*#sc#)
X=((#CURRENTCONFIGWIDTH#-32*#sc#)/2)
Y=((#CURRENTCONFIGHEIGHT#-32*#sc#)/2)
ToolTipTitle=#Tm.Web_Error.0002#
ToolTipText=#St.Web_Error.0002#

[St.Cstm.Tx.01]
StringAlign=LeftCenter
[St.Cstm.Tx.02]
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
[St.Cstm.Tx.03]
StringAlign=RightCenter
[St.Cstm.Ps.XN.01]
X=(80*#sc#)r
Y=0r
[St.Cstm.Ps.YN.01]
X=(16*#sc#)
Y=(22*#sc#)r
[St.Cstm.Ps.YN.02]
X=(16*#sc#)
Y=(23*#sc#)r
[St.Cstm.Ps.YN.03]
X=(#CURRENTCONFIGWIDTH#-16*#sc#)
Y=(23*#sc#)r

[St.Im.0h]
W=(32*#sc#)
H=(32*#sc#)
ImageTint=255,255,255,(255*#Op.Fg#)
ImageName=#IconPack#\[Ms.WP.hourly.is_day.0h]\[Ms.WP.hourly.weather_code.0h]
ToolTipTitle=#LocationName# | [Ms.Time.hourly.time.0h]
ToolTipText=#Tm.Current#: [#Tm.WeatherCode.[&Ms.WP.hourly.weather_code.0h]]#CRLF#    #Tm.Temperature#: [Ms.WP.hourly.temperature_2m.0h] [Ms.WP.hourly_units.temperature_2m]#CRLF#    #Tm.Feels_like#: [Ms.WP.hourly.apparent_temperature.0h] [Ms.WP.hourly_units.temperature_2m]#CRLF#    #Tm.Dew_point#: [Ms.WP.hourly.dew_point_2m.0h] [Ms.WP.hourly_units.temperature_2m]#CRLF#    #Tm.Humidity#: [Ms.WP.hourly.relative_humidity_2m.0h] %#CRLF#    #Tm.Precipitation_probability#: [Ms.WP.hourly.precipitation_probability.0h] %#CRLF#    #Tm.Precipitation#: [Ms.WP.hourly.precipitation.0h] [Ms.WP.hourly_units.precipitation]#CRLF#    #Tm.Wind#: [Ms.WP.hourly.wind_speed_10m.0h] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.hourly.wind_direction_10m.0h]])#CRLF#    #Tm.Cloud_cover#: [Ms.WP.hourly.cloud_cover.0h] %#CRLF#    #Tm.UV_index#: [Ms.WP.hourly.uv_index.0h]#CRLF#    #Tm.Visibility#: [Ms.WP.hourly.visibility.0h] [Ms.WP.hourly_units.visibility]#CRLF#    #Tm.Surface_pressure#: [Ms.WP.hourly.surface_pressure.0h] [Ms.WP.hourly_units.surface_pressure]#CRLF##Tm.Today#: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.0d]]#CRLF#    #Tm.Temperature#:  [Ms.WP.daily.temperature_2m_min.0d] - [Ms.WP.daily.temperature_2m_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF#    #Tm.Feels_like#:  [Ms.WP.daily.apparent_temperature_min.0d] - [Ms.WP.daily.apparent_temperature_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF#    #Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.0d] %#CRLF#    #Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.0d] [Ms.WP.hourly_units.precipitation]#CRLF#    #Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.0d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.0d]])#CRLF#    #Tm.Daylight_duration#: [Ms.Time.daily.sunrise.0d] - [Ms.Time.daily.sunset.0d]#CRLF#    #Tm.UV_index#: [Ms.WP.daily.uv_index_max.0d]
DynamicVariables=1
[St.Tx.temperature_2m.0h]
DynamicVariables=1
FontSize=(20*#sc#)
Text=[Ms.WP.hourly.temperature_2m.0h:0]
StringAlign=LeftCenter
[St.Tx.hourly_units.temperature_2m]
DynamicVariables=1
FontSize=(12*#sc#)
Text=[Ms.WP.hourly_units.temperature_2m]
[St.Tx.hourly.weather_code.0h]
DynamicVariables=1
Text=[#Tm.WeatherCode.[&Ms.WP.hourly.weather_code.0h]]
W=(#CURRENTCONFIGWIDTH#-([temperature_2m.0h:XW]+[0h:XW]))
ClipString=2
[St.Tx.hourly.relative_humidity_2m.0h]
DynamicVariables=1
Text=💧 [Ms.WP.hourly.relative_humidity_2m.0h] %
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter
W=(#CURRENTCONFIGWIDTH#-([temperature_2m.0h:XW]+[0h:XW]))
ClipString=2
[St.Tx.hourly.apparent_temperature.0h]
DynamicVariables=1
Text=#Tm.Feels_like# [Ms.WP.hourly.apparent_temperature.0h] [Ms.WP.hourly_units.temperature_2m]
InlinePattern=#Tm.Feels_like#
InlineSetting=Color | #Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter
[St.Tx.vb.LocationName]
DynamicVariables=1
Text=#LocationName#
StringAlign=LeftCenter
[St.Im.hourly.wind_direction_10m.0h]
DynamicVariables=1
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.hourly.wind_direction_10m.0h]
W=(16*#sc#)
H=(16*#sc#)
[St.Tx.daily.temperature.0d]
DynamicVariables=1
Text=#Tm.Today# | [Ms.WP.daily.temperature_2m_min.0d] - [Ms.WP.daily.temperature_2m_max.0d]°
InlinePattern=#Tm.Today# \| 
InlineSetting=Color | #Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter

[Ms.RunCommandRt]
Measure=Plugin
Plugin=RunCommand
Program=cmd.exe /u /c
Parameter=del /f /s /q /a "%TEMP%\QuantoFlx_WeatherForecast.json"
[Ms.RunCommand]
Measure=Plugin
Plugin=RunCommand
Program=cmd.exe /u /c
Parameter=del /f /s /q /a "%TEMP%\QuantoFlx_WeatherForecast.json"
FinishAction=[!DeactivateConfig "#CURRENTCONFIG#"]