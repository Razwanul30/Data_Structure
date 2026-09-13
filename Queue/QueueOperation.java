import java.util.LinkedList;
import java.util.Queue;

public class QueueOperation {
    public static void main(String[] args) {
        // Creating a Queue using LinkedList implementation
        Queue<String> queue = new LinkedList<>();

        System.out.println("=== 1. Insertion Operations ===");
        
        // offer(e): Inserts the element into the queue. Returns true if successful. Recommended.
        queue.offer("Rizwan");
        queue.offer("Razwanul");
        System.out.println("After offer(): " + queue); // Output: [Alice, Bob]

        // add(e): Inserts the element into the queue. Throws an Exception if the queue is full.
        queue.add("Charlie");
        System.out.println("After add(): " + queue); // Output: [Alice, Bob, Charlie]


        System.out.println("\n=== 2. Examination Operations ===");
        
        // peek(): Retrieves the head element without removing it. Returns null if the queue is empty.
        System.out.println("Head element using peek(): " + queue.peek()); // Output: Alice

        // element(): Retrieves the head element without removing it. Throws an Exception if empty.
        System.out.println("Head element using element(): " + queue.element()); // Output: Alice


        System.out.println("\n=== 3. Removal Operations ===");
        
        // poll(): Retrieves and removes the head of the queue. Returns null if empty.
        System.out.println("Removed using poll(): " + queue.poll()); // Output: Alice
        System.out.println("Queue after poll(): " + queue); // Output: [Bob, Charlie]

        // remove(): Retrieves and removes the head of the queue. Throws an Exception if empty.
        System.out.println("Removed using remove(): " + queue.remove()); // Output: Bob
        System.out.println("Queue after remove(): " + queue); // Output: [Charlie]


        System.out.println("\n=== 4. Utility Operations ===");
        
        // size(): Returns the total number of elements in the queue.
        System.out.println("Current Queue size: " + queue.size()); // Output: 1

        // isEmpty(): Checks if the queue contains no elements (returns true/false).
        System.out.println("Is Queue empty? " + queue.isEmpty()); // Output: false

        // contains(o): Checks if a specific element exists in the queue.
        System.out.println("Does Queue contain 'Charlie'? " + queue.contains("Charlie")); // Output: true

        // clear(): Removes all elements from the queue.
        queue.clear();
        System.out.println("After clear(): " + queue); // Output: []
        System.out.println("Is Queue empty now? " + queue.isEmpty()); // Output: true
    }
}
