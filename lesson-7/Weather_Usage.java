public class Weather_Usage {
    public static void main(String[] args){
        Forecast forecast = new Forecast.Fake();
        Weather today = new Weather(forecast, -3);
        String weather= today.todaysTemperature();
        System.out.println(weather);
        assert "Today's weather is,-3.0".equals(weather.toString());
    }
}
