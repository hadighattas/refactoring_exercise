#pragma once
#include <var.h>
class LOr; 
class LNot; 

struct LAnd {
  Var * leftV; 
  Var * rightV; 
  LAnd * leftAnd; 
  LAnd * rightAnd; 
  LOr * leftOr;
  LOr * rightOr; 
  LNot * leftNot; 
  LNot * rightNot; 
  LAnd(void * left, void * right, LType lType, LType rType); 
  TriValue evaluate(); 
}; 

ostream & operator << (ostream & os, LAnd & v); 
