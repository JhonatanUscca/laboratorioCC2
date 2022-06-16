#define total 10
 
class pila {
    public:
    int lista[total];
    int fin;
};
typedef class pila TPILA;
 
class hanoi{
    public:
 
    int entrar(TPILA& t, int p);
    int eliminar(TPILA& t, int& p);
    int apliar(TPILA t, int& p);
    int vacio(TPILA t);
    void incioDePila(TPILA& t);
 
   
    void t_Hanoi(int num, TPILA& lista1, TPILA& lista2, TPILA& lista3,TPILA* a, TPILA* b, TPILA* c);
    void mostrar(TPILA lista3);
};
