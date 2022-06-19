#include "stdio.h"
#include "stdlib.h"
 
#include "ejercicioN4.h"
 
int hanoi::entrar(TPILA& t, int p) {
    if (t.fin == total - 1)
        return 0;
    t.lista[++t.fin] = p;
    return 1;
}
 
 
int hanoi::eliminar(TPILA& t, int& p) {
    if (vacio(t))
        return 0;
    p = t.lista[t.fin--];
    return 1;
}
 
 
int hanoi::apliar(TPILA t, int& p) {
    if (vacio(t))
        return 0;
    p = t.lista[t.fin];
    return 1;
}
 
 
int hanoi::vacio(TPILA t) {
    if (t.fin == -1)
        return 1;
    return 0;
}
 
 
void hanoi::incioDePila(TPILA& t) {
    t.fin = -1;
}
 
 
void hanoi::t_Hanoi(int num, TPILA& lista1, TPILA& lista2, TPILA& lista3,TPILA* a, TPILA* b, TPILA* c) {
    int p;
    char aux, aux1;
 
    if (a == &lista1)
        aux = 'A';
    else if (b == &lista1)
        aux = 'B';
    else if (c == &lista1)
        aux = 'C';
 
    if (a == &lista3)
        aux1 = 'A';
    else if (b == &lista3)
        aux1 = 'B';
    else if (c == &lista3)
        aux1 = 'C';
 
    if (num == 1) {
        eliminar(lista1, p);
        entrar(lista3, p);
        printf("\nDisco %d movido de la Torre %c a la Torre %c", num, aux, aux1);
 
    }
    else {
        t_Hanoi(num-1, lista1, lista3, lista2, a, b, c);
        eliminar(lista1, p);
        entrar(lista3, p);
        printf("\nDisco %d movido de la Torre %c a la Torre %c", num, aux, aux1);
        t_Hanoi(num-1, lista2, lista1, lista3, a, b, c);
    }
 
}
 
void hanoi::mostrar(TPILA lista3) {
    int p;
    while (eliminar(lista3, p))
        printf("%d", p);
}
 
int main() {
    int num;
    hanoi hanoi1;
 
    TPILA lista1, lista2, lista3;
    hanoi1.incioDePila(lista1);
    hanoi1.incioDePila(lista2);
    hanoi1.incioDePila(lista3);
 
    TPILA* a = &lista1;
    TPILA* b = &lista2;
    TPILA* c = &lista3;
 
 
    printf("\tTORRE DE HANOI\t");
 
    printf("\nIngrese la cantidad de discos: ");
    scanf("%d", &num);
 
    printf("\nInicializando la Torre A con disco del 1 al %d", num);
    for (int i = num; i > 0; i--)
    {
        hanoi1.entrar(lista1, i);
    }
       
    printf("\nLos elementos de la Torre A son: ");
    hanoi1.mostrar(lista1);
    printf("\n\t");
    system("pause");
 
    hanoi1.t_Hanoi(num, lista1, lista2, lista3, a, b, c);
 
    printf("\n\tDiscos movidos exitosamente");
    printf("\nLos elementos de la Torre C son: ");
    hanoi1.mostrar(lista3);
 
    printf("\n\t");
    system("pause");
    return 0;
}
