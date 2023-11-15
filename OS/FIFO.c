#include <stdio.h>
#include <stdlib.h>
// FIFO - PAGE REPLACEMENT ALG.
int check(int arr_f[], int size, int data)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (data != arr_f[i])
		{
			c++;
		}
	}
	if (c == size)

		return 1;
	return 0;
}

void main()
{
	int frame, page, page_fault = 0;
	printf("Enter the total frame size : ");
	scanf("%d", &frame);
	int arr_f[frame];
	arr_f[0] = -1;
	arr_f[1] = -1;
	arr_f[2] = -1;
	printf("Page size : ");
	scanf("%d", &page);
	int arr_p[page];
	for (int i = 0; i < page; i++)
	{
		printf("Page %d : ", i + 1);
		scanf("%d", &arr_p[i]);
	}
	for (int i = 0; i < page; i++)
	{
		if (check(arr_f, frame, arr_p[i]))
		{
			arr_f[page_fault % frame] = arr_p[i];
			page_fault++;
		}
	}
	for (int i = 0; i < frame; i++)
		printf("%d ", arr_f[i]);
	printf("\nPAGE FAULT : %d\nPAGE HIT : %d\n", page_fault, page - page_fault);
}
