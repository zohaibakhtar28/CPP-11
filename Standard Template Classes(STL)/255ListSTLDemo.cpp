#include<iostream>
#include<list>
using namespace std;
//Vector STL Class.
int main()

{
    list<int> v = {2,4,6,8};
    v.push_back(20);
    v.push_back(30);
    //Iterator : For Each
    cout<<"Using For Each Loop"; 
    for(int x : v)
    {
        cout<<x<<endl;
    }
    v.pop_back(); //deletes last value.
    //Iterator 2 : Iterator Class

    list<int>::iterator itr;
    cout<<"Using Iterator\n";
    for(itr=v.begin(); itr!= v.end(); itr++)
    {
        cout<<*itr<<endl;
    }

return 0;
}