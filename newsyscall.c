#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(){
    printf(1,"calling the syscall procstate\n");
    procstate();
    printf(1,"done calling the syscall procstate\n");
    exit();
}