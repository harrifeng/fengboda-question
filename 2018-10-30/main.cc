#include <iostream>
#include <string>
using namespace std;



int main()
{
    int array[6] = {11, 22, 33, 44, 55}; // 注意初始化了6个,这里只写了五个,剩下的全部为零

    for (int i = 0; i < 6; i++ ) {
        cout << array[i] << endl;
    }

    return 0;
}

// <===================OUTPUT===================>
// 11
// 22
// 33
// 44
// 55
// 0
