#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{

    vector<int> v1;
    int len_v1;

    cout << "Enter list 1 and number" << endl;
    cin >> len_v1;

    for (int i = 0; i < len_v1; i++) {
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }

    // 打印
    cout << "v1 list as following" << endl;
    std::copy(v1.begin(), v1.end(),
              std::ostream_iterator<int>(std::cout, " "));
    cout << endl;
    return 0;
}

// <===================OUTPUT===================>
// $ g++ -o main.out main.cc && ./main.out
// Enter list 1 and number
// 3
// 1 3 5
// v1 list as following
// 1 3 5
