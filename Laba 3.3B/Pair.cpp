#include "Pair.h"

bool operator==(const Pair& p1, const Pair& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

bool operator!=(const Pair& p1, const Pair& p2) {
    return !(p1.x == p2.x && p1.y == p2.y);
}

bool operator>(const Pair& p1, const Pair& p2) {
    if((p1.x > p2.x) || (p1.x == p2.x && p1.y > p2.y)){
        return true;
    }

    return false;
}

bool operator<(const Pair& p1, const Pair& p2) {
    if((p1.x < p2.x) || (p1.x == p2.x && p1.y < p2.y)){
        return true;
    }

    return false;
}

bool operator>=(const Pair& p1, const Pair& p2) {
    return p1.x >= p2.x || p1.y >= p2.y;
}

bool operator<=(const Pair& p1, const Pair& p2) {
    return p1.x <= p2.x || p1.y <= p2.y;
}