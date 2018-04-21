//
// Created by hadi_ on 4/21/2018.
//

#include "lor.h"
#include "land.h"
#include "lnot.h"

ostream &operator<<(ostream &os, LOr &v) {
  os << "( "; // print left parenthesis
  if (v.leftV) {
    os << *v.leftV;
  } else if (v.leftAnd) {
    os << *v.leftAnd;
  } else if (v.leftOr) {
    os << *v.leftOr;
  } else if (v.leftNot) {
    os << *v.leftNot;
  }
  os << " | ";
  if (v.rightV) {
    os << *v.rightV;
  } else if (v.rightAnd) {
    os << *v.rightAnd;
  } else if (v.rightOr) {
    os << *v.rightOr;
  } else if (v.rightNot) {
    os << *v.rightNot;
  }
  os << " )";
  return os;
}

LOr::LOr(void *left, void *right, LType lType, LType rType)
        :
        leftV(NULL),
        rightV(NULL),
        leftAnd(NULL),
        rightAnd(NULL),
        leftOr(NULL),
        rightOr(NULL),
        leftNot(NULL),
        rightNot(NULL) {
  // set the left operand pointer
  if (lType == VarT) {
    leftV = (Var *) left;
  } else if (lType == LAndT) {
    leftAnd = (LAnd *) left;
  } else if (lType == LOrT) {
    leftOr = (LOr *) left;
  } else if (lType == LNotT) {
    leftNot = (LNot *) left;
  }
  // set the right operand pointer
  if (rType == VarT) {
    rightV = (Var *) right;
  } else if (rType == LAndT) {
    rightAnd = (LAnd *) right;
  } else if (rType == LOrT) {
    rightOr = (LOr *) right;
  } else if (rType == LNotT) {
    rightNot = (LNot *) right;
  }
}

TriValue LOr::evaluate() {
  TriValue lval = u;
  TriValue rval = u;
  // call the left operand evaluate
  if (leftV) {
    lval = leftV->evaluate();
  } else if (leftAnd) {
    lval = leftAnd->evaluate();
  } else if (leftOr) {
    lval = leftOr->evaluate();
  } else if (leftNot) {
    lval = leftNot->evaluate();
  }

  // call the right operand evaluate
  if (rightV) {
    rval = rightV->evaluate();
  } else if (rightAnd) {
    rval = rightAnd->evaluate();
  } else if (rightOr) {
    rval = rightOr->evaluate();
  } else if (rightNot) {
    rval = rightNot->evaluate();
  }
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
