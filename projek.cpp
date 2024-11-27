#include <iostream>
#include <iomanip>
using namespace std;

int pemilik = 0;
int pengguna = 0;
int jumlahkos = 0;
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
string namakos[100][100];
string alamatkos[100][100];
float harga[100][100];
string fasilitas[100][100];
string jeniskos[100][100];
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
    string role;
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
    //kalau kosong
    if (pemilik == 0 && pengguna==0){
    cout<<"Anda Belum Membuat Akun...\n";
    cout<<"Silahkan Sign Up Terlebih Dahulu!\n";
    system("pause");
    } else {
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
    logpemilik = false;
    } else {
    cout<<"Username Atau Password Salah....\n";
    cout<<"Silahkan Coba Lagi!\n";
    system("pause");
    logedin = false;
    }
    } 
    } while (!logedin);
    }
}
    
void logout(){
string logout;
do{
cout<<"Apakah Anda Yakin Ingin Keluar Dari Akun? (y/n) :";getline(cin>>ws,logout);
if (logout != "y" &&logout != "Y" && logout != "N" &&logout != "n"){
cout<<"Input Yang Anda Masukkan Salah...\n";
system("pause");
}
} while (logout != "y" &&logout != "Y" &&logout != "N" &&logout != "n"); 
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
int jumlahuptemp;
system("cls");
    for (int i = 0; i < pemilik; i++){
    pemilik -= 1 ;
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"UNGGAH"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Nama Pemilik : "<< namapemilik[pemilik] << endl;
    cout<<"Masukkan Jumlah Kos Yang Akan Diupload : ";cin>>jumlahuptemp;
        for (int j = 0; j < jumlahuptemp; j++){
        cout<<"Data KOS "<<j+1<<"\n";
        cout<<"Nama Kos Anda : ";getline(cin>>ws,namakos[pemilik][jumlahkos]);
        cout<<"Alamat Kos Anda : ";getline(cin>>ws,alamatkos[pemilik][jumlahkos]);
        cout<<"fasilitas Kos Anda : ";getline(cin>>ws,fasilitas[pemilik][jumlahkos]);
        cout<<"Jenis Kos Anda : ";getline(cin>>ws,jeniskos[pemilik][jumlahkos]);
        cout<<"Harga Kos Per Bulan : ";cin>>harga[pemilik][jumlahkos];
        }
    }
    jumlahkos += jumlahuptemp;
}

void lihat(){
//for loop show array
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"DAFTAR KOS"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
for (int i = 0; i <= pemilik ; i++){
    pemilik -= 1;
    cout<<i+1;
    cout<<"Nama Pemilik : "<<namapemilik[pemilik];
    cout<<"Nomor Telepon : "<<telppemilik[pemilik];
    for (int j = 0; j < jumlahkos; j++){
    cout<<"Nama Kos : "<< namakos[pemilik][jumlahkos] << endl;
    cout<<"Alamat Kos : "<< alamatkos[pemilik][jumlahkos] << endl;
    cout<<"Fasilitas : "<< fasilitas[pemilik][jumlahkos] << endl;
    cout<<"Jenis Kos :"<< jeniskos[pemilik][jumlahkos] << endl;
    cout<<"Harga Kos Per Bulan : "<< harga[pemilik][jumlahkos]<<endl;
    }
    }
}


void menupemilik(){
    string menu;
    do{
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(31)<<"MAIN MENU"<<setw(21)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Menu" <<setfill(' ')<<setw(41)<<"|\n";
    cout<<"| 1. Unggah Kos "<<setfill(' ')<<setw(37)<<"|\n";
    cout<<"| 2. Log Out "<<setfill(' ')<<setw(40)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan : ";getline(cin>>ws,menu);
    if (menu != "1" && menu != "2"){
    cout<<"Input Yang Anda Masukkan Salah....\n";
    cout<<"Silahkan Coba Lagi!\n";
    system("pause");
    }
    } while (menu != "1" && menu != "2");
    if (menu == "1"){
    unggah();
    } else {
    logout();
    }

}    


void menupengguna(){
    string menu;
    do{
    system("cls");
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"|"<<setfill(' ')<<setw(28)<<"MAIN MENU"<<setw(24)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"| Pilih Menu" <<setfill(' ')<<setw(41)<<"|\n";
    cout<<"| 1. Lihat Kos "<<setfill(' ')<<setw(38)<<"|\n";
    cout<<"| 2. Log Out "<<setfill(' ')<<setw(40)<<"|\n";
    cout<<"+"<<setfill('=')<<setw(52)<<"=+\n";
    cout<<"Masukkan Pilihan : ";getline(cin>>ws, menu);
    if(menu != "1" && menu != "2"){
    cout<<"Input Yang Anda Masukkan Salah....\n";
    cout<<"Silahkan Coba Lagi!\n";
    system("pause");
    }
    //manggil fungsi lihat kos & log out
    } while (menu != "1" && menu != "2");
    if(menu == "1"){
    lihat();
    } else {
    logout();
    }
}

int main(){
    signin();
    login();
    if (logpemilik){
    menupemilik();
    } else {
    menupengguna();
    }
    
    signin();
    login();
    if (logpemilik){
    menupemilik();
    } else {
    menupengguna();
    }
}