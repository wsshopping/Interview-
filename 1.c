
typedef struct Node{
	int value;
	struct Node *next;
};

 

/*1. 求单链表中结点的个数*/

int getelementnums(struct Node *node)
{
	int nums = 0;
	struct Node *p = node;
	while(p != NULL)
	{
		p = p -> next;
		nums ++
	}	
	return nums;
}

int getelementfromlist(struct Node *node, int index)
{
	int value = 0;
	struct Node *p = node;
	if(node == NULL)
	{
		return -1;	
	}
	for(i = 0; i < n -k; i ++)
	{
		p = p -> next;
		
	}
	value = p -> data;
	return value;	
}


int getmidfromlist(struct Node *node)
{
	int value = 0;
	struct Node *p = node;
	struct Node *q = node;
	if(node == NULL)
	{
		return -1;	
	}	
	while(p -> next != NULL)
	{
		while(q -> next -> next == NULL)		
		{
			value = p -> data;
			return value;
		}	
	}
}


struct Node *printValuereverse(struct Node *node)
{
	int value = 0;
	struct Node *p = node;
	if(p == NULL || p -> next == NULL)
	{
		return p;	
	}		
	struct Node *q = printValuereverse(p -> next);
	value = q -> data;
	printf("value = %d \n", value);
}

void listMerge(struct Node *pnode1, struct Node *pnode2)
{
	
	
	while(pnode2 -> next)
	{
		
		pnode1 -> next = pnode2 -> next;
		pnode1 -> data = pnode2 -> data;
		while(pnode1 -> next)	
		{
			if(pnode1 -> data, pnode1 -> next -> data)
			{
				swap(pnode1 -> data, pnode1 -> next -> data)	
			}	
		}	
		
		
	}	
	
	
}
