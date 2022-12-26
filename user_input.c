#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age; // Declaration without any value, but put a value on it is permissible
	double gpa; // input double di scanf memiliki format %lf
	char grade; // input nanti harus %s
	char name[20]; // specify the length
	char all[20];

	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your age is %d\n", age);

	printf("Enter you GPA: ");
	scanf("%lf", &gpa);
	printf("Your GPA is %f\n", gpa); // mau pake %lf juga ga masalah

	printf("Enter your grade: ");
	scanf("%s", &grade);
	printf("Your grade is %c\n", grade); // ga bisa kalo pake %s

	printf("Enter your name: ");
	scanf("%s", name); // ga perlu pake &. Ini kalo ada whitespace ga bakal dibaca seterusnya
	printf("Your name is %s\n", name);

	// belum berhasil di sini untuk input full string
	printf("Enter your name once again: ");
	fgets(all, 20, stdin);
	printf("Your name is %s\n", all);
	
	return 0;
}
