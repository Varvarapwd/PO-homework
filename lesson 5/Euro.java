public class Euro implements Currency {

    
    public Currency addedCurrency(float value, String currency) {
        
        System.out.println();
        
    }
    public Currency subtractedCurrency(float value, String currency){

        return null;
    }
    public String abbreviation(){
        return "EUR";
    }
    public String symbol(){

        return "€";
    }
    public String balance() {

        return null;
    }

    public float toDollarExchangeRate(){
        float currency;
        currency = euroToRate("USD");
        System.out.println("In dollars it will be :" + currency);
    }


}
