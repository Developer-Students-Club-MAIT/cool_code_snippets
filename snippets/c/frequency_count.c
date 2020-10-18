#include<stdio.h>

int main()
{
    FILE *out = fopen("frequency_count.txt", "a");  
	int i,j,l,x=0,a[200];
	char s[10000];
	scanf(" %s%n",s,&l);
	for(i=65;i<=122;i++)
	{
	    a[i] = 0;
	}
	for(i=0;i<l;i++)
	{
		a[s[i]]++;
	}
	for(i=65;i<=122;i++)
	{
		if(a[i]>0)
		{
			printf("%c %d\n",i,a[i]);
			fprintf(out, "%c %d", i, a[i]); 
		}  
	}
	fclose(out);  
  	return 0; 
}