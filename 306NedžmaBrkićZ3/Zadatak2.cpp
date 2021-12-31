#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;
int main(){
	srand(time(NULL));
	rand();
	float suma=0, aritmetickaSredina;
	vector<int>n;
	int slucajni, manji=0, veci=1000;


int g=rand()%11+20;
cout<<"Velicina niza iznosi: "<<g<<"."<<endl;
n.assign(g,0);

for (int i=0; i<g; i++){
	slucajni=rand()%229+78;  // Broj indexa je 306, te ce biti: 306-78+1=229
	n.emplace(n.begin()+i,slucajni);
}

    cout<<"Vrijednosti niza od "<<g<<" clana su: \n";
    for (int i = 0; i<g; i++) {
        if (i%5==0){  //Prezime Brkic sa sastoji od 5 slova
            cout<<endl;
        }
        cout<<n[i]<<" ";
        suma+=n[i];
    }
cout<<endl;
aritmetickaSredina=suma/g;
cout<<"Aritmeticka sredina niza iznosi: "<<setprecision(5)<<aritmetickaSredina<<endl;

for (int i = 0; i < g; i++) {
        if(n[i]<aritmetickaSredina){
            if (n[i]>manji){
                if (n[i]%2==0) {
                    manji = n[i];
                }
            }
        }
        if(n[i]>aritmetickaSredina){
            if (n[i]<veci){
                if (n[i]%2!=0) {
                    veci = n[i];
                }
            }
        }
    }
    
    
    cout<<"Prvi manji parni broj od aritmeticke sredine je: ";
    if (manji == 0){
    	cout<<"Takav broj ne mozete ovdje naci.";
	}else {
		cout<<manji<<endl;
	}

 cout<<"Prvi veci neparni broj od aritmeticke sredine je: ";
    if (veci == 0){
    	cout<<"Takav broj ne mozete ovdje naci.";
	}else {
		cout<<veci<<endl;
	}




 
	return 0;
}
