#<include iosteram>
#<include stdio.h>

using namespace std;

void main()
{
    int i,j,temp,a[],n;
    cout<<"enter the no of elements";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin<<a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j-i;j++)
        {
            if (a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted list";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
