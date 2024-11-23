#include <iostream>
#include <iomanip>
using namespace std;
string role;
int pemilik = 0;
int pengguna = 0;
string namepemilik[100];
string pwpemilik[100];
string namepengguna[100];
string pwpengguna[100];


void signin(){
    int registemp = 0;
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"SIGN IN"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Role Anda" <<setfill(' ')<<setw(36)<<"|\n";
    cout<<"| 1. Pemilik Kos "<<setfill(' ')<<setw(36)<<"|\n";
    cout<<"| 2. Pemesan Kos "<<setfill(' ')<<setw(36)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan Role : ";getline(cin>>ws, role);
    //Role Pemilik Kos
    if (role == "1"){
    registemp++;
    for(int i = 0; i<registemp;i++){
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(32)<<"CREATE ACCOUNT"<<setw(20)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Username Baru : ";getline(cin>>ws,namepemilik[pemilik]);
    cout<<"Masukkan Password Baru : ";getline(cin>>ws, pwpemilik[pemilik]);
    cout<<"AKUN BERHASIL DIBUAT....\n";
    cout<<"SILAHKAN LOGIN!\n";
    pemilik += registemp;
    }
    }
    //Role Pemesan Kos
    if (role == "2"){
    registemp++;
    for(int i = 0; i<registemp ; i++){
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(32)<<"CREATE ACCOUNT"<<setw(20)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Username Baru : ";getline(cin>>ws, namepengguna[pengguna]);
    cout<<"Masukkan Password Baru : ";getline(cin>>ws, pwpengguna[pengguna]);
    cout<<"AKUN BERHASIL DIBUAT....\n";
    cout<<"SILAHKAN LOGIN!\n";
    pengguna += registemp;
    }
    }
}

int main(){
    signin();
}