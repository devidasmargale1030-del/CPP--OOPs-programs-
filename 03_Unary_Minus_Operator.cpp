// Program 3: Unary Minus Operator Overloading

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    explicit Number(int givenValue) : value(givenValue) {}

    Number operator-() const {
        return Number(-value);
    }

    void display() const {
        cout << value << '\n';
    }
};

int main() {
    Number first(25);
    Number second = -first;

    cout << "Original value: ";
    first.display();

    cout << "Negated value: ";
    second.display();

    return 0;
}

/*
Expected Output:
Original value: 25
Negated value: -25
*/
