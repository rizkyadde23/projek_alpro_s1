#include <iostream>
#include <iomanip>
using namespace std;
string role;
int pemilik = 0;
int pengguna = 0;
string namapemilik[100];
string telppemilik[100];
string emailpemilik[100];
string genderpemilik[100];
string alamatpemilik[100];
string namapengguna[100];
string telppengguna[100];
string emailpengguna[100];
string genderpengguna[100];
string alamatpengguna[100];
string namepemilik[100];
string pwpemilik[100];
string namepengguna[100];
string pwpengguna[100];
bool logedin, logpemilik;

void datadiripemilik(){
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(30)<<"DATA DIRI"<<setw(22)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Nama Lengkap : ";getline(cin>>ws,namapemilik[pemilik]);
    cout<<"No Telepon : ";getline(cin>>ws,telppemilik[pemilik]);
    cout<<"Email : ";getline(cin>>ws,emailpemilik[pemilik]);
    cout<<"Alamat : ";getline(cin>>ws,alamatpemilik[pemilik]);
    cout<<"Jenis Kelamin : ";getline(cin>>ws,genderpemilik[pemilik]);
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
}

void datadiripengguna(){
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(30)<<"DATA DIRI"<<setw(22)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Nama Lengkap : ";getline(cin>>ws,namapengguna[pengguna]);
    cout<<"No Telepon : ";getline(cin>>ws,telppengguna[pengguna]);
    cout<<"Email : ";getline(cin>>ws,emailpengguna[pengguna]);
    cout<<"Alamat : ";getline(cin>>ws,alamatpengguna[pengguna]);
    cout<<"Jenis Kelamin : ";getline(cin>>ws,genderpengguna[pengguna]);
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
}

void signin(){
    int registemp = 0;
    string yakin;
    do{
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"SIGN IN"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Role Anda" <<setfill(' ')<<setw(36)<<"|\n";
    cout<<"| 1. Pemilik Kos "<<setfill(' ')<<setw(36)<<"|\n";
    cout<<"| 2. Pemesan Kos "<<setfill(' ')<<setw(36)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan Role : ";getline(cin>>ws, role);
    if (role != "1" && role != "2"){
    cout<<"INPUT YANG ANDA MASUKKAN SALAH...\n";
    cout<<"SILAHKAN MASUKKAN MENU YANG SESUAI\n";
    system("pause");
    }
    }while (role != "1" && role != "2");
    //Role Pemilik Kos
    if (role == "1"){
    do{
    system("cls");
    registemp++;
    for(int i = 0; i<registemp;i++){
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(32)<<"CREATE ACCOUNT"<<setw(20)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Username Baru : ";getline(cin>>ws,namepemilik[pemilik]);
    cout<<"Masukkan Password Baru : ";getline(cin>>ws, pwpemilik[pemilik]);
    do{
    cout<<"Apakah Anda Sudah Yakin Dengan Username dan Password Anda? (y/n) : ";getline(cin>>ws,yakin);
    if (yakin != "y" &&yakin != "Y" && yakin != "n" && yakin != "N"){
    cout<<"INPUT YANG ANDA MASUKKAN SALAH...\n";
    cout<<"SILAHKAN INPUT Y/N\n";
    system("pause");
    }
    }while(yakin != "y" && yakin != "Y" && yakin != "n" && yakin != "N");
    if (yakin == "y" || yakin == "Y"){
    cout<<"SILAHKAN ISI DATA DIRI ANDA!\n";
    system("pause");
    datadiripemilik();
    cout<<"AKUN BERHASIL DIBUAT....\n";
    cout<<"SILAHKAN LOGIN!\n";
    pemilik += registemp;
    system("pause");
    }
    }
    } while (yakin=="n" || yakin =="N");
    }
    //Role Pemesan Kos
    else {
    do{
    system("cls");
    registemp++;
    for(int i = 0; i<registemp;i++){
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(32)<<"CREATE ACCOUNT"<<setw(20)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Username Baru : ";getline(cin>>ws,namepengguna[pengguna]);
    cout<<"Masukkan Password Baru : ";getline(cin>>ws, pwpengguna[pengguna]);
    do{
    cout<<"Apakah Anda Sudah Yakin Dengan Username dan Password Anda? (y/n) : ";getline(cin>>ws,yakin);
    if (yakin != "y" && yakin != "Y" && yakin != "n" && yakin != "N"){
    cout<<"INPUT YANG ANDA MASUKKAN SALAH...\n";
    cout<<"SILAHKAN INPUT Y/N\n";
    system("pause");
    }
    } while(yakin != "y" && yakin != "Y" && yakin != "n" && yakin != "N");
    if (yakin == "y" || yakin == "Y"){
    cout<<"SILAHKAN ISI DATA DIRI ANDA!\n";
    system("pause");
    datadiripengguna();
    cout<<"AKUN BERHASIL DIBUAT....\n";
    cout<<"SILAHKAN LOGIN!\n";
    pengguna += registemp;
    system("pause");
    }
    }
    } while (yakin=="n" || yakin =="N");
    }
}

void login(){
    string username,password;
    do{
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"LOGIN"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Username : ";getline(cin>>ws,username);
    cout<<"Masukkan Password : ";getline(cin>>ws,password);
    //checking pemilik
    for (int i = 0; i < pemilik; i++){
    if (namepemilik[i] == username && pwpemilik[i] == password ){
    cout<<"LOGIN BERHASIL...\n";
    system("pause");
    logedin = true;
    logpemilik = true;
    } else {
    cout<<"Username Atau Password Salah....\n";
    cout<<"Silahkan Coba Lagi!\n";
    system("pause");
    logedin = false;
    }
    } 
    //checking pengguna
    for (int i = 0; i < pengguna; i++){
    if (namepengguna[i] == username && pwpengguna[i] == password ){
    cout<<"LOGIN BERHASIL...\n";
    system("pause");
    logedin = true;
    } else {
    cout<<"Username Atau Password Salah....\n";
    cout<<"Silahkan Coba Lagi!\n";
    system("pause");
    logedin = false;
    logpemilik = false;
    }
    } 
    } while (!logedin);
    }
    
void logout(){
//log out
}   

void struk(){
//bukti pembayaran, pembayaran berhasil
}

void pesan(){
//show array pemilik, pengguna, kos, input tanggal masuk, durasi dlm bulan, show total harga
}

void unggah(){
//for loop array
//nama kos, harga, alamat, fasilitas ngetik manual, jenis kelamin kos
}

void lihat(){
//for loop show array
}


void menupemilik(){
    string menu;
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(31)<<"MAIN MENU"<<setw(21)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Menu" <<setfill(' ')<<setw(41)<<"|\n";
    cout<<"| 1. Unggah Kos "<<setfill(' ')<<setw(37)<<"|\n";
    cout<<"| 2. Log Out "<<setfill(' ')<<setw(40)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan : ";getline(cin>>ws, menu);
    //manggil fungsi unggah kos & log out
}    


void menupengguna(){
    string menu;
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"MAIN MENU"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Menu" <<setfill(' ')<<setw(41)<<"|\n";
    cout<<"| 1. Lihat Kos "<<setfill(' ')<<setw(38)<<"|\n";
    cout<<"| 2. Log Out "<<setfill(' ')<<setw(40)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan : ";getline(cin>>ws, menu);
    //manggil fungsi lihat kos & log out
}

int main(){
    signin();
}