// arr - input array
// size - size of array
void quickSort(int *arr,int low,int high);
int partition(int *arr,int low,int high);
void swap(int *a,int *b);
int MissingNumber(int *arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i;
	quickSort(arr,0,size-1);
    for(i=0;i<size-1;i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }
}
void quickSort(int *arr,int low,int high)
{
    if(low<high)
    {
     int pivot_index;
    pivot_index=partition(arr,low,high);
    quickSort(arr,low,pivot_index-1);
    quickSort(arr,pivot_index+1,high);
    }
}
int partition(int *arr,int low,int high)
{
    int pivot;
    pivot=arr[high];
    int i=low-1;
    int j;
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

