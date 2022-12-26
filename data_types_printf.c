#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age = 23;
    double gpa = 3.82;
    char grade = 'A';
    char phrase[] = "Giraffe Academy";  // You can't modify the value of this data type below

    printf("Hello\nWorld\n");
    printf("This is a quotation mark \"\n");

    /* Format Specifier:
    %d - integer

    int + int = int
    dec + int = dec

    int / int = int
    dec / int = dec
    int / dec = dec

    pow function returns dec
    ceil returns dec
    */

    printf("My GPA is %.2f in %s\n", gpa, phrase);
    printf("%f\n", 5 / 4.0);
    printf("%f\n", pow(2,2));
    printf("%f\n", ceil(3.5));

    /* Constants */
    
    const int SEBUAH_KONSTAN = 20; // You can't modify this thing
    // SEBUAHKONSTAN = 10; // This will throw an error if left uncommented
	
    return 0;
}
