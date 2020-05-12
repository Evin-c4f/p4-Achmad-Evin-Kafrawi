#include <iostream>
#include <string>

using namespace std;
string program[5]={"","Penjumlahan\t (+)","Pengurangan\t (-)","Perkalian\t (*)","Pembagian\t (/)"};
float a_1,a_2,hasil;
char operasi,pilih;
void tampilan(string program[]);
float hitung();

main(){
	tampilan(program);
	hitung();
	cout<<"========= TERIMA KASIH =========="<<endl;
	cout<<"================================="<<endl;
	}
	
	
void tampilan(string program[]){
	cout<<"=================================";
	cout<<"\n=     Program Hitungan Dasar\t=";
	cout<<"\n=================================\n";
	for(int i=1;i<5;i++){
		cout<<i<<"."<<" "<< program[i] <<endl;
	}
	cout<<"================================="<<endl;
}
float hitung(){
	char(a_1=' ');
	do{
		if(char(a_1)==' '){
			cout<<"Masukkan Angka Pertama\t: ";cin>>a_1;
		}else{
			cout<<"Angka Terakhir\t\t: "<<a_1<<endl;
		}
		cout<<"Pilih Operator\t\t: ";cin>>operasi;
		switch(operasi){
			case '+' : 
			cout<<"Masukkan Angka Kedua\t: ";cin>>a_2;
			hasil=a_1+a_2;
			cout<<"Hasil\t\t\t: "<<hasil;
			a_1=hasil;
			cout<<"\n================================="<<endl;
			break;
			case '-' :
			cout<<"Masukkan Angka Kedua\t: ";cin>>a_2;
			hasil=a_1-a_2;
			cout<<"Hasil\t\t\t: "<<hasil;
			a_1=hasil;
			cout<<"\n================================="<<endl;
			break;
			case '*' : 
			cout<<"Masukkan Angka Kedua\t: ";cin>>a_2;
			hasil=a_1*a_2;
			cout<<"Hasil\t\t\t: "<<hasil;
			a_1=hasil;
			cout<<"\n================================="<<endl;
			break;
			case '/' :
			cout<<"Masukkan Angka Kedua\t: ";cin>>a_2;
			if(a_2==0){
				cout<<"Warning!: Bilangan Tidak Bisa Dibagi Dengan Angka 0";
			}else{
			hasil=a_1/a_2;
			cout<<"Hasil\t\t\t: "<<hasil;
			a_1=hasil;
			cout<<"\n================================="<<endl;
			break;
			}
			default : 
			cout<<"Operator yang Anda Masukkan Salah\n";
			exit(0);
		}
		cout<<"Lanjut(y/n)?";cin>>pilih;
		cout<<"================================="<<endl;
	}while(pilih=='y'||pilih=='Y');
}
