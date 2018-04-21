#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

#include "../var.h"
#include "../land.h"
#include "../lor.h"
#include "../lnot.h"

Var v1("x0");
Var v2("x1");
LAnd a1(&v1, &v2);
LOr o1(&v1, &v2);
LNot n1(&v1);

TEST_CASE("evaluateAnd") {
    v1.setValue(t);
    v2.setValue(t);
    REQUIRE(a1.evaluate() == t);
    v1.setValue(t);
    v2.setValue(f);
    REQUIRE(a1.evaluate() == f);
    v1.setValue(f);
    v2.setValue(t);
    REQUIRE(a1.evaluate() == f);
    v1.setValue(f);
    v2.setValue(f);
    REQUIRE(a1.evaluate() == f);
}

TEST_CASE("evaluateOr") {
    v1.setValue(t);
    v2.setValue(t);
    REQUIRE(o1.evaluate() == t);
    v1.setValue(t);
    v2.setValue(f);
    REQUIRE(o1.evaluate() == t);
    v1.setValue(f);
    v2.setValue(t);
    REQUIRE(o1.evaluate() == t);
    v1.setValue(f);
    v2.setValue(f);
    REQUIRE(o1.evaluate() == f);
}

TEST_CASE("evaluateNot") {
    v1.setValue(t);
    REQUIRE(n1.evaluate() == f);
    v1.setValue(f);
    REQUIRE(n1.evaluate() == t);
}