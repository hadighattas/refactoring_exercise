//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_LIMPLIES_H
#define REFACTORING_EXERCISE_LIMPLIES_H


#include "base.h"

struct LImplies : Base {

    LImplies(void *left, void *right);

    void serialize(ostream &os) override;

    TriValue evaluate() override;
};


#endif //REFACTORING_EXERCISE_LIMPLIES_H
