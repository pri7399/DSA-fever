Level order traversal involves visiting nodes of a binary tree level by level, from left to right.

###  B  F   S 

BFS method is preferred for level order traversal as it aligns with level order traversal goal that is to  explores nodes level by level, from left to right. Although it is not typically suggested to implement it using Depth-First Search (DFS), but it can be done with DFS also by keeping track of levels explicitly

## BFS:
Breadth-First Search (BFS) explores nodes level by level, making it the natural fit for level order traversal. It uses a queue to manage the nodes.

# BFS Algorithm:

    Initialize a queue and enqueue the root node.
    While the queue is not empty:
        Dequeue a node from the front.
        Process the node (store its value).
        Enqueue its left and right children (if they exist).
    Continue this process until all nodes have been processed.

# Code:(LC 102)
   
    `class Solution {
     public:
        vector<vector<int>> ans;
        vector<vector<int>> levelOrder(TreeNode* root) {
            if(root==NULL) return(ans);
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                vector<int> temp;            
                int siz = q.size();
                for(int i=0;i<siz;i++){
                    TreeNode *parent = q.front();
                    temp.push_back(parent->val);
                    q.pop();
                    if(parent->left){q.push(parent->left);}
                    if(parent->right){q.push(parent->right);}
                }
                ans.push_back(temp);
            }
            return ans;      
        }
    };`
*Question mostly BFS se he solve honge. Keep in mind DFS only for exceptional cases.*
# Question based on BFS level order traversal:
Here is the consolidated list of **LeetCode problems based on level order traversal** in a table format:

| **No.** | **Problem Name**                                         | **Description**                                                                     | **Link**                                                                                      |
|--------|----------------------------------------------------------|-------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------|
| 1      | Binary Tree Level Order Traversal                        | Return the level order traversal of a binary tree.                                   | [Link](https://leetcode.com/problems/binary-tree-level-order-traversal/)                      |
| 2      | Binary Tree Zigzag Level Order Traversal                 | Return the zigzag level order traversal of a binary tree.                            | [Link](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)               |
| 3      | Binary Tree Right Side View                              | Return the nodes visible from the right side of the binary tree.                     | [Link](https://leetcode.com/problems/binary-tree-right-side-view/)                           |
| 4      | Average of Levels in Binary Tree                         | Return the average value of the nodes on each level.                                 | [Link](https://leetcode.com/problems/average-of-levels-in-binary-tree/)                      |
| 5      | Minimum Depth of Binary Tree                             | Find the minimum depth of the binary tree.                                           | [Link](https://leetcode.com/problems/minimum-depth-of-binary-tree/)                          |
| 6      | Populating Next Right Pointers in Each Node              | Populate each node's next pointer to point to its next right node in a perfect tree. | [Link](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)           |
| 7      | Binary Tree Vertical Order Traversal                     | Return the vertical order traversal of the binary tree.                              | [Link](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/)              |
| 8      | Cousins in Binary Tree                                   | Determine if two nodes are cousins (same depth but different parents).               | [Link](https://leetcode.com/problems/cousins-in-binary-tree/)                                |
| 9      | Binary Tree Level Order Traversal II                     | Return the level order traversal from bottom to top.                                 | [Link](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)                  |
| 10     | Maximum Depth of Binary Tree                             | Find the maximum depth of the binary tree.                                           | [Link](https://leetcode.com/problems/maximum-depth-of-binary-tree/)                          |
| 11     | N-ary Tree Level Order Traversal                         | Return the level order traversal of an N-ary tree.                                   | [Link](https://leetcode.com/problems/n-ary-tree-level-order-traversal/)                      |
| 12     | Symmetric Tree                                           | Check if a tree is symmetric around its center.                                      | [Link](https://leetcode.com/problems/symmetric-tree/)                                        |

This table provides a clear view of popular **level order traversal**-based problems on LeetCode along with their descriptions and links to each problem.



#### D  F   S 

### DFS:(Never use, agar interview mai speciafically pucha tavi use krna)
we can implement level order traversal using a Depth-First Search (DFS) approach by explicitly tracking the depth (or level) of the tree during the recursive traversal.

# CODE:
    `void dfs(TreeNode* node, int level, vector<vector<int>>& result) {
        if (!node) return;

    
       # If we're visiting a new level for the first time, expand the result vector.
        if (level == result.size()) {
            result.push_back({});
        }
  

        # Add the node's value to the corresponding level.
        result[level].push_back(node->value);

        # Recursively process the left and right children, increasing the level by 1.
        dfs(node->left, level + 1, result);
        dfs(node->right, level + 1, result);
    }

    vector<vector<int>> dfsLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        dfs(root, 0, result);  // Start DFS with the root at level 0.
        return result;
    }`

# EXPLANATION:
> Base Case: 
    If the current node is nullptr, return immediately (this happens when you try to access a non-existent left or right child).
Process Current Node:
    If the current depth equals the size of the result vector (i.e., you are visiting a new level for the first time), append a new empty vector for this level.
    Add the value of the current node to the corresponding level in the result vector.
Recursive Calls:
    Recursively call the DFS function for the left child of the current node, increasing the level by 1.
    Recursively call the DFS function for the right child of the current node, again increasing the level by 1.