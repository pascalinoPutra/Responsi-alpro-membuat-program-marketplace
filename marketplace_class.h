#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, color);
}
class Marketplace
{
private:
    string username = "putra.pvb";
    string password = "2100018495";
    string charSaldo = "Rp.500.000";
    int saldo = 500000, saldoAkhir;
    char bayar;

    int ukuranSepatu, sepatu1 = 120000, sepatu2 = 155000;
    string warnaSepatu;
    string s1 = "Rp.120.000";
    string s2 = "Rp.155.000";
    string sepatu = "P V N  K A R A  S E P A T U  S N E A K R S  W A N I T A  S P O R T";

    string search;
    int slide;

    int alamat;
    string alamatR = "JL.DEPSOS NO.24, KEL.BINTARO , KEC. PESANGRAHAN, JAKARTA SELATAN.";
    string alamatR2 = "JL.TJ GEDONG NO.16, KEL.GROGOL PETAMBURAN , KEC.GORGOL PETAMBURAN , JAKARTA BARAT.";
    string alamatR3 = "JL.PANDU NO 8A, SAWAN, KAB.BULELENG, BALI.";

    char opsiAsuransi;
    int asuransi = 2000;

    float voucher, diskon1 = 0.1, diskon2 = 0.15;
    float diskon3 = 0.15, hasilDiskon;

    int ekspedisiPengiriman, opsiPengiriman, gratisOngkir = 0;
    int jnt = 19000, jne = 25000, sicepat = 22000;
    char opsiOngkir;

    int barang, hasilAkhir, jumlahBarang, totalHarga;
    char pembayaran;
    string paymentMethod;

public:
    int input();
    int proses();
    int output();
    int checkout();
    int logoApps();
    int tampilanHomePage();
    int produkPage();
    int item();
    int tampilanToko();
} m;
