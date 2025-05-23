[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Panels|QuantoFlx.Gadgets\Weather

[Variables]
MOA.TcMd_10=[]
MLA.TcMd_10=[]
MOA.TcMd_11=[!ShowMeterGroup "Gp.MvBts"][!Redraw]
MLA.TcMd_11=[!HideMeterGroup "Gp.MvBts"][!Redraw]

[St.Gp.Loading]
Group=Gp.Loading
Hidden=0
[St.Gp.Main]
Group=Gp.Main
Hidden=1
[St.Gp.Error]
Group=Gp.Error
Hidden=1

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

[St.Tx.Loading]
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
W=(#CURRENTCONFIGWIDTH#-32*#sc#)
H=(#CURRENTCONFIGHEIGHT#-32*#sc#)
ClipString=2
Text=#Tm.Loading#
StringAlign=CenterCenter

[St.Tx.Category]
Text=#Category# | UTC [Ms.Time.Timezone]
X=(20*#sc#)
Y=(20*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
[St.Tx.Title]
Text=#Title#
X=(#CURRENTCONFIGWIDTH#/2)
Y=(20*#sc#)
[St.Tx.Unit]
Text=#Tm.Unit#: #Unit#
X=(#CURRENTCONFIGWIDTH#-20*#sc#)
Y=(20*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#*#ShowUnit#)

[St.Im.ChooseDisplayParameter]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Title:XW]+8*#sc#)
Y=((20-8)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!SetVariable "CM" "#Sk.Nm#.CMChooseDisplayParameter"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "#Sk.Nm#.CMCommon"][!Delay 16][!Update]
[St.Sp.HChooseDisplayParameter]
X=([Mt.ChooseDisplayParameter:X]-2*#sc#)
Y=([Mt.ChooseDisplayParameter:Y]-2*#sc#)
Shape=Rectangle 0,0,(20*#sc#),(20*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,16
Hidden=1

[St.Cstm.Ps.XN.01]
X=(64*#sc#)r
Y=0r
[St.Cstm.Ps.YN.01]
X=0r
Y=(32*#sc#)r

[St.DvdLn.01]
X=(-#Index#*32*#sc#)
Shape=Rectangle (63.5*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
Shape2=Rectangle ((63.5+64)*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
Shape3=Rectangle ((63.5+64*2)*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
Shape4=Rectangle ((63.5+64*3)*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
Shape5=Rectangle ((63.5+64*4)*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
Shape6=Rectangle ((63.5+64*5)*#sc#),(8*#sc#),(#sc#),(#CURRENTCONFIGHEIGHT#-16*#sc#),(#sc#/2),(#sc#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64*#sc#)
DynamicVariables=1

[St.Cstm.Tx.01]
StringAlign=CenterCenter
[St.Cstm.Tx.02]
FontColor=#Cl.Gn.Fg.Gn#,(192*#Op.Fg#)
[St.Cstm.Tx.03]
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
FontSize=(8*#sc#*#Ft.Sc.Gn#)
[St.Cstm.Tx.04]
StringAlign=LeftCenter
[St.Cstm.Tx.05]
StringAlign=RightCenter

[St.Cstm.Im.01]
W=(24*#sc#)
H=(24*#sc#)
ImageTint=255,255,255,(255*#Op.Fg#)
DynamicVariables=1
[St.Cstm.Im.02]
W=(16*#sc#)
H=(16*#sc#)
ImageTint=255,255,255,(255*#Op.Fg#)
DynamicVariables=1

[St.Im.daily.weather_code.0d]
ToolTipTitle=#Tm.Today#: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.0d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.0d] - [Ms.WP.daily.temperature_2m_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.0d] - [Ms.WP.daily.apparent_temperature_max.0d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.0d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.0d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.0d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.0d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.0d] - [Ms.Time.daily.sunset.0d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.0d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.0d]
[St.Im.daily.weather_code.1d]
ToolTipTitle=[Ms.Time_01.daily.time.1d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.1d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.1d] - [Ms.WP.daily.temperature_2m_max.1d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.1d] - [Ms.WP.daily.apparent_temperature_max.1d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.1d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.1d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.1d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.1d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.1d] - [Ms.Time.daily.sunset.1d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.1d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.1d]
[St.Im.daily.weather_code.2d]
ToolTipTitle=[Ms.Time_01.daily.time.2d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.2d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.2d] - [Ms.WP.daily.temperature_2m_max.2d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.2d] - [Ms.WP.daily.apparent_temperature_max.2d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.2d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.2d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.2d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.2d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.2d] - [Ms.Time.daily.sunset.2d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.2d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.2d]
[St.Im.daily.weather_code.3d]
ToolTipTitle=[Ms.Time_01.daily.time.3d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.3d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.3d] - [Ms.WP.daily.temperature_2m_max.3d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.3d] - [Ms.WP.daily.apparent_temperature_max.3d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.3d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.3d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.3d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.3d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.3d] - [Ms.Time.daily.sunset.3d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.3d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.3d]
[St.Im.daily.weather_code.4d]
ToolTipTitle=[Ms.Time_01.daily.time.4d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.4d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.4d] - [Ms.WP.daily.temperature_2m_max.4d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.4d] - [Ms.WP.daily.apparent_temperature_max.4d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.4d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.4d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.4d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.4d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.4d] - [Ms.Time.daily.sunset.4d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.4d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.4d]
[St.Im.daily.weather_code.5d]
ToolTipTitle=[Ms.Time_01.daily.time.5d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.5d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.5d] - [Ms.WP.daily.temperature_2m_max.5d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.5d] - [Ms.WP.daily.apparent_temperature_max.5d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.5d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.5d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.5d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.5d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.5d] - [Ms.Time.daily.sunset.5d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.5d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.5d]
[St.Im.daily.weather_code.6d]
ToolTipTitle=[Ms.Time_01.daily.time.6d]: [#Tm.WeatherCode.[&Ms.WP.daily.weather_code.6d]]
ToolTipText=#Tm.Temperature#: [Ms.WP.daily.temperature_2m_min.6d] - [Ms.WP.daily.temperature_2m_max.6d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Feels_like#: [Ms.WP.daily.apparent_temperature_min.6d] - [Ms.WP.daily.apparent_temperature_max.6d] [Ms.WP.hourly_units.temperature_2m]#CRLF##Tm.Precipitation_probability#: [Ms.WP.daily.precipitation_probability_max.6d] %#CRLF##Tm.Precipitation#: [Ms.WP.daily.precipitation_sum.6d] [Ms.WP.hourly_units.precipitation]#CRLF##Tm.Wind#: [Ms.WP.daily.wind_speed_10m_max.6d] [Ms.WP.hourly_units.wind_speed_10m] ([#Tm.Direction.[&Ms.Calc.daily.wind_direction_10m_dominant.6d]])#CRLF##Tm.Daylight_duration#: [Ms.Time.daily.sunrise.6d] - [Ms.Time.daily.sunset.6d]#CRLF##Tm.UV_index#: [Ms.WP.daily.uv_index_max.6d]
ImageName=#IconPack#\1\[Ms.WP.daily.weather_code.6d]

[St.Tx.daily.temperature]
Text=[Ms.WP.[#CURRENTSECTION]:0]°
DynamicVariables=1
[St.Tx.daily.precipitation_probability]
Text=🌧️ [Ms.WP.[#CURRENTSECTION]:0]%
DynamicVariables=1

[St.daily.temperature_2m.Graph]
Shape=Path Path | Fill Color #Cl.Ac.Bg.Gn#,(64*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (#sc#)
Shape2=Ellipse  ((32+64*0)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.0d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape3=Ellipse  ((32+64*1)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.1d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape4=Ellipse  ((32+64*2)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.2d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape5=Ellipse  ((32+64*3)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.3d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape6=Ellipse  ((32+64*4)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.4d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape7=Ellipse  ((32+64*5)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.5d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape8=Ellipse  ((32+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.6d])/max([Ms.Calc.daily.temperature_2m.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape9=Ellipse  ((32+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.6d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape10=Ellipse ((32+64*5)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.5d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape11=Ellipse ((32+64*4)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.4d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape12=Ellipse ((32+64*3)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.3d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape13=Ellipse ((32+64*2)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.2d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape14=Ellipse ((32+64*1)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.1d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape15=Ellipse ((32+64*0)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.0d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
DynamicVariables=1
Path=(-32*#sc#),             (64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.0d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*0)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.0d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*1)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.1d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*2)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.2d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*3)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.3d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*4)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.4d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*5)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.5d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((32+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.6d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.6d])/max([Ms.Calc.daily.temperature_2m.DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.6d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.6d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*5)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.5d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*4)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.4d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*3)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.3d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*2)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.2d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*1)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.1d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo ((32+64*0)*#sc#),(64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.0d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | LineTo (-32*#sc#),      (64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.0d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1))) | ClosePath 1
[St.Tx.daily.temperature_2m_max.0d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.0d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.1d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.1d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.2d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.2d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.3d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.3d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.4d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.4d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.5d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.5d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_max.6d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.temperature_2m.MAX]-[Ms.WP.daily.temperature_2m_max.6d])/max([Ms.Calc.daily.temperature_2m.DIF],1))
[St.Tx.daily.temperature_2m_min.0d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.0d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.1d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.1d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.2d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.2d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.3d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.3d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.4d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.4d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.5d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.5d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))
[St.Tx.daily.temperature_2m_min.6d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.temperature_2m_min.6d]-[Ms.Calc.daily.temperature_2m.MIN])/max([Ms.Calc.daily.temperature_2m.DIF],1)))

[St.daily.apparent_temperature.Graph]
Shape=Path Path | Fill Color #Cl.Ac.Bg.Gn#,(64*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (#sc#)
Shape2=Ellipse  ((32+64*0)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.0d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape3=Ellipse  ((32+64*1)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.1d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape4=Ellipse  ((32+64*2)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.2d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape5=Ellipse  ((32+64*3)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.3d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape6=Ellipse  ((32+64*4)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.4d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape7=Ellipse  ((32+64*5)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.5d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape8=Ellipse  ((32+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.6d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)),    (3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape9=Ellipse  ((32+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.6d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape10=Ellipse ((32+64*5)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.5d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape11=Ellipse ((32+64*4)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.4d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape12=Ellipse ((32+64*3)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.3d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape13=Ellipse ((32+64*2)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.2d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape14=Ellipse ((32+64*1)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.1d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape15=Ellipse ((32+64*0)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.0d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
DynamicVariables=1
Path=(-32*#sc#),             (64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.0d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*0)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.0d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*1)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.1d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*2)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.2d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*3)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.3d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*4)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.4d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*5)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.5d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((32+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.6d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.6d])/max([Ms.Calc.daily.apparent_temperature.DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.6d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*6)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.6d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*5)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.5d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*4)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.4d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*3)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.3d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*2)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.2d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*1)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.1d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo ((32+64*0)*#sc#),(64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.0d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | LineTo (-32*#sc#),      (64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.0d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1))) | ClosePath 1
[St.Tx.daily.apparent_temperature_max.0d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.0d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.1d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.1d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.2d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.2d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.3d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.3d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.4d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.4d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.5d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.5d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_max.6d]
Y=((-16+90)*#sc#+64*#sc#*([Ms.Calc.daily.apparent_temperature.MAX]-[Ms.WP.daily.apparent_temperature_max.6d])/max([Ms.Calc.daily.apparent_temperature.DIF],1))
[St.Tx.daily.apparent_temperature_min.0d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.0d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.1d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.1d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.2d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.2d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.3d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.3d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.4d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.4d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.5d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.5d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))
[St.Tx.daily.apparent_temperature_min.6d]
Y=((16+90)*#sc#+64*#sc#*(1-([Ms.WP.daily.apparent_temperature_min.6d]-[Ms.Calc.daily.apparent_temperature.MIN])/max([Ms.Calc.daily.apparent_temperature.DIF],1)))

[St.8x4.Graph]
Shape=Path Path_Fill | Fill LinearGradient Gdnt_Cstm | #da.sk#
Shape2=Path Path_Line | Fill Color 0,0,0,0 | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (#sc#)
Shape3=Ellipse  ((32+64*0)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape4=Ellipse  ((32+64*1)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].1d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape5=Ellipse  ((32+64*2)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].2d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape6=Ellipse  ((32+64*3)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].3d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape7=Ellipse  ((32+64*4)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].4d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape8=Ellipse  ((32+64*5)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].5d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
Shape9=Ellipse  ((32+64*6)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1)),(3*#sc#) | Fill Color #Cl.Gn.Bg.Gn#,(255*#Op.Fg#) | Stroke Color #Cl.Ac.Bg.Gn#,(255*#Op.Fg#) | StrokeWidth (1.5*#sc#)
DynamicVariables=1
Gdnt_Cstm=270 | #Cl.Ac.Bg.Gn#,(96*#Op.Fg#) ; 0 | #Cl.Ac.Bg.Gn#,0 ; 1
Path_Fill=(-32*#sc#),              (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*0)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*1)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].1d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*2)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].2d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*3)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].3d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*4)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].4d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*5)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].5d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*6)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#) | LineTo (-32*#sc#),       (64*#sc#) | ClosePath 1
Path_Line=(-32*#sc#),              (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*0)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*1)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].1d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*2)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].2d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*3)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].3d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*4)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].4d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*5)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].5d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((32+64*6)*#sc#), (64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1)) | LineTo ((128+64*6)*#sc#),(64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.0d]
Text=[&Ms.WP.[#Graph].0d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].0d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.1d]
Text=[&Ms.WP.[#Graph].1d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].1d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.2d]
Text=[&Ms.WP.[#Graph].2d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].2d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.3d]
Text=[&Ms.WP.[#Graph].3d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].3d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.4d]
Text=[&Ms.WP.[#Graph].4d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].4d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.5d]
Text=[&Ms.WP.[#Graph].5d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].5d])/max([&Ms.Calc.[#Graph].DIF],1))
[St.Tx.8x4.6d]
Text=[&Ms.WP.[#Graph].6d]
Y=((-16+100)*#sc#+64*#sc#*([&Ms.Calc.[#Graph].MAX]-[&Ms.WP.[#Graph].6d])/max([&Ms.Calc.[#Graph].DIF],1))

[St.Im.daily.wind_direction_10m_dominant]
W=(16*#sc#)
H=(16*#sc#)
DynamicVariables=1
[St.Im.daily.wind_direction_10m_dominant.0d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.0d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.0d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.1d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.1d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.1d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.2d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.2d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.2d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.3d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.3d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.3d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.4d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.4d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.4d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.5d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.5d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.5d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))
[St.Im.daily.wind_direction_10m_dominant.6d]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[Ms.Calc.daily.wind_direction_10m_dominant.6d]
Y=((10+100)*#sc#+64*#sc#*([&Ms.Calc.daily.wind_speed_10m_max.MAX]-[&Ms.WP.daily.wind_speed_10m_max.6d])/max([&Ms.Calc.daily.wind_speed_10m_max.DIF],1))