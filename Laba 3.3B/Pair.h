#include "Complex.h"

class Pair : Complex{
public:
    Pair(double x, double y) : Complex(x, y) {}
    friend bool operator==(const Pair& p1, const Pair& p2);
    friend bool operator!=(const Pair& p1, const Pair& p2);
    friend bool operator>(const Pair& p1, const Pair& p2);
    friend bool operator<(const Pair& p1, const Pair& p2);
    friend bool operator>=(const Pair& p1, const Pair& p2);
    friend bool operator<=(const Pair& p1, const Pair& p2);
};