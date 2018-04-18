<include iostream>
<include conio.h>

using namespace std;

void main()
{
    int i,j,a[],n,temp;
    cout<<"enter the no elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element";
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((a[j]>temp)&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"after sorting";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
