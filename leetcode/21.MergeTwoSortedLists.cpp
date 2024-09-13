#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    ListNode(int x) : value(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;

    ListNode* current1 = list1;
    while (current1->next != nullptr) {
        current1 = current1->next;
    }
    current1->next = list2;

    // Sắp xếp các giá trị của các nút trong danh sách liên kết
    ListNode* i, *j;
    for (i = list1; i != nullptr; i = i->next) {
        ListNode* min = i;
        for (j = i->next; j != nullptr; j = j->next) {
            if (j->value < min->value) {
                min = j;
            }
        }
        // Hoán đổi giá trị value của hai nút min và i
        int temp = i->value;
        i->value = min->value;
        min->value = temp;
    }

    return list1;
}

void display(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(7);

    cout << "List 1: ";
    display(list1);
    cout << "List 2: ";
    display(list2);

    ListNode* result = mergeTwoLists(list1, list2);

    cout << "Merged and sorted list: ";
    display(result);

    return 0;
}
