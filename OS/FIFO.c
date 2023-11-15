#include <stdio.h>
int page[100], frame[10];
void main()
{
    int pages, frames, pagefalut = 0, k = 0;
    printf("Enter the no of pages: ");
    scanf("%d", &pages);
    printf("Start entering the page values: ");
    for (int i = 0; i < pages; i++)
    {
        scanf("%d", &page[i]);
    }
    printf("Enter the no. of frames: ");
    scanf("%d", &frames);
    for (int i = 0; i < frames; i++)
    {
        frame[i] = -1;
    }
    for (int i = 0; i < frames; i++)
    {
        printf("frame %d\t\t", i + 1);
    }
    printf("\n");
    for (int i = 0; i < pages; i++)
    {
        int flag = 0;
        for (int j = 0; j < frames; j++)
        {
            if (frame[j] == page[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            frame[k % frames] = page[i];
            k++;
            pagefalut++;
        }
        else
        {
            flag = 0;
        }
        for (int l = 0; l < frames; l++)
        {
            if (frame[l] == -1)
            {
                printf("-\t\t");
            }
            else
            {
                printf("%d\t\t", frame[l]);
            }
        }
        printf("\n");
    }
    printf("Total Pagefaults: %d\n",pagefalut);
}