#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> stack;

    stack.push(1);
    stack.push(7);
    stack.push(6);
    stack.push(3);
    stack.push(2);

    cout << stack.top() << endl;

    stack.pop();

    cout << stack.top() << endl;

    stack.pop();

    cout << stack.top() << endl;

    
}