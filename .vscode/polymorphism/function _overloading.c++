#include <iostream>
using namespace std;

class Addition {
public:
    // Function to add two integers
    void add(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }

    // Function to add three integers
    void add(int a, int b, int c) {
        cout << "Sum: " << a + b + c << endl;
    }

    // Function to add an integer, a float, and a double
    void add(int a, float b, double c) {
        cout << "Sum: " << a + b + c << endl;
    }
};

int main() {
    Addition sum;
    sum.add(2, 4);            // Calls the add(int, int) method
    sum.add(1, 2, 3);         // Calls the add(int, int, int) method
    sum.add(1, 2.5f, 3.7);    // Calls the add(int, float, double) method
    return 0;
}
