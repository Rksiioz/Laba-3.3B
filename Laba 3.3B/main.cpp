#include "Pair.h"

bool isValidInput() {
    bool fail = cin.fail();
    cin.clear();
    if(fail) {
        cout << endl << "Input is not valid!" << endl;
    }
    return !fail;
}

int main() {
    int size;
    std::vector<Complex> v;

    std::cout << "Enter number of complex numbers: "; cin >> size;

    if(!isValidInput() || size < 1) {
        return 1;
    }

    v.reserve(size);

    for(int i = 0; i < size; i++) {
        cout << i + 1 << ": " << endl;
        v.push_back(Complex());
        if(!v.back().Read()) {
            return 1;
        }
        v.back().Display();
    }

    Complex addResult;
    addResult.setX(0);
    addResult.setY(0);

    for(int i = 0; i < size; i++) {
        addResult = addResult + v[i];
    }
    cout << endl << endl;
    cout << "Add Result: ";
    addResult.Display();

    auto mulResult = v[0];

    for(int i = 1; i < size; i++) {
        mulResult = mulResult * v[i];
    }

    cout << "Mul result: ";
    mulResult.Display();
    cout << endl;

    cout << boolalpha << (v[0] == v[1]) << endl;

    Pair g(2, 3);
    cout << boolalpha << (g == Pair(2, 3)) << endl;
    cout << boolalpha << (g != Pair(2, 3)) << endl;
    cout << boolalpha << (g > Pair(2, 3)) << endl;
    cout << boolalpha << (g < Pair(2, 3)) << endl;
    cout << boolalpha << (g >= Pair(2, 3)) << endl;
    cout << boolalpha << (g <= Pair(2, 3)) << endl;

    Complex a, b;
    cin >> a;
    b = a;
    cout << b;
}
