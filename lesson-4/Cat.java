public class Cat implements Animal {

    public void animalSound() {

        System.out.println("The cat says: meow meow");
    }

    //@Override
    public void sleep() {

        System.out.println("Zzz. Better not wake me up now");

    }

    // @Override
    public void jump() {
        System.out.println("Yeah. I can jump on the closet");
    }

    public void swim() {
        System.out.println("ERROR. Cats hate swimming");
    }

}
