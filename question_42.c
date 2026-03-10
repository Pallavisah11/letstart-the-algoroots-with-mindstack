#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* mergeLists(struct Node* l1, struct Node* l2)
{
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->data <= l2->data)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if(l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
}
void printList(struct Node* head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main()
{
    struct Node *list1, *list2;
    list1 = (struct Node*)malloc(sizeof(struct Node));
    list1->data = 1;
    list1->next = (struct Node*)malloc(sizeof(struct Node));
    list1->next->data = 2;
    list1->next->next = (struct Node*)malloc(sizeof(struct Node));
    list1->next->next->data = 4;
    list1->next->next->next = NULL;

    list2 = (struct Node*)malloc(sizeof(struct Node));
    list2->data = 1;
    list2->next = (struct Node*)malloc(sizeof(struct Node));
    list2->next->data = 3;
    list2->next->next = (struct Node*)malloc(sizeof(struct Node));
    list2->next->next->data = 4;
    list2->next->next->next = NULL;
    struct Node* merged = mergeLists(list1, list2);
    printf("Merged List: ");
    printList(merged);
    return 0;
}