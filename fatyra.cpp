#include<iostream>
using namespace std;
int main(){
int yenio, eskio,abonelikucreti;
float enflasyonOrani, FaturaMiktari, birimFiyat, yenibirimFiyat;
float Tuketim;
cout<< "yeni okunan degeri giriniz: ";
cin>>yenio;
cout<<"eski okunan degeri giriniz: ";
cin>>eskio;
cout<<"abonelik ucretini giriniz: ";
cin>>abonelikucreti;
cout<<"birim fiyat giriniz: ";
cin>>birimFiyat;
cout<<"Enflasyon oranini giriniz: ";
cin>>enflasyonOrani;
Tuketim=yenio-eskio;
yenibirimFiyat=birimFiyat+birimFiyat*enflasyonOrani/100.0;
FaturaMiktari=Tuketim*yenibirimFiyat+abonelikucreti;
cout<< "Faturaniz: "<<FaturaMiktari<<endl;
system("pause");
return 0;


}
