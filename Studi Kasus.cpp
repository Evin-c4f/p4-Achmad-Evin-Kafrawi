#include <iostream>
#include <string>
using namespace std;

    string benda[18]={"","Baju sklh","Celana sklh","Almamater","Sepatu kasut","Topi sklh","Dasi sklh","Sabuk hitam","Tas Punggung","Buku Paket","Buku LKS","Buku tulis","Pensil 2B","Pulpen Pilot","Penghapus ATM","Tip-X FB","Penggaris spy","Spidol warna"};
    int harga[18]={0,50,20,25,14,15,70,12,23,26,13,11,11,23,34,15,25,13};
    int stok[18]={0,1,2,4,5,0,2,4,6,2,3,5,6,1,5,8,0,9};
    int jumlah,total,jml;
void listbenda(string benda[],int harga[],int stok[]){
	cout<<"=======================   KOPERASI SISWA  =======================\n";
    cout<<"=================================================================\n";
    cout<<"| nomer\t|\t  barang\t|\t  harga\t\t|  Stok |\n";
    cout<<"=================================================================\n";
   for(int i=1;i<18;i++){
        cout<<"| "<<i<<"\t|\t"<<benda[i]<<"\t|\tRp. "<<harga[i]<<".000\t|   "<< stok[i] << "   |\t"<< " "<<endl;
   }
   cout<<"=================================================================\n";
   cout<<endl;
}

int belian(){
    ulang:
        int nomer;
    	char lagi;
        cout<<"# Masukkan kode barang\t\t: ";
        cin>>nomer;
    if(nomer[stok]==0){
    	cout<<"\n# Barang yang Anda pesan sedang kosong\n";
    	cout<<"=================================================================\n";
    	goto ulang2;
	}else{
        cout<<"# Nama barang 	 \t\t: "<<benda[nomer]<<endl;
        cout<<"# Harga barang	 \t\t: Rp. "<<harga[nomer]<<".000"<<endl;
        cout<<"# Stok barang	\t\t: "<<stok[nomer]<<endl;
        cout<<"# Jumlah barang yg dibeli\t: ";cin>>jml;
        if(jml>nomer[stok]){
        	cout<<"\nMaaf kami tidak dapat memproses pesanan yang Anda lakukan\n";
        	cout<<"=================================================================\n";
        	goto ulang2;
		}
        total=jml*harga[nomer];
        jumlah=jumlah+total;
        cout<<"\n# Total belanja \t\t: Rp. "<<total<<".000"<< endl; 
        cout<<"=================================================================\n";
		ulang2:
        cout<<"Belanja lagi? (Y/T) \t\t: ";
        cin>>lagi;
        cout<<endl;}
    if(lagi=='Y' || lagi=='y'){
    	
    	goto ulang;
	}else if(lagi=='T' || lagi=='t'){
		
	}
}
void struck(){
	int i, n, k, k2, j[100], th[100];
	float b,h[100];
    char a[100][30];
    cout<<"=================================================================\n";
    cout<<"Masukkan jumlah jenis barang\t: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<" Masukkan nama barang ke- "<<i<<"\t: ";
        cin>>a[i];
        cout<<" Masukkan harga per barang\t: Rp. ";
        cin>>h[i];
        cout<<" Masukkan jumlah barang\t\t: ";
        cin>>j[i];
        cout<<endl;
    }

    for(i=1; i<=n; i++)
    {
        th[i]=j[i]*h[i];
    }
    cout<<"Total harga keseluruhan\t\t: Rp. "<<jumlah<<".000\n";
    cout<<"Masukkan jumlah pembayaran\t: Rp. ";
    cin>>b;
    k=b-jumlah;
    system("cls");
    cout<<"=================================================================\n";
    cout<<"\t\t\tDaftar belanja anda\n\n";
    for(i=1; i<=n; i++)
    {
        cout<<"# "<<j[i]<< " buah "<<a[i]<<"\t\t--->\t\tharga : Rp. "<<th[i]<<".000\n";
    }
    cout<<"-----------------------------------------------------------------\n";
    if(b>=jumlah)
    {
        cout<<"# Total harga\t\t\t--->\t\t      : Rp. "<<jumlah<<".000\n";
        cout<<"# Pembayaran\t\t\t--->\t\t      : Rp. "<<b<<".000\n";
        cout<<"# Kembalian\t\t\t--->\t\t      : Rp. "<<k<<".000\n";
    }
    else
    {
        k2=-1*k;
        cout<<"# Total harga\t\t\t--->\t\t      : Rp. "<<jumlah<<".000\n";
        cout<<"# Pembayaran\t\t\t--->\t\t      : Rp. "<<b<<".000\n";
        cout<<"# Kekurangan\t\t\t--->\t\t      : Rp. "<<k2<<".000\n";
        cout<<endl;
        cout<<"###   MAAF UANG ANDA TIDAK CUKUP UNTUK MELAKUKAN PEMBAYARAN   ###"<<endl;
    }
    cout<<"=================================================================\n";
    cout<<"=================Terimakasih sampai jumpa lagi===================\n";
}

int main(){
    listbenda(benda,harga,stok);
    belian();
    struck();
}
