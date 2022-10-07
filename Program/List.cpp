#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator i;
    for ( i = l.begin(); i != l.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;
}
int main()
{
    list <int> l1;    //l1 is an empty list
    l1.push_back(2);
    l1.push_back(5);
    l1.push_back(8);
    l1.push_back(1);
    l1.push_back(-3);
    display(l1);

    // deleting an element
    // l1.pop_back();
    // display(l1);
    // l1.pop_front();
    // display(l1);
    // l1.remove(8);      //remove element 8. if more than one 8s are present ,it will remove them all.
    // display(l1);

    //sorting
    l1.sort();
    // display(l1);

    //reversing the list
    // l1.reverse();
    // display(l1);

    // merging two lists
    list<int> l2(4);
    list<int> :: iterator it=l2.begin();
    for (int i = 0; i < 4; i++)
    {
        cin>>*it;
        it++;
    }
    // display(l2);
    l2.sort();
    l1.merge(l2);
    display(l1);
    
    return 0;
}