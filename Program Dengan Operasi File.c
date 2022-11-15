//Nama	: I Made Arya Adi Pramana
//NIM	: 2205551016
//Kelas	: B

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int admin = 2500;
int denda = 10000;
int BPM = 5000;

int validasi_input(){
    int bilangan;
    char cr; 
	
	printf("");
    scanf("%d%c", &bilangan, &cr);

    if(cr != '\n' || bilangan <= 0){
        printf("Input bukan berupa bilangan: ", bilangan, cr);
        fflush(stdin);
        validasi_input();
        
    }else{
        return bilangan;
    }
}

int validasi_menu(){
    int bilangan;
    bilangan=validasi_input();
    
    if(bilangan >=1 && bilangan <=4){
        return bilangan;
        
    }else{
        printf("Masukan pilihan yang sesuai (1/2/3/4): ");
    	return validasi_menu();
	}
}

char exite (){
    char masukan[100];
    while(1){
        int i=0;
        int salah;
        scanf("%[^\n]",&masukan);
        fflush(stdin);
        if(masukan [i+1] =='\0'){
            if(masukan[0]=='y'  || masukan[0]=='Y' && masukan[1]=='\0'){
                return masukan[0];
            }else if (masukan[0]=='n'  || masukan [0]=='N' && masukan[1]=='\0'){
				system("cls"); 
				printf("===========================================================\n");
				printf("          TERIMA KASIH TELAH MENGGUNAKAN LAYANAN INI       \n");
		    	printf("===========================================================\n");
                return masukan[0];
            }else{
                salah=1;
            }
        }
        if(salah==1){
            printf("Silakan masukan karakter yang sesuai (Y/N): ");
        }
    }
}


void D11(){ //golongan pelanggan
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n"); //tampilan input
	printf("               RUMAH TANGGA A1 GOLONGAN D1-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){ //jika membayar sebelum batas yang ditetapkan
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (1780*total_pemakaian) + BPM + admin; //tidak dikenakan denda
			printf("===========================================================\n"); //tampilan output
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.1780\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);			
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2060*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	 
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (5880*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.5880\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.5880\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D11();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){ //jika membayar melewati batas yang ditentukan
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (1780*total_pemakaian) + BPM + admin + denda; //dikenakan denda
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.1780\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2060*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (5880*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.5880\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.5880\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D11(); //pemanggilan prosedur D11 kembali apabila pengguna salah memasukan data
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D11();
	}
}

void D12(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A1 GOLONGAN D1-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2060*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2340*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2340\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (5940*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.5940\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.5940\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D12();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2060*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2340*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2340\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (5940*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.5940\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D1-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.5940\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D12();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D12();
	}
}



void D21(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A2 GOLONGAN D2-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2340*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2340\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2620*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2620\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2620\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6000*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.6000\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D21();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2340*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2340\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2620*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2620\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2620\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6000*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.6000\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);	
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D21();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D21();
	}
}

void D22(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A2 GOLONGAN D2-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2620*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2620\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2620\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2900*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2900\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6060*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.6060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D22();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2620*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2620\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2620\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2900*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.2900\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6060*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6060\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D2-2\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.6060\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);	
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D22();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D22();
	}
}

void D31(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A3 GOLONGAN D3-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2900*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);		
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3180*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6120*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6120\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D31();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (2900*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.2900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			// Fail to open file
			if (f == NULL) {
				printf("Error opening file!\n");
				exit(1);
			}
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3180*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6120*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6120\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Golongan Pelanggan         : D3-1\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Tarif Air per (m3)         : Rp.1780\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D31();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D31();
	}
}

void D32(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A3 GOLONGAN D3-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3180*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3460*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3460\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6180*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D32();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3180*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3460*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3460\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6180*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6180\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D32();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D32();
	}
}

void D41(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A4 GOLONGAN D4-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3460*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3460\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3740*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3740\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6240*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6240\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D41();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3460*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3460\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3740*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3740\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6240*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6240\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D41.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D41();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D41();
	}
}

