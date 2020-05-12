#include <iostream>
using namespace std;

main (){
int x,y, mtrx [3][3];
cout<<"nim = F1B019015\n";
cout << "Masukkan jumlah baris = ";
cin >> x;
cout << "Masukkan jumlah kolom = ";
cin >> y;
cout << endl;
for (int i = 0; i < x; i++){
for (int j = 0; j < y; j++){
cout << "Masukkan nilai index " << i << "," << j << " = ";
cin >> mtrx [i][j];
}
}
cout << endl;
for (int i = 0; i < x; i++){
for (int j = 0; j < y; j++){
cout << mtrx [i][j] << "  ";
}
cout << endl << endl;
}
cout << endl;
for (int i = 0; i < y; i++){
for (int j = 0; j < x; j++){
cout << mtrx [j][i] << "  ";
}
cout << endl << endl;
	}
}

