[Variables]
St.Precipitation.0-1=#St.Precipitation.0003#
St.Precipitation.00=#St.Precipitation.0001#
St.Precipitation.01=#St.Precipitation.0002#

St.Precipitation.0110=#St.Precipitation.0100#

[St.Tx.Title_Part]
Text=[#Tm.Precipitation.[&Ms.Calc.IsSnowfall][&Ms.Calc.Current.[&Ms.Calc.IsSnowfall]]]

[St.Tx.Text_Part]
Text=[#St.Precipitation.01[&Ms.Calc.IsSnowfall][&Ms.Calc.IsPrecipitation]]#CRLF##St.Precipitation.0000##CRLF#[#St.Precipitation.0[&Ms.Calc.8h.Trend]]
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
MeasureName6=Ms.WP.hourly_units.precipitation
MeasureName7=Ms.Time.hourly.time.[Ms.Calc.PrecipitationPos]h
NumOfDecimals=1
Autoscale=2