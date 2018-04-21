//
// Created by hadi_ on 4/21/2018.
//
#include "base.h"

ostream &operator<<(ostream &os, Base &b) {
    b.serialize(os);
    return os;
}

ostream &operator<<(ostream &os, TriValue val) {
    os << nameOfValueTable[val];
    return os;
}

list<Var *> Base::getVars() {
    list<Var *> listReturn;
    list<Var *> leftList = left->getVars();
    list<Var *> rightList = right->getVars();

    for (auto const &i : rightList) {
        listReturn.push_back(i);
    }

    for (auto const &i : leftList) {
        listReturn.push_back(i);
    }

    listReturn.sort();
    listReturn.unique();

    return listReturn;
}