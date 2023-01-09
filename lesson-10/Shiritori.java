import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
public class Shiritori {
    public static void main(String args[]) {
        String word_;
        List<String> words = new ArrayList<>(Arrays.asList());
        public void play (String word){
            String word_ = word;
            //List<String> words = new ArrayList<>(Arrays.asList());
            char[] wordToArray = word.toCharArray();
            char b = wordToArray[wordToArray.length - 1];
            char[] cToArray = c.toCharArray();
            char g = cToArray[Integer.parseInt(words.get(words.size() - 1))];
            if (b == g) {
                words.add(word);
            }
        }
        public void restart (String word){
            String word_ = word;

        }
        public void printWords (String word){
            String word_ = word;
            Iterator ir = words.iterator();
            while (ir.hasNext()) {
                System.out.println(ir.next());
            }
        }
    }
}
