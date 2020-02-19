#include "str.h"

int main()
{
    cout << "TEST PROGRAM !!" << endl;

    str s1("Hello");

    cout << "s1 = ";
    s1.print();

    str s2;
    s2 = s1;
    cout << "s2(=s1) = ";
    s2.print();

    str s3;
    cin >> s3;
    cout << s3;

    str s4(" World"); 
    cout << "S4 = ";
    s4.print();
    str s5;
    s5 = s2 + s4;
    cout << "s5(s2 + s4) = ";
    s5.print();

    return 0;
}
