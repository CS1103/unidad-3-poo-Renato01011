//
// Created by ruben on 4/26/2019.
//

#ifndef POO_CARGA_H
#define POO_CARGA_H

#include <math.h>

class Carga {
    double C;
    double x_pos;
    double y_pos;
public:
    Carga();
    void CargarDatos(double _C, double _x_pos, double _y_pos);
    //get
    double getC(){return C;}
    double getx_pos(){return x_pos;}
    double gety_pos(){return y_pos;}
};


#endif //POO_CARGA_H
