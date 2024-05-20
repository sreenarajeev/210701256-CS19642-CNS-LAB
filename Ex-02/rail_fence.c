#include <stdio.h>
#include <string.h>
int main()
{
    char ip[100];
    printf("Enter input string : ");
    scanf("%s",ip);
    int key;
    printf("Enter the key value : ");
    scanf("%d",&key);
    int n = strlen(ip);
    char rail[key][n];
    char op[n];
    for(int i=0;i<key;i++){
        for(int j=0;j<n;j++){
            rail[i][j] = '-';
        }
    }
    int size=0,i=0;
    while(1){
        int j;
        for(j=0;j<key;j++){
            if(size==n) break;
            else rail[j][i++] = ip[size++];
            //WHILE IR-1 -> 0,0,  1,1 , 2,2
        }
        for(j=j-2;j>0;j--){
            if(size==n) break;
            else rail[j][i++] = ip[size++];
        }
        if(size==n) break;
    }
    size = 0;
    printf("Generated rail fence\n");
    for(int i=0;i<key;i++){
        for(int j=0;j<n;j++){
            printf("%c ",rail[i][j]);
            if(rail[i][j]!='-'){
                op[size++] = rail[i][j];
            }
        }
        printf("\n");
    }
    printf("Encrypted text : %s",op);
    // Decryption
    char decrypt[n];
    int k = 0;
    for (int i = 0; i < key; i++) {
        for (int j = 0; j < n; j++) {
            if (rail[i][j] != '-') {
                decrypt[j] = rail[i][j];
            }
        }
    }
    decrypt[n] = '\0';
    printf("\nDecrypted text : %s\n", decrypt);
    return 0;
}
