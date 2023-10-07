 //BINARY SEARCHING
 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 int arr[100];
 int n,i,count=0,left,right,mid,key;
 clrscr();
 printf("\nEnter the total number of elements you want to add:  ");
 scanf("%d",&n);
 printf("\nStart entering numbers: \n");
 for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    } 
 printf("Enter the number you want to search: ");
 scanf("%d",&key);

 left=0,right=n-1;
 
 while (left<=right)
 {
 mid=(left+right)/2;
 if (arr[mid]==key)
 {
 printf("The key is found at the %d index",mid);
 count++;
 break;
 }
 else if(arr[mid]<key)
 {
 left=mid+1;
 }
 else
 {
 right=mid-1;
 }

 }
  if(count==0)
 printf("The key is not found");
 getch();
 }

