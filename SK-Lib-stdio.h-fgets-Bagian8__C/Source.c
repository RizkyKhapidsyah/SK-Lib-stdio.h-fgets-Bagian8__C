#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* stream;
    char line[100];

    if (fopen_s(&stream, "crt_fgets.txt", "r") == 0) {
        if (fgets(line, 100, stream) == NULL) {
            printf("fgets error\numChars");
        } else {
            printf("%s", line);
        }
            
        fclose(stream);
    }

    _getch();
    return 0;
}