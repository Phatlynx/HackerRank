

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode *head)
{

    while (head != nullptr)
    {
        std::cout << head->data << std::endl;
        head = head->next;
    }
}
