#include <stdio.h>
#if _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

int main(){
    #if _WIN32
    Sleep(5000);
    #elif __linux__
    sleep(5);
    #endif
    puts("ÄãºÃ");
    return 0;
}