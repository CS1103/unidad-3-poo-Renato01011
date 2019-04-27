#include <iostream>
#include "SImulador.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

/*
int main() {

    string Result = "";
    Simulador Sim1(cout, cin);
    Result = Sim1.CalcularPotencialElectrico();

    return 0;
}
*/

SCENARIO("Potencial Electrico") {
    GIVEN("Calcular Potencial Electrico") {
        WHEN("Cuatro cargas en posiciones 2,2 4,4 6,6 8,8 de 1 nanoCoulumb cada una") {
            string Result = "";
            Simulador Sim1(10,10,5,4,2,2,0.000001,4,4,0.000001,6,6,0.000001,8,8,0.000001);
            Result = Sim1.CalcularPotencialElectrico();
            THEN("Los potenciales son 3.95587e+010, 2.8996e+010, 1.90938e+010, 1.33963e+010, 1.01421e+010") {
                REQUIRE(Result == " 2.500000, 2.000000, 39558728914.374649 5.000000, 4.000000, 28995958971.829445 7.500000, 6.000000, 19093819357.567024 10.000000, 8.000000, 13396294341.701464 12.500000, 10.000000, 10142134191.621128");
            }
        }
    }
}