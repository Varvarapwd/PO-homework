public class Money
{
   
   double amount;
   double fee;
   
   public double Fees(){
       
       
        if ( amount < 1000){
          fee = amount * 0.09;
          System.out.println("The amount of fee:" + fee);
        }
        else 
        {
          fee = amount * 0.15;
          System.out.println("The amount of fee:" + fee);
        }
        return fee;
   }
   Money (double a){
       amount = a;
   }
}

