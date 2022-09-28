#include<iostream>
using namespace std;

struct student
{
    int rno;
    char nm[25];
    char cls[10];
    int m[3];
    int tot;
    double per;
};
typedef student stud;

int main()
{
    stud s[3];
    int i,j;

    
    for( i=0;i<3;i++)
    {
        s[i].tot=0;
        

        cout<<"Enter roll no. of the student : ";
        cin>>s[i].rno;

        fflush(stdin);

        cout<<"Enter name of the student : ";
        gets(s[i].nm);

        for(j=0;j<3;j++)
        {
            cout<<"Enter 3 subjects mark out of 100 :  ";
            cin>>s[i].m[j];
            
            s[i].tot=s[i].tot+s[i].m[j];
            
        }
        s[i].per=s[i].tot/3.0;
    }
    for(i=0;i<3;i++)
    {
        cout<<endl<<"Roll no. :  "<<s[i].rno;
        cout<<endl<<"Name of the student : "<<s[i].nm;
        cout<<endl<<"Total marks of the student in 3 subjects out of 300 : "<<s[i].tot;
        cout<<endl<<"Percentage of the student : "<<s[i].per;
        if(s[i].per>=70)
            cout<<endl<<s[i].nm<<" is passed with distinction.";
        else if(s[i].per>=60)
            cout<<endl<<s[i].nm<<" is passed with first grade.";
        else if(s[i].per>=50)
            cout<<endl<<s[i].nm<<" is passed with second grade.";
        else if(s[i].per=40)
            cout<<endl<<s[i].nm<<" is passed in exam.";
        else
            cout<<endl<<s[i].nm<<" is failed in exam.";
        cout<<endl;

    }
    return 0;

    
}