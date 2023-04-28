#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int array[],int low,int high){
	int j;
	int pivot=array[high];
	int i=(low-1);
	for(j=low;j<high;j++){
		if(array[j]<=pivot){
			i++;
			swap(&array[i],&array[j]);
		}
	}
	swap(&array[i+1],&array[high]);
	return (i+1);
}
void quicksort(int array[],int low,int high){
	if(low<high){
		int pi=partition(array,low,high);
		quicksort(array,low,pi-1);
		quicksort(array,pi+1,high);
	}
}
void printarray(int array[],int size){
	int i;
	for(i=0;i<size;++i){
		printf("%d ",array[i]);
	}	
	printf("\n");
}
void main(){
	int data[20],i,n;
	printf("Enter no. of elements : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter element : ");
    scanf("%d",&data[i]);
  }
	printf("Unsorted array is : ");
	printarray(data,n);
	quicksort(data,0,n-1);
	printf("Sorted array in ascending order : ");
	printarray(data,n);
}
