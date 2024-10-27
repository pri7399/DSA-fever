## A subtree of node in a tree is a tree consisting of node and all of its descendants.
### >  --> All nodes that can be reached by traversing downwards from that node.

### The subtree rooted at a node includes the entire structure beneath that node, preserving the original connections and hierarchy within the tree.

#### Example:
Consider this tree:

       A
      / \
     B   C
    / \
   D   E

> The subtree rooted at B would consist of the node B and all its descendants (D and E), forming the structure:

   B
  / \
 D   E

> The subtree rooted at A is the entire tree itself:

         A
        / \
       B   C
      / \
     D   E

### Each node can be the root of a subtree, which includes everything from that node downward in the original tree structure.

Here is a list of subtree-related problems on LeetCode:

| Problem Name                                      | Description                                                                             | Link                                                                                   |
|---------------------------------------------------|-----------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------|
| Subtree of Another Tree                           | Check if a binary tree is a subtree of another tree.                                    | [Link](https://leetcode.com/problems/subtree-of-another-tree/)                         |
| Find Duplicate Subtrees                           | Find all duplicate subtrees in a binary tree.                                           | [Link](https://leetcode.com/problems/find-duplicate-subtrees/)                         |
| Smallest Subtree with All the Deepest Nodes       | Find the smallest subtree containing all the deepest nodes in a binary tree.            | [Link](https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/)      |
| Count Nodes Equal to Average of Subtree           | Count nodes equal to the average value of their subtree.                                | [Link](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/)         |
| Most Frequent Subtree Sum                         | Find the most frequent subtree sum in a binary tree.                                    | [Link](https://leetcode.com/problems/most-frequent-subtree-sum/)                       |
| Maximum Average Subtree                           | Calculate the maximum average value among all subtrees.                                 | [Link](https://leetcode.com/problems/maximum-average-subtree/)                         |
| Count Univalue Subtrees                           | Count the number of univalue subtrees in a binary tree (where all nodes have the same value). | [Link](https://leetcode.com/problems/count-univalue-subtrees/)                     |
