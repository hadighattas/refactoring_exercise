//
// Created by hadi_ on 4/21/2018.
//

#include "lnot.h"


LNot::LNot(void *left) {
    this->left = (Base *) left;
}

TriValue LNot::evaluate() {
    TriValue lval = u;
    // call the operand evaluate
    lval = left->evaluate();

    //apply truth table of logical not. 
    if (lval == t) {
        return f;
    }
    if (lval == f) {
        return t;
    }
    return u;

}

void LNot::serialize(ostream &os) {
    os << "( ! "; // print left parenthesis
    os << *left;
    os << " )";
}
