#include <iostream>
using namespace std;

struct data {
    string nama;
    int nik;
    string jenisKelamin;
    string goldar;
    string tempatLahir;
    string tanggalLahir;
    string agama;
    string statusPernikahan;
    string kewarganegaraan;
    string pekerjaan;
    string alamat;
    string rtrw;
    string keldes;
    string kec;
};

data ktp[50];
int pilih[6];

void judul (){
    cout << "\t\t\t================================================================" << endl;
    cout << "\t\t\t  SELAMAT DATANG DI APLIKASI PENDAFTARAN ONLINE PEMBUATAN KTP!  " << endl;
    cout << "\t\t\t================================================================" << endl;
}

void formulir_ktp (){
    system ("CLS");
    cout << "\t\t\t================================================================" << endl;
    cout << "\t\t\t                 FORMULIR PEMBUATAN E-KTP                       " << endl;
    cout << "\t\t\t================================================================" << endl << endl;
    cout << "\tJumlah KTP Yang Akan Di Buat : ";
    cin  >> pilih[0];
    cout << endl;
    for (int x=0; x<pilih[0]; x++){
        cout << "\t\tData Ke-" << x+1 << endl;
        cout << "\t\tNIK [MAX 8 DIGIT]      : ";
        cin  >> ktp[x].nik;
        cout << "\t\tNama                   : ";
        cin  >> ktp[x].nama;
        cout << "\t\tTempat Lahir           : ";
        cin  >> ktp[x].tempatLahir;
        cout << "\t\tTanggal Lahir          : ";
        cin  >> ktp[x].tanggalLahir;
        cout << "\t\tJenis Kelamin          : ";
        cin  >> ktp[x].jenisKelamin;
        cout << "\t\tGolongan Darah         : ";
        cin  >> ktp[x].goldar;
        cout << "\t\tAlamat                 : ";
        cin  >> ktp[x].alamat;
        cout << "\t\tRT/RW                  : ";
        cin  >> ktp[x].rtrw;
        cout << "\t\tKel/Desa               : ";
        cin  >> ktp[x].keldes;
        cout << "\t\tKecamatan              : ";
        cin  >> ktp[x].kec;
        cout << "\t\tAgama                  : ";
        cin  >> ktp[x].agama;
        cout << "\t\tStatus Perkawinan      : ";
        cin  >> ktp[x].statusPernikahan;
        cout << "\t\tPekerjaan              : ";
        cin  >> ktp[x].pekerjaan;
        cout << "\t\tKewarganegaraan        : ";
        cin  >> ktp[x].kewarganegaraan;
    }
}

void lihatData(){
    system ("CLS");
    cout << "\t\t\t================================================================" << endl;
    cout << "\t\t\t                          LIHAT DATA!                           " << endl;
    cout << "\t\t\t================================================================" << endl << endl;
    for (int x = 0; x < pilih[0]; x++){
        cout << "\t\tData Ke-" << x + 1 << endl;
        cout << "\t\tNIK [MAX 8 DIGIT]      : " << ktp[x].nik              << endl;
        cout << "\t\tNama Lengkap           : " << ktp[x].nama             << endl;
        cout << "\t\tTempat Lahir           : " << ktp[x].tempatLahir      << endl;
        cout << "\t\tTanggal Lahir          : " << ktp[x].tanggalLahir     << endl;
        cout << "\t\tJenis Kelamin          : " << ktp[x].jenisKelamin     << endl;
        cout << "\t\tGolongan Darah         : " << ktp[x].goldar           << endl;
        cout << "\t\tAlamat                 : " << ktp[x].alamat           << endl;
        cout << "\t\tRT/RW                  : " << ktp[x].rtrw             << endl;
        cout << "\t\tKel/Desa               : " << ktp[x].keldes           << endl;
        cout << "\t\tKecamatan              : " << ktp[x].kec              << endl;
        cout << "\t\tAgama                  : " << ktp[x].agama            << endl;
        cout << "\t\tStatus Perkawinan      : " << ktp[x].statusPernikahan << endl;
        cout << "\t\tPekerjaan              : " << ktp[x].pekerjaan        << endl;
        cout << "\t\tKewarganegaraan        : " << ktp[x].kewarganegaraan  << endl << endl;
        cout << "\t\t====================================================" << endl << endl;
    }
}

