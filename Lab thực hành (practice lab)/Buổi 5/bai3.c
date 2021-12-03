#include<stdio.h>
#include<string.h>
void inRaTen(char chuoi[]){
    int count = 0, i = 0, j = 0, k = 0, l = 0;
    char fname[50] = "\0";
    char mname[50] = "\0";
    char lname[50] = "\0";

    for(i=0; i<strlen(chuoi); i++){
        
        if(chuoi[i] == ' ')
        count++;
        
        if(count ==0)
        fname[j++] = chuoi[i];
        if(count ==1)
        mname[k++] = chuoi[i];
        if(count ==2)
        lname[l++] = chuoi[i];
        }
    printf("\n fname : %s", fname);
    if(strlen(lname)==0){
        printf("\n lname : %s", mname);
    }
    else{
        printf("\n mname : %s", mname);
    }
    printf("\n lname : %s", lname);    
}

int main(){
    char chuoi[50];
    printf("Nhap vao chuoi: ");
    gets(chuoi);
    inRaTen(chuoi);
}