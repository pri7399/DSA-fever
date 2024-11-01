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
