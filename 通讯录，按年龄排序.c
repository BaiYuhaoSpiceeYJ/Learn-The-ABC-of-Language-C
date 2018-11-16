#include <stdio.h>
int main()
{
	int n,i,m;
	printf("Input n:");
	scanf("%d",&n);
	
	struct id
	{
		char name[3];
		int age;
		char tele[15];
	};
	
	struct id id[n];
	struct id ex;
	for(i=0;i<n;i++)
	{
		printf("Input the name,age,telephone of the %d friend:",i+1);
		scanf("%s %d %s",&id[i].name,&id[i].age,&id[i].tele);
	}
	printf("after sorted:\n");
	for(m=0;m<n-1;m++)
	{
		for(i=0;i<n-1;i++)
		{
			if(id[i].age>id[i+1].age)
			{
				ex=id[i+1];
				id[i+1]=id[i];
				id[i]=ex;
			}
		}
		
	}
	for(i=0;i<n;i++)
		printf("%s %d %s\n",id[i].name,id[i].age,id[i].tele);
}
