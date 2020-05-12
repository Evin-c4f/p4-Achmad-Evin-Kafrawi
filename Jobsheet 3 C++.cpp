#include <iostream>
using namespace std;
int main() {
  int a, b, x, y;
  int matriks1[3][3], matriks2[3][3], hasil[3][3];
  cout<<"nim = F1B019004\n";
  cout<<"nim = F1B019010\n";
  cout << "Masukkan jumlah baris matriks: ";
  cin >> x;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> y;
  cout << "Masukkan elemen matrix pertama: \n";
  for(a = 0; a < x; a++){
    for(b = 0; b < y; b++){
      cin >> matriks1[a][b];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(a = 0; a < x; a++){
    for(b = 0; b < y; b++){
      cin >> matriks2[a][b];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(a = 0; a < x; a++){
    for(b = 0; b < y; b++){
      hasil[a][b] = matriks1[a][b] + matriks2[a][b];
      cout << hasil[a][b] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}

