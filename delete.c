typedef struct Node
{
	int date;
	struct Node link;
}Node,*PNode;

int func(PNode H,int n);
{
	PNode p = H;
	PNode r = NULL;
	int *q = NULL;
	int m = 0;
	q = (int *)malloc(sizeof(int)*(n + 1));
	int i = 0;
	for(i = 0;i < n + 1;i ++ )
	{
		*(q + i) = 0;
	}
	while (p -> link != NULL )
	{
		m = p -> link -> data > 0? p -> link -> data,- p -> link -> data;
		if (* (q + m) < 0)
		{
			* (q + m) = 1;
			p = p -> link;
		}
		else
		{
			r = p -> link;
			p -> link = r -> link;
			free(r);
		}
	}
	free(q);
}
