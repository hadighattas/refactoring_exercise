//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_LAND_H
#define EECE437_FORMULA_LAND_H


#include "var.h"

struct LOr;

struct LNot;

struct LAnd {
    Var *leftV;
    Var *rightV;
    LAnd *leftAnd;
    LAnd *rightAnd;
    LOr *leftOr;
    LOr *rightOr;
    LNot *leftNot;
    LNot *rightNot;

    LAnd(void *left, void *right, LType lType, LType rType);

    TriValue evaluate();
};

ostream &operator<<(ostream &os, LAnd &v);

#endif //EECE437_FORMULA_LAND_H
