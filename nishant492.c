include <stdio.h>
int main()
{
int l, start, end;
clrscr()
printf("Enter lower limit: ");
scanf("%d", &start);
printf("Enter upper limit: ");
scanf("%d", &end);
printf("All odd numbers from %d to %d are: \n", start, end);
if(start%2==0)
{
start++;
}
for(l=start; l<=end; l+=2)
{
printf("%d\n", l);
 }
 getch();
 return 0;
 
