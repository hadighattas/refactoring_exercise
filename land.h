//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_LAND_H
#define EECE437_FORMULA_LAND_H


#include "base.h"

struct LOr;

struct LNot;

struct LAnd : Base {

    LAnd(void *left, void *right);

    void serialize(ostream &os) override;

    TriValue evaluate() override;
};

#endif //EECE437_FORMULA_LAND_H
