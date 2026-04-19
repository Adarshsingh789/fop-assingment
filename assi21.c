#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE*Source;
FILE*Destination;
int ch; 
Source = fopen("Source.txt","r");

if(Source == NULL)
{
printf("Error opening Source file\n");
 return 1;
}

Destination = fopen("Destination.txt","w");

 if(Destination == NULL)
 {
printf("Error opening Destination file\n");
fclose(Source); 
 return 1;
 }

while((ch = fgetc(Source)) != EOF)
{
 fputc(ch,Destination);
}

 printf("File copied successfully\n");

fclose(Source);
fclose(Destination);
 return 0;
}
