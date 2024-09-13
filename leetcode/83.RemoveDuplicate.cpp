// 83. Remove duplicates from Sorted List
// Cho một danh sách liên kết đã được sắp xếp tăng dần, hãy xóa tất cả các nút có số trùng lặp,
// mỗi số chỉ được xuất hiện một lần. Trả về danh sách liên kết cũng được sắp xếp 
#include <iostream> 
#include <cstdlib>
using namespace std;
struct ListNode {
    int value;
    ListNode *next;
};

typedef struct ListNode ListNode;

ListNode* deleteDuplicates(ListNode* head)
{
    ListNode * current = head;
    while(current != nullptr) {
        ListNode* tmp = current;
        while (tmp->next != nullptr) {
            if (tmp->next->value == current->value) {
                ListNode* del = tmp->next;
                tmp->next = del->next;
                delete del;
            } else tmp = tmp->next;
        }
        current = current->next;
    }
    return head;
}

void display(ListNode* head) 
{
    ListNode* current = head;
    while(current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
int main()
{
    ListNode* head = new ListNode{1, nullptr};
    head->next = new ListNode{1, nullptr};
    head->next->next = new ListNode{2, nullptr};
    head->next->next->next = new ListNode{3, nullptr};
    head->next->next->next->next = new ListNode{3, nullptr};

    cout << "Danh sach lien ket ban dau: ";
    display(head);

    /// Xóa các nút trùng lặp
    ListNode* result = deleteDuplicates(head);

    cout << "Danh sach lien ket sau khi xoa cac nut trung lap: ";
    display(result);

    // Giải phóng bộ nhớ của danh sách liên kết sau khi sử dụng
    while (result != nullptr) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }
    return 0;
}