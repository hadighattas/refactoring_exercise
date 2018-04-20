//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_LNOT_H
#define REFACTORING_EXERCISE_LNOT_H


#include "var.h"

struct LAnd;
struct LOr;

struct LNot {
    Var *leftV;
    LAnd *leftAnd;
    LOr *leftOr;
    LNot *leftNot;

    LNot(void *left, LType lType);

    TriValue evaluate();
};

ostream &operator<<(ostream &os, LNot &f);


#endif //REFACTORING_EXERCISE_LNOT_H
