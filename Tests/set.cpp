#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{


    unordered_set<string> set;

    set.insert("hello");

    for(auto s : set)
    {
        cout << s << endl;
    }


}