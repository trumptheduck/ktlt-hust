#include <stdio.h>
#include <string.h>

void calculateHeight() {
    int input = 0;
    printf("Hãy nhập chiều cao của bạn để tiếp tục(cm): ");
    scanf("%d",&input);
    printf("Xin chúc mừng!! Bạn cao %d cm!!\n",input);

}

void fortuneTelling() {
    char name[128];
    int bullshit;
    printf("Chào mừng đến với Trại tạm giam TPHCM, tôi là thầy bói Hoài Linh, chúa tể của từ thiện\n");
    printf("Hôm nay tôi sẽ xem bói cho bạn, nhưng đổi lại, bạn phải đóng từ thiện 120 tỷ để hỗ trợ cho đồng bào lũ lụt miền Trung, bạn có đồng ý không?\n");
    printf("[Yes:1/No:0]: ");
    int question1;
    scanf("%d", &question1);
    switch (question1)
    {
    case 0:
        return;
        break;
    default:
        printf("Rất tốt! Trước tiên, tên bạn là gì?\nTên tôi là ");
        scanf("%s",name);
        printf("Xin chào %s, hôm nay tôi sẽ tiên đoán...\nTên hợp pháp trên giấy khai sinh của bạn!\n", name);
        printf("Có phải… tên bạn bắt đầu bằng chữ %c \n",name[0]);
        printf("[Yes:1/Yes:0]:");
        scanf("%d",&bullshit);
        printf("Hmm… và… kết thúc bằng chữ %c!!\n",name[strlen(name)-1]);
        printf("[Yes:1/Yes:0]:");
        scanf("%d",&bullshit);
        printf("Xin chúc mừng! Tên bạn là: %s\n",name);
        break;
    }

}
int main() {
    while (1) {
        int input = 0;
        printf("Chào mừng bạn đến với một ứng dụng nhảm nhí, bạn muốn:\n");
        printf("1. Đo chiều cao của bạn\n");
        printf("2. Chơi bói toán\n");
        printf("0. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            calculateHeight();
            break;
        case 2:
            fortuneTelling();
            break;
        case 0:
            return 0;
            break;
        default:
            break;
        }
        printf("Bạn có muốn tiếp tục? [Yes: 1/ No: 0]: ");
        int isContinue;
        scanf("%d",&isContinue);
        if (!isContinue) break; 
    }

}