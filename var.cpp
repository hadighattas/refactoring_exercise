//
// Created by hadi_ on 4/21/2018.
//
#include "var.h"

string nameOfValue(TriValue v) {
  static string nameOfValueTable[] = {"uu", "tt", "ff"};
  return nameOfValueTable[v];
}

ostream &operator<<(ostream &os, Var &v) {
  os << v.name;//<< "has value " << nameOfValue(v.value) << endl;
  return os;
}

ostream &operator<<(ostream &os, TriValue val) {
  os << nameOfValue(val);
  return os;
}

Var::Var(string name) : name(name), value(u) {
}

void Var::setValue(TriValue value) {
  this->value = value;
}

TriValue Var::evaluate() {
  return value;
}
