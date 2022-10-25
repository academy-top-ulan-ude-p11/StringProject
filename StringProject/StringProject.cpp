#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String s(5, '+');

    cout << s << "\n";

    String s2 = s;

    cout << s2 << "\n";

    String s3("Hello world");

    cout << s3 << "\n";
}
