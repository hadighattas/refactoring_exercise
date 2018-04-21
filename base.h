//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_BASE_H
#define REFACTORING_EXERCISE_BASE_H

enum TriValue {
    u, t, f,
};
enum LType {
    VarT, LAndT, LOrT, LNotT
};

struct Base {
    virtual TriValue evaluate()=0;
    virtual void setValue(TriValue value)=0;
    Base *right;
    Base *left;

};


#endif //REFACTORING_EXERCISE_BASE_H
