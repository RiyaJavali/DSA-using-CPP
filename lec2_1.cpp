#include<iostream>
using namespace std;

/*int main()
{
    cout<<"Riya"<<endl<<"Javali";
    cout<<"enter ur name"<<endl;
    string name;
    cin>>name;
    cout<<name;
    return 0;
}*/

//typecasting

/*int main()
{
    cout<< (2/(double)5);
}*/

/*int main()
{
    int a,b;
    cout<<"Enter 2 nos"<<endl;
    cin>>a>>b;
    cout<<"sum = "<<a+b;
}*/

//post and pre increment

/*int main()
{
    int a=5;
    int b=a++;
    cout<<"b = "<<b<<endl;//5
    cout<<"a = "<<a<<endl;//6

    int x=5;
    int y = ++x;
    cout<<"x= "<<x<<endl;//6
    cout<<"y= "<<y<<endl;//6
}*/

//calculator
int main()
{
    int a,b;
    cout<<"enter 2 values"<<endl;
    cin>>a>>b;
    char choice;
    cout<<"enter choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case '+':
        cout<<"sum is "<<a+b<<endl;
        break;

    case '-':
        cout<<"difference is "<<a-b<<endl;
        break;

    case '*':
        cout<<"product is "<<a*b<<endl;
        break;

    case '/':
        cout<<"quotient is "<<a/b<<endl;
        break;
    
    default:
        break;
    }
}