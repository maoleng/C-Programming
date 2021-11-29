#include<stdio.h>
#include<string.h>
#include<ctype.h>
// 1.	input and output a string s (s = “nguyen van teo”)


char nhapVaoXau(char chuoi[]){
    printf("Nhap vao xau: ");
    gets(chuoi);
    printf("%s", chuoi);
}
// 2.	Count number of words in the s. s = “nguyen van teo” -> 3
void demSoTu(char chuoi[]){
    int i, soTu = 0;
    int n = strlen(chuoi);
    for (i = 0; i < n; i++){
        if ( isspace(chuoi[i])){
            soTu += 1;
        }
    }
    printf("\nSo tu trong xau la: %d", soTu + 1);
}

void inRaTenDau(char chuoi[]){
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

}

void inRaTenGiua(char chuoi[]){
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
    if(strlen(lname)==0){
printf("\n lname : %s", mname);
}
    else{
printf("\n mname : %s", mname);

}
}

void inRaTenCuoi(char chuoi[]){
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
    printf("\n lname : %s", lname);    
}


void vietThuong(char chuoi[]){
    int i;
    for (i = 0; chuoi[i] != '\0'; i++){
        if (chuoi[i] >= 'A' && chuoi[i] <= 'Z'){
            chuoi[i] = chuoi[i] + 32;
        }
    }
    printf("\n%s", chuoi);

}

void vietHoa(char chuoi[]){
    int i;
    for (i = 0; chuoi[i] != '\0'; i++){
        if (chuoi[i] >= 'a' && chuoi[i] <= 'z'){
            chuoi[i] = chuoi[i] - 32;
        }
    }
    printf("\n%s", chuoi);
}

void chuCaiDau(char chuoi[]){
    int i;
    for ( i = 0; chuoi[i] != '\0'; i++){
        if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') chuoi[i] += 32;
        if (chuoi[i - 1] == ' ' || i == 0){
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z')
                chuoi[i] = chuoi[i] - 32;
        }
    }
    printf("\n%s", chuoi);
}

int main(){
    char chuoi[100];
    nhapVaoXau(chuoi);
    demSoTu(chuoi);
    inRaTenDau(chuoi);
    inRaTenGiua(chuoi);
    inRaTenCuoi(chuoi);
    vietThuong(chuoi);
    vietHoa(chuoi);
    chuCaiDau(chuoi);
}