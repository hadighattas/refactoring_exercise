//
// Created by hadi_ on 4/21/2018.
//

#ifndef EECE437_FORMULA_LOR_H
#define EECE437_FORMULA_LOR_H


#include "base.h"

struct LAnd;

struct LNot;

struct LOr : Base {

    LOr(void *left, void *right);

    void serialize(ostream &os) override ;

    TriValue evaluate() override;
};

#endif //EECE437_FORMULA_LOR_H
