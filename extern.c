#include <stdio.h>


int count = 10;


void displayCount() {
    printf("Value of count = %d\n", count);
}
#include <stdio.h>


extern int count;
void displayCount();

int main() {
    printf("Accessing extern variable from another file:\n");
    displayCount();  
   
    printf("After modification in main:\n");
    displayCount();   

    return 0;
}
