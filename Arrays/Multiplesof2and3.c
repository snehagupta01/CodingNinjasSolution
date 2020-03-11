int FindSum(int *input,int size){
    int i,s=0;
    for(i=0;i<size;i++)
    {
        if(input[i]%2==0||input[i]%3==0)
        {
            s+=input[i];
        }
    }
    return s;
}
