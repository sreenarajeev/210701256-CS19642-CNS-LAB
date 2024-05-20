#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    printf("Enter a string : ");
    scanf("%[^\n]s",s);
    printf("%s\n",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65 && s[i]<=87){
            printf("%c",s[i]+3);
        }
        else if(s[i]>=97 && s[i]<120){
            printf("%c",s[i]+3);
        }
        else if(s[i]>=88){
            printf("%c",(s[i]-26)+3);
        }
        else if(s[i]>=120){
            printf("%c",(s[i]-26)+3);
        }
    }
return 0;
}
