#include<stdio.h>
int Majority(int A[],int n);
int main()
{
	int A[7] = {1,2,3,2,4,2,2};
	int c = Majority(A,7);
	printf("The majority is %d\n",c);
}

int Majority(int A[],int n)
{
	int i = 0;
	int count = 1;
	int candidate = A[0];
	for(i = 1;i < n;i++)
	{
		if(A[i] == candidate)
		{
			count ++;
		}
		else
		{
			if(count > 0)
			{
				count --;
			}
			else
			{
				candidate = A[i];
				count = 1;
			}
		}	
	}
	if(count > 0)
		{
			for(i = count = 0;i < n;i++)
			{
				if(A[i] = candidate)
				count ++;
			}
			if(count > n/2)
			{
				return candidate;
			}
			else return -1;
		}
}
