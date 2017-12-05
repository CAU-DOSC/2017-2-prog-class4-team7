#include <stdio.h>
#include <time.h>

int main()
{
	int n = 0;
	int ch = 97;
	int d = 0;
	int length = 0;

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
	while (alpha[length])
		length++;
	printf("Saved Array: ");
	Print_arr(alpha, n);
	P_alpha(alpha, alpha_s, n);
	printf("Block_Swap Rotation: ");
	Block_Swap(alpha_s, n, d);
	Print_arr(alpha_s, n);
	P_alpha(alpha, alpha_s, n);
	printf("Trivial Rotation: ");
	trivial_rotation(n, d, alpha_s, length);
	Print_arr(alpha_s, n);
	P_alpha(alpha, alpha_s, n);
	printf("Juggle Rotation: ");
	juggle(alpha_s, n, d);
	Print_arr(alpha_s, n);
	P_alpha(alpha, alpha_s, n);
	printf("Reverse Rotation: ");
	if (d > 0)
		Rotate_reverse_pos(alpha_s, n, d);
	else if (d < 0)
		Rotate_reverse_neg(alpha_s, n, -d);
	Print_arr(alpha_s, n);

}