void D42(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A4 GOLONGAN D4-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3740*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3740\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (4020*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.4020\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6300*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6300\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D42();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (3740*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.3740\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (4020*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.4020\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6300*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6300\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D42.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D42();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D42();
	}
}

void D13(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A1 GOLONGAN D1-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6340*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9200*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9600*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9600\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D13();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6340*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6340\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9200*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9600*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9600\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D13();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D13();
	}
}

void D14(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A1 GOLONGAN D1-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			bayar = (6420*total_pemakaian) + BPM + admin;
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6420\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9350*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9350\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9650*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D14();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6420*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6420\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9350*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9350\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9650*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);	
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D14();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D14();
	}
}

void D23(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A2 GOLONGAN D2-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6490*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6490\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9500*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D23();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6490*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6490\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9500*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D23();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D23();
	}
}

void D24(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A2 GOLONGAN D2-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6570*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6570\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9650*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9950*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D24();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6570*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6570\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9650*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9950*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");	
			D24();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D24();
	}
}

void D33(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A3 GOLONGAN D3-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6640*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6640\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D33();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6640*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6640\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D33();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D33();
	}
}

void D34(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A3 GOLONGAN D3-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6720*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6720\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9950*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10250*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D34();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6720*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6720\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9950*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10250*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D34();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D34();
	}
}

void D43(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A4 GOLONGAN D4-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6790*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6790\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D43();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6790*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6790\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);	
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D43.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D43();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D43();
	}
}

void D44(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("               RUMAH TANGGA A4 GOLONGAN D4-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6870*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6870\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10250*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10550*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D44();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6870*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6870\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10250*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10550*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D4-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D44.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D44();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D44();
	}
}

void D51(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                RUMAH TANGGA B GOLONGAN D5-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6940*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6940\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D51();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (6940*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.6940\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D51.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D51();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D51();
	}
}

void D52(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                RUMAH TANGGA B GOLONGAN D5-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7020*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7020\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10550*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D52();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7020*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7020\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10550*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D52.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D52();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D52();
	}
}

void D53(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                RUMAH TANGGA B GOLONGAN D5-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7090*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7090\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11000*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D53();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7090*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7090\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11000*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D53.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D53();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D53();
	}
}

void D54(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                RUMAH TANGGA B GOLONGAN D5-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7170*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7170\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11150*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D54();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (7170*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.7170\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11150*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : D5-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-D54.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			D54();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		D54();
	}
}

void E11(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                NIAGA KECIL GOLONGAN E1-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9200*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10950*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E11();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9200*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10950*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E11.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E11();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E11();
	}
}

void E12(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                NIAGA KECIL GOLONGAN E1-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9500*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10150*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11250*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E12();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9500*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10150*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11250*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E12.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E12();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E12();
	}
}

void E14(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                NIAGA KECIL GOLONGAN E1-4 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10750*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10750\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);				FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E14();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10100*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10100\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10750*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10750\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E14.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E14();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E14();
	}
}

void E13(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                NIAGA KECIL GOLONGAN E1-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10450*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10450\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11550*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-5\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E13();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (9800*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.9800\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10450*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10450\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11550*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E1-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E13.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E13();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E13();
	}
}


void E21(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                 NIAGA SEDANG GOLONGAN E2-1 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11050*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11050\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12150*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E21();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10400*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10400\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11050*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11050\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12150*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E21.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E21();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E21();
	}
}

void E22(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                 NIAGA SEDANG GOLONGAN E2-2 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11350*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11350\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12550*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E22();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (10700*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.10700\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11350*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11350\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12550*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E22.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E22();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E22();
	}
}

void E23(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                 NIAGA SEDANG GOLONGAN E2-3 \n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11000*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11650*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13150*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E23();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11000*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11000\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11650*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13150*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E23.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E23();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E23();
	}
}

void E24(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                 NIAGA SEDANG GOLONGAN E2-4\n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11300*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11300\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11950*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13950*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E24();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11300*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11300\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11950*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13950*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E2-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13950\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E24.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E24();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E24();
	}
}

