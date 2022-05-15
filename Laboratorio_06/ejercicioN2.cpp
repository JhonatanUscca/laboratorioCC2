#include <iostream>
 
using namespace std;
 
class alumno{
    private:
        string nombreC;
        string CUI;
        float nota1,nota2,nota3;
    public:
        alumno(){}
        alumno(string a, string b, float c, float d, float e);
        ~alumno(){}
        float promedio();
        void aprobo();
        void mostar();
 
};
 
alumno::alumno(string a, string b, float c, float d, float e){
        nombreC = a;
        CUI = b;
        nota1 = c;
        nota2 = d;
        nota3 = e;
}
 
float alumno::promedio(){
    return (nota1+nota2+nota3)/3;
}
 
void alumno::aprobo(){
    if(promedio()>=10.5){
        cout<<"Aprobo";
    }
    else if(promedio()<10.5){
        cout<<"No aprobo ";
    }
}
 
void alumno::mostar(){
 
    cout<<"Lo datos del alumno son : "<<endl;
    cout<<"Nombre : "<<nombreC<<"\n";
    cout<<"Nombre : "<<CUI<<"\n";
    cout<<"Promedio de de las tres notas del alumno : "<<endl;
    cout<<"Promedio : "<<promedio()<<"\n";
    cout<<"Estado en el curso de  Ciencias de la Computacion II : "<<endl;
    aprobo();
}
 
int main(){
    string nombreC_;
    string CUI_;
    float nota1_,nota2_,nota3_;
    cout<<"Ingrese el nombre completo : ";
    getline(cin,nombreC_);
    cout<<"Ingrese el CUI : ";
    cin>>CUI_;
    cout<<"Las tres notas : ";
    cin>>nota1_>>nota2_>>nota3_;
    alumno alumno1= alumno(nombreC_,CUI_,nota1_,nota2_,nota3_);
    alumno1.mostar();
    return 0;
 
}
