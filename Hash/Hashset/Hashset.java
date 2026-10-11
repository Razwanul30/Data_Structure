import java.util.HashSet;
import java.util.Set;
import java.util.Iterator;

public class Hashset {
    public static void main(String[] args) {
        Set<String> hashSet = new HashSet<>();
        hashSet.add("Apple");
        hashSet.add("Banana");
        hashSet.add("Cherry");
        hashSet.add("apple"); // Duplicate entry, will not be added
        hashSet.add("Date");
        hashSet.add("Elderberry");

        Iterator<String> iterator = hashSet.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Check if a specific element exists in the HashSet
        String searchElement = "Banana";
        if (hashSet.contains(searchElement)) {
            System.out.println(searchElement + " is present in the HashSet.");
        } else {
            System.out.println(searchElement + " is not present in the HashSet.");
        }

        //size of the HashSet
        System.out.println("Size of the HashSet: " + hashSet.size());

        // Remove an element from the HashSet
        hashSet.remove("Date");
        System.out.println("After removing 'Date', size of the HashSet: " + hashSet.size());
        System.out.println(hashSet);

        //convert HashSet to array
        String[] array = hashSet.toArray(new String[0]);
        System.out.println("HashSet converted to array:");
        for (String element : array) {
            System.out.println(element);
        }
        
        // Clear the HashSet
        hashSet.clear();
        System.out.println("After clearing, size of the HashSet: " + hashSet.size());

        // Check if the HashSet is empty
        if (hashSet.isEmpty()) {
            System.out.println("The HashSet is empty.");
        } else {
            System.out.println("The HashSet is not empty.");
        }
    }
}