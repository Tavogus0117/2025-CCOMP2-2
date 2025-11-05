#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString ms("ciencia ");

    cout << ms.getSize() << endl;
    cout << ms.getData() << endl;
    ms.ToLower();
    cout << ms.getData() << endl;
    ms.ToUpper();
    cout << ms.getData() << endl;
    return 0;
}
