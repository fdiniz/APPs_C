#include<iostream>

using namespace std;
main(){
    float he,hs,ht,vt;
    int menu,dte,dts,nd;
    switch (menu){
        case 1 :
        cout << "\n\nRotativo";
            cout << "\n\nINFORME A HORA DA ENTRADA DO VEICULO E DEPOIS APERTE ENTER: ";
            cin >> he;
            cout << "\n\nINFORME A HORA DA SAIDA E DEPOIS APERTE ENTER: ";
            cin >> hs;
            ht = hs-he;
            cout << "\n\nQUANTIDADE DE HORAS E DE: ";
            cout << ht;
            if(ht <= 1){
            cout << "\n\n VALOR TOTAL A PAGAR E DE 5 REAIS!";
                }else{
                    vt=(((ht-1)*3)+5);
                    cout << "\n\n VALOR TOTAL A PAGAR E DE : ";
                    cout << vt;
                  }break;
        case 2 :
        cout << "\n\nPernoite";
            cout << "\n\nDigite a dia de entrada: ";
            cin >> dte;
            cout >> "\n\nDigite a dia de saida: ";
            cin << dts;
                if (dts < dte){
                cout << "\n\nRefazer operação considerando dia de saida corrido ";
                }else{
                nd = (dts - dte);
                cout << "\n\nNumero de dias foi: ";
                cout << nd;
                vt = (nd * 25);
                cout << "\n\nValor total a pagar e de: ";
                cout << vt;
                break;
                }}
           return(0);
           }