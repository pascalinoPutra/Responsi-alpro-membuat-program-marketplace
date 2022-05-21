int Marketplace::proses()
{
    // asuransi
    if (opsiAsuransi == 'y' || opsiAsuransi == 'Y')
    {
        totalHarga = barang + asuransi;
    }
    // voucher
    if (voucher == 1 && barang >= 100000)
    {
        setcolor(9);
        cout << "diskon 01 aktif" << endl;
        setcolor(7);

        voucher = diskon1;
        hasilDiskon = barang * voucher;
    }
    else if (voucher == 2 && barang >= 150000)
    {
        setcolor(9);
        cout << "diskon 03 aktif" << endl;
        setcolor(7);
        voucher = diskon2;
    }
    else if (voucher == 3 && barang >= 250000)
    {
        setcolor(9);
        cout << "diskon 03 aktif" << endl;
        setcolor(7);
        voucher = diskon3;
    }
    else
    {
        setcolor(4);
        cout << "tidak bisa digunakan" << endl;
        setcolor(7);
    }
    // pengiriman
    if (opsiPengiriman == 1)
    {
        cout << "apakah anda pengguna lama [y/n] : ";
        cin >> opsiOngkir;
        if (opsiOngkir == 'y' || opsiOngkir == 'Y')
        {
            setcolor(9);
            cout << "anda menggunakan gratis ongkir, Estimasi tiba 3 hari" << endl;
            setcolor(7);
            ekspedisiPengiriman = gratisOngkir;
            system("cls");
        }
        if (opsiOngkir == 'n' || opsiOngkir == 'N')
        {
            setcolor(4);
            cout << "promo tidak bisa digunakan";
            setcolor(7);
            ekspedisiPengiriman = gratisOngkir;
        }
    }
    else if (opsiPengiriman == 2)
    {
        ekspedisiPengiriman = jnt;
    }
    else if (opsiPengiriman == 3)
    {
        ekspedisiPengiriman = jne;
    }
    else
    {
        ekspedisiPengiriman = sicepat;
    }

    // payment method
    if (paymentMethod == "SHOPEEPAY")
    {
        setcolor(9);
        cout << "PEMBAYARAN MENGGUNAKAN SHOPEEPAY";
        setcolor(7);
        paymentMethod = "SHOPEEPAY";
        system("cls");
    }
    else if (paymentMethod == "INDOMARET")
    {
        setcolor(9);
        cout << "PEMBAYARAN MENGGUNAKAN INDOMARET";
        setcolor(7);
        paymentMethod = "INDOMARET";
    }
    else if (paymentMethod == "TRANSFER")
    {
        setcolor(9);
        cout << "PEMBAYARAN MENGGUNAKAN TRANSFER";
        setcolor(7);
        paymentMethod = "TRANSFER";
    }
    barang = barang;

    hasilAkhir = barang - hasilDiskon - ekspedisiPengiriman;
    saldoAkhir = saldo - hasilAkhir;
}
