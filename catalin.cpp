#include <iostream>
#include "catalin.h"

using namespace std;

// main funtion which tests the catalinOf function
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "Catalin number " << i << ": " << catalinOf(i) << endl;
    }
    return 0;
}