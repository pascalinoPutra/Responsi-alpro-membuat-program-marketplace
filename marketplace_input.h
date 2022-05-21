int Marketplace::input()
{
START:
    m.logoApps();
    setcolor(7);
    cout << "---------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "*************************************************  L   O   G   I   N     P   A   G   E  ***********************************************" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "username\t: ";
    cin >> username;
    cout << "password\t: ";
    cin >> password;
    cout << "---------------------------------------------------------------------------------------------------------------------------------------" << endl;
    if (username == "putra.pvb" && password == "2100018495")
    {
        setcolor(9);
        cout << "login berhasil, tekan sembarang tombol untuk menuju layar berikutnya" << endl;
        getch();
        system("cls");
    home:
        m.logoApps();
        m.tampilanHomePage();
        if (search == "PVN official shop" || search == "PVN" || search == "pvn" || search == "pvn official shop")
        {
            setcolor(9);

            gotoxy(0, 29);
            cout << "                                        nama toko yang anda maksud PVN official shop ditemukan                                         ";
            gotoxy(0, 30);
            cout << "                                         tekan sembarang tombol untuk masuk ke beranda toko                                           ";
            setcolor(7);
            getch();
            system("cls");
            m.tampilanToko();
            switch (slide)
            {
            case 1:
                system("cls");
                m.tampilanToko();
                break;
            case 2:
                system("cls");
            beli:
                m.produkPage();

                setcolor(7);
                cout << "MASUKAN KODE SEPATU YANG INGIN DIBELI KEDALAM KERANJANG : ";
                cin >> barang;
                if (barang == 1)
                {
                    cout << "*KODE PRODUK SEPATU 1 DIMASUKAN KEDALAM KERANJANG " << s1 << endl;
                    cout << "=============================================================================================================================================" << endl;
                }
                else if (barang == 2)
                {
                    cout << "*KODE PRODUK SEPATU 2 DIMASUKAN KEDALAM KERANJANG " << s2 << endl;
                    cout << "=============================================================================================================================================" << endl;
                }
                cout << "MASUKAN JUMLAH PASANG SEPATU : ";
                cin >> jumlahBarang;
                cout << "=============================================================================================================================================" << endl;
                cout << "+=======+=======+================+" << endl;
                cout << "|   40  |   41  |   42  |   43   |" << endl;
                cout << "+=======+=======+================+" << endl;
                cout << " MASUKAN UKURAN SEPATU : ";
                cin >> ukuranSepatu;
                if (ukuranSepatu > 43 || ukuranSepatu < 40)
                {
                    cout << "UKURAN SEPATU TIDAK ADA!!!, MASUKAN ULANG UKURAN YANG LAIN";
                    getch();
                    system("cls");
                    goto beli;
                }
                cout << "=============================================================================================================================================" << endl;
                cout << "+=========+=========+========+" << endl;
                cout << "|  candy  |  white  |  blue  |" << endl;
                cout << "+=========+=========+========+" << endl;
                cout << "MASUKAN WARNA SEPATU : ";
                cin >> warnaSepatu;
                if (warnaSepatu != "candy" && warnaSepatu != "white" && warnaSepatu != "blue")
                {
                    cout << "WARNA SEPATU TIDAK ADA!!!, MASUKAN ULANG WARNA YANG LAIN";
                    getch();
                    system("cls");
                    goto beli;
                }
                cout << "=============================================================================================================================================" << endl;
                system("cls");
                m.checkout();
                setcolor(7);
                cout << "=============================================================================================================================================" << endl;
                cout << "+===========================================================================================================================================+" << endl;
                cout << "| 1." << alamatR << "                                                                       |" << endl;
                cout << "| 2." << alamatR2 << "                                                      |" << endl;
                cout << "| 3." << alamatR3 << "                                                                                              |" << endl;
                cout << "=============================================================================================================================================" << endl;
                cout << "PILIH ALAMAT UNTUK PENGIRIMAN : ";
                cin >> alamat;
                if (alamat == 1)
                {
                    cout << "=============================================================================================================================================" << endl;
                    cout << "ALAMAT PENGIRIMAN YANG DIGUNAKAN : \n\n";
                    cout << alamatR << endl;
                    cout << "=============================================================================================================================================" << endl;
                }
                else if (alamat == 2)
                {
                    cout << "=============================================================================================================================================" << endl;
                    cout << "ALAMAT PENGIRIMAN YANG DIGUNAKAN : \n\n";
                    cout << alamatR2 << endl;
                    cout << "=============================================================================================================================================" << endl;
                }
                else
                {
                    cout << "=============================================================================================================================================" << endl;
                    cout << "ALAMAT PENGIRIMAN YANG DIGUNAKAN : \n\n";
                    cout << alamatR3 << endl;
                    cout << "=============================================================================================================================================" << endl;
                }
                cout << "P R O D U K  Y A N G   D I  B E L I  " << endl;
                m.item();
                cout << "=================================================================================================================================================" << endl;
                cout << "A S U R A N S I  P R O D U K  [Y/N]: ";
                cin >> opsiAsuransi;
                cout << "=================================================================================================================================================" << endl;
                gotoxy(0, 47);
                cout << "K L A I M   D I S K O N   D I S I N I  : ";
                gotoxy(0, 48);
                cout << "+--------------------------------------------------------------------------------------------------------------------------------------+";
                gotoxy(0, 49);
                cout << "|";
                gotoxy(0, 50);
                cout << "|";
                gotoxy(135, 49);
                cout << "|";
                gotoxy(135, 50);
                cout << "|";
                gotoxy(12, 49);
                cout << "D I S K O N  01 (10%)          |            D I S K O N 02 (15%)          |           D I S K O N  03 (20%)          ";
                gotoxy(12, 50);
                cout << "*MIN BLJ : Rp.100.000          |           *MIN BLJ : Rp.150.000          |           *MIN BLJ : Rp.250.000          ";
                gotoxy(42, 47);
                cin >> voucher;
                gotoxy(0, 51);
                cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
                cout << "=================================================================================================================================================" << endl;
                cout << "P E M I L I H A N   P E N G I R I M A N" << endl;
                cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
                cout << "| 1. PROMO GRATIS ONGKIR (*untuk pengguna lama*)                                                                                      |" << endl;
                cout << "| 2. J&T                                                                                                                              |" << endl;
                cout << "| 3. JNE                                                                                                                              |" << endl;
                cout << "| 4. SICEPAT                                                                                                                          |" << endl;
                cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
                cout << "PENGIRIMAN YANG DIPILIH : ";
                cin >> opsiPengiriman;
                cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
                cout << "|                                                           P E M B A Y A R A N                                                       |" << endl;
                cout << "| 1.SHOPEEPAY   2.INDOMARET  3.TRANSFER                                                                                                                     |" << endl;
                cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
                cout << " PEMBAYRAN VIA : ";
                cin >> paymentMethod;
                break;
            case 3:
                system("cls");
                m.tampilanToko();
                break;
            case 4:
                system("cls");
                m.tampilanToko();
                break;
            default:
                cout << "Tampilan tidak ada !!!";
                break;
            }
        }
        else
        {

            gotoxy(0, 29);
            setcolor(4);
            cout << "                                                nama toko tidak dapat ditemukan !!!                                                    ";
            setcolor(7);
            getch();
            system("cls");
            goto home;
        }
    }
    else
    {
        setcolor(4);
        cout << "Login gagal, username atau password salah !!!, tekan sembarang tombol untuk mengulangnya lagi" << endl;
        setcolor(7);
        getch();
        system("cls");
        goto START;
    }
}