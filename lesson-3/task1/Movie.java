
public class Movie {
    private final Type types;
    private final Producer[] producers;
    private final Title title;
    private final Integer runtime;

    Movie(Type types, Producer[] producers, Title title, Integer runtime) {
        this.types = types;
        this.producers = producers;
        this.title = title;
        this.runtime = runtime;
    }

    public void MovieInfo() {
         System.out.println("Type:" +this.types.typesName());
         System.out.println("Producers:"+this.producers[0].name()+this.producers[1].name()+this.producers[2].name()+this.producers[3].name());
         System.out.println("Title:"+this.title.title("ENG"));
         System.out.println("Runtime:"+this.runtime);
         return;
    }

    public static void main(String[] args) {
        Type types = new Type("Romantic");
        Producer producer = new Producer("Tim", "Bevan");
        Producer producer1 = new Producer("Eric", "Fellner");
        Producer producer2 = new Producer("Sarah", "Harvey");
        Producer producer3 = new Producer("Deborah","Balderstone");
        Producer[] producers = new Producer[4];
        producers[0] = producer;
        producers[1] =producer1;
        producers[2] =producer2;
        producers[3] =producer3;
        Title title = new Title("Bilet do Raju", "Ticket to Paradise");
        Integer runtime = 104;
        Movie TickettoParadise = new Movie(types, producers, title, runtime);
        TickettoParadise.MovieInfo();
    }
}
