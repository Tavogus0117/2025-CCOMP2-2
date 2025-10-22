#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    if(true)
    {
        int x=10;
        ptr = &x;

    }
    cout << *ptr << endl;

    return 0;

}
