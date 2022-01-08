#include<stdio.h>
#include<string.h>

typedef struct sinh_vien {
    char id[20], first_name[50], last_name[50], gender[20], date_of_birth[50], class_name[50], country[50];

}sv;

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
	
	fprintf(file_path_write, "%d ", sum_dssv-1);
    fprintf(file_path_write, "%d ", sum_diem-1);
    fprintf(file_path_write, "%d", sum_dsmh-1);


	fclose (file_path_dssv);
    fclose (file_path_diem);
    fclose (file_path_dsmh);
    fclose (file_path_write);
}

//-----------------------------------------------------------------------------------------

void cau_1(sv values[], char id_class[50], int sum_dssv) {
    FILE *file_path_write = fopen("result.csv", "w");
    int i = 0;
    for (i = 0; i < sum_dssv; i++) {
        if ( strcmp(values[i].class_name, id_class) == 0 ) {
            fprintf(file_path_write,"%s,", values[i].id);
            fprintf(file_path_write,"%s,", values[i].first_name);
            fprintf(file_path_write,"%s,", values[i].last_name);
            fprintf(file_path_write,"%s,", values[i].gender);
            fprintf(file_path_write,"%s,", values[i].date_of_birth);
            fprintf(file_path_write,"%s,", values[i].class_name);
            fprintf(file_path_write,"%s", values[i].country);
        }
    }
    fclose(file_path_write);
}

void cau_2(sv values[], char id_gender[50], int sum_dssv) {
    FILE *file_path_write = fopen("result.csv", "w");
    int i, dem = 0;
    for (i = 0; i < sum_dssv; i++) {        
        if ( strcmp(values[i].gender, id_gender) == 0 ) {
            dem++;
        }
        
    }
    fprintf(file_path_write,"%d", dem);
    fclose(file_path_write);
}

void cau_5(sv values[], char id_country[50], int sum_dssv) {
    FILE *file_path_write = fopen("result.csv", "w");
    int i = 0;
    for (i = 0; i < sum_dssv; i++) {
        if ( strcmp(values[i].country, id_country) == 0 ) {
            fprintf(file_path_write,"%s,", values[i].id);
            fprintf(file_path_write,"%s,", values[i].first_name);
            fprintf(file_path_write,"%s,", values[i].last_name);
            fprintf(file_path_write,"%s,", values[i].gender);
            fprintf(file_path_write,"%s,", values[i].date_of_birth);
            fprintf(file_path_write,"%s,", values[i].class_name);
            fprintf(file_path_write,"%s", values[i].country);
        }
    }
    fclose(file_path_write);
}

void cau_4_asc(sv values[], char id_sort[50], int sum_dssv) {
    sum_dssv -= 1;
    FILE *file_path_write = fopen("result.csv", "w");
    int i, j;
	for(i=0; i<sum_dssv-1; i++){
		for(j=i+1; j<sum_dssv-1; j++){
			if(strcmp(values[i].first_name, values[j].first_name)>0){
				sv temp;
				temp = values[i];
				values[i] = values[j];
				values[j]=temp;
			}
		}
	}

    int k;
    for (k = 0; k < sum_dssv; k++) {
        fprintf(file_path_write,"%s,", values[k].id);
        fprintf(file_path_write,"%s,", values[k].first_name);
        fprintf(file_path_write,"%s,", values[k].last_name);
        fprintf(file_path_write,"%s,", values[k].gender);
        fprintf(file_path_write,"%s,", values[k].date_of_birth);
        fprintf(file_path_write,"%s,", values[k].class_name);
        fprintf(file_path_write,"%s", values[k].country);
    }
    fclose(file_path_write);
}

