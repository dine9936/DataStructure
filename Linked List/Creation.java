class Node{
    int data;
    Node next;

    Node(int n){
        data = n;
        next = null;
    }
}

class Creation{
    public static void main(String[] args) {

        System.out.println("Hello2");

        // Node head = new Node(10);
        // Node temp1 = new Node(20);
        // Node temp2 = new Node(30);

        // head.next = temp1;
        // temp1.next = temp2;

        // System.out.println("Linked List created");

        // System.out.println("This is iterative List=> ");
        // printList(head);

        // System.out.println("This is recursive List=> ");
        // iterativePrintList(head);


    }

    public static void main(String args) {
        System.out.println("Hello1");
    }

    public static void printList(Node head){
        
            Node temp = head;
    
            while(temp != null){
                System.out.println(temp.data);
                temp = temp.next;
            }
       
    }

    public static void iterativePrintList(Node head){
         if(head == null)
           return;

        System.out.println(head.data);
        iterativePrintList(head.next);
    }
}