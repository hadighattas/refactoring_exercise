//
// Created by hadi_ on 4/21/2018.
//

#include "land.h"

LAnd::LAnd(void *left, void *right) {
    this->left = (Base *) left;
    this->right = (Base *) right;
}

TriValue LAnd::evaluate() {
    TriValue lval = u;
    TriValue rval = u;
    // call the left operand evaluate
    lval = left->evaluate();

    // call the right operand evaluate
    rval = right->evaluate();

    //apply truth table.
    if (lval == f || rval == f) {
        return f;
    }
    if (lval == u || rval == u) {
        return u;
    }
    // only case left is both are tt
    return t;
}

void LAnd::serialize(ostream &os) {
    os << "( "; // print left parenthesis
    os << *left;

    os << " & ";
    os << *right;
    os << " )";
}