void E31(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                  NIAGA BESAR GOLONGAN E3-1\n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11600*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11600\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12250*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (14750*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.14750\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E31();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11600*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11600\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12250*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12250\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (14750*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-1\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.14750\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E31.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E31();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E31();
	}
}

void E32(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                  NIAGA BESAR GOLONGAN E3-2\n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11900*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12550*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (15050*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.15050\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E32();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (11900*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.11900\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12550*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12550\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (15050*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-2\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.15050\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E32.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E32();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E32();
	}
}

void E33(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                  NIAGA BESAR GOLONGAN E3-3\n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12200*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (15850*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.15850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E33();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12200*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12200\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (15850*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-3\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.15850\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E33.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E33();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E33();
	}
}

void E34(){
	int tanggal_pembayaran, rekening;
	char nama[15];
	int pemakaian_bulan_lalu, pemakaian_bulan_ini, bayar;
	printf("===========================================================\n");
	printf("                  NIAGA BESAR GOLONGAN E3-4\n");
	printf("===========================================================\n");
	printf("Tanggal Pembayaran              :"); scanf("%d", &tanggal_pembayaran);
	printf("Nama Pelanggan                  :"); scanf("%s", &nama);
	printf("Nomor Rekening Air              :"); scanf("%d", &rekening);
	printf("Penggunaan Air Bulan Lalu (m3)  :"); scanf("%d", &pemakaian_bulan_lalu);
	printf("Penggunaan Air Bulan Ini  (m3)  :"); scanf("%d", &pemakaian_bulan_ini);
	printf("===========================================================\n");
	system("cls");
	int total_pemakaian = pemakaian_bulan_ini-pemakaian_bulan_lalu;
	if (tanggal_pembayaran>=1 && tanggal_pembayaran<=20){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12500*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13150*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (16650*total_pemakaian) + BPM + admin;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.16650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E34();
		}
	}
	else if (tanggal_pembayaran>=21 && tanggal_pembayaran<=31 ){
		if (total_pemakaian>=0 && total_pemakaian<=10){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (12500*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.12500\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);		
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>=11 && total_pemakaian<=20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (13150*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.13150\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
		}
		else if (total_pemakaian>20){
			int total_pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;
			bayar = (16650*total_pemakaian) + BPM + admin + denda;
			printf("===========================================================\n");
			printf("               BUKTI PEMBAYARAN TAGIHAN AIR \n");
			printf("===========================================================\n");
			printf("Tanggal Pembayaran         : %d\n", tanggal_pembayaran); 
			printf("Nomor Rekening Air         : %d\n", rekening); 
			printf("Golongan Pelanggan         : E3-4\n");
			printf("Nama Pelanggan             : %s\n", nama);
			printf("Total Penggunaan Air (m3)  : %d\n", total_pemakaian); 
			printf("Tarif Air per (m3)         : Rp.16650\n"); 
			printf("Biaya BPM                  : Rp.5000\n");
			printf("Biaya admin                : Rp.2500\n");
			printf("Biaya denda                : Rp.10000\n");
			printf("___________________________________________________________\n");
			printf("Total Tagihan Air          : Rp.%d \n", bayar);	
			FILE *f;
			f = fopen("bukti-pembayaran-E34.txt", "a");
			fprintf(f, " ===========================================================\n                  BUKTI PEMBAYARAN TAGIHAN AIR\n ===========================================================\n Tanggal Pembayaran         : %d\n Nomor Rekening Air         : %d\n Nama Pelanggan             : %s\n Total Penggunaan Air (m3)  : %d\n Biaya BPM                  : Rp.5000\n Biaya admin                : Rp.2500\n Biaya denda                : Rp.10000\n ___________________________________________________________\n Total Tagihan Air          : Rp.%d \n\n", tanggal_pembayaran, rekening, nama, total_pemakaian, bayar);
			fclose(f);
		}
		else{
			printf("===========================================================\n");
			printf("Silakan masukan data yang sesuai!\n");
			E34();
		}
	}
	else{
		printf("===========================================================\n");
		printf("Silakan masukan data yang sesuai!\n");
		E34();
	}
}

void A1_bersubsidi(){ //menu pilihan golongan pelanggan
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D1-1 (Daya listrik 450 VA)\n");
	printf("2. D1-2 (Daya listrik 900 VA) \n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D11();
			break;
		case 2:
			D12();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A1_bersubsidi();
	}
}

void A2_bersubsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D2-1 (Daya listrik 450 VA)\n");
	printf("2. D2-2 (Daya listrik 900 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D21();
			break;
		case 2:
			D22();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A2_bersubsidi();
	}
}

void A3_bersubsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D3-1 (Daya listrik 450 VA)\n");
	printf("2. D3-2 (Daya listrik 900 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D31();
			break;
		case 2:
			D32();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A3_bersubsidi();
	}
}

void A4_bersubsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D4-1 (Daya listrik 450 VA)\n");
	printf("2. D4-2 (Daya listrik 900 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D41();
			break;
		case 2:
			D42();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A4_bersubsidi();
	}
}

void A1_non_subsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D1-3 (Daya listrik 1300 VA)\n");
	printf("2. D1-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D13();
			break;
		case 2:
			D14();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A1_non_subsidi();
	}
}

