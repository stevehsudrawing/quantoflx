[Variables]
St.Visibility.0-1=#St.Visibility.0003#
St.Visibility.00=#St.Visibility.0001#
St.Visibility.01=#St.Visibility.0002#

[St.Tx.Title_Part]
Text=[#Tm.Visibility.[&Ms.Calc.Current]]
StringCase=Proper

[St.Tx.Text_Part]
Text=[#St.Visibility.010[&Ms.Calc.Current]]#CRLF##St.Visibility.0000##CRLF#[#St.Visibility.0[&Ms.Calc.8h.Trend]]
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
MeasureName6=Ms.WP.hourly_units.visibility
NumOfDecimals=1
Autoscale=2