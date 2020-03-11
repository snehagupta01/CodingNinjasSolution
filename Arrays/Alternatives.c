void rearrange(int *arr,int l)
{
    int n=l/2,i;
   int P[n],N[n];
    int pindex=0,nindex=0;
    for(i=0;i<l;i++)
    {
        if(arr[i]>=0)
        {
            P[pindex]=arr[i];
            pindex++;
        }
        else
        {
            N[nindex]=arr[i];
            nindex++;
        }
    }
    pindex=0;
    nindex=0;
   /* for(i=0;i<(l/2);i++)
    {
       printf("%d ",P[i]);
    }
   for(i=0;i<(l/2);i++)
    {
         printf("%d ",N[i]);
    }*/
    for(i=0;i<l;i+=2)
    {
        arr[i]=P[pindex];
        pindex++;
    }
    for(i=1;i<l;i+=2)
    {
        arr[i]=N[nindex];
        nindex++;
    }
    
}