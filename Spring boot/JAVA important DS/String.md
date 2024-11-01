# String

### 1. **What is a String in Java?**
   - A `String` in Java is a sequence of characters.
   - It is an object of the `String` class in the `java.lang` package.
   - Strings are **immutable**, meaning that once a `String` object is created, its content cannot be changed.

### 2. **Creating a String**
   - **Using String Literals**:
     - When a `String` is created using literals, it is stored in the **String Pool**, which is a memory area that optimizes memory usage by reusing identical strings.
     ```java
     String str1 = "Hello";
     ```
   - **Using the `new` Keyword**:
     - When a `String` is created using `new`, it is stored directly in the heap memory and is not reused.
     ```java
     String str2 = new String("Hello");
     ```

### 3. **Common Properties and Methods of Strings**
   - **Length of a String**: Use `.length()` to get the number of characters in a string.
     ```java
     int len = str1.length();
     ```
   - **Character at a Specific Index**: Use `.charAt(index)` to access a specific character in a string.
     ```java
     char ch = str1.charAt(0);  // Gets the first character 'H'
     ```

### 4. **String Immutability**
   - Since strings are immutable, modifying a `String` creates a new `String` object.
   - For example:
     ```java
     String str = "Java";
     str = str + " Programming";  // This creates a new string "Java Programming"
     ```

### 5. **Common String Operations**
   - **Concatenation**: Combine strings using `+` operator or `.concat()` method.
     ```java
     String str3 = str1 + " World";
     String str4 = str1.concat(" World");
     ```
   - **Substring**: Use `.substring(startIndex, endIndex)` to extract a part of the string.
     ```java
     String subStr = str1.substring(1, 4);  // Extracts "ell" from "Hello"
     ```
   - **String Comparison**:
     - **`.equals()`**: Compares the content of two strings.
       ```java
       str1.equals("Hello");  // Returns true if str1 contains "Hello"
       ```
     - **`==`**: Compares the reference (useful for comparing strings in the pool).
     - **`.compareTo()`**: Compares lexicographically.
       ```java
       str1.compareTo("World");  // Returns a negative, zero, or positive integer
       ```

### 6. **Other Useful String Methods**
   - **`.toLowerCase()` and `.toUpperCase()`**: Convert to lowercase or uppercase.
     ```java
     String lower = str1.toLowerCase();
     ```
   - **`.trim()`**: Removes whitespace from the beginning and end of the string.
     ```java
     String trimmed = "  Hello ".trim();  // Result: "Hello"
     ```
   - **`.replace()`**: Replaces characters in the string.
     ```java
     String replaced = str1.replace('e', 'a');  // Replaces 'e' with 'a' in "Hello"
     ```
   - **`.contains()`**: Checks if a sequence of characters exists within the string.
     ```java
     boolean hasHello = str1.contains("Hello");  // Returns true if "Hello" is present
     ```

## **StringBuilder and StringBuffer**
   - For **mutable strings**, use `StringBuilder` or `StringBuffer`.
   - **StringBuilder**: Fast but not thread-safe.
   - **StringBuffer**: Thread-safe, with synchronized methods, but slower than `StringBuilder`.

`StringBuilder` and `StringBuffer` in Java are classes used for creating and manipulating **mutable sequences of characters**. Unlike `String`, which is immutable (cannot be changed once created), both `StringBuilder` and `StringBuffer` allow for modification without creating a new object each time, making them more efficient for scenarios that involve frequent string modifications.

Here’s a breakdown of each class and the differences between them:

---

### 1. **StringBuilder**
   - **Introduction**: `StringBuilder` was introduced in Java 5 as a more efficient, non-synchronized alternative to `StringBuffer`.
   - **Mutability**: It is mutable, allowing modification of the character sequence without creating new objects.
   - **Thread Safety**: `StringBuilder` is **not thread-safe**, meaning it does not synchronize its methods. This makes it faster than `StringBuffer` in single-threaded scenarios, but it should not be used in multithreaded environments without additional synchronization.
   - **Performance**: Faster than `StringBuffer` in single-threaded applications because of the lack of synchronization.
   - **Usage**:
     - Suitable for cases where you need to modify a string frequently within a single thread.
     - Common operations like `append()`, `insert()`, `delete()`, and `reverse()` are available.
     
   - **Example**:
     ```java
     StringBuilder sb = new StringBuilder("Hello");
     sb.append(" World");               // Now sb contains "Hello World"
     sb.insert(5, ",");                 // Inserts a comma after "Hello" -> "Hello, World"
     sb.reverse();                      // Reverses the string -> "dlroW ,olleH"
     System.out.println(sb.toString()); // Output: "dlroW ,olleH"
     ```

