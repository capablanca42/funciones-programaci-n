//Resuelva los siguientes ejercicios con funciones - bucles - condicionales.
//1) Encuentre el valor de las siguientes expresiones, utilizando el depurador y la ventana watch:
//Ejemplo: Para este código: cuál es el valor de la expresión a > 6 || b==3 ?
//Y la ventana wach:
//Ejemplo: para el codigo: es el valor de la expresión a > 6 || b==3 ?
//Resultado de la expresión es true


using namespace std;

int main (){
//valores iniciales: x=5, y =0;    expresión:  if (x==5 && y!=0)
 int x=5,  y=0;   
if(x==5 ||y!=0 ){
    cout<<"is true";
}else{
    cout<<"is false";
} 

//b) valores iniciales: n=90;    expresión:  if (!(n>=1  &&  n<=100)
int n=90;   
cout << "is true";
if (!(n>1 && n<=100)){

cout << "is false";
}else{
  
} 
return 0;
}