/* 
<<<<<<< HEAD
    HackerRank
    Problem Name: 30-binary-trees
=======
   HackerRank
   Problem Name: 30-binary-trees
>>>>>>> 2904f6a7d4320e2d833507c78c181ee74bc145ec
*/

import java.io.*;
import java.util.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{
    static void levelOrder(Node root){

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            Node node = q.poll();

            if (node.left != null) q.add(node.left);
            if (node.right != null) q.add(node.right);

            System.out.print(node.data + " ");
        }
    }
<<<<<<< HEAD

    public static Node insert(Node root,int data){
=======
    	public static Node insert(Node root,int data){
>>>>>>> 2904f6a7d4320e2d833507c78c181ee74bc145ec
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
<<<<<<< HEAD
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        Node root=null;
        while(T-->0){
            int data=sc.nextInt();
            root=insert(root,data);
        }
        levelOrder(root);
    }
}
=======
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}
>>>>>>> 2904f6a7d4320e2d833507c78c181ee74bc145ec
