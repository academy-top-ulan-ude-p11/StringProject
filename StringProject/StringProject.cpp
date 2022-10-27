#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    /*String s1(5, '+');
    cout << s1 << "\n";

    String s2 = s1;
    cout << s2 << "\n";

    String s3("Hello world");
    cout << s3 << "\n";

    String s4;
    s4 = s3;
    cout << s4 << "\n";
    s4 = "Hello people";
    cout << s4 << "\n";

    s2 = s3 + " Hello people";
    cout << s2 << "\n";*/

    String s10("abcdef");
    String s11("bcd");

    //cout << s10.Compare(s11) << "\n";

    cout << s10.Contains(s11);

    //cout << (s10 > s11) << "\n";

    
}
