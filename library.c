#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* strchr1(const char* p1, char c) {
    while (*p1 != '\0') {
        if (*p1 == c) {
            return p1;
        }
        p1++;
    }
    return NULL;
}


char* stringncopy(char* p1,char* p2,int len)
{
    int i;
    i=0;
    while(i<len)
    {
        *(p2+i)=*(p1+i);
        i++;
    }
    return p2;
}




char* revrse(char* p1,int len){
    int i;
    char temp;
    for (i=0;i<len/2;i++)
    {
        temp=p1[i];
        p1[i]=p1[len-1-i];
        p1[len-1-i]=temp;
        
    }
    return p1;
}



char* stringcopy(char* p1,char* p2)
{
    int i;
    i=0;
    while(*(p1+i)!='\0') 
    {
    *(p2+i)=*(p1+i);
    i++;
    }
    return p2;
}




char* strcon1(char* p1,char* p2){
    int i,l1,l2;
    l1=strlen(p1);
    l2=strlen(p2);
    p1=(char*)realloc(p1,sizeof(char)*(l1+l2));
    for(i=0;i<=l2;i++){
        *(p1+l1+i)=*(p2+i);
    }
    return p1;
}
int main() {
    char *p1;
    int n1;
    char delim;
    printf("\n length of string1:");
    scanf("%d",&n1);
    p1=(char*)malloc(n1*sizeof(char));
    printf("\n input sring1:");
    scanf("%s",p1);
    printf("Enter a delimiter character: ");
    scanf("%s", &delim);
    char* token = strtok1(p1, &delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok1(NULL, &delim);
    }
    return 0;
}




