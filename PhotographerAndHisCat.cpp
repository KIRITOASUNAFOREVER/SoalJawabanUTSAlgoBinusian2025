#include<stdio.h>

void quickSort (int a[], int lo, int hi){ 
    int i=lo, j=hi, h; 
    int pivot=a[lo]; 
    do{ 
        while (a[i]<pivot) i++; 
        while (a[j]>pivot) j--; 
        if (i<=j) 
        { 
            h=a[i]; a[i]=a[j]; a[j]=h;
            i++; j--; 
        } 
    } while (i<=j); 
    if (lo<j) quickSort(a, lo, j); 
    if (i<hi) quickSort(a, i, hi); 
}

int findMinDiff(int arr[], int n){
   quickSort(arr,0,n-1);
   int diff = 2147483627;
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];
   return diff;
}

int main(){
   int c,n;
   scanf("%d",&c); getchar();
   
   for(int j = 0 ; j < c ; j++){
   	scanf("%d",&n); getchar();
   	int arr[n+1];
   	
   	for(int k = 0 ; k < n ; k++){
   		scanf("%d",&arr[k]);
	}
	
	int result = findMinDiff(arr, n);
	printf("%d\n",result);
   }
   
   return 0;
}
