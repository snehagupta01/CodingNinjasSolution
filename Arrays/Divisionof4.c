void change(int *arr, int ln){
 	int i,r,t;
    for(i=0;i<ln;i++)
    {
        r=arr[i]/4;
        if(r==0)
        {
            arr[i]=-1;
        }
        else
        {
            arr[i]=r;
        }
    }
    
}