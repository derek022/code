#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}


int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

int main()
{
    int x,y;
    int num;
    int rel = 0;
    int result = 0;
    do{
        printf("请输入第一个操作数\n");
        scanf("%d",&x);
        printf("请选择【1.+ 2.- 3.* 4./】:\n");
        scanf("%d",&num);
        printf("请输入第二个操作数\n");
        scanf("%d",&y);
        switch(num)
        {
            case 1:
            rel = add(x,y);
            break;
            
            case 2:
            rel = sub(x,y);
            break;
            
            case 3:
            rel = mul(x,y);
            break;
            
            case 4:
            rel = div(x,y);
            break;
            
            default:
                printf("输入失败\n");
        }

        printf("结果：%d\n",rel);

        printf("是否继续【0.退出 1.继续】\n");

        scanf("%d",&result);
    }  while(result); 

    return 0;
}
