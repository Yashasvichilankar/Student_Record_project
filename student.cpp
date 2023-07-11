 #include <iostream>

using namespace std;

class Stud
{
private:
    int rollno,choice;
    string name;
    string branch;
    float per;

    public: Stud()
    {   rollno=0;
        name = "Unknown";
        branch = "invalid";
        per=0.0;
    }
    void setrollno(int Srollno)
    {
        rollno=Srollno;
    }
    void setname(string Sname)
    {
        name=Sname;
    }
    void setbranch(string Sbranch)
    {
        branch=Sbranch;
    }
    void setper(float Sper)
    {
        per=Sper;
    }
    int getrollno()
    {
        return rollno;
    }
    string getname()
    {
        return name;
    }
    string getbranch()
    {
        return branch;
    }
    float getper()
    {
        return per;
    }
};
    class Method:public Stud
{
    int choice,i,n=0;
    Stud s[50];
    public:
        void menu()
    {
        cout<<"\n:::MENU:::\n"<<endl;
        cout<<"1.Add Data"<<endl;
        cout<<"2.Show Data"<<endl;
        cout<<"3.Update"<<endl;
        cout<<"4.Search"<<endl;
        cout<<"0.Exit"<<endl;


        cout<<"\nEnter the Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            addData();
            break;
        case 2:
            showData();
            break;
        case 3:
            update();
            break;
        case 4:
            searchData();
            break;
        case 0:
            exit;
            break;
        }
    }
    void addData()
    {
    int rollno,Srollno;

    string branch,Sbranch;
    string name,Sname;
    float per,Sper;
     cout<<"\nEnter total number of students:"<<endl;
     cin>>n;
     for(i=0;i<n;i++)
        {   cout<<"\nSTUDENT's RECORD"<<i+1<<": "<<endl;
            cout<<"Enter student's rollno :";
            cin>>Srollno;
            cout<<"Enter name:";
            cin>>Sname;
            cout<<"Enter Branch : ";
            cin>>Sbranch;
            cout<<"Enter Percentage : ";
            cin>>Sper;

                s[i].setrollno(Srollno);
                s[i].setname(Sname);
                s[i].setbranch(Sbranch);
                s[i].setper(Sper);
                cout<<"\n\n\n"<<endl;
            }
           menu();  }

          void showData()
      {   int choice;
          cout<<"::::::::::: DISPLAYED YOUR DATA ::::::::::::::::"<<endl;
          cout<<"\tRollno"<<"\t\tNAME"<<"\t\tBranch"<<"Percentage"<<endl;
          for(i=0;i<n;i++)

              {
                  cout<<i+1<<".\t"<<s[i].getrollno()<<"\t\t"<<s[i].getname()<<"\t\t"<<s[i].getbranch()<<"\t\t"<<s[i].getper()<<endl<<endl;
              }
              cout<<"OKAY...."<<endl;

              menu();
      }
      void update()
      {
          int Roll,ch,a=0;
          string name, Nname;
          string branch,Nbranch;
          float per,Nper;
            cout<<"\nEnter Your roll no :";
            cin>>Roll;
            for(i=0;i<n;i++)
            {
                    if(Roll==s[i].getrollno())
                      {
                          cout<<"\tEmpID"<<"\t\tNAME"<<"\t\tBranch"<<"Percentage"<<endl;
                          cout<<i+1<<"\t\t"<<s[i].getrollno()<<"\t\t"<<s[i].getname()<<"\t\t"<<s[i].getbranch()<<"\t\t"<<s[i].getper<<endl;
                       cout<<"\nWhat do you want to update"<<endl;
                          cout<<"1. Name \n2.branch \3n.percentage"<<endl;
                          cout<<"\nEnter your Choice : ";
                          cin>>choice;

                         switch(choice)
                            {
                               case 1:
                                  cout<<"your old name: "<<s[i].getname();
                                  cout<<"\n Enter your new name?"<<endl;
                                  cin>>Nname;
                                  cout<<"Your New Name is "<<Nname<<" and Your old Name is "<<s[i].getname()<<endl<<endl;
                                  break;
                               case 2:
                                   cout<<"your old branch: "<<s[i].getbranch()<<endl;
                                   cout<<"\n Which branch do you want to choose:"<<endl;
                                  cin>>Nbranch;
                                  cout<<"Your new branch: "<<Nbranch<<" and Your old branch"<<s[i].getbranch()<<endl<<endl;
                               case 3:
                                   cout<<"your old percentage: "<<s[i].getper()<<endl;
                                   cout<<"\Enter correct percentage:"<<endl;
                                  cin>>Nper;
                                  cout<<"Your percentage: "<<Nper<<" and Your old percentage"<<s[i].getper()<<endl<<endl;
                                cout<<"Do you really want to change?"<<endl;
                                  cout<<"1. Yes \n 2. No"<<endl;
                                  cout<<"\nEnter your Choice : ";
                                  cin>>ch;
                                  switch(ch)
                                    {case 1:
                                        s[i].setper(Nper);
                                        break;
                                    case 2:
                                        menu();
                                        break;
                                     }
                                break;
                            }
                            if (choice==1)
                            {
                                cout<<"Do you really want to change?"<<endl;
                                  cout<<"1. Yes \n 2. No"<<endl;
                                  cout<<"\nEnter the Choice : ";
                                  cin>>ch;
                                  switch(ch)
                                    {
                                    case 1:
                                        s[i].setname(Nname);
                                        break;
                                    case 2:
                                        menu();
                                        break;
                                    }
                                     }
                            if (choice==2)
                            {
                                cout<<"Do you really want to change?"<<endl;
                                  cout<<"1. Yes \n 2. No"<<endl;
                                  cout<<"\nEnter the Choice : ";
                                  cin>>ch;
                                  switch(ch)
                                    {
                                    case 1:
                                        s[i].setbranch(Nbranch);
                                        break;
                                    case 2:
                                        menu();
                                        break;
                                    }
                               }       cout<<"Ok done record updated...."<<endl;
                      }
                            else
                                {  a++;}
            }
            menu();
      }
       void searchData()
      {
          int Roll,a=0;
          string Nname;
        char Nbranch;
        float Nper;
          cout<<"Serach by Rollno "<<endl;
              cout<<"Enter Roll no :";
              cin>>Roll;
              for(i=0;i<n;i++)
             {
                  if(Roll==s[i].getrollno())
                  {
                      cout<<"\n\tRoll no"<<"\t\tNAME"<<"\t\t Branch"<<"\t\t Percentage"<<endl;
                     cout<<i+1<<".\t"<<s[i].getrollno()<<"\t\t"<<s[i].getname()<<"\t\t"<<s[i].getbranch()<<s[i].getper()<<endl;
                      cout<<"\n\n\n"<<endl;
                  }
                  else
                  {
                      a++;
                  }
            }
            if(a==n) {
                      cout<<"Sorry you entered wrong rollno"<<endl;
            }
            menu();
           }
      };



int main()
{
Method m1;
cout<<"\n\t\t\t****************Student's Record*********************"<<endl;
m1.menu();
return 0;
}



