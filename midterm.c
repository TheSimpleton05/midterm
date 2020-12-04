#include <stdio.h>
int tagihan(int x){
	int i;//variabel untuk melakukan perulangan
	int res[10000];// pendeklarasian array yang berisi subtotal
	int item;// variabel untuk jumlah barang dari satu jenis yang ingin dibeli
	char *alat[100]={"Buku Tulis","Pensil","Penghapus","Bolpoin","Tipex"};//pendeklarasian array yang berisi string macam-macam alat
	int harga[100]={5000,2500,2000,3000,3500};
	int order; // variabel kode
	int total; // variabel untuk total harga
	// perulangan untuk mengambil jenis dan jumlah barang yang ingin dibeli
	for (i=0;i<x;i++){
		printf("masukkan kode barang dan jumlahnya:");
		scanf("%d %d", &order, &item);
		if (order == 1){
			res[i] =  harga[order-1] * item;
			printf("Buku Tulis      Rp.%d      %d      Rp.%d\n\n", harga[order-1], item, res[i]);
		}else if (order == 2){
			res[i] = harga[order-1] * item;
			printf("pensil      Rp.%d      %d      Rp.%d\n\n", harga[order-1], item, res[i]);
		}else if (order == 3){
			res[i] = harga[order-1] * item;
			printf("Penghapus      Rp.%d      %d      Rp.%d\n\n", harga[order-1], item, res[i]);
		}else if (order == 4){
			res[i] = harga[order-1] * item;
			printf("Bolpoin      Rp.%d      %d      Rp.%d\n\n", harga[order-1], item, res[i]);
		}else if (order == 5){
			res[i] = harga[order-1] * item;
			printf("Tipex      Rp.%d      %d      Rp.%d\n\n", harga[order-1], item, res[i]);
		}else{
			printf("kode hanya 1 sampai 5\n\n");
			i--;
		}
	}
	//operasi penjulahan subtotal
	total = res[0] + res[1] + res[2] + res[3] + res[4];
	printf("				total : Rp.%d\n", total);
}


int main(){
	//Deklarasi variabel
	int i;
	int barang;
	char *alat[100]={"Buku Tulis","Pensil","Penghapus","Bolpoin","Tipex"};
	int *harga[100]={5000,2500,2000,3000,3500};
	int *kode[100]={1,2,3,4,5};
	//Menampilkan tampilan awal
	printf("==========TOKO ALAT TULIS=========== \n");
	printf("Daftar Barang: \n");
	printf("nama barang|  kode 	| harga (Rp) \n");
	printf("------------------------------------ \n");
	//Perulangan untuk menampilkan barang-barang
	for(i = 0; i < 5 ; ++i){
		printf("%10s | %10d | %10d\n", alat[i], kode[i], harga[i]);}
	printf("------------------------------------ \n");
	printf("==================================== \n");
	// perintah untuk mengambil nilai input 	
	do {
		printf("masukkan jumlah jenis barang yang ingin anda beli:");
		scanf("%d", &barang);
		if (barang > 5){
			printf("Maaf, kami hanya menyediakan 5 jenis barang\n\n");
		}	
	}
	while (barang>5 && barang <0);
	tagihan(barang); //fungsi tagihan
	printf("\n Terima Kasih untuk kunjungannya");
	return 0;
}
