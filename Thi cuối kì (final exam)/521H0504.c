#include<stdio.h>
#include<string.h>

struct sinh_vien {
    char id[20], first_name[50], last_name[50], gender[20], date_of_birth[50], class_name[50], country[50];
};

void ham_error() {
    FILE *file_path_error = fopen("error.txt", "w");
    fprintf(file_path_error, "%s", "invalid command");
}

char InHoaKyTuDau(char s[]) {
    int i;
    if(s[0]!=' ') {
        s[0]=s[0]-32;
        
        for(i=1;i<strlen(s);i++) {
            if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' ) {
                s[i+1]=s[i+1]-32;
            }          
        }
    } else {
        for(i=0;i<strlen(s);i++) {
            if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' ) {
                s[i+1]=s[i+1]-32;
            }          
        }
    }
}

//-----------------------------------------------------------------------------------------

void cau_1(char id_class[50]) {
    FILE *file_path = fopen("dssv.csv", "r") ;

    char line[255];
    fgets(line, 255, file_path); //cắt dòng đầu


    FILE *file_path_write = fopen("result.csv", "w");
    while (!feof(file_path)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line, 255, file_path); //lấy ra toàn bộ thông tin đầu tiên và lưu vào mảng line

        char *delim = ",";

        char *id_student = strtok(line, delim);
        char *first_name = strtok(NULL , delim);
        char *last_name = strtok(NULL , delim);
        char *gender = strtok(NULL , delim);
        char *date_of_birth = strtok(NULL , delim);
        char *class_name = strtok(NULL , delim);
        char *country = strtok(NULL , delim);

        // printf("class la: %s \n", *class_name);
        if ( strcmp(class_name, id_class) == 0 ) {
            fprintf(file_path_write,"%s,", id_student);
            fprintf(file_path_write,"%s,", first_name);
            fprintf(file_path_write,"%s,", last_name);
            fprintf(file_path_write,"%s,", gender);
            fprintf(file_path_write,"%s,", date_of_birth);
            fprintf(file_path_write,"%s,", class_name);
            fprintf(file_path_write,"%s", country);
        }
        
    }

    fclose(file_path);

}


void cau_2(char id_gender[50]) {
    FILE *file_path = fopen("dssv.csv", "r") ;
    int i = 0;
    char line[255];
    fgets(line, 255, file_path); //cắt dòng đầu


    FILE *file_path_write = fopen("result.csv", "w");
    while (!feof(file_path)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line, 255, file_path); //lấy ra toàn bộ thông tin đầu tiên và lưu vào mảng line

        char *delim = ",";

        char *id_student = strtok(line, delim);
        char *first_name = strtok(NULL , delim);
        char *last_name = strtok(NULL , delim);
        char *gender = strtok(NULL , delim);
        char *date_of_birth = strtok(NULL , delim);
        char *class_name = strtok(NULL , delim);
        char *country = strtok(NULL , delim);

        // printf("class la: %s \n", *class_name);
        
        if ( strcmp(gender, id_gender) == 0 ) {
            i++;
        }
        
    }
    fprintf(file_path_write,"%d", i);
    fclose(file_path);

}

void cau_3(char id_country[50]) {
    FILE *file_path = fopen("dssv.csv", "r") ;

    char line[255];
    fgets(line, 255, file_path); //cắt dòng đầu


    FILE *file_path_write = fopen("result.csv", "w");
    while (!feof(file_path)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line, 255, file_path); //lấy ra toàn bộ thông tin đầu tiên và lưu vào mảng line

        char *delim = ",";

        char *id_student = strtok(line, delim);
        char *first_name = strtok(NULL , delim);
        char *last_name = strtok(NULL , delim);
        char *gender = strtok(NULL , delim);
        char *date_of_birth = strtok(NULL , delim);
        char *class_name = strtok(NULL , delim);
        char *country = strtok(NULL , delim);

        // printf("class la: %s \n", *class_name);
        if ( strcmp(country, id_country) == 0 ) {
            fprintf(file_path_write,"%s,", id_student);
            fprintf(file_path_write,"%s,", first_name);
            fprintf(file_path_write,"%s,", last_name);
            fprintf(file_path_write,"%s,", gender);
            fprintf(file_path_write,"%s,", date_of_birth);
            fprintf(file_path_write,"%s,", class_name);
            fprintf(file_path_write,"%s", country);
        }
        
    }

    fclose(file_path);

}

void dem_dssv() {
    FILE *file_path_dssv = fopen("dssv.csv", "r") ;
	int sum_dssv = 0;
    char line_dssv[255];
	while (!feof(file_path_dssv)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line_dssv, 255, file_path_dssv);
        sum_dssv++;
    }

    FILE *file_path_diem = fopen("diem.csv", "r") ;
    int sum_diem = 0;
    char line_diem[255];
	while (!feof(file_path_diem)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line_diem, 255, file_path_diem);
        sum_diem++;
    }

    FILE *file_path_dsmh = fopen("dsmh.csv", "r") ;
    int sum_dsmh = 0;
    char line_dsmh[255];
	while (!feof(file_path_dsmh)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line_dsmh, 255, file_path_dsmh);
        sum_dsmh++;
    }

    FILE *file_path_write = fopen("log.txt", "w");
	
	fprintf(file_path_write, "%d ", sum_dssv);
    fprintf(file_path_write, "%d ", sum_diem);
    fprintf(file_path_write, "%d", sum_dsmh);


	fclose (file_path_dssv);
    fclose (file_path_diem);
    fclose (file_path_dsmh);
    fclose (file_path_write);
}





int main() {
    dem_dssv();
    
//-------------------------------------------------
    // struct sinh_vien sv[1000];


//-------------------------------------------------
    char class_name[50];

    char nguoi_dung_nhap_vao[80];
    gets(nguoi_dung_nhap_vao);

    char *dau_cach = " ";
    char *command =strtok(nguoi_dung_nhap_vao, dau_cach); 
    strlwr(command);
    char *id = strtok(NULL, dau_cach);
    char *ki_tu_thua = strtok(NULL, dau_cach);

    
//-------------------------------------------------
    // printf("%s", ki_tu_thua);
    if ( ki_tu_thua != NULL ) {
        ham_error();
        return 0;
    }

    if ( strcmp(command, "list") == 0) {
        cau_1(id);
        return 0;
    }

    if ( strcmp(command, "count") == 0 ) {
        strlwr(id);
        InHoaKyTuDau(id);
        if ( strcmp(id, "Female") != 0 && strcmp(id, "Male") != 0 ) {
            ham_error();
            return 0;
        }
        cau_2(id);
        return 0;
    }
    
    if ( strcmp(command, "country") == 0 ) {
        strlwr(id);
        InHoaKyTuDau(id);

        char str2[255] = "\n";
        strcat(id, str2);
        cau_3(id);
        return 0;
    }
    else {
        ham_error();

    }
//    if ( strcmp(command, "sort") == 0) {
//        cau_4(sv);
//    }


}