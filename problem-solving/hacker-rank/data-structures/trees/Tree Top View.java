/* 
   HackerRank
   Problem Name: tree-top-view
*/

/*
   class Node 
       int data;
       Node left;
       Node right;
*/
void top_view(Node root)
{
    Stack<Node> leftTree = new Stack<>();
    
    Node current = root.left;
    while (current != null) {
        leftTree.push(current);
        current = current.left;
    }
    
    while (!leftTree.isEmpty()) {
        System.out.print(leftTree.pop().data + " ");
    }
    
    System.out.print(root.data + " ");
    
    current = root.right;
    while (current != null) {
        System.out.print(current.data + " ");
        current = current.right;
    }
}
