[Variables]
St.UVI.0-1=#St.UVI.0003#
St.UVI.00=#St.UVI.0001#
St.UVI.01=#St.UVI.0002#

[St.Tx.Title_Part]
Text=[#Tm.UV.[&Ms.Calc.Current]]

[St.Tx.Text_Part]
Text=[#St.UVI.010[&Ms.Calc.Current]]#CRLF##St.UVI.0000##CRLF#[#St.UVI.0[&Ms.Calc.8h.Trend]]
MeasureName=Ms.Calc.8h.Avg
MeasureName2=Ms.Calc.8h.Max
MeasureName3=Ms.Calc.8h.Min
MeasureName4=Ms.Time.hourly.time.[&Ms.Calc.8h.MaxPos]h
MeasureName5=Ms.Time.hourly.time.[&Ms.Calc.8h.MinPos]h
NumOfDecimals=1