/* 
   HackerRank
   Problem Name: tree-level-order-traversal
*/

/* 

class Node 
  int data;
  Node left;
  Node right;
*/
void LevelOrder(Node root)
{
    Queue<Node> nodes = new LinkedList<>();
    nodes.add(root);
    
    while (!nodes.isEmpty()) {
        Node node = nodes.poll();
        System.out.print(node.data + " ");
        
        if (node.left != null) {
            nodes.add(node.left);
        }
        
        if (node.right != null) {
            nodes.add(node.right);
        }
    }
}