void A2_non_subsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D2-3 (Daya listrik 1300 VA)\n");
	printf("2. D2-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D23();
			break;
		case 2:
			D24();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A2_non_subsidi();
	}
}

void A3_non_subsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D3-3 (Daya listrik 1300 VA)\n");
	printf("2. D3-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D33();
			break;
		case 2:
			D34();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A3_non_subsidi();
	}
}

void A4_non_subsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D4-3 (Daya listrik 1300 VA)\n");
	printf("2. D4-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D43();
			break;
		case 2:
			D44();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			A4_non_subsidi();
	}
}

void B_non_subsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. D5-1 (Daya listrik 450 VA)\n");
	printf("2. D5-2 (Daya listrik 900 VA)\n");
	printf("3. D5-3 (Daya listrik 1300 VA)\n");
	printf("4. D5-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			D51();
			break;
		case 2:
			D52();
			break;
		case 3:
			D53();
			break;
		case 4:
			D54();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			B_non_subsidi();
	}
}

void niaga_kecil(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. E1-1 (Daya listrik 450 VA)\n");
	printf("2. E1-2 (Daya listrik 900 VA)\n");
	printf("3. E1-3 (Daya listrik 1300 VA)\n");
	printf("4. E1-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			E11();
			break;
		case 2:
			E12();
			break;
		case 3:
			E13();
			break;
		case 4:
			E14();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			niaga_kecil();
	}
}

void niaga_sedang(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. E2-1 (Daya listrik 450 VA)\n");
	printf("2. E2-2 (Daya listrik 900 VA)\n");
	printf("3. E2-3 (Daya listrik 1300 VA)\n");
	printf("4. E2-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			E21();
			break;
		case 2:
			E22();
			break;
		case 3:
			E23();
			break;
		case 4:
			E24();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			niaga_sedang();
	}
}

void niaga_besar(){
	int pilihan;
	printf("===========================================================\n");
	printf("                     GOLONGAN PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. E3-1 (Daya listrik 450 VA)\n");
	printf("2. E3-2 (Daya listrik 900 VA)\n");
	printf("3. E3-3 (Daya listrik 1300 VA)\n");
	printf("4. E3-4 (Daya listrik >1300 VA)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			E31();
			break;
		case 2:
			E32();
			break;
		case 3:
			E33();
			break;
		case 4:
			E34();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			niaga_besar();
	}
	
}

void menu_non_niaga_bersubsidi(){ //menu pilihan sub kelompok pelanggan
	int pilihan;
	printf("===========================================================\n");
	printf("                    NON NIAGA BERSUBSIDI \n");
	printf("===========================================================\n");
	printf("1. Rumah Tangga A1 (Lebar muka jalan 0-3,99 M)\n");
	printf("2. Rumah Tangga A2 (Lebar muka jalan 4-6,99 M)\n");
	printf("3. Rumah Tangga A3 (Lebar muka jalan 7-10 M)\n");
	printf("4. Rumah Tangga A4 (Lebar muka jalan >10 M)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			A1_bersubsidi();
			break;
		case 2:
			A2_bersubsidi();
			break;
		case 3:
			A3_bersubsidi();
			break;
		case 4:
			A4_bersubsidi();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			menu_non_niaga_bersubsidi();
	}
}

