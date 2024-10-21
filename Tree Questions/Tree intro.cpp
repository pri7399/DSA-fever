/*
A tree is a hierarchical data structure consisting of nodes, where each node has a value and may have child nodes. 
The structure starts from a single node called the root, and each node (except the root) has a single parent.
Nodes without children are called leaf nodes.

Types of Trees(haame mostly yahe padna hai)

    -->>Binary Tree: Each node has at most two children. A special form of binary tree is the binary search tree (BST).
    -->>Binary Search Tree (BST): A binary tree where the left child of a node has a smaller value, and the right child has a larger value.
    -->>AVL Tree: A self-balancing binary search tree.
    -->>Red-Black Tree: A balanced binary search tree with a color property to maintain balance.
    -->>B-Tree: A self-balancing tree data structure used in databases and file systems.
    -->>Trie (Prefix Tree): A tree used to store strings where each node represents a character.

Key Problems Solved by Trees

    -->Binary Search Trees (BST) for fast search, insertion, and deletion.
    -->Trie for efficient string matching and prefix-based search.
    -->Heap (Min/Max Binary Heap) for efficiently finding the minimum or maximum element.
    -->Segment/Fenwick Trees for efficient range queries.
    -->Game Trees for decision-making in AI algorithms.
    -->Expression Trees for parsing and evaluating expressions in compilers.

Trees are an essential data structure for solving problems involving hierarchical data, efficient searching, sorting, and 
dynamic data insertion and deletion. Depending on the problem at hand, different tree structures like binary trees, tries, 
heaps, and self-balancing trees are used to optimize performance.


When to Choose a Tree:

    -->You need efficient insertion, deletion, and lookup operations, particularly in a sorted or hierarchical structure.
    -->Your data is structured in a hierarchical or nested manner.
    -->You require dynamic resizing without frequent reallocation.
    -->You need to perform efficient range queries or interval searching.

How to decide between tree, linked list, and vector:
    Tree: Ideal for dynamic, hierarchical, or sorted data where fast searches and flexible insertions/deletions are crucial.
    Linked List: Useful for sequential data access with frequent insertions/deletions but with less need for fast searching.
    Vector/Array: Best for data with a fixed size or where random access is needed, but less efficient for insertions, deletions, and hierarchical structures.
    
*/