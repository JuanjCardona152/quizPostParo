#include <iostream>

using namespace std;
int sumaCaracteres(string num, int n){
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
            return suma;
        }

    }while(num.length()!=0);

}
int main()
{
    string num = "87512395";
    int suma = sumaCaracteres(num, 3);

    return 0;
}
