// Program 6: Constructor and Destructor
// Scenario: Show automatic object initialization and cleanup.

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo d;

    return 0;
}

/*
Expected Output:
Constructor called
Destructor called
*/
