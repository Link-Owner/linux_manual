#include <stdio.h>
#include <unistd.h>


int main()
{
    char buf[1024] = {0};
    int n;
    n = readlink("/proc/self/exe", buf, sizeof(buf));
    if (n > 0 && n < sizeof(buf)) {
        printf("buf=[%s]\n", buf);
    }
    return 0;
}

/*
获取程序执行的绝对路径
例如：./readlink
/home/jun/self_search/readlink
*/
