# 1D Array
### 1. **What is an Array in Java?**
   - An array is a data structure that can store multiple values of the same data type.
   - It has a fixed size, meaning that once it’s created, its length cannot be changed.

### 2. **Declaring an Array**
   - Syntax: `dataType[] arrayName;`
   - Example:
     ```java
     int[] numbers;
     String[] names;
     ```

### 3. **Creating an Array**
   - To create an array, you need to initialize it with a fixed size or directly assign values to it.
   - Syntax: `arrayName = new dataType[arraySize];`
   - Alternatively, arrays can be initialized with values in curly braces `{}`.

   - Examples:
     ```java
     int[] numbers = new int[5];         // Creates an array of integers with 5 elements (default values of 0)
     String[] names = {"Alice", "Bob"};  // Creates an array of strings with 2 elements
     ```

### 4. **Accessing Array Elements**
   - Elements in an array are accessed by their index, starting from `0`.
   - Example:
     ```java
     int firstNumber = numbers[0];    // Accesses the first element
     ```

### 5. **Modifying Array Elements**
   - You can change an element’s value by reassigning it.
   - Example:
     ```java
     numbers[0] = 10;   // Sets the first element to 10
     ```

### 6. **Traversing an Array**
   - **Using a `for` loop**:
     ```java
     for (int i = 0; i < numbers.length; i++) {
         System.out.println(numbers[i]);
     }
     ```
   - **Using an enhanced `for` loop** (for-each loop):
     ```java
     for (int num : numbers) {
         System.out.println(num);
     }
     ```

### 7. **Common Array Properties and Methods**
   - **Length**: The property `.length` gives the size of the array.
     ```java
     int arraySize = numbers.length;
     ```

---

This covers the essentials for declaring, creating, and traversing arrays in Java!