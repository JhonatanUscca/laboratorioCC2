#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
 
class FIND {
    public:
    vector<int> operator()(int inicio, int final, char datoBuscar) {
       
        string palabra;
        palabra = "Electroencefalografista";
        vector<char> vec(palabra.begin(), palabra.end());
 
        vector<int> vecResultado;
 
        for ( int i = inicio ; i <= final ; ++i) {
            tolower(vec[i]);
            if( vec[i] == datoBuscar ) {
                vecResultado.push_back(i);
            }
        }
 
        return vecResultado;
 
    }
};
