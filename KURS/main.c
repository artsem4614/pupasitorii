#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

void print_usage() {
    printf("Usage: ./temp_statistics -f <filename.csv> [-m <month>] [-h]\n");
    printf("Options:\n");
    printf("  -f <filename.csv>   Input CSV file for processing\n");
    printf("  -m <month>           Display statistics for the specified month (1-12)\n");
    printf("  -h                   Show this help message\n");
}

int main(int argc, char *argv[]) {
    char *filename = NULL;
    int month = 0;

    if (argc < 2) {
        printf("You must specify a file using the -f flag\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            filename = argv[i + 1];
            i++;
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[i + 1]);
            i++;
        } else if (strcmp(argv[i], "-h") == 0) {
            print_usage();
            return 0;
        }
    }

    if (filename == NULL) {
        printf("No file specified for processing\n");
        return 1;
    }

    TemperatureReading *data = NULL;
    int size = load_data(filename, &data);
    if (size <= 0) {
        printf("Error loading data or file is empty\n");
        return 1;
    }

    if (month == 0) {
        print_year_statistics(data, size);
        for (int m = 1; m <= 12; m++) {
            print_month_statistics(data, size, m);
        }
    } else {
        print_month_statistics(data, size, month);
    }

    free(data);
    return 0;
}
