#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <iterator>
#include <random>
 
using namespace std;
 
class Elementos {
    public:
    void operator()(vector<int> &vec) {  
        sort(vec.begin(),vec.begin());
   
    }
 
    vector<int> operator()(vector<int> &vecA, vector<int> &vecB) {
        vector<int> vecResultado;
       
        mt19937 gen(3445);
        uniform_int_distribution<> dist(1,30);
 
        for (int i = 0; i < 20; ++i) {
            vecA.push_back(dist(gen));
        }
         
        mt19937 gena(45345);
        uniform_int_distribution<> dists(1,30);
 
        for (int i = 0; i < 20; ++i) {
            vecB.push_back(dists(gena));
        }
       
     
        operator()(vecA);
        operator()(vecB);
 
        for (size_t i = 0; i < vecA.size(); ++i) {
            if(vecA[i] < vecB[i] ) {
                vecResultado.push_back(vecA[i]);
            }
        }
 
        return vecResultado;
    }
   
};
