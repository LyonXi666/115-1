#include<stdio.h>
int main()
{
    int s=5;
    int p=1<<2;
    int o=1<<3;
    printf("停車場權限:%d\n",p);
    printf("學生有無停車場權限:%d\n",s&p);
    printf("學生有無老師辦公室權限:%d\n",s&o);
    return 0;
}
//&檢查權限
//|新增權限
//^暫停，再做一次^開啟