//
// Created by hadi_ on 4/21/2018.
//

#include "limplies.h"

LImplies::LImplies(void *left, void *right) {
    this->left = (Base *) left;
    this->right = (Base *) right;
}

TriValue LImplies::evaluate() {
    TriValue lval = u;
    TriValue rval = u;
    // call the left operand evaluate
    lval = left->evaluate();

    // call the right operand evaluate
    rval = right->evaluate();

    //apply truth table.
    if (lval == t || rval == f) {
        return f;
    }
    if (lval == u || rval == u) {
        return u;
    }
    // only case left is both are tt
    return t;
}

void LImplies::serialize(ostream &os) {
    os << "( "; // print left parenthesis
    os << *left;

    os << " -> ";
    os << *right;
    os << " )";
}