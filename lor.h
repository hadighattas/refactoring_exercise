//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_LOR_H
#define EECE437_FORMULA_LOR_H


#include "var.h"

struct LAnd;

struct LNot;

struct LOr {
    Var *leftV;
    Var *rightV;
    LAnd *leftAnd;
    LAnd *rightAnd;
    LOr *leftOr;
    LOr *rightOr;
    LNot *leftNot;
    LNot *rightNot;

    LOr(void *left, void *right, LType lType, LType rType);

    TriValue evaluate();
};

ostream &operator<<(ostream &os, LOr &v);

#endif //EECE437_FORMULA_LOR_H
