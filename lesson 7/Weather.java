public class Weather{
    private final Forecast forecast;
    private final float temperature;

    public Weather(Forecast forecast, float temperature) {
        this.forecast = forecast;
        this.temperature = temperature;
    }
    public String todaysTemperature(){
        return "Today's weather is,"+ this.forecast.temperature();

    }

    @Override
    public String toString(){
        return Float.toString(temperature);
    }
}