void hasilKtp (){
    system ("CLS");
    cout << "\t\t\t================================================================" << endl;
    cout << "\t\t\t                            HASIL KTP                           " << endl;
    cout << "\t\t\t================================================================" << endl << endl;
    for (int x = 0; x < pilih[0]; x++){
    cout << "\t\tE-KTP " << x + 1 << endl;
    cout << "\t\t=============================================================" << endl;
    cout << "\t\t|                      PROVINSI JAWA BARAT                  |" << endl;
    cout << "\t\t|                      KABUPATEN SUKABUMI                   |" << endl;
    cout << "\t\t|                                                           |" << endl;
    cout << "\t\t|NIK               : " << ktp[x].nik              << "\t\t\t\t    |      " << endl;
    cout << "\t\t|Nama              : " << ktp[x].nama             << "\t\t\t\t    |      " << endl;
    cout << "\t\t|Tempat/Tgl Lahir  : " << ktp[x].tempatLahir      << ", " << ktp[x].tanggalLahir << "\t\t    |" << endl;
    cout << "\t\t|Jenis Kelamin     : " << ktp[x].jenisKelamin;
    cout << "\t  Golongan Darah   : "   << ktp[x].goldar           << "\t    |            " << endl;
    cout << "\t\t|Alamat            : " << ktp[x].alamat           << "\t\t\t\t    |      " << endl;
    cout << "\t\t|\tRT/RW             : " << ktp[x].rtrw           << "\t\t\t    |        " << endl;
    cout << "\t\t|\tKel/Desa          : " << ktp[x].keldes         << "\t\t\t    |        " << endl;
    cout << "\t\t|\tKecamatan         : " << ktp[x].kec            << "\t\t\t    |        " << endl;
    cout << "\t\t|Agama             : " << ktp[x].agama            << "\t\t\t\t    |      " << endl;
    cout << "\t\t|Status Perkawinan : " << ktp[x].statusPernikahan << "\t\t\t\t\t    |    " << endl;
    cout << "\t\t|Pekerjaan         : " << ktp[x].pekerjaan        << "\t\t\t\t    |      " << endl;
    cout << "\t\t|Kewarganegaraan   : " << ktp[x].kewarganegaraan  << "\t\t\t\t    |      " << endl;
    cout << "\t\t|BERLAKU           : SEUMUR HIDUP                           |            " << endl;
    cout << "\t\t=============================================================" << endl << endl;
    }
}

int main (){
    login :
    int i = 1, passw;
    string usern, login = "gagal";
    do {
        system ("color 0D");
        cout << "\t\t\t\t============================================" << endl;
        cout << "\t\t\t\t             SILAHKAN LOGIN AKUN!           " << endl;
        cout << "\t\t\t\t============================================" << endl << endl;
        cout << "\t\t\t\tUsername : ";
        cin  >> usern;
        cout << "\t\t\t\tPassword : ";
        cin  >> passw;
        if (usern == "putri" && passw == 12345){
            system ("CLS");
            judul();
            login = "lolos";
            i = 4;
        }
        else {
            cout << endl;
            cout << "\t\t\t\tUSERNAME / PASSWORD SALAH!" << endl << endl;
            i = i + 1;
        }
    }while (i <= 3);
    if (login != "lolos"){
        cout << "\t\t\t==========================================================" << endl;
        cout << "\t\t\tAnda Memasukkan Username & Password Yang Salah Sebanyak 3x" << endl;
        cout << "\t\t\tAkun Anda Di Blokir Sementara, Silahkan coba 30 hari lagi " << endl;
        cout << "\t\t\t==========================================================" << endl;
        return 0;
    }
    menuutama:
    cout << endl << endl;
    cout << "\t\t\t\t==================================================" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|  MENU UTAMA                                    |" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t|  [1] Pendaftaran Online                        |" << endl;
    cout << "\t\t\t\t|  [2] Logout                                    |" << endl;
    cout << "\t\t\t\t|                                                |" << endl;
    cout << "\t\t\t\t==================================================" << endl;
    cout << "\t\t\t\tMasukkan Pilihan Anda [1/2] : ";
    cin  >> pilih[1];
    system ("CLS");
    switch (pilih[1]){
    case 1 :
        formulir_ktp();
        cout << endl;
        cout << "\t\t===== Data Berhasil Di Inputkan =====" << endl;
        menu:
        cout << endl;
        cout << "\t\t=========================================" << endl;
        cout << "\t\t|  [1] Lihat data                       |" << endl;
        cout << "\t\t|  [2] Lihat Hasil KTP                  |" << endl;
        cout << "\t\t|  [3] Kembali Ke Menu Utama            |" << endl;
        cout << "\t\t=========================================" << endl;
        cout << "\t\tMasukkan Pilihan Anda : ";
        cin  >> pilih[2];
        switch (pilih[2]){
        case 1 :
            lihatData();
            goto menu;
        break;
        case 2 :
            hasilKtp();
            goto menu;
        break;
        case 3:
            system ("CLS");
            judul();
            goto menuutama;
        break;
        }
    break;

    case 2 :
        system ("CLS");
        goto login;
    break;
    }
}
