//
// Created by hadi_ on 4/21/2018.
//

#include "lor.h"

LOr::LOr(void *left, void *right) {
    this->left = (Base *) left;
    this->right = (Base *) right;
}

TriValue LOr::evaluate() {
    TriValue lval = u;
    TriValue rval = u;
    // call the left operand evaluate
    lval = left->evaluate();

    // call the right operand evaluate
    rval = right->evaluate();

    //apply truth table of logical or.
    if (lval == t || rval == t) {
        return t;
    }
    if (lval == u || rval == u) {
        return u;
    }
    // only case left is both are ff
    return f;
}

void LOr::serialize(ostream &os) {
    os << "( "; // print left parenthesis
    os << *left;

    os << " | ";
    os << *right;
    os << " )";
}

