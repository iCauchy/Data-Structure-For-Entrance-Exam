#include<stdio.h>
int M_Search(int A[],int B[],int n);
int main()
{
	int mid_two;
	int A[5] = {1,3,5,7,9};
	int B[10] = {2,4,6,8,10};
	//printf("TEST\n");
	mid_two = M_Search(A,B,5);
	printf("TEST2\n	");
	printf("mid_two_is %d\n",mid_two);
	
}

int M_Search(int A[],int B[],int n)
{
	int s1 = 0;
	int d1 = n-1;
	int m1 = 0;
	int s2 = 0;
	int d2 = n-1;
	int m2 = 0;
	while(s1 != d1||s2 != d2)
	{
		m1 = (s1 + d1)/2;
		m2 = (s2 + d2)/2;
		if(A[m1] == B[m2])
		{
			return A[m1];
		}
		if(A[m1] < B[m2])
		{
			if((s1 + d1) % 2 == 0)
			{
				s1 = m1;
				d2 = m2;
			}
			else
			{
				s1 = m1 + 1;
				s2 = m2;
				
			}
		}
		if(A[m1] > A[m2])
		{
			if((s1 + d1) % 2 == 0)
			{
				d1 = m1;
				s2 = m2;
			}
			else
			{
				s2 = m2 + 1;
				s1 = m1;
			}
		}
	}
	return A[s1] < B[s2]? A[s1]:B[s2];
}
