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
ToolTipTitle=#Tm.Web_Error.0003#
ToolTipText=#St.Web_Error.0003#
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
Y=(26*#sc#)r
[St.Cstm.Ps.YN.03]
X=(#CURRENTCONFIGWIDTH#-16*#sc#)
Y=(26*#sc#)r

[St.Im.0d]
W=(32*#sc#)
H=(32*#sc#)
ImageTint=255,255,255,(255*#Op.Fg#)
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.0d]
ToolTipTitle=[Ms.Time.daily.time.0d] | [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.0d]]
ToolTipText=#Tm.Temperature#:  [Ms.WP.daily.temperature_2m_min.0d] - [Ms.WP.daily.temperature_2m_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#:  [Ms.WP.daily.apparent_temperature_min.0d] - [Ms.WP.daily.apparent_temperature_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.0d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.0d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.0d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.0d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.0d] - [Ms.Time.daily.sunset.0d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.0d]
DynamicVariables=1
[St.Tx.temperature_2m.0d]
DynamicVariables=1
FontSize=(20*#sc#)
Text=[Ms.WP.daily.temperature_2m_min.0d:0] - [Ms.WP.daily.temperature_2m_max.0d:0]
StringAlign=LeftCenter
InlinePattern=[Ms.WP.daily.temperature_2m_min.0d:0]\s\-\s
InlineSetting=Color | #Cl.Gn.Fg.Gn#,(128*#sc#)
[St.Tx.hourly_units.temperature_2m]
DynamicVariables=1
FontSize=(12*#sc#)
Text=[Ms.WP.hourly_units.temperature_2m]
[St.Tx.daily.weather_code.0d]
DynamicVariables=1
Text=[#Tm.WeatherCode.[&Ms.WP.daily.weather_code.0d]]
W=(#CURRENTCONFIGWIDTH#-([temperature_2m.0d:XW]+[0d:XW]))
ClipString=1
[St.Tx.daily.precipitation_probability_max.0d]
DynamicVariables=1
Text=🌧️ [Ms.WP.daily.precipitation_probability_max.0d] %
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter
W=(#CURRENTCONFIGWIDTH#-([temperature_2m.0d:XW]+[0d:XW]))
ClipString=1
[St.Tx.daily.apparent_temperature.0d]
DynamicVariables=1
Text=#Tm.Feels_like# [Ms.WP.daily.apparent_temperature_min.0d:0] - [Ms.WP.daily.apparent_temperature_max.0d:0]°
InlinePattern=#Tm.Feels_like#
InlineSetting=Color | #Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter
[St.Tx.vb.LocationName]
DynamicVariables=1
Text=#Tm.Today#
StringAlign=LeftCenter
[St.Im.daily.wind_direction_10m_dominant.0d]
DynamicVariables=1
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.0d]
W=(16*#sc#)
H=(16*#sc#)
[St.Tx.daily.temperature.0d]
DynamicVariables=1
Text=#Tm.Today#
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
StringAlign=RightCenter