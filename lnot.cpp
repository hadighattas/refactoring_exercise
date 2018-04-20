//
// Created by hadi_ on 4/21/2018.
//

#include "lnot.h"
#include "land.h"
#include "lor.h"

ostream & operator << (ostream & os, LNot & v) {
    os << "( !"; // print left parenthesis
    if (v.leftV) {
        os << *v.leftV;
    } else if (v.leftAnd) {
        os << *v.leftAnd;
    } else if (v.leftOr) {
        os << *v.leftOr;
    } else if (v.leftNot) {
        os << *v.leftNot;
    }
    os << " )";
    return os;
}

LNot::LNot(void * left, LType lType)
        :
        leftV(NULL),
        leftAnd(NULL),
        leftOr(NULL),
        leftNot(NULL)
{
    // set the operand pointer 
    if (lType == VarT) {
        leftV = (Var*)left;
    }else if (lType == LAndT) {
        leftAnd = (LAnd*)left;
    }else if (lType == LOrT) {
        leftOr = (LOr*)left;
    } else if (lType == LNotT){
        leftNot = (LNot *)left;
    }
}

TriValue LNot :: evaluate() {
    TriValue lval = uu;
    // call the operand evaluate
    if (leftV) {
        lval = leftV->evaluate();
    } else if (leftAnd) {
        lval = leftAnd->evaluate();
    } else if (leftOr) {
        lval = leftOr->evaluate();
    } else if (leftNot) {
        lval = leftNot->evaluate();
    }

    //apply truth table of logical not. 
    if (lval == tt) {
        return ff;
    }
    if (lval == ff) {
        return tt;
    }
    return uu;

}
