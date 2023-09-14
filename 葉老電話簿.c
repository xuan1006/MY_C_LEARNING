#include <stdio.h> 

int main() {
    char *fname="contacts.txt";
    FILE *inf=fopen(fname, "rt");
    char str[1000+1]={0};
    int count=0;
    char ch='M';
    int hours=0;
    int freq[2]={0};
    int sum=0;

    fgets(str, 1000, inf);
    printf("»¡©ú¤å: %s\n", str);
    while (!feof(inf)) {
        // read 6 lines a time
        printf("====================\n");
        printf("Record %d:\n", (count+1));
        fgets(str, 1000, inf);
        printf("\tName: %s", str);
        fgets(str, 1000, inf);
        printf("\tTitle: %s", str);
        fscanf(inf, "%c", &ch);
        if (ch == 'M')
            freq[0]++;
        else
            freq[1]++;
        printf("\tClass: %c\n", ch);
        fscanf(inf, "%s", str);
        printf("\tTel: %s\n", str);
        fscanf(inf, "%s", str);
        printf("\tMail: %s\n", str);
        fscanf(inf, "%d ", &hours);
        sum += hours;
        printf("\tHours: %d\n", hours);
        count++;
    }
    fclose(inf);
    printf("# of M=%d, #of C=%d\n", freq[0], freq[1]);
    printf("average hours=%f\n", sum/(float)count);

    return 0;
}
