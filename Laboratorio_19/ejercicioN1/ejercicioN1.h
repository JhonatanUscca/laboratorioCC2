#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
 
 
class RegresionLineal {
public:
    vector<double> operator()(vector<double> &vecX, vector<double> &vecY) {
        vector<double> xCuadado;
        vector<double> xy;
        vector<double> resultado;
        double sumaX = 0.0, sumaY = 0.0, sumaXCuadado = 0.0, sumaXY = 0.0, mediaX = 0.0, mediaY = 0.0;
        double contador = 0.0;
 
        double a , b , c;
 
       vecY.push_back(2);   vecX.push_back(1);
       vecY.push_back(3);   vecX.push_back(3);
       vecY.push_back(2.4); vecX.push_back(4);
       vecY.push_back(2);   vecX.push_back(2);
       vecY.push_back(2);   vecX.push_back(1);
       vecY.push_back(3.5); vecX.push_back(7);
       
       
       
        for (size_t i = 0; i < vecX.size(); ++i) {
            xCuadado.push_back(vecX[i]*vecX[i]);
            xy.push_back(vecX[i]*vecY[i]);
        }
 
        for (size_t i = 0; i < vecX.size(); ++i) {
            sumaX = sumaX+vecX[i];
            sumaY = sumaY+vecY[i];
            sumaXCuadado = sumaXCuadado+xCuadado[i];
            sumaXY = sumaXY+xy[i];
            contador++;
        }
       
 
        mediaX = sumaX/contador;
        mediaY = sumaY/contador;
 
 
        b = (sumaXY-((contador)*(mediaX)*(mediaY)))/(sumaXCuadado-((contador)*(mediaX)*(mediaX)));
 
 
        a = mediaY-((b)*(mediaY));
 
        resultado.push_back(a);
        resultado.push_back(b);
       
        return resultado;
    }
};
