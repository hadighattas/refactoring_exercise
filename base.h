//
// Created by hadi_ on 4/21/2018.
//

#ifndef REFACTORING_EXERCISE_BASE_H
#define REFACTORING_EXERCISE_BASE_H

#include <iostream>
#include <list>

using std::ostream;
using std::string;
using std::list;

enum TriValue {
    u, t, f,
};

static string nameOfValueTable[] = {"u", "t", "f"};

struct Var;

struct Base {
    Base *right;
    Base *left;

    virtual void serialize(ostream &os)=0;

    virtual TriValue evaluate()=0;

    virtual list<Var*> getVars();

    virtual void setValue(TriValue value) {};
};

ostream &operator<<(ostream &os, TriValue val);

ostream &operator<<(ostream &os, Base &b);

#endif //REFACTORING_EXERCISE_BASE_H
