void sortColors(int* arr, int n){
    int i,z=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            z++;
        if(arr[i]==1)
            o++;
    }
    for(i=0;i<z;i++)
        arr[i]=0;
    for(i=z;i<z+o;i++)
        arr[i]=1;
    for(i=z+o;i<n;i++)
        arr[i]=2;

}
