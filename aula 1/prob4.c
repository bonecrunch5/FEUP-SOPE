#include <stdio.h> 
int main(void)  
{
    char str[30];
    int num;
    
    scanf("%[^\n]s",str);
    scanf("%i",&num);

    for(unsigned int i=0; i<num;i++){
        printf("Hello %s\n" ,str);
    }
    return 69;
}