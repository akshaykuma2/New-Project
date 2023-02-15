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





char* strtok1(char* p1, const char* delim) {
    static char* next = NULL;
    if (p1 != NULL) {
        next = p1;
    }
    if (next == NULL) {
        return NULL;
    }
    char* token = next;
    while (*next != '\0') {
        if (*next == *delim) {
            *next = '\0';
            next++;
            return token;
        }
        next++;
    }
    next = NULL;
    return token;
}


