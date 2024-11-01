# 2D Array

### 1. **What is a 2D Array in Java?**
   - A 2D array in Java is an array of arrays, essentially forming a matrix.
   - Each element in the 2D array can be accessed using two indices: one for the row and one for the column.
   - A 2D array is useful for representing data in a tabular format.

### 2. **Declaring a 2D Array**
   - Syntax: `dataType[][] arrayName;`
   - Example:
     ```java
     int[][] matrix;
     ```

### 3. **Creating a 2D Array**
   - To create a 2D array, specify the number of rows and columns.
   - Syntax: `arrayName = new dataType[rows][columns];`
   - Alternatively, you can initialize a 2D array directly with values.

   - Examples:
     ```java
     int[][] matrix = new int[3][4];               // Creates a 2D array with 3 rows and 4 columns (default values 0)
     int[][] numbers = { {1, 2, 3}, {4, 5, 6} };   // Creates a 2x3 array with predefined values
     ```

### 4. **Accessing and Modifying Elements in a 2D Array**
   - Elements are accessed using the syntax `arrayName[row][column]`.
   - Example:
     ```java
     int firstElement = matrix[0][0];       // Accesses the element in the first row and first column
     matrix[1][2] = 10;                     // Sets the element in the second row and third column to 10
     ```

### 5. **Traversing a 2D Array**
   - **Using nested `for` loops**: This approach allows you to iterate over each row and column.
     ```java
     for (int i = 0; i < matrix.length; i++) {                 // Loop over rows
         for (int j = 0; j < matrix[i].length; j++) {          // Loop over columns
             System.out.println(matrix[i][j]);
         }
     }
     ```
   - **Using an enhanced `for` loop** (for-each loop): You can also use nested enhanced `for` loops for simpler code.
     ```java
     for (int[] row : matrix) {
         for (int element : row) {
             System.out.println(element);
         }
     }
     ```

### 6. **Common Properties of a 2D Array**
   - **Number of rows**: `arrayName.length` gives the number of rows in the 2D array.
   - **Number of columns in a specific row**: `arrayName[rowIndex].length` gives the number of columns in that row.
     ```java
     int rows = matrix.length;
     int columns = matrix[0].length;    // Assuming all rows have the same number of columns
     ```

---