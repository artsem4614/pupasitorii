#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

#define MAX_LINE_LENGTH 256

typedef struct {
    int year, month, day, hour, minute, temperature;
} TemperatureReading;

int load_data(const char *filename, TemperatureReading **data);
void print_month_statistics(TemperatureReading *data, int size, int month);
void print_year_statistics(TemperatureReading *data, int size);
int validate_data_line(char *line);

#endif
