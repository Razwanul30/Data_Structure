import java.util.HashMap;
import java.util.Map;
import java.util.Iterator;

public class Hashmap {
    public static void main(String[] args) {
        Map <String, String> hashMap = new HashMap<>();
        hashMap.put("Bangladesh", "Dhaka");
        hashMap.put("India", "New Delhi");
        hashMap.put("Pakistan", "Islamabad");
        hashMap.put("Nepal", "Kathmandu");
        hashMap.put("Bhutan", "Thimphu");
        hashMap.put("Sri Lanka", "Colombo");
        hashMap.put("Maldives", "Male");
        hashMap.put("China", "Beijing");
        hashMap.put("Bangladesh", "Chittagong"); // Duplicate key, will overwrite the previous value
        System.out.println(hashMap);

        // Iterate through the HashMap using an iterator
        Iterator<Map.Entry<String, String>> iterator = hashMap.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry<String, String> entry = iterator.next();
            System.out.println("Country: " + entry.getKey() + ", Capital: " +entry.getValue());
        }

        // Check if a specific key exists in the HashMap
        String searchKey = "India";
        if (hashMap.containsKey(searchKey)) {
            System.out.println(searchKey + " is present in the HashMap.");
        } else {
            System.out.println(searchKey + " is not present in the HashMap.");
    }

    //size of the HashMap
    System.out.println("Size of the HashMap: " + hashMap.size());

    // Remove an entry from the HashMap
        hashMap.remove("Nepal");
        System.out.println("After removing 'Nepal', size of the HashMap: " + hashMap.size());
        System.out.println(hashMap);

        // Clear the HashMap
        hashMap.clear();
        System.out.println("After clearing, size of the HashMap: " + hashMap.size());

        // Check if the HashMap is empty
        if (hashMap.isEmpty()) {
            System.out.println("The HashMap is empty.");
        } else {
            System.out.println("The HashMap is not empty.");
        }
    }  
}
