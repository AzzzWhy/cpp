#include <iostream>
using namespace std;
//暂时没有用的全局变量
double num1;
double num2;
double num3;
//体重函数
void judg(double a,double b,double c)
//可优化，使用&&，或者考虑数组？
{
    if (a>=b)
    {
        cout<<"第一只小猪最重，为"<<a<<"kg"<<endl;
    }
    else
    {
        cout<<"第二只小猪最重，为"<<b<<"kg"<<endl;
        if(a>c)
        {
            cout<<"第三只小猪最轻，为"<<c<<"kg"<<endl;
            cout<<"第一只小猪体重为"<<a<<"kg"<<endl;
        }
    }
    if(b>c)
    {
        cout<<"第三只小猪最轻，为"<<c<<"kg"<<endl;
        cout<<"第二只小猪体重为"<<b<<"kg"<<endl;
    }

}
//输出函数
void input(int i)
{
    cout<<"第"<<i<<"只"<<endl;
}
//主函数
int main()
{
    cout<<"请依次输入小猪的质量"<<endl;
    input(1);
    double num_1;
    cin>>num_1;
    input(2);
    double num_2;
    cin>>num_2;
    input(3);
    double num_3;
    cin>>num_3;

    judg(num_1,num_2,num_3);

    return 0;
}

