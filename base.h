//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_BASE_H
#define REFACTORING_EXERCISE_BASE_H

#include <iostream>

using std::ostream;
using std::string;

enum TriValue {
    u, t, f,
};

string nameOfValue(TriValue v);

struct Base {
    Base *right;
    Base *left;

    virtual void serialize(ostream &os)=0;

    virtual TriValue evaluate()=0;
};

ostream &operator<<(ostream &os, TriValue val);

ostream &operator<<(ostream &os, Base &b);

#endif //REFACTORING_EXERCISE_BASE_H
