public class Logarithm implements Number {

    private double base, argument;

    @Override
    public double doubleValue() {
        double value;
        value =  Math.log(this.argument) / Math.log(this.base);
        System.out.printf("Argument:\t Base:\t Answer:\n",argument,base,value);
        return value;

    }

    public Logarithm(double inputBase, double inputArgument) {
        try {
            this.base = inputBase;
            this.argument = inputArgument;

        } catch (Exception e) {
            System.out.println("Something went wrong.");
        }
    }
}
