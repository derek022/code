#include <stdio.h>
#include <string.h>

static char* g_name = "this is my name";
static int g_int = 20;

int main()
{
    static int c = 10;
    char name[20] = {0};
	printf("请输入密码\n");
    scanf("%s",name);
    if(strcmp(name,g_name) == 0)
    {
        printf("输入正确\n");
    }
    else
    {
        printf("输入错误\n");
    }
    return 0;
}
