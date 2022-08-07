#include <iostream>
using namespace std;
template <int N>
struct Suma
{
    enum { value = N + Suma <N - 1 >::value };
};
template <>
 
struct Suma <0>
{
    enum { value = 0 };
};
    int main()
{
    int x = Suma<5>::value;
    cout << x << endl;
    system("pause");
}
