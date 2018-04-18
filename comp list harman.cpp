 #include<iostream>
    #include<cstdio>
    #include<cstdlib>
    using namespace std;
    struct node
    {
        int info;
        struct node *next;
    }*start;
    class single_llist
    {
        public:
            node* create_node(int);
            void insert_pos();
            void delete_pos();
            void display();
            single_llist() 
            {
                start = NULL;
            }
    };
    main()
    {
        int choice, nodes, element, position, i;
        single_llist sl;
        start = NULL;
        while (1)
        {
   	      cout<<"1.Insert node "<<endl;
            cout<<"2.Delete a Particular Node"<<endl;
            cout<<"3.Display Linked List"<<endl;
            cout<<"4.Exit "<<endl;
            cout<<"Enter your choice : ";
            cin>>choice;
            switch(choice)
            {
            case 1:

                cout<<"Inserting Node at a given position:"<<endl;
                sl.insert_pos();
                cout<<endl;
                break;
            case 2:

                cout<<"Sort Link List: "<<endl;
                sl.delete_pos();
                cout<<endl;
                break;

            case 3:

                cout<<"Display elements of link list"<<endl;
                sl.display();
                cout<<endl;
                break;
            case 4:

                cout<<"Exiting..."<<endl;
                exit(1);
                break;  

            default:

                cout<<"Wrong choice"<<endl;
            }

        }

    }

     

 

    node *single_llist::create_node(int value)

    {

        struct node *temp, *s;
        temp = new(struct node); 
        if (temp == NULL)
        {
            cout<<"Memory not allocated "<<endl;
            return 0;
        }
        else
        {
            temp->info = value;
            temp->next = NULL;     
            return temp;
        }
    }
    
    void single_llist::insert_pos()
    {
        int value, pos, counter = 0; 
        cout<<"Enter the value to be inserted: ";
        cin>>value;
        struct node *temp, *s, *ptr;
        temp = create_node(value);
        cout<<"Enter the postion at which node to be inserted: ";
        cin>>pos;
        int i;
        s = start;
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos == 1)
        {
            if (start == NULL)
            {
                start = temp;
                start->next = NULL;
            }
            else
            {
                ptr = start;
                start = temp;
                start->next = ptr;
            }
        }
        else if (pos > 1  && pos <= counter)
        {
            s = start;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = temp;
            temp->next = s;
        }
        
    }
    void single_llist::delete_pos()
    {
        int pos, i, counter = 0;
        if (start == NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        cout<<"Enter the position of value to be deleted: ";
        cin>>pos;
        struct node *s, *ptr;
        s = start;
        if (pos == 1)
        {
            start = s->next;
        }
        else
        {
            while (s != NULL)
            {
                s = s->next;
                counter++;  
            }
            if (pos > 0 && pos <= counter)
            {
                s = start;
                for (i = 1;i < pos;i++)
                {
                    ptr = s;
                    s = s->next;
                }
                ptr->next = s->next;
            }
           
            free(s);
            cout<<"Element Deleted"<<endl;
        }
    }
    void single_llist::display()
    {
        struct node *temp;
        if (start == NULL)
        {
            cout<<"The List is Empty"<<endl;
            return;
        }
        temp = start;
        cout<<"Elements of list are: "<<endl;
        while (temp != NULL)
        {
            cout<<temp->info<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;

    }
