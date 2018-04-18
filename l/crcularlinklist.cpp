 #include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
typedef node *list;

int main()
{
        int dat;
        char ch;
        list first, last;
        first=NULL;
        last=NULL;
        cout<<"Do you want to enter data?(y/n)"<<endl;
        cin>>ch;
        while(ch=='y'||ch=='Y')
        {
            cout<<"Enter data"<<endl;
            cin>>dat;
            if(last==NULL)
            {
                last=new node;
                last->data=dat;
                last->next=last;
                first=last;
            }
            else
            {
                last->next=new node;
                last->next->data=dat;
                last->next->next=first;
            }
            cout<<"Enter more data?(y/n)"<<endl;
            cin>>ch;

        }
        cout<<"Displaying the ciruclar linked list"<<endl;
        //last=first;
        while(first!=last)
        
        {
            cout<<"Data is "<<last->data<<"\tAt Address "<<last->next<<endl;
            last=last->next;
        }
        return 0;
}

