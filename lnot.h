//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_LNOT_H
#define REFACTORING_EXERCISE_LNOT_H


#include "base.h"

struct LNot : Base {
    LNot(void *left);

    void serialize(ostream &os) override ;

    TriValue evaluate() override;
};

#endif //REFACTORING_EXERCISE_LNOT_H
