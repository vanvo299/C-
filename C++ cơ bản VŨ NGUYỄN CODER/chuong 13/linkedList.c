// Chương 13: Linked list (Danh sách liên kết tự định nghĩa)
#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;

typedef struct LinkedList {
    Node *head;
    int length;
} LinkedList;

// ham in
void print(LinkedList * list) 
{
    Node *p = list->head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void pushback(LinkedList *list, int value)
{
    Node *node = malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;

    list->length++;

    if (list->head == NULL) {
        list->head = node;
        return;
    }

    Node *p = list->head;
    while(p->next != NULL) 
        p = p->next;
        p->next = node;
}

// ham truy cap den phan tu trogn list
Node *at(LinkedList *list, int index)
{
    int i = 0;
    for (Node *p = list->head; p != NULL; p = p->next) {
        if (i == index)
        return p;
        i++;
    }
    return NULL;
}

void insert(LinkedList *list, int index, int value)
{
    if (index < 0 || index > list->length - 1) {
        printf("Out of range\n");
        return;
    }

    Node* node = malloc(sizeof(node));
    node->data = value;

    if (index == 0) {
        node->next = list->head;
        list->head = node;
        return;
    }
}
int main()
{
    LinkedList list = {NULL, 0};

    pushback(&list, 5);
    pushback(&list, 10);
    pushback(&list, 15);

    // Node *node = at(&list, 3);
    // if (node != NULL) {
    //     printf("%d\n", node->data);
    // } else printf("Out of range");
    printf("%d\n", at(&list, 2)->data);
    // print(&list);
    return 0;
}
