[Variables]
St.CloudCover.0-1=#St.CloudCover.0003#
St.CloudCover.00=#St.CloudCover.0001#
St.CloudCover.01=#St.CloudCover.0002#
St.CloudCover.10=#CRLF##St.CloudCover.0004#
St.CloudCover.11=

[St.Tx.Title_Part]
Text=[#Tm.WeatherCode.0[&Ms.Calc.Current]]
StringCase=Proper

[St.Tx.Text_Part]
Text=#St.CloudCover.0000##CRLF#[#St.CloudCover.0[&Ms.Calc.8h.Trend]][#St.CloudCover.1[&Ms.Calc.IsClearNow]]
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
MeasureName6=Ms.Time.hourly.time.[&Ms.Calc.24h.MinPos]h
NumOfDecimals=1