#include <stdio.h>
#include <string.h>
#include <unistd.h>

// 针对android server的动态反调试
void coursecheck()
{
    const int bufsize = 1024;
    char fileName[bufsize];
    char line[bufsize];
    char name[bufsize];
    char nameLine[bufsize];

    int pid = getpid();
    sprintf(fileName,"/proc/%d/status",pid);

    FILE*fd = fopen(fileName,"r");
    if(fd!=NULL)
    {
        while(fgets(line,bufsize,fd)){
            printf("line:%s\n",line);
            if(strstr(line,"TracerPid") != NULL)
            {
                int statue = atoi(&line[10]);
                printf("statue:%d\n",statue);
                if(statue!=0)
                {
                    sprintf(name,"/proc/%d/cmdline",statue);
                    FILE* fdName = fopen(name,"r");
                    printf("%s\n",name);
                    if(fdName!=NULL)
                    {
                        while(fgets(nameLine,bufsize,fdName))
                        {
                            if(strstr(nameLine,"android_server")!=NULL)
                            {
                                int ret = kill(pid,SIGKILL);
                            }
                        }
                    }

                    fclose(fdName);
                }
            }
        }
    }
    fclose(fd);
}

void order(int* p,int n)
{
    int i,j;
    int k;
    for(i = 0;i<n-1;i++)
    {
        for(j = 0;j<n-1-i;j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                k = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = k;
            }
        }
    }

    printf("排序后的数组为：");
    for(i = 0;i<n;i++)
    {
        if(i%5==0)
            printf("\n");
        
        printf("%4d",*(p+i));
    }

    printf("\n");
}


int main()
{
    int n;
    coursecheck();
    printf("请输入数组元素的个数：");
    scanf("%d",&n);
    int sum[n];
    printf("请输入各个元素：");
    int i ;
    
    for(i = 0;i<n;i++)
    {
        scanf("%d",sum + i);
    }

    order(sum,i);
    return 0;
}
