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

struct Var : Base {
    string name;
    TriValue value;

    Var(string name);

    virtual void setValue(TriValue value);

    void serialize(ostream &os) override;

    TriValue evaluate() override;
};

#endif //EECE437_FORMULA_VAR_H
