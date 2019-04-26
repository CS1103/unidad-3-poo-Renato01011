#include <iostream>
#include "SImulador.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

TEST_CASE("Calcular Potencial Electrico", "[PotencialElectrico]") {

    string Result = "";
    Simulador Sim1(10,10,5,4,2,2,0.000001,4,4,0.000001,6,6,0.000001,8,8,0.000001);
    Result = Sim1.CalcularPotencialElectrico();
    REQUIRE(Result == " 2.500000, 2.000000, 39558728914.374649 5.000000, 4.000000, 28995958971.829441 7.500000, 6.000000, 19093819357.567024 10.000000, 8.000000, 13396294341.701462 12.500000, 10.000000, 10142134191.621128");

}

/*
int main() {

    string Result = "";
    Simulador Sim1(cout, cin);
    Result = Sim1.CalcularPotencialElectrico();

    return 0;
}
*/