#include<stdio.h>

int main(){

    char str[100];
    // file creation
    FILE *filename = fopen("data.txt", "w");
    if(filename == NULL){
        printf("failed to open files\n");
        return 1;
    }

    // writing data to file
    const char *data[] = {"this is a sample data1\n", "this is a sample data2\n", "this is a sample data3\n"};
    for(int i = 0; i < 3; i++){
        if(fputs(data[i], filename) == EOF){
            printf("failed to write data %d\n", i + 1);
            fclose(filename);
            return 1;
        }
    }

    printf("data written successfully\n");
    fclose(filename);

    // reading data from file
    filename = fopen("data.txt", "r");
    if(filename == NULL){
        printf("failed to open file for reading\n");
        return 1;
    }

    printf("reading data from file:\n");
    // reading line by line 
    while(fgets(str, sizeof(str), filename) != NULL){
        printf("%s", str);
    }

    fclose(filename);

    return 0;

}