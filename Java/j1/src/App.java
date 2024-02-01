import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        List<Employee> persons = Arrays.asList(
            new Employee("MEHMET KAYA", 27),
            new Employee("EKİN MERT", 21d),
            new Employee("SELİN A", 23d),
            new Employee("ZEHRA T", 26d),
            new Employee("KEREM L", 22d)
        );
        System.out.println(persons);
        System.out.println("--");
        s(persons);
        System.out.println("--");
        Collections.sort(persons);
        s(persons);
        
    }
    private static void s(Iterable persons){
        for (Object person: persons) {
            System.out.println(person);
        }

    }
}
