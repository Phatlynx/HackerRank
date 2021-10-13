SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp = head;
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    
    if (head == nullptr)
        head = node;
    else
    {
        while(temp->next !=nullptr)
            temp = temp->next;
        temp->next = node;
    }

    return head;



}