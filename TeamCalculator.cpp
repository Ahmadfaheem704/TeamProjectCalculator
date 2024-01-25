#include <iostream>
using namespace std;
class Calculator {
private:
    double result;
    bool error;

public:
    Calculator() : {}

    double getResult() const {
        return result;
    }
    bool hasError() const {
        return error;
    }

    // Operator overloading for addition
    Calculator operator+() const {
    }

    // Operator overloading for multiplication
    Calculator operator*() const {

    }

    // Operator overloading for subtraction
    Calculator operator-() const {
        
    }

    // Operator overloading for division
    Calculator operator/() const {
    }

        void setResult(double value) {
        result = value;
    }
};

int main() {
    // Create instances of the Calculator class
    Calculator num1, num2;

    // Input values using setter methods
    cout << "Enter two numbers: ";
    double input1, input2;
    cin >> input1 >> input2;

    num1.setResult(input1);
    num2.setResult(input2);


    return 0;
}
