/* 
   HackerRank
   Problem Name: tree-height-of-a-binary-tree
*/

/*
class Node 
    int data;
    Node left;
    Node right;
*/
int height(Node root)
{
    if (root == null) {
        return -1;
    }

    int leftHeight = height(root.left) + 1;
    int rightHeight = height(root.right) + 1;
    
    return leftHeight > rightHeight ? leftHeight : rightHeight;

}
