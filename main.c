#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

typedef struct Sinhvien {
    int ID;
    char Name[100];
    int PhoneNum;
} Sinhvien;


void HienthiSinhvien() {
    Sinhvien sinhvienArray[10];
    printf("%-10s%-20s%-10s%-20s%-10s%-20s", "STT", "Mã sinh viên", "|", "Tên sinh viên", "|",
           "Điện thoại" "\n");
    for (int j = 0; j < 10; ++j) {
        printf("%-10d%-20s%-10s%-20s%-10s%-20s", j + 1, sinhvienArray[j].ID, "|", sinhvienArray[j].Name,
               "|", sinhvienArray[j].PhoneNum);
    }
};

void Addnew(){
    //    File
    FILE *fp = fopen("danhsachsinhvien.txt", "r");
    Sinhvien sinhvienArray[10];
    printf("Vui long nhap thong tin sinh vien.\n");
    printf("Nhap ID sinh vien: ");
    scanf("%d", &sinhvienArray->ID);
    getchar();
    printf("\nNhap ten: ");
    fgets(sinhvienArray->Name, 100, stdin);
    printf("\nNhap so dien thoai sinh vien: \n");
    scanf("%d", &sinhvienArray->PhoneNum);
};

int main() {
    int menuchoice;
    while (1 == 1) {
        printf("\n------ MENU ------\n");
        printf("1. Thêm mới sinh viên.\n");
        printf("2. Hiển thị danh sách sinh viên.\n");
        printf("3. Lưu danh sách sinh viên ra file.\n");
        printf("4. Đọc danh sách sinh viên từ file.\n");
        printf("5. Thoát chương trình.\n");
        printf("Vui long nhap lua chon cua ban (1-5): ");
        scanf("%d", &menuchoice);

        switch (menuchoice) {
            //Thêm mới sinh viên:
            case 1: {
                Addnew();
                break;
            }
                //Hiển thị danh sách sinh viên
            case 2: {
                HienthiSinhvien();
                break;
            }
                //Lưu danh sách sinh viên ra file
            case 3: {
                printf("Lưu danh sách sinh viên ra file");
                break;
            }
                //Đọc d6nh s2ch sinh viên từ file
            case 4: {
                printf("Đọc danh sách sinh viên từ file");
                break;
            }
        }
        if (menuchoice == 5) {
            printf("Ket thuc chuong trinh!");
            break;
        }
    }
    return 0;
}


