#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "w");
    fprintf(fp, "This is file creation and writing.\n");
    fclose(fp);

    fp = fopen("file.txt", "a");
    fprintf(fp, "This line is appended to the file.\n");
    fclose(fp);

    fp = fopen("file.txt", "r");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}
