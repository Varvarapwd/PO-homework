class Key_chain
{
   String material;
   String size;
 
   Key_chain(String a, String b)
{
   material = a;
   size = b;
}
 
void printKey_chain ()
{
System.out.print("This key chain is made of " + material);
System.out.println(",the size of the key chain: " + size + ".");
}
} 
public class Main
{
public static void main(String[] args) 
{
    Key_chain a;
    
    a = new Key_chain ("Leather","small");
    a.printKey_chain();
    
    
    a = new Key_chain ("Wood","medium");
    a.printKey_chain();
}
}
