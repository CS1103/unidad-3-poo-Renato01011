//
// Created by ruben on 4/26/2019.
//

#ifndef POO_SIMULADOR_H
#define POO_SIMULADOR_H

#include "Carga.h"
#include <fstream>
#include <cmath>
using namespace std;

class Simulador {
    double h;
    double w;
    double n;
    double m;
    const double k = 8.99*pow(10,9);
    Carga c1;
    Carga c2;
    Carga c3;
    Carga c4;
public:
    Simulador(ostream &out, istream &in);
    Simulador(  double _h,
                double _w,
                double _n,
                double _m,
                double x_pos1,
                double y_pos1,
                double q1,
                double x_pos2,
                double y_pos2,
                double q2,
                double x_pos3,
                double y_pos3,
                double q3,
                double x_pos4,
                double y_pos4,
                double q4
                );
    string CalcularPotencialElectrico();
    string CalcularV(double X, double Y);

};


#endif //POO_SIMULADOR_H