void menu_non_niaga_tidak_bersubsidi(){
	int pilihan;
	printf("===========================================================\n");
	printf("               NON NIAGA TIDAK BERSUBSIDI \n");
	printf("===========================================================\n");
	printf("1. Rumah Tangga A1 (Lebar muka jalan 0-3,99 M)\n");
	printf("2. Rumah Tangga A2 (Lebar muka jalan 4-6,99 M)\n");
	printf("3. Rumah Tangga A3 (Lebar muka jalan 7-10 M)\n");
	printf("4. Rumah Tangga A4 (Lebar muka jalan >10 M)\n");
	printf("5. Rumah Tangga B  (Rumah yang bergabung dengan usaha)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4/5):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			A1_non_subsidi();
			break;
		case 2:
			A2_non_subsidi();
			break;
		case 3:
			A3_non_subsidi();
			break;
		case 4:
			A4_non_subsidi();
			break;
		case 5:
			B_non_subsidi();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			menu_non_niaga_tidak_bersubsidi();
	}
}

void menu_niaga(){
	int pilihan;
	printf("===========================================================\n");
	printf("                           NIAGA \n");
	printf("===========================================================\n");
	printf("1. Niaga Kecil (Lebar muka jalan 0-6,99 M)\n");
	printf("2. Niaga Sedang (Lebar muka jalan 7-10 M)\n");
	printf("3. Niaga Besar (Lebar muka jalan >10 M)\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3):");
	scanf("%d", &pilihan);
	system("cls");
	switch(pilihan){
		case 1:
			niaga_kecil();
			break;
		case 2:
			niaga_sedang();
			break;
		case 3:
			niaga_besar();
			break;
		default:
			printf("Silakan masukan pilihan sesuai yang tersedia!\n");
			menu_niaga();
	}
}

void menu_utama(){ //menu tampilan kelompok pelanggan
	system("cls");
	printf("===========================================================\n");
	printf("                     KELOMPOK PELANGGAN\n");
	printf("===========================================================\n");
	printf("1. Non Niaga Bersubsidi (Daya Listrik 450-900 VA)\n");
	printf("2. Non Niaga Tidak Bersubsidi (Daya Listrik 1300->1300 VA)\n");
	printf("3. Niaga\n");
	printf("4. Keluar dari Program\n");
	printf("===========================================================\n");
	printf("Masukan pilihan anda (1/2/3/4):");
}

void instruksi(){
	printf(" ===========================================================\n");
	printf("                   PERUMDA AIR MINUM TOYANING\n");
	printf("                 PEMBAYARAN TAGIHAN REKENING AIR\n");
	printf(" ===========================================================\n");
	printf("                         PERHATIAN!\n");
	printf(" 1. Setiap pembayaran dikenakan biaya admin sebesar Rp.2500\n");
	printf(" 2. Batas pembayaran tiap bulannya ialah tanggal 20, jika\n");
	printf("    melewati batas akan dikenai denda sebesar Rp.10000\n");
	printf(" 3. Biaya BPM telah ditentukan untuk semua kelompok\n");
	printf("    dan golongan sebesar Rp.5000\n");
	printf(" 4. Dimohon untuk memilih dan mengisi data dengan benar\n");
	printf(" ===========================================================\n");
	printf("                Klik apapun untuk melanjutkan");
	getch();
	system("cls");
}

int main(){
	char karakter;
	int link;
	instruksi(); //pemanggilan prosedur intruksi
	do{
		menu_utama();
		link = validasi_menu(); //pemanggilan prosedur menu
		system("cls");
		if (link==1){
			menu_non_niaga_bersubsidi();
		}else if(link==2){
			menu_non_niaga_tidak_bersubsidi();
		}else if(link==3){
			menu_niaga();
		}else if(link==4){
			printf(" ===========================================================\n");
			printf("           TERIMA KASIH TELAH MENGGUNAKAN LAYANAN INI       \n");
		    printf(" ===========================================================\n");
		    return 0;
		    
		}else{
			printf("Masukan bilangan bulat yang sesuai (1/2/3/4): ");
		}
		printf("\n===========================================================\n");
        printf("Tekan y Jika Ingin Kembali Ke Menu Awal\n");
		printf("Tekan n Jika Ingin Keluar dari Program\n");
		printf("===========================================================\n");
        printf("Silahkan Masukan Pilihan (Y/N): ");
        karakter=exite();

    }
	while(karakter=='y'|| karakter=='Y');
    	return 0;
	}
