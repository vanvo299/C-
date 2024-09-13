#include <iostream>
using namespace std;

struct Number{
    int data;
    Number *next;
};

int main()
{
    Number Node1 = {10, NULL};
    Number Node2 = {15, NULL};
    Number Node3 = {20, NULL};
    Number *Node4 = new Number({25, NULL});
    Number *Node5 = new Number({30, NULL});
    Number *Node6 = new Number({35, NULL});
    Number *Node7 = new Number({40, NULL});

    Node1.next = &Node2;
    Node2.next = &Node3;
    Node3.next = Node4;
    Node4->next = Node5;
    Node5->next = Node6;
    Node6->next = Node7;

    Number *head = &Node1;
    
    // Cách duyệt thứ nhất
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";

    // for (Number *p = head; p != NULL; p = p->next) {
    //     cout << p->data << " ";
    // }
    return 0;
}