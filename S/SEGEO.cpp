// Even and Odd
// https://www.codechef.com/DSAPREP_08/problems/SEGEO
// Aman Kumar

/*struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *n) : val(x), next(n) {}
  };
  */
class Solution{
	public:
	Node* rearrange(Node* head)
	{
		Node *evenHead = new Node(-1);
		Node *oddHead = new Node(-1);
		
		Node *tempe = evenHead ;
		Node *tempo = oddHead ;
		
		if(head -> val % 2 == 0 )
		{
		    Node* newnode = new Node( head -> val ) ;
		    evenHead -> next = newnode ;
		    tempe = evenHead -> next ;
		    
		    Node *del = head ;
		    
		    head = head -> next ;
		    
		    delete del ;
		}
		else
		{
		    Node* newnode = new Node( head -> val ) ;
		    oddHead -> next = newnode ;
		    tempo = oddHead -> next ;
		    
		    Node *del = head ;
		    
		    head = head -> next ;
		    
		    delete del ;
		}
		
		while( head != NULL )
		{
		    Node* newnode = new Node( head -> val ) ; 
		    
		    if(head -> val % 2 == 0 )
    		{
    		    tempe -> next = newnode ;
    		    tempe = tempe -> next ;
    		}
    		else
    		{
    		    tempo -> next = newnode ;
    		    tempo = tempo -> next ;
    		}
    		
    		Node *del = head ;
    		head = head -> next ;
    		
    		delete del ;
		}
		
		tempe -> next = oddHead -> next ;
		delete oddHead ;
		
		tempo -> next = NULL ;
		
		tempe = evenHead -> next;
		delete evenHead ;
		
		return tempe ;
	}
};
