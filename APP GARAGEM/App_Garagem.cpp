#include<iostream>
using namespace std;
main(){
    float he,hsi,ht,vt; //Variáveis he= Hora de entrada, hs= Hora de saída, hsi= Hora de saida com plus, ht= Hora total, vt= Valor total
    int v;
    cout << "\n\nINFORME A HORA DA ENTRADA DO VEICULO E DEPOIS APERTE ENTER (Use ponto e não vírgula com o separador decimal): ";
    cin >> he;
    cout << "\n\nINFORME A HORA DA SAIDA E DEPOIS APERTE ENTER (Use ponto e não vírgula com o separador decimal): ";
    cin >> hsi;
	if(hsi < he){
            hs= hsi + 24; //ICREMENTO NA HORA DE SAÍDA PARA RESOLVER BUG DE 24 HORAS.
            ht = hs - he;}
            else{
            ht= hsi - he;
            }
            cout << "\n\nQUANTIDADE DE HORAS E DE: ";
            cout << ht;
            if(ht <= 1){		//1 hora no estabelecimento é 5 reais.
            cout << "\n\n VALOR TOTAL A PAGAR E DE 5 REAIS!";
                }else{
                    vt=(((ht-1)*3)+5); // Cada hora adicional tem o valor de 3 reais + o valor da primeira hora.
                    cout << "\n\n VALOR TOTAL A PAGAR E DE : ";
                    cout << vt;
        }
return 0;
}

