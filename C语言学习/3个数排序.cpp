#include "祖传头文件.h"
/*
输入三个数字(空格隔开),对三个数字从小到大排序后输出.
*/
int main(int argc, char const* argv[]){
    int x,y,z;
    printf("请输入三个数字");
    scanf_s("%d%d%d",&x,&y,&z);
    if(x<y){
        int zuida=x;
        x=y;
        y=zuida;
    }
    if(x<z){
        int zuida =x;
        x=z;
        z=zuida;
    }
    if(y<z){
        int zuida =y;
        y=z;
        z=zuida;
    }
    printf("顺序\n %d\n %d\n %d\n",x,y,z);
}
//
