#include<iostream>
#include<conio.h>


using namespace std;
struct paket
{
    char jenis_brg[30];
    int harga,berat,totalHarga;
    char kota[30];
};

struct paket kirim[100];

/*******************************************/


void tambahdata(int x)
{
    cout<<"Inputkan Jenis Barang    :";
    cin>>kirim[x].jenis_brg;
    cout<<"Berat Barang             :";
    cin>>kirim[x].berat;
    cout<<"Inputkan Harga           :";
    cin>>kirim[x].harga;
    cout<<"Inputkan Kota Tujuan     :";
    cin>>kirim[x].kota;
}

void tampildata(int x)
{
    cout<<"Daftar Kiriman Paket"<<endl;
    for(int a=1; a<x; a++)
    {
        cout<<a<<" ";
        cout<<kirim[a].jenis_brg<<" ";
        cout<<kirim[a].berat<<" ";
        cout<<kirim[a].harga<<" ";
        cout<<kirim[a].kota<<endl;
    }
    cout<<"Press Any Key...";
    getch();
    /*harus Ijin --> #include<conio.h>*/
}

void hapusdata(int x)
{
    cout<<"Data Terakhir yang anda Hapus Adalah :"<<endl;
    cout<<kirim[x].jenis_brg<<" ";
    cout<<kirim[x].berat<<" Kg";
    cout<<kirim[x].harga<<" Rp ";
    cout<<kirim[x].kota<<endl<<endl;

    cout<<"Press Any Key...";
    getch();


}

void totalHarga(int x)
{   int s=0;
   for(int i=0;i<x;i++)
    {s=s+kirim[i].harga;}
    cout << "Total Berat angkutan yang di bawa adalah " << s << " Rp" << endl;;
}


void totalberat(int x)
{   int w=0;
   for(int i=0;i<x;i++)
    {w=w+kirim[i].berat;}
    cout << "Total Berat angkutan yang di bawa adalah " << w << " kg"<<  endl;;
}

int main()
{
    int pilih;
    int datake=1;
    do
    {
        cout<<"MENU UTAMA" << endl;
        cout<<"1. Tambah Data" << endl;
        cout<<"2. Hapus Data Terakhir"<<endl;
        cout<<"3. Tampil Data"<<endl;
        cout<<"4. Total Harga"<<endl;
        cout<<"5. Total Berat"<<endl;
        cout<<"9. Keluar"<<endl;

        cout<<"Pilihan Anda [1-9] : ";
        cin>>pilih;
        if(pilih==1)
            { /*Menambah data baru diletakan di DATAKE*/
                tambahdata(datake);
                datake++;
            }
        if(pilih==2)
            { /*Menghapus Data Terakhir (DATAKE-1*/
                hapusdata(datake-1);
                datake--;
            }
        if(pilih==3){ /*Menampilkan Data mulai
                        data ke-1 hingga DATAKE*/
            tampildata(datake);
        }
        if(pilih==4){ /*Menampilkan Total harga*/
            totalHarga(datake);
        }
        if(pilih==5){ /*Menampilkan Total Angkutan*/
        totalberat(datake);
        }

    }
    while(pilih!=9);
    return 0;
}
