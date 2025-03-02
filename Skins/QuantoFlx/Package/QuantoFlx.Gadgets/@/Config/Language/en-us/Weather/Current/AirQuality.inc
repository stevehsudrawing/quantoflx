[Variables]
@include=..\..\Weather.inc

; AQI calculation method: "european" or "us"
Dv.AQI=us

Tm.AQI.european.0=AQ: Good
Tm.AQI.european.1=AQ: Fair
Tm.AQI.european.2=AQ: Moderate
Tm.AQI.european.3=AQ: Poor
Tm.AQI.european.4=AQ: Very poor
Tm.AQI.european.5=AQ: Extremely poor

Tm.AQI.us.0=AQ: Good
Tm.AQI.us.1=AQ: Moderate
Tm.AQI.us.2=AQ: Unhealthy for sensitive groups
Tm.AQI.us.3=AQ: Unhealthy
Tm.AQI.us.4=AQ: Very unhealthy
Tm.AQI.us.5=AQ: Hazardous

St.AirQuality.0000=The average AQI for the next 8 hours is %1.
St.AirQuality.0001=The AQI flattened for the next 8 hours.
St.AirQuality.0002=The AQI will show a upward trend for the next 8 hours, with a maximum of %2 at %4.
St.AirQuality.0003=The AQI will show a downward trend for the next 8 hours, with a minimum of %3 at %5.
St.AirQuality.0004=The current density of PM10 is %6 %7 and the density of PM2.5 is %8 %9.

St.AirQuality.0200=The current air quality is good and it is suitable to go out for exercise.
St.AirQuality.0201=The current air quality is acceptable and you can go out and exercise.
St.AirQuality.0202=The current air conditions may not be suitable for sensitive people, and healthy people may experience irritation. Outdoor exercise should be reduced.
St.AirQuality.0203=The current air may cause irritation symptoms to people, so you should reduce going out, especially for sensitive people.
St.AirQuality.0204=The current air may cause irritation. Everyone should avoid going out.
St.AirQuality.0205=Now everyone should stay at home and avoid going out.

Tm.AQI_calculation_method=AQI calculation method
Tm.AQI.european=European
Tm.AQI.us=United States