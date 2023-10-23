/*  
    Time Complexity : O(N)
    Space Complexity : O(N)
    
    Where N is the number of nodes in the Binary Tree.
*/
 /*
     * Leaf And Path
     * You are given a binary tree of 'N' nodes.
     * Your task is to check if there exists any root to leaf path with the same representation as the leaf traversal of the tree.
     * Both, the root to leaf path and the leaf traversal, are obtained by concatenating the data of the nodes in the path.
 */

    // Link: https://www.codingninjas.com/studio/problems/leaf-andpath_764386

#include <string>

template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

// Function to find the leaf traversal of the binary tree.
void findLeafTraversal(TreeNode < int > * root, string & leafTraversal) {
    if (root == NULL) {
        return;
    }

    // Add the value of the node to the leaf traversal if it is a leaf node.
    if (root -> left == NULL && root -> right == NULL) {
        leafTraversal.append(to_string(root -> val));
    }

    findLeafTraversal(root -> left, leafTraversal);
    findLeafTraversal(root -> right, leafTraversal);
}

// Function to check if a path with the same representation as leaf traversal exists or not.
bool doesReqdPathExistHelper(TreeNode < int > * root, string & leafTraversal, int idx) {
    if (root == NULL) {
        return false;
    }

    string valString = to_string(root -> val);
    int valLen = valString.size();

    // Check if path does not satisfy the requirement, return false.
    if (idx + valLen > leafTraversal.size()) {
        return false;
    }
    for (int i = 0; i < valLen; i++) {
        if (valString[i] != leafTraversal[idx + i]) {
            return false;
        }
    }

    if (idx + valLen == leafTraversal.size()) {
        if (root -> left == NULL && root -> right == NULL) {
            return true;
        } 
        else {
            return false;
        }
    }

    return doesReqdPathExistHelper(root -> left, leafTraversal, idx + valLen) || doesReqdPathExistHelper(root -> right, leafTraversal, idx + valLen);
}

bool doesReqdPathExist(TreeNode < int > * root) {
    if (root == NULL) {
        return true;
    }
    string leafTraversal = "";
    findLeafTraversal(root, leafTraversal);

    return doesReqdPathExistHelper(root, leafTraversal, 0);
}