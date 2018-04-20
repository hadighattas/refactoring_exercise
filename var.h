//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_VAR_H
#define EECE437_FORMULA_VAR_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;

enum TriValue {
    uu, tt, ff,
};
enum LType {
    VarT, LAndT, LOrT, LNotT
};

string nameOfValue(TriValue v);

struct Var {
    string name;
    TriValue value;

    Var(string n);

    void setValue(TriValue v);

    TriValue evaluate();
};

ostream &operator<<(ostream &os, Var &v);

ostream &operator<<(ostream &os, TriValue val);

#endif //EECE437_FORMULA_VAR_H
