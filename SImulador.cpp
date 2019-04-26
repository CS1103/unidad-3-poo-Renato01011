//
// Created by ruben on 4/26/2019.
//

#include <iostream>
#include "SImulador.h"
#include "Carga.h"

Simulador::Simulador(ostream &out, istream &in) {

    double x_pos;
    double y_pos;
    double q;
    out << "Insertar h : ";
    in >> h;
    out << "Insertar w : ";
    in >> w;
    out << "Insertar n : ";
    in >> n;
    out << "Insertar m : ";
    in >> m;

    out << "Insertar position x Carga 1 : ";
    in >> x_pos;
    out << "Insertar position y Carga 1 : ";
    in >> y_pos;
    out << "Insertar carga Carga 1 : ";
    in >> q;
    c1.CargarDatos(q,x_pos,y_pos);

    out << "Insertar position x Carga 2 : ";
    in >> x_pos;
    out << "Insertar position y Carga 2 : ";
    in >> y_pos;
    out << "Insertar carga Carga 2 : ";
    in >> q;
    c2.CargarDatos(q,x_pos,y_pos);

    out << "Insertar position x Carga 3 : ";
    in >> x_pos;
    out << "Insertar position y Carga 3 : ";
    in >> y_pos;
    out << "Insertar carga Carga 3 : ";
    in >> q;
    c3.CargarDatos(q,x_pos,y_pos);

    out << "Insertar position x Carga 4 : ";
    in >> x_pos;
    out << "Insertar position y Carga 4 : ";
    in >> y_pos;
    out << "Insertar carga Carga 4 : ";
    in >> q;
    c4.CargarDatos(q,x_pos,y_pos);

}

string Simulador::CalcularPotencialElectrico() {

    double intervaloY = h/n;
    double intervaloX = w/m;
    double mayor_intervalo;
    double X = 0;
    double Y = 0;
    string Return = "";
    (n>m) ? mayor_intervalo = n : mayor_intervalo = m;

    while(mayor_intervalo != 0){

        X += intervaloX;
        Y += intervaloY;
        Return = Return + CalcularV(X,Y);
        mayor_intervalo--;

    }
    return Return;
}

string Simulador::CalcularV(double X, double Y) {

    double Distancia1 = sqrt(pow(X-c1.getx_pos(),2)+pow(Y-c1.gety_pos(),2));
    double Potencial1 = (k*c1.getC())/Distancia1;
    double Distancia2 = sqrt(pow(X-c2.getx_pos(),2)+pow(Y-c2.gety_pos(),2));
    double Potencial2 = (k*c2.getC())/Distancia2;
    double Distancia3 = sqrt(pow(X-c3.getx_pos(),2)+pow(Y-c3.gety_pos(),2));
    double Potencial3 = (k*c3.getC())/Distancia3;
    double Distancia4 = sqrt(pow(X-c4.getx_pos(),2)+pow(Y-c4.gety_pos(),2));
    double Potencial4 = (k*c1.getC())/Distancia4;
    double PotencialTotal = Potencial1 + Potencial2 + Potencial3 + Potencial4;
    string Return = "";
    Return = " "+to_string(X)+", "+to_string(Y)+", "+to_string(PotencialTotal);
    cout << X << ", " << Y << ", " <<PotencialTotal << endl;
    return Return;

}

Simulador::Simulador(double _h, double _w, double _n, double _m, double x_pos1, double y_pos1, double q1, double x_pos2,
                     double y_pos2, double q2, double x_pos3, double y_pos3, double q3, double x_pos4, double y_pos4,
                     double q4) {

    h = _h;
    w = _w;
    n = _n;
    m = _m;
    c1.CargarDatos(x_pos1,y_pos1,q1);
    c2.CargarDatos(x_pos2,y_pos2,q2);
    c3.CargarDatos(x_pos3,y_pos3,q3);
    c4.CargarDatos(x_pos4,y_pos4,q4);

}
