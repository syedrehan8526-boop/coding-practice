#include <stdio.h>

int main() {
    int age;
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You can Vote!\n");
    } else {
        printf("You can't Vote!\n");
    }
    
    return 0;
}
