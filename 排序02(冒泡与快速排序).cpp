#include<stdio.h>
#include<stdlib.h>
void mptsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void quicksort(int a[],int s,int t){
	int i=s,j=t;
	int temp=a[i];
	while(i<j){
		while(j>i&&a[i]>=temp)
		j--;
		a[i]=a[j];
		while(j>i&&a[i]<=temp)
		i++;
		a[j]=a[i];
	}
	a[i]=temp;
	if(s<t){
		quicksort(a,s,i-1);
		quicksort(a,i+1,t);
	} 
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[]={0,5,2,4,6,7,2,47,524,5,78,5};
	int n=12;
	mptsort(a,n);
	display(a,n);
	quicksort(a,0,12);
	display(a,n);
} 
