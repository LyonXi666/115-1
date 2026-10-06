#include <stdio.h>
int main()
{
    int login;
    int moneyA;
    int moneyB;
    int black;
    printf("請輸入登入狀態 (1:已登入, 0:未登入):");
    scanf("%d",&login);
    printf("請輸入帳戶餘額:");
    scanf("%d",&moneyA);
    printf("請輸入提款金額:");
    scanf("%d",&moneyB);
    printf("請輸入黑名單狀態 (1:是, 0:否):");
    scanf("%d",&black);
    if (login==1 && moneyA>=moneyB && black==0)
    {
        printf("提款成功");
    }
    else
    {
        printf("提款失敗");
    }
    return 0;
}