#include <iostream>
#include <string>
using namespace std;

int reverse(int num)
{
    int renum = 0;
    cout << num << endl;
    while(num > 0)
    {
        cout << renum << " " << num << endl;
        renum = (10 * renum) + (num % 10);
        num = num / 10;
    }
    return renum;
}
int main()
{
    int b,d;
    cout << "Enter an integer!" << endl;
    cin >> b;
    d = reverse(b);
    if (b == d)
    {
        cout << "The integer is a palindrome" << endl;

    }
    else
    {
        cout << "The integer is not a palindrome" << endl;
    }
    return 0;
}

// <===================OUTPUT===================>
// $ g++ -o main main.cc && ./main
// Enter an integer!
// 12321
// 12321
// 0 12321
// 1 1232
// 12 123
// 123 12
// 1232 1
// The integer is a palindrome
