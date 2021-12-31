#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<vector<int>>niz{
            {7,8},
            {9,8,1,3,4,1,8,3},
            {1,1,2,2,3,3,4,4},
            {5,1,3,2,5,7,6,4},
            {8,4,3,2,1,9,2,9},
            {3,4,2,1,2,4,5,2},
            {1,2,4,3,5,6,2,1},
            {9,8,7,6,4,2,3,2},
    };

    cout<<"Vrijednosti brojeva u nizu iznose: "<<endl;
    for (int i = 0; i < 8; i++) {
        for (auto i: niz[i]) {
            cout << i << " ";
        }
        cout<<endl;
    }
    cout<<endl;

    int suma=0;
    cout<<"Pošto mi je broj indexa paran broj, parne kolone su sa vrijednostima: "<<endl;
    for (int i = 0; i < 8; i++) {
        for (int j =0; j < niz[i].size() ; j++) {
            if(j%2==0) {
                cout<<niz[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < 8; i++) {
        for (int j =0; j < niz[i].size() ; j++) {
            if(j%2==0) {
                suma=suma+niz[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Zbir vrijednosti u parnim kolonama niza iznosi: "<<
	suma<<endl;
    cout<<endl;
    cout<<"Ispis brojeva u matrici koji su veci od 5: "<<endl;
    for (int i = 0; i < 8; i++) {
        for (auto i: niz[i]) {
            if(i>5) {
                cout << i << " ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
