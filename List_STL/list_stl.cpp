///List is slow to traversal but, insertion and deletion is quick
///List is doubly linked list and forward list is singly linked list

#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it=g.begin(); it!=g.end(); ++it){
        cout<< " " << *it;
    }
    cout<< endl;
}

int main()
{
    list<int> list1, list2;

    for(int i=0; i<6; i++){
        list1.push_back(i*2);
        list2.push_front(i);
    }

    cout<< "Showing list1: ";
    showlist(list1);
    cout<< "showing list2: ";
    showlist(list2);

    cout<< "list1.front(): " << list1.front() << endl;
    cout<< "list2.back(): " << list2.back() << endl;

    cout<< "list1.pop_front(): ";
    list1.pop_front();
    showlist(list1);

    cout<< "list2.pop_back(): ";
    list2.pop_back();
    showlist(list2);

    cout<< "list1.reverse(): ";
    list1.reverse();
    showlist(list1);

    cout<< "list2.sort(): ";
    list2.sort();
    showlist(list2);

    return 0;
}
