#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream input;
    input.open("numbers.txt");

    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    cout << "Before the test " << endl;
    cout << score1 << endl << score2 << endl << score3 << endl;


    input >> score1;
    input >> score2;
    input >> score3;
    cout << "After the test " << endl;

    cout << score1 << endl << score2 << endl << score3 << endl;
    cout << "Done" << endl;
    return 0;
}

// <===================OUTPUT===================>
// Before the test
// 0
// 0
// 0
// After the test
// 99
// 97
// 89
// Done
