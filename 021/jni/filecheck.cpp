#include <stdio.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<signal.h>

void check()
{
    const char* rootpath = "/data/local/";
    DIR* dir = opendir(rootpath);
    int pid = getpid();

    if(dir == NULL)
        return;

    struct dirent * currentDir;
    while((currentDir = readdir(dir))!=NULL)
    {
        printf("d_name:%s\n",currentDir->d_name);
        if(strncmp(currentDir->d_name,"android_server",14) == 0)
        {
            kill(pid,SIGKILL);
        }
    }

}

int main(int argc, char *argv[])
{
    char str[7] = {'q','i','x','v','t','u','\0'};
    char rstr[7];
    int size = sizeof(str);
    int len = strlen(str);
    check();
    int i = 0;
    for(i = 0;i<len;i++)
    {
        rstr[size-i-1]= str[i] ;
    }
    printf("resverser string: %s\n",rstr);
    puts("Hello, World!");
    return 0;
}
