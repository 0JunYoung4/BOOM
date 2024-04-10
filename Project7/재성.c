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
        printf("현재 보유한 동전 개수: %d \n", coins);
        printf("현재 보유한 폭탄 개수: %d\n", bombs);

        char action;
        printf("'d'키를 입력하시면 폭탄을 투하합니다. 'b'키를 입력하시면 동전 3개를 사용해 폭탄 1개를 구매합니다. \n");
        printf("버튼을 입력하세요: ");
        scanf(" %c", &action);

       

        switch (action) {
        case 'd':
            if (bombs > 0) {
                printf("폭탄을 한 개 사용하여 폭탄을 투하합니다. \n\n\n");
                bombs--;
              /*  printf("현재 폭탄 개수 : %d\n\n\n", bombs);*/
            }
            else
                printf("폭탄이 부족합니다. 폭탄을 구매하세요. \n\n\n");
            break;
        case 'b':
            if (coins >= 3) {
                printf("동전 3개를 사용하여 폭탄 1개를 구매하셨습니다. \n\n\n");
                coins -= 3;
                bombs += 1;
             /*   printf("현재 동전 개수 : %d\n", coins);
                printf("현재 폭탄 개수 : %d\n", bombs);*/
            }
            else
                printf("동전이 부족합니다. 동전을 획득한 후 다시 입력해주세요.\n\n\n");
            break;
        default:
            continue;
        }
        if (coins <= 3 && bombs == 0) {
            printf("폭탄을 구매할 동전과 폭탄이 부족해 게임이 종료됩니다. \n GAME OVER \n\n\n");
            return 0;
        }

        Time++;

        if (Time % 3 == 0) {
            printf("보석을 획득했습니다! \n");
            printf("코인 + 1\n");

            ++coins;
        }
    }
    return 0;
}
