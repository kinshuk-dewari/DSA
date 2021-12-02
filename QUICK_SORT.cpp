import<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int random(int a[],int low ,int high)
{
int n,pvt,temp;
n=rand();
pvt=low+n%(high-low+1);
swap(&a[high], &a[pvt]);
return divide(a, low, high);
}
int divide(int a[], int low, int high)
{
int pivot, index, i;
	index = low;
	pivot = high;
	for(i=low; i < high; i++)	
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}
	swap(&a[pivot], &a[index]);
	return index;
}
int main()
{
}