---

### 2. **StringBuffer**
   - **Introduction**: `StringBuffer` has been available since Java 1.0 and was designed to be thread-safe for string manipulation.
   - **Mutability**: Like `StringBuilder`, `StringBuffer` is also mutable.
   - **Thread Safety**: `StringBuffer` is **thread-safe**, meaning its methods are synchronized to prevent concurrent modifications. This makes it suitable for use in multithreaded environments where multiple threads may modify the same `StringBuffer` instance.
   - **Performance**: Slightly slower than `StringBuilder` because of the added synchronization overhead, but safer for concurrent use.
   - **Usage**:
     - Recommended for cases where you need mutable strings in a multithreaded context.
     - Supports the same methods as `StringBuilder` for appending, inserting, deleting, and reversing strings.
     
   - **Example**:
     ```java
     StringBuffer sb = new StringBuffer("Hello");
     sb.append(" World");               // Now sb contains "Hello World"
     sb.insert(5, ",");                 // Inserts a comma after "Hello" -> "Hello, World"
     sb.reverse();                      // Reverses the string -> "dlroW ,olleH"
     System.out.println(sb.toString()); // Output: "dlroW ,olleH"
     ```

---

### **Key Differences Between StringBuilder and StringBuffer**
   | Feature            | StringBuilder       | StringBuffer        |
   |--------------------|---------------------|---------------------|
   | **Thread Safety**  | Not thread-safe     | Thread-safe        |
   | **Performance**    | Faster in single-threaded applications | Slower due to synchronization |
   | **Usage**          | Single-threaded applications | Multi-threaded applications |
   | **Introduced In**  | Java 5              | Java 1.0           |

### **When to Use Which?**
- **Use `StringBuilder`** if:
  - You’re working in a **single-threaded environment**.
  - Performance is a concern, and thread safety is not required.
- **Use `StringBuffer`** if:
  - You need **thread safety** and are working in a **multi-threaded environment**.
  
Both `StringBuilder` and `StringBuffer` provide efficient options for building and modifying strings, with the choice depending mainly on whether thread safety is a requirement.

## Synchronized vs. Non-Synchronized Code

In Java, **non-synchronized** means that a method or block of code is not protected from concurrent access by multiple threads. In simpler terms, it means that **multiple threads can access and modify the resource (like an object or variable) at the same time without waiting for one another**. This can lead to inconsistencies or unexpected behavior if the code modifies shared data, as changes made by one thread might conflict with changes made by another.

- **Synchronized Code**: When a method or block is synchronized, Java ensures that only one thread can access it at a time. This is often done using the `synchronized` keyword. Synchronized methods or blocks make the code **thread-safe** but can slow down performance, especially when multiple threads need access.
  
- **Non-Synchronized Code**: Non-synchronized code allows multiple threads to access and modify data simultaneously. This can improve performance since threads don’t have to wait on each other, but it may cause issues in a multi-threaded environment if the code modifies shared resources.

### Example: Synchronized vs. Non-Synchronized

Imagine a counter that is shared among multiple threads. Here’s a simplified example:

#### Non-Synchronized Version
If two threads increment the counter without synchronization, they may overwrite each other’s changes:

```java
public class Counter {
    private int count = 0;

    public void increment() {
        count = count + 1; // Non-synchronized increment
    }

    public int getCount() {
        return count;
    }
}
```

In this case, if two threads run `increment()` simultaneously, they could each read the same initial `count` value, update it, and overwrite each other’s result, causing errors.

#### Synchronized Version
Using `synchronized` ensures only one thread can access `increment()` at a time, making it thread-safe:

```java
public class Counter {
    private int count = 0;

    public synchronized void increment() {
        count = count + 1; // Synchronized increment
    }

    public int getCount() {
        return count;
    }
}
```

Here, only one thread at a time can run `increment()`, preventing inconsistent updates to `count`.

### In `StringBuilder` vs. `StringBuffer`
- **StringBuilder** is **non-synchronized** because it is designed for single-threaded use, where performance is prioritized over thread safety.
- **StringBuffer** is **synchronized** so that it can be used safely across multiple threads, though it is slightly slower due to this synchronization.

So, **non-synchronized code is faster** but should only be used where thread safety is not a concern, such as in single-threaded environments.
