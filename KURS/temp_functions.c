#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

int validate_data_line(char *line) {
    int year, month, day, hour, minute, temperature;
    return sscanf(line, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hour, &minute, &temperature) == 6;
}

int load_data(const char *filename, TemperatureReading **data) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    char line[MAX_LINE_LENGTH];
    int size = 0;
    while (fgets(line, sizeof(line), file)) {
        if (validate_data_line(line)) {
            *data = realloc(*data, sizeof(TemperatureReading) * (size + 1));
            sscanf(line, "%d;%d;%d;%d;%d;%d",
                   &(*data)[size].year, &(*data)[size].month,
                   &(*data)[size].day, &(*data)[size].hour,
                   &(*data)[size].minute, &(*data)[size].temperature);
            size++;
        } else {
            printf("Error in line: %s", line);
        }
    }

    fclose(file);
    return size;
}

void print_month_statistics(TemperatureReading *data, int size, int month) {
    int min_temp = 100, max_temp = -100, sum_temp = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (data[i].month == month) {
            if (data[i].temperature < min_temp) min_temp = data[i].temperature;
            if (data[i].temperature > max_temp) max_temp = data[i].temperature;
            sum_temp += data[i].temperature;
            count++;
        }
    }
    if (count > 0) {
        printf("Statistics for month %d:\n", month);
        printf("Average temperature: %.2f\n", sum_temp / (float)count);
        printf("Minimum temperature: %d\n", min_temp);
        printf("Maximum temperature: %d\n", max_temp);
    } else {
        printf("No data for month %d\n", month);
    }
}

void print_year_statistics(TemperatureReading *data, int size) {
    int min_temp = 100, max_temp = -100, sum_temp = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (data[i].temperature < min_temp) min_temp = data[i].temperature;
        if (data[i].temperature > max_temp) max_temp = data[i].temperature;
        sum_temp += data[i].temperature;
        count++;
    }

    if (count > 0) {
        printf("Yearly statistics:\n");
        printf("Average temperature: %.2f\n", sum_temp / (float)count);
        printf("Minimum temperature: %d\n", min_temp);
        printf("Maximum temperature: %d\n", max_temp);
    } else {
        printf("No data for the year\n");
    }
}
