
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // init basic prog. here!
    printf("Ban da dang nhap thanh cong. Xin chuc mung!\n");
    printf("Ban muon su dung chuc nang nao?\n");
    printf("1. rut tien\n");
    printf("2. chuyen khoan\n");
    printf("3. kiem tra so du\n");
    printf("4. kiem tra lich su giao dich\n");
    printf("Moi ban nhap lua chon (1-4): ");

    int choose = 0;
    scanf("%d", &choose);
    
	if(choose >= 1 && choose <= 4){
        switch(choose) {
            case 1:
                printf("\nGiao dich thanh cong - So tien con lai la: 4 trieu USD\n");
                break;
            case 2:
                printf("\nBan hay nhap so tai khoan can chuyen khoan!\n");
                break;
            case 3:
                printf("\nSo du trong tai khoan cua ban la: 5 trieu USD\n");
                break;
            case 4:
                printf("\nBan sech cac giao dich gan day cua ban!\n");
                break;
            default:
                printf("\nBan chon chua chinh xac!\n"); 
        }
	} else {
        // wrong choice
        fprintf(stderr, "\Lua chon cua ban khong hop le! Moi ban nhap so trong pham vi tu 1 toi 4!");
	}
	printf("\n");

	return (0);
}

