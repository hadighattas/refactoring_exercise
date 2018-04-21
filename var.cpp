//
// Created by hadi_ on 4/21/2018.
//
#include "var.h"

void Var::serialize(ostream &os) {
    os << name;//<< "has value " << nameOfValue(v.value) << endl;
}

Var::Var(string name) : name(name), value(u) {
}

void Var::setValue(TriValue value) {
    this->value = value;
}

TriValue Var::evaluate() {
    return value;
}