void cau_4_desc(sv values[], char id_sort[50], int sum_dssv) {
    sum_dssv -= 1;
    FILE *file_path_write = fopen("result.csv", "w");
    int i, j;
	for( i = 0; i < sum_dssv - 1; i++){
        for( j = i + 1; j < sum_dssv-1; j++){
			if(strcmp(values[i].first_name, values[j].first_name)<0){
				sv temp;
				temp = values[i];
				values[i] = values[j];
				values[j]=temp;
			}
		}
	}

    int k;
    for (k = 0; k < sum_dssv; k++) {
        fprintf(file_path_write,"%s,", values[k].id);
        fprintf(file_path_write,"%s,", values[k].first_name);
        fprintf(file_path_write,"%s,", values[k].last_name);
        fprintf(file_path_write,"%s,", values[k].gender);
        fprintf(file_path_write,"%s,", values[k].date_of_birth);
        fprintf(file_path_write,"%s,", values[k].class_name);
        fprintf(file_path_write,"%s", values[k].country);
    }
    fclose(file_path_write);
}

int main () {
// -------------Đếm số sinh viên---------------------
    dem_dssv();
    
    FILE *file_path_dssv = fopen("dssv.csv", "r") ;
	int sum_dssv = 0;
    char line_dssv[255];
	while (!feof(file_path_dssv)) { //khi chưa đọc hết thì tiếp tục đọc
        fgets(line_dssv, 255, file_path_dssv);
        sum_dssv++;
    }
// ---------------------------------------


    FILE *file_path = fopen("dssv.csv","r");
    char line_in_data[2000];
    int row_count = 0;
    int field_count = 0;
    sv values[999];

    int i = 0;
    while ( fgets( line_in_data, 1024, file_path ) ) {
        field_count = 0;
        row_count++;
        if ( row_count == 1 ) {
            continue;
        }

        char *field = strtok(line_in_data, ",");
        while (field) {
            if (field_count == 0)
                strcpy(values[i].id, field);

            if (field_count == 1)
                strcpy(values[i].first_name, field);

            if (field_count == 2)
                strcpy(values[i].last_name, field);

            if (field_count == 3)
                strcpy(values[i].gender, field);

            if (field_count == 4)
                strcpy(values[i].date_of_birth, field);

            if (field_count == 5)
                strcpy(values[i].class_name, field);

            if (field_count == 6)
                strcpy(values[i].country, field);

            field = strtok(NULL, ",");
            field_count++;
        }
        i++;
    }
// ------------------validate người dùng nhập vào------------------------
    char class_name[50];

    char nguoi_dung_nhap_vao[80];
    gets(nguoi_dung_nhap_vao);

    char *dau_cach = " ";
    char *command =strtok(nguoi_dung_nhap_vao, dau_cach); 
    strlwr(command);
    char *id = strtok(NULL, dau_cach);
    char *ki_tu_thua = strtok(NULL, dau_cach);

    if ( ki_tu_thua != NULL ) {
        ham_error();
        return 0;
    }

    if ( strcmp(command, "list") == 0) {
        cau_1(values, id,sum_dssv);
        
    }

    if ( strcmp(command, "count") == 0 ) {
        strlwr(id);
        InHoaKyTuDau(id);
        if ( strcmp(id, "Female") != 0 && strcmp(id, "Male") != 0 ) {
            ham_error();
            return 0;
        }
        cau_2(values, id,sum_dssv);
        return 0;
    }
 
    if ( strcmp(command, "country") == 0 ) {
        strlwr(id);
        InHoaKyTuDau(id);

        char str2[255] = "\n";
        strcat(id, str2);
        cau_5(values, id,sum_dssv);
        return 0;
    }

    if ( strcmp(command, "sort") == 0 ) {
        strlwr(id);

        if ( strcmp(id, "asc") == 0 ) {
            cau_4_asc(values, id,sum_dssv);
            return 0;
        }
        if ( strcmp(id, "desc") == 0 ) {
            cau_4_desc(values, id,sum_dssv);
            return 0;
        }else {
            ham_error();
            return 0;
        }
    }
    else {
        ham_error();
    }
}


