//
// Created by hadi_ on 4/21/2018.
//
#include "base.h"

string nameOfValue(TriValue v) {
    static string nameOfValueTable[] = {"u", "t", "f"};
    return nameOfValueTable[v];
}

ostream &operator<<(ostream &os, Base &b) {
    b.serialize(os);
    return os;
}

ostream &operator<<(ostream &os, TriValue val) {
    os << nameOfValue(val);
    return os;
}