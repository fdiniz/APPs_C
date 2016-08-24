//Aplicativo desenvolvido por Fábio Diniz Chaves. Bacharel em Ciência e Tecnologia e acadêmico de Engenharia de Computação da Universidade Federal do Pampa.
//Esta aplicação foi feita para solucionar o problema de um estacionamento na cidade de Bagé-RS.

#include <iostream> //Bibliotecas 
#include <stdio.h>
#include <ctype.h>
#include <math.h>

using namespace std;
main(){
    float he,hs,hsi,ht,vt; //Variáveis he= Hora de entrada, hs= Hora de saída, hsi= Hora de saida com plus, ht= Hora total, vt= Valor total
    int menu,dte,dts,dtsi,nd; // Variáveis menu, data de entrada, data de saída, data de saída com plus, número de dias.
    cout << "ROTATIVO 1 \n\nPERNOITE 2"; // ESCOLHA DE OPÇÕES DE 1 A 2.
    cout << "\n\nDIGITE A OPCAO DESEJADA: ";
    cin >> menu;
    switch (menu){
        case 1 :
        cout << "\n\nROTATIVO DE VEICULOS";
            cout << "\n\nINFORME A HORA DE ENTRADA DO VEICULO E DEPOIS APERTE ENTER: ";
            cin >> he;
            cout << "\n\nINFORME A HORA DE SAIDA E DEPOIS APERTE ENTER: ";
            cin >> hsi;
            if(hsi < he){
            hs= hsi + 24; //ICREMENTO NA HORA DE SAÍDA PARA RESOLVER BUG DE 24 HORAS.
            ht = hs-he;}
            else{
            ht= hsi -he;
            }
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
        cout << "\n\nPERNOITE DE VEICULOS";
            cout << "\n\nDIGITE O DIA DE ENTRADA DO VEICULO: ";
            cin >> dte;
            cout << "\n\nDIGITE O DIA DE SAIDA DO VEICULO: ";
            cin >> dts;
                    if (dts <= dte)
                    {
                       dtsi= dts+30; //ICREMENTO PARA RESOLVER BUG DA VIRADA DE MÊS
                       nd = (dtsi - dte);
                       cout << "\n\nNUMERO DE PERNOITES FOI DE: ";
                             cout << nd;
                             vt = (20 * (nd-1))+25;
                             cout << "\n\nVALOR TOTAL A PAGAR E DE: ";
                             cout << vt;
                    }
                        else{
                             nd = (dts - dte);
                             cout << "\n\nNUMERO DE DIAS FOI DE: ";
                             cout << nd;
                             vt = (20 * (nd-1))+25;
                             cout << "\n\nVALOR TOTAL A PAGAR E DE: ";
                             cout << vt;
                break;
                }}
           return(0);
           }

