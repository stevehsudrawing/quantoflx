[Variables]
St.AirQuality.0-1=#St.AirQuality.0003#
St.AirQuality.00=#St.AirQuality.0001#
St.AirQuality.01=#St.AirQuality.0002#

[St.Tx.Title_Part]
Text=[#Tm.AQI.[#AQI].[&Ms.Calc.Current.[#AQI]]]

[St.Tx.Text_Part]
Text=[#St.AirQuality.020[&Ms.Calc.Current.[#AQI]]]#CRLF##St.AirQuality.0004##CRLF##St.AirQuality.0000##CRLF#[#St.AirQuality.0[&Ms.Calc.8h.Trend]]
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
MeasureName6=Ms.WP.hourly.pm10.0h
MeasureName7=Ms.WP.hourly_units.pm10
MeasureName8=Ms.WP.hourly.pm2_5.0h
MeasureName9=Ms.WP.hourly_units.pm2_5
NumOfDecimals=1
;Autoscale=2