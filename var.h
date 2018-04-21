//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_VAR_H
#define EECE437_FORMULA_VAR_H

#include <iostream>
#include <string>

#include "base.h"

using std::string;
using std::ostream;

string nameOfValue(TriValue v);

struct Var : Base {
    string name;
    TriValue value;

    Var(string name);

    void setValue(TriValue value);

    TriValue evaluate();
};

ostream &operator<<(ostream &os, Var &v);

ostream &operator<<(ostream &os, TriValue val);

#endif //EECE437_FORMULA_VAR_H
