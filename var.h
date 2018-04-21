//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_VAR_H
#define EECE437_FORMULA_VAR_H

#include "base.h"

struct Var : Base {
    string name;
    TriValue value;

    Var(string name);

    virtual void setValue(TriValue value) override;

    void serialize(ostream &os) override;

    TriValue evaluate() override;

    list<Var*> getVars() override;
};

#endif //EECE437_FORMULA_VAR_H
