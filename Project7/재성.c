#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void delay(int sec) {
//    clock_t start_time = clock();
//    while ((clock() - start_time) / CLOCKS_PER_SEC < sec);
//}


int main(void)
{


    int coins = 10;
    int bombs = 3;
    int Time = 0;
    int create = 3;

    srand((unsigned int)time(NULL));

    while (1) {
        printf("���� ������ ���� ����: %d \n", coins);
        printf("���� ������ ��ź ����: %d\n", bombs);

        char action;
        printf("'d'Ű�� �Է��Ͻø� ��ź�� �����մϴ�. 'b'Ű�� �Է��Ͻø� ���� 3���� ����� ��ź 1���� �����մϴ�. \n");
        printf("��ư�� �Է��ϼ���: ");
        scanf(" %c", &action);

       

        switch (action) {
        case 'd':
            if (bombs > 0) {
                printf("��ź�� �� �� ����Ͽ� ��ź�� �����մϴ�. \n\n\n");
                bombs--;
              /*  printf("���� ��ź ���� : %d\n\n\n", bombs);*/
            }
            else
                printf("��ź�� �����մϴ�. ��ź�� �����ϼ���. \n\n\n");
            break;
        case 'b':
            if (coins >= 3) {
                printf("���� 3���� ����Ͽ� ��ź 1���� �����ϼ̽��ϴ�. \n\n\n");
                coins -= 3;
                bombs += 1;
             /*   printf("���� ���� ���� : %d\n", coins);
                printf("���� ��ź ���� : %d\n", bombs);*/
            }
            else
                printf("������ �����մϴ�. ������ ȹ���� �� �ٽ� �Է����ּ���.\n\n\n");
            break;
        default:
            continue;
        }
        if (coins <= 3 && bombs == 0) {
            printf("��ź�� ������ ������ ��ź�� ������ ������ ����˴ϴ�. \n GAME OVER \n\n\n");
            return 0;
        }

        Time++;

        if (Time % 3 == 0) {
            printf("������ ȹ���߽��ϴ�! \n");
            printf("���� + 1\n");

            ++coins;
        }
    }
    return 0;
}
