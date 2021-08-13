#include <iostream>

using namespace std;
#define TAM 50  // Tamaño maximo de cadena
#define stop '*' // Para dejar de ingresar datos en la cadena
void leerCadenaCaracteres(char *ptrA);
int main()
{

  return 0;
}

void leerCadenaCaracteres(char *ptrA){
    char caracter;
    int Idcaracter=0;
    string cadena;
        while (Idcaracter<(TAM-1)){
            cout<<"Ingrese un caracter, para aavcabr ingrese *: "<<endl;
            cin>>caracter;
            if(caracter != stop){
                ptrA[Idcaracter]=caracter;
                Idcaracter++;
                cadena+=caracter;
            }
            else {

              break;
            }
        }
    //una vez leidos, los separo de numeros y letras
        string num="";
        string letras="";
        int numero =cadena.length();
        for (int i = 0; i < numero ; i ++ ) {
            int ascci = cadena[i];
            if ( ascci >= 48 && ascci <= 57){
                //es un numero
                num += cadena[i];
            }
            else{
                letras+=cadena[i];
            }
        }
      //sumo los numero separando de  a 3
        int n = 3;
        int suma = 0;
        if(num.length()%n != 0){
           //no se puede por eso, asi que lo llenamos hast q sea posible divirdlo enteramente
            do{
                string newnum = "";
                int longitud = num.length();
                for (int i = 0; i < longitud+1; i++ ) {
                    if (i == 0){
                        newnum+="0";
                    }
                    else{
                        newnum+=num[i-1];
                    }

                }
                num = newnum;

            }while(num.length()%n != 0);
        }

        do{
            string Caux;
            string newnum;
            for (int i = 0; i < num.length() ; i ++ ) {
                if(i >= 0 && i < n){
                    Caux +=num[i];
                }
                else{
                   newnum += num[i];
                }
            }
            int numAux ;
            numAux =stoi(Caux);
            suma+=numAux;

            num = newnum;
            if(num.length()== 0){
                cout <<  "suma es igual a "+suma<<endl ;
            }

        }while(num.length()!=0);


}
