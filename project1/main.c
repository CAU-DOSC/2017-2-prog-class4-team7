#include "header.h"
int main()
{
	Link head = NULL;
	int arr[30] = { 0 };
	printf("정수를 입력하세요.(Ctrl-Z to terminate): ");

	int i = 0;
	while (1)
	{
		scanf("%d", &arr[i]);
		if (feof(stdin))
		{
			printf("EOF가 입력되었습니다.\n");
			break;
		}
		head = append(head, createNode(arr[i++]));
	}

	printf("Number of Info: %d\n", i);

	printf("Inverse Info: ");
	Link cur = head;
	int inverse[30] = { 0 };
	for (int n = i - 1; cur != NULL; n--)
	{
		inverse[n] = cur->value;
		cur = cur->next;
	}
	for (int m = 0; inverse[m] != 0; m++)
	{
		printf("%d ", inverse[m]);
	}

	printf("\nInfo: ");
	for (int k = 0; k < i; k++)
	{
		printValue(head, k);
	}

	printf("\nMiddle of Info: ");
	if (i % 2 == 0)
	{
		printValue(head, (i / 2) - 1);
		printValue(head, i / 2);
	}
	else
		printValue(head, i / 2);

	printf("\nOdd of Info: ");
	int cnt = 1;
	cur = head;
	while (cnt < i)
	{
		Link delete;

		if (cnt % 2 == 1)
		{
			delete = cur;
			cur = cur->next;
			free(delete);
			printf("%d ", cur->value);
			cnt++;
		}
		else
		{
			cnt++;
			cur = cur->next;
		}
	}

	printf("\n");
	return 0;
}