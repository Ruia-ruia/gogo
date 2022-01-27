#include <stdio.h>
#include <stdlib.h>

#define PAGE_SIZE 4096

int main(int argc, char *argv[])
{
    size_t len = 20;
    unsigned int size = 4097;
  
    if (len > PAGE_SIZE - 2 - size) {
        return -1; 
    }
}
