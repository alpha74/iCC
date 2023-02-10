// Find the middle node value
// https://www.codechef.com/DSAPREP_08/problems/LLMID
// Aman Kumar

/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head)
{
    if( head == NULL || head -> next == NULL )
        return head -> val;
    
    if( head -> next -> next == NULL )
        return head -> next -> val;
        
    Node *fast = head ;
    Node *slow = head ;
    
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next ;
        fast = fast -> next ;
        
        if( fast != NULL )
            fast = fast -> next ;
    }
    
    return slow -> val;
}
