public class Producer {
    private final String firstName;
    private final String lastName;

    Producer(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    public String name() {
        return this.firstName + " " + this.lastName;
    }
}
