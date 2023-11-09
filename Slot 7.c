////du lieu kieu mang(Array) 
////1.ex1:viet chuong trinh nhap tu 1 den 10 cua 10 sinh vien va luu tru trong mang
////a.in ra diem tu 9-10(diem gioi)
////b.in ra diem tu 7-8(diem kha)
////c.sap xep diem theo thu tu tang dan
////d.sap xep diem theo thu tu giam dan
//
//
//#include<stdio.h>
//#include<conio.h>
//#define SIZE 10
//void main(){
//	system("cls");
//	int score[SIZE],j;
//	//nhap diem 
//	int i=0;
//	for(i=0; i<SIZE; i++){
//		printf("Diem sinh vien thu %d: ",i+1); scanf("%d", &score[i]);
//	}
//	//(a)
//	printf("Sinh vien diem gioi\n");
//	for(i=0; i<SIZE; i++){
//		if(score[i]>=9){ 
//		printf("%d ", score[i]);
//		}
//	}	
//	//(b)
//	printf("Sinh vien diem kha\n");
//	for(i=0; i<SIZE; i++){
//		if(score[i]>=7 && score[i]<=8){
//			printf("%d ", score[i]);
//		}
//	}
//	//(c): sap xep tang dan va hien thi
//	for(i=0; i< SIZE; i++){
//		for(j = i+1; j<SIZE; j++){
//			if(score[i] < score[j]){
//				//doi cho
//				int temp = score[j];
//				score[j] = score[i];
//				score[i]=temp;
//			}
//		}
//	}
	//in danh sach diem
	//	printf("Danh sach diem theo thu tu tang dan:\n");
//	for(i=0; i<SIZE; i++){
//		printf("%d ", score[i]);
//	}
//	printf("Danh sach diem theo thu tu giam dan:\n");
//    for (i = 0; i < SIZE; i++) {
//        printf("%d ", score[i]);
//    }	
//}


//ex2: viet chuong trinh nhap 2 mang so nguyen tu ban phim.
//a. tinh mang thu ba la tong cua hai mang (ca ba mang co cung kich thuoc).
//b. in ra man hinh ca ba mang
//c. in ra man hinh cac gia tri chan o mang thu ba
//d. in ra man hinh cac gia tri le o mang tu ba

//#include <stdio.h>
//
//int main() {
//    int n;
//    printf("Nhap kich thuoc cua mang: "); scanf("%d", &n);
//    int mang1[n], mang2[n];
//    printf("Nhap cac phan tu cua mang thu nhat:\n");
//    for (int i = 0; i < n; i++) {
//        printf("Nhap phan tu thu %d: ", i + 1); scanf("%d", &mang1[i]);
//    }
//    printf("Nhap cac phan tu cua mang thu hai:\n");
//    for (int i = 0; i < n; i++) {
//        printf("Nhap phan tu thu %d: ", i + 1); scanf("%d", &mang2[i]);
//    }
//    int mang3[n];
//    for (int i = 0; i < n; i++) {
//        mang3[i] = mang1[i] + mang2[i];
//    }
//    printf("Mang thu nhat: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", mang1[i]);
//    }
//    printf("\n");  
//    printf("Mang thu hai: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", mang2[i]);
//    }
//    printf("\n");
//    printf("Tong cua hai mang tren: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", mang3[i]);
//    }
//    printf("\n");
//    printf("Cac gia tri chan trong mang thu ba: ");
//    for(int i = 0; i < n; i++){
//        if (mang3[i] % 2 == 0) {
//            printf("%d ", mang3[i]);
//        }
//    }
//    printf("\n");
//    printf("Cac gia tri le trong mang thu ba: ");
//    for(int i = 0; i < n; i++){
//        if (mang3[i] % 2 != 0) {
//            printf("%d ", mang3[i]);
//        }
//    }
//    printf("\n"); 
//    return 0;
//}

//ex3: viet chuong trinh nhap vao mot mang ky tu tu ban phim.In ra man hinh mang ban dau
//sap xep mang va in ra man hinh theo thu tu anphabet (A,B,C)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	system("cls");
//	char st[5];
//	int i;
//	for(i=0; i<5;i++){
//		//(1):cach 1
//		st[i] = getchar();
//		//(2):cach 2 
//		ffush(stdin);
//		//(3):cach 3
//		scanf("%c%*c",&st[i]);
//	}
//	//sap xep 
//	int SIZE = strlen(st);//lay do dai cua chuoi st hay mang st
//for...
//}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    char st[5];
    int i;
    printf("nhap chu cai: ");
    for (i = 0; i < 5; i++) {
        scanf("%c%*c", &st[i]);
    }
    int SIZE = 5; 
    int j;
    for(i = 0; i < SIZE - 1; i++){
        for (j = 0; j < SIZE - i - 1; j++) {
            if (st[j] > st[j + 1]) {
                char temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
    printf("Sap xep: ");
    for (i = 0; i < SIZE; i++) {
        printf("%c ", st[i]);
    }
    printf("\n");
    return 0;
}




























