#include <iostream>
using namespace std;

// 找最大
int findMax(double a,double b,double c)
{
    if(a >= b && a >= c) return 1;
    if(b >= a && b >= c) return 2;
    return 3;
}

// 找最小
int findMin(double a,double b,double c)
{
    if(a <= b && a <= c) return 1;
    if(b <= a && b <= c) return 2;
    return 3;
}

// 输出结果
void printResult(double a,double b,double c)
{
    int max_id = findMax(a,b,c);  // 函数套函数
    int min_id = findMin(a,b,c);

    double arr[3] = {a,b,c};

    cout << "第" << max_id << "只小猪最重，为" << arr[max_id-1] << "kg" << endl;
    cout << "第" << min_id << "只小猪最轻，为" << arr[min_id-1] << "kg" << endl;
}

void input(int i)
{
    cout<<"第"<<i<<"只"<<endl;
}

int main()
{
    double a,b,c;

    cout<<"请依次输入小猪的质量"<<endl;

    input(1); cin>>a;
    input(2); cin>>b;
    input(3); cin>>c;

    printResult(a,b,c);

    return 0;
}
