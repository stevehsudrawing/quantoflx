[Variables]
St.Wind.0-1=#St.Wind.0003#
St.Wind.00=#St.Wind.0001#
St.Wind.01=#St.Wind.0002#

[St.Tx.Title_Part]
Text=[#St.Wind.020[#UseKnot]] - [#Tm.Beaufort.[&Ms.Calc.Beaufort.hourly.wind_speed_10m.0h]]
MeasureName=Ms.Calc.Beaufort.hourly.wind_speed_10m.0h
MeasureName2=Ms.Calc.Knots.hourly.wind_speed_10m.0h
NumOfDecimals=#UseKnot#

[St.Tx.Text_Part]
Text=#St.Wind.0005##CRLF##St.Wind.0000##CRLF#[#St.Wind.0[&Ms.Calc.8h.Trend]]#CRLF##St.Wind.0004# %7
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
MeasureName6=Ms.WP.hourly_units.wind_speed_10m
MeasureName7=Ms.String.8h.WindDirection
MeasureName8=Ms.WP.hourly.wind_speed_10m.0h
NumOfDecimals=1