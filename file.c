#include <stdio.h>
#include<conio.h>
struct sensor 
{
    int id;
    float reading;
    char status[10];
};

int main() 
{
    FILE *fp;
    struct sensor s[3];
    int i;

    fp = fopen("sensor_log.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter data for 3 sensors:\n");
    for (i = 0; i < 3; i++) {
        printf("\nSensor %d\n", i + 1);
        printf("Enter Sensor ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Sensor Reading: ");
        scanf("%f", &s[i].reading);
        printf("Enter Sensor Status: ");
        scanf("%s", s[i].status);

        
        fprintf(fp, "Sensor %d:\n", i + 1);
        fprintf(fp, "ID: %d\n", s[i].id);
        fprintf(fp, "Reading: %.2f\n", s[i].reading);
        fprintf(fp, "Status: %s\n\n", s[i].status);
    }

    fclose(fp);
    printf("\nData successfully saved to 'sensor_log.txt'.\n");

    return 0;
}
