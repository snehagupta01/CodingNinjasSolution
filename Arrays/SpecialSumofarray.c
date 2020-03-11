int sum(int *arr, int size) {
    int i,s=0,r,p;
    for(i=0;i<size;i++)
    {
       s+=arr[i]; 
    }
   r=fun(s);
    return r;
}
int fun(int s)
{
    if(s<=9)
    {
        return s;
    }
    else
    {
        return fun(s%10+fun(s/10));
    }
}