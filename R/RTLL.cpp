// Reverse the linked list
// https://www.codechef.com/DSAPREP_08/problems/RTLL
// Aman Kumar

/*struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};*/

Node* reverseList(Node* head) 
{
    if( head == NULL || head -> next == NULL )
        return head ;
    
    Node *first, *second, *third ;
    
    first = NULL ;
    second = head ;
    third = head -> next ;
    
    
    while( second != NULL )
    {
        second -> next = first ;
        first = second ;
        
        second = third ;
        
        if( third != NULL )
            third = third -> next ;
    }
    
    return first ;
}
