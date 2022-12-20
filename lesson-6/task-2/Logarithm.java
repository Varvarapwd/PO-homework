public class Logarithm implements Number {

    private double base, argument;

    @Override
    public double doubleValue() throws(ArithmeticException){
        if (base <= 0 || base == 1 || argument <= 0) {
            throw new ArithmeticException("Error");
        } else {
            return Math.log(this.argument) / Math.log(this.base);
            
        }
    }
    

    public Logarithm(double inputBase, double inputArgument) {
       
            this.base = inputBase;
            this.argument = inputArgument;

        
            System.out.println("Something went wrong.");
        
    }
}
