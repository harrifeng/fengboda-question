#include <iostream>

using namespace std;

class People
{
public:
    People(){
        age = 23;
    }
    People(int ageOuter) {
        age = ageOuter;
    }
    void display() {
        cout << "People's age is [" << age << "]" << endl;
    }
private:
    int age;
};


int main(int argc, char *argv[])
{

    People p;
    p.display();

    People p2(100);
    p2.display();

    return 0;
}

// <===================OUTPUT===================>
// People's age is [23]
// People's age is [100]
