#include<iostream>
using namespace std;
main(){
    float he,hs,ht,vt;
    int v;
    cout << "\n\nINFORME A HORA DA ENTRADA DO VEICULO E DEPOIS APERTE ENTER: ";
    cin >> he;
    cout << "\n\nINFORME A HORA DA SAIDA E DEPOIS APERTE ENTER: ";
    cin >> hs;
    			if(ht <= 1){
       			cout << "\n\n VALOR TOTAL A PAGAR E DE 5 REAIS!";
           		}
    			else{
           		 ht = hs-he;
            	vt=(((ht - 1) * 3) + 5);
            	cout << "\n\n VALOR TOTAL A PAGAR E DE : ";
           		cout << vt;

        }

return 0;
}

