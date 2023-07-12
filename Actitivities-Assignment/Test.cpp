#include<stdio.h>
#include<conio.h>
#include<process.h>

main()

{ FILE *fp;

struct record

{ char name[10];

int age;

};

struct record myfriend;

// Open file for writing

fp = fopen("friend.txt", "a");

int i,result;

// Check if file can be created

if(fp==NULL)

{ printf("File cannot be created!");

exit(1);

}

// clrscr();

// Enter data and write to file

for (i=1;i<=3;i++)

{ printf("Enter name: ");

scanf("%s", &myfriend.name);

printf("Enter age: ");

scanf("%d", &myfriend.age);

fprintf(fp,"%s %d", myfriend.name, myfriend.age);

}

// Close file

fclose(fp);

// clrscr();

// Open file for reading

fp = fopen("friend.txt", "r");

// Check if file can be opened for reading

if(fp==NULL)

{ printf("File cannot be opened for reading!");

exit(1);

}

printf("The data from file: \n\n");

// get data from file

while (fscanf(fp, "%s %d", &myfriend.name, &myfriend.age) != EOF)

{

// print data on display

printf("%s is % d year/s old\n", myfriend.name, myfriend.age);

}

fclose(fp);

getch();

}
