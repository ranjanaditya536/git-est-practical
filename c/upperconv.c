// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char str[100];
//     printf("Enter the string:");
//     fgets(str,sizeof(str),stdin);
//     for(int i=0;str[i]!='\0';i++){
//         str[i]=toupper(str[i]);
//     }
//     printf("The string in the uppercase is :%s",str);
//     return 0;
// }


#include<stdio.h>
int main(){
    int i=1;
    while(i<=50){
        if(i%2==0){
            printf("%d ",i);
        }
            i++;
            
        
    }
    return 0;
}