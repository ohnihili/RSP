#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int,int> map;

    // add value 10 at key 0, 20 at key 5, 30 at key 2, 40 at key 12 then change val at key 0 to 30
    map[0] = 10;
    map[5] = 20;
    map[2] = 30;
    map[12] = 40;
    map[0] = 30;

    // find if key == i is in the map, if found: print "found" and the value at key == i, if not found: print "not found"

    for (int i=0;i<map.size();i++)
    {
        if (map.find(i) != map.end())
        {
            cout << i << " was found" << endl;
            cout <<"Val at " << i << ": " << map.find(i)->second << endl;
        }
        else    
            cout << i << "was not found" << endl;
    }

    // print key and value
    for(auto i : map)
    {
        cout << "Key: " << i.first << " Value: " << i.second << endl;
    }

}