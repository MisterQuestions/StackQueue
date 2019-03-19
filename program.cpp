#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack <string> x;


    cout << "Tamanio:" << x.size() << endl;
    x.push("alfa");
    x.push("beta");
    x.push("gamma");

    cout << " Tamanio:"<< x.size() <<endl;

    cout << " Cima :" << x.top()<<endl;
    x.pop();

    cout << "Tamanio :" <<x.size() <<endl;
    cout << "Sacando..." << endl;

    while(!x.empty())
    {
        cout << x.top() << endl;
        x.pop();
    }

    queue <string> fyl;
    fyl.push("alfa");
    fyl.push("beta");
    fyl.push("gamma");

    cout << "Tamanio :"<<fyl.size() << endl;
    cout << fyl.front() << endl;
    cout << fyl.back() << endl;


    return 0;
}
