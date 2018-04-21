//
// Created by hadi_ on 4/21/2018.
//

#include <iostream>
#include <set>
#include <utility>

using namespace std;

#include "var.h"
#include "land.h"
#include "lor.h"
#include "lnot.h"
#include "limplies.h"

int
main() {
    Var v1("x0");
    Var v2("x1");
    LAnd a1(&v1, &v2);
    LAnd a2(&a1, &v2);
    LOr o1(&a2, &v1);
    LNot n1(&o1);
    LImplies l1(&v1, &v2);
    cout << n1 << endl;

    v1.setValue(t);
    v2.setValue(f);
    cout << l1 << " evaluates to " << nameOfValueTable[l1.evaluate()] << endl;
    // the following works because I defined a streaming operator for TriValue in var.h and var.cpp
    cout << a1 << " " << a1.evaluate() << endl;
    cout << a2 << " " << a2.evaluate() << endl;
    cout << o1 << " " << o1.evaluate() << endl;
    TriValue val = n1.evaluate();
    cout << n1 << "evaluates to " << val << endl;

    v2.setValue(t);
    val = n1.evaluate();
    cout << "now " << n1 << "evaluates to " << nameOfValueTable[val] << endl;

    v1.setValue(f);
    val = n1.evaluate();
    cout << "now " << n1 << "evaluates to " << nameOfValueTable[val] << endl;
    // try also evaluating a1, a2 and o1.
    // try your own formulae
    return 0;
}

set<pair<Var *, TriValue >> *solve(Base *b) {
    // This is the 2-SAT problem
    //Use a function that checks if the expression is satisfiable
    //Then set a variable and check again
    //If sat choose the value you set else choose opposite and continue until getting complete solution
}