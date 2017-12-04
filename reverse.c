#include <stdio.h>
void reverse(char *arr, int strlen_start, int strlen_end)
{
	int re_num = (strlen_end - strlen_start) / 2;
	for (int i = 0; i <= re_num; i++)
	{
		char temp = arr[strlen_end];
		arr[strlen_end] = arr[strlen_start];
		arr[strlen_start] = temp;
		strlen_start++;
		strlen_end--;
	}
}
void Rotate_reverse_pos(char *arr, int n, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
	printf("Rotated array_reverse: ");
	for (int i = 0; i < n; i++)
		printf("%c ", arr[i]);
	printf("\n");
}
void Rotate_reverse_neg(char *arr, int n, int d)
{
	reverse(arr, n-d,n-1);
	reverse(arr, 0, n-d-1);
	reverse(arr, 0, n - 1);
	printf("Rotated array_reverse: ");
	for (int i = 0; i < n; i++)
		printf("%c ", arr[i]);
	printf("\n");

}

int main()
{
	int n = 0;
	int ch = 97;
	int d = 0;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	printf("Enter the number of string to rotate: ");
	scanf("%d", &d);
	char *alpha = (char*)malloc((sizeof(char) * n) + 1);
	char *alpha_s = (char*)malloc((sizeof(char) * n) + 1);
	for (int i = 0; i < n; i++)
		alpha[i] = ch++;
	alpha[n] = '\0';		
	for (int i = 0; i <= n; i++)
		alpha_s[i] = alpha[i];
	printf("Saved Array: ");
	for (int i = 0; i < n; i++)
		printf("%c ", alpha[i]);
	printf("\n");
	if(d > 0)
		Rotate_reverse_pos(alpha_s, n, d);
	if(d < 0)
		Rotate_reverse_neg(alpha_s, n, -d);
	return 0;
}