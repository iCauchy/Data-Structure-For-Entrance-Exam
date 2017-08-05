typedef int ElemType;
typedef struct LNode
{
	Elemtype data;
	struct LNode *link; 
}LNode,*LinkList;

int Search_k(LinkList list,int k)
{
	LNode *p = List -> link, *q = list ->link;
	int count = 0;
	while(p != NULL)
	{
		if(count < k)
		{
			count ++;
		}
		else q = q -> link;
		
		p = p -> link;
		
	}
	
	if (count < k)
	{
		return 0;
	}
	
	else 
	{
		printf("%d",q -> data);
		return 1;
		
	}
	
}
