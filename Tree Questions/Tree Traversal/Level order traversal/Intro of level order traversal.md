Level order traversal involves visiting nodes of a binary tree level by level, from left to right.

## B  F   S 

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

Code:(LC 102)
   
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

## B  F   S 

# DFS:(Never use, agar interview mai speciafically pucha tavi use krna)
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