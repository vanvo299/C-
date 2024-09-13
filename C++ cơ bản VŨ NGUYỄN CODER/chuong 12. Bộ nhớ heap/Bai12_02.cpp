
/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 12.02**************************
********************** vunguyencoder.com **************************************



*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

struct Person
{
	std::string ho_ten;
	int tuoi;
	
	Person(): ho_ten(""), tuoi(-1) {}
	Person(string ht, int t) : ho_ten(ht), tuoi(t) {}
};

struct PersonList 
{
	Person *person_list[MAX];
	int count;
	
	PersonList()
	{
	    count = 0;
	}
	
    void show_all()
    {
        // Noi dung can hoan thanh 
        for (int i = 0; i < count; i++) {
            cout << "\t" << person_list[i]->ho_ten << " - "  << person_list[i]->tuoi << " tuoi." << endl;
        }
    }
    
    void append(Person *new_person)
    {
        // Noi dung can hoan thanh 
        person_list[count++] = new_person;
    }
    
    void remove(int i)
    {
        // Noi dung can hoan thanh 
        for (int j = i; j < count - 1; j++) {
            person_list[j] = person_list[j + 1];
        }
        count--;
    }
    
    string get_oldest_person()
    {
        // Noi dung can hoan thanh 
        int max = 0, pos = -1;
        for (int i = 0; i < count; i++) {
            if (person_list[i]->tuoi > max) {
                max = person_list[i]->tuoi;
                pos = i;
            } 
        }
        return person_list[pos]->ho_ten;
    }
};

int main()
{
    PersonList *list = new PersonList;
    list->append(new Person("Anh Vu", 30));
    list->append(new Person("Eimi Fukada", 25));
    list->append(new Person("Ngoc Trinh", 27));
    list->append(new Person("Khac Tiep", 29));
    
	{
	    cout << "Test 1 - Print all person:\n";
	    list->show_all();
	}
	
	{
	    cout << "Test 2 - Append Tokuda:\n";
        list->append(new Person("Tokuda", 60));
	    list->show_all();
	}
	
	{
	    cout << "Test 3 - Remove Ngoc Trinh:\n";
	    list->remove(2);
	    list->show_all();
	}
	
	{
	    cout << "Test 4 - Oldest person: ";
	    cout << list->get_oldest_person() << "\n";
	}
}






