#include <iostream>
using namespace std;
template <int N, int S>
 
struct Potencia
{
    enum { value = N * Potencia<N, S-1>::value };
};
template <int N>
 
struct Potencia <N, 0>
{
    enum { value = 1 };
};
 
int main()
{
    int x = Potencia<3,3>::value;
    cout << x << endl;
    system("pause");
}
