void quickSort(int input[],int low,int high);
int partition(int input[],int low,int high);
void swap(int *a,int *b);
int containsConsecutiveNumbers(int input[], int len){
	
    //sort the array
    int i;
    quickSort(input,0,len-1);
    for(i=0;i<len-1;i++)
    {
        if(input[i+1]-input[i]!=1)
        {
            return 0;
        }
    }
return 1;
}
void quickSort(int input[],int low,int high)
{
    if(low<high)
    {
        int pivot_index=partition(input,low,high);
        quickSort(input,low,pivot_index-1);
        quickSort(input,pivot_index+1,high);
    }
}
int partition(int input[],int low,int high)
{
    int pivot=input[high];
    int i=low-1;
    int j;
    for(j=low;j<=high-1;j++)
    {
        if(input[j]<=pivot)
        {
            i++;
            swap(&input[i],&input[j]);
        }
    }
    swap(&input[i+1],&input[high]);
    return i+1;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}