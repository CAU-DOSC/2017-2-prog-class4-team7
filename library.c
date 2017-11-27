#include "header.h"
Link createNode(int value)
{
	Link cur;
	cur = (Link)malloc(sizeof(Node));
	cur->value = (int *)malloc(sizeof(int));
	cur->value = value;
	cur->next = NULL;
	return cur;
}

Link append(Link head, Link cur)
{
	Link nextNode = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	nextNode->next = cur;

	return head;
}

Link printValue(Link head, int i)
{
	Link cur = head;
	int n = 0;
	while (n < i)
	{
		cur = cur->next;
		n++;
	}
	printf("%d ", cur->value);

	return head;
}
