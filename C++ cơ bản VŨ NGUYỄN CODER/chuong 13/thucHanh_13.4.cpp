/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 13 ****************************
********************** vunguyencoder.com **************************************

[Đề bài] Hoàn thành source code cho trước sau để xây dựng một Struct quản lý person.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	Person(string name)
	{
		fullName = name;
		next = NULL;
	}
	string fullName;
	Person* next;
};

struct PersonList
{
	Person* head = NULL;

	void print_all()
	{
        // Noi dung can hoan thanh
        Person *p = head;
        while (p != NULL) {
            cout << p->fullName << "\n";
            p = p->next;
        }
	}

	void append(Person *person)
	{
        // Noi dung can hoan thanh
       if (head = NULL) {
		head = person;
		return;
	   }
	   Person *p = head;
	   while (p->next != NULL) {
		     p = p->next;
	   }
	   p->next = person;
	}
    
	int size() {
		int count = 0;
		while (head != NULL) {
			++count;
			head = head->next;
		}
		return count;
	}
	void insert(Person *person, int position)
	{
		int n = size();
        if (position < 1 || position > n + 1) {
			cout << "Out of range\n";
			return;
		}
		Person *temp = head;
	    for (int i = 1; i < position - 1; i++) {
			temp = temp->next;
		}
		Person *newPerson = (Person*)malloc(sizeof(Person));
		newPerson->next = temp->next;
		temp->next = newPerson;
	}
	

	void remove(int position)
	{
        // Noi dung can hoan thanh
	}
};

int main()
{
	// Create some person
	Person *vu = new Person("Nguyen Anh Vu");
	Person *eimi = new Person("Eimi Fukada");
	Person *ozawa = new Person("Maria Ozawa");
	Person *nobita = new Person("Nobita");
	Person *xuka = new Person("Xuka");
	PersonList *list = new PersonList;

	// Test 1:
	{
		cout << "Test 1 - Them 5 nguoi\n";
		list->append(vu);
		list->append(eimi);
		list->append(ozawa);
		list->append(nobita);
		list->append(xuka);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 2
	Person *hara = new Person("Yui Hara");
	{
		int pos = 2;
		cout << "Test 2 - Chen vao vi tri " << pos << "\n";
		list->insert(hara, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 3
	{
		int pos = 1;
		cout << "Test 3 - Xoa vi tri " << pos << "\n";
		list->remove(pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 4
	Person *doremon = new Person("Doremon");
	{
		int pos = 0;
		cout << "Test 4 - Chen vao vi tri " << pos << "\n";
		list->insert(doremon, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 5
	Person *dekhi = new Person("Dekhi");
	{
		int pos = 5;
		cout << "Test 5 - Chen vao vi tri " << pos << "\n";
		list->insert(dekhi, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 6
	{
		int pos1 = 0;
		int pos2 = 5;
		cout << "Test 6 - Xoa vi tri " << pos1 << " va " << pos2 << "\n";
		list->remove(pos1);
		list->remove(pos2);
		list->print_all();
		cout << "-------------------------\n";
	}

	return 0;
}





