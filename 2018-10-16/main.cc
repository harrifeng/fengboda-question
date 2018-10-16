#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    int a, b;
    a = 2;                      // skip the enter process
    stringstream ss;

    do {
        b = a % 2;
        a = a / 2;
        ss << b;
        cout << b << " " << a << " " << ss.str() << endl;
    } while(a != 0);
    return 0;
}

// <===================OUTPUT===================>
// 0 1 0
// 1 0 01 -> 问题出在这里,ss带着上次的值
// 更改办法是把stringstream ss; 移动到do{}里面,这样每次都创建新的ss(作用域就是while循环)
