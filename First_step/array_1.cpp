#include <iostream>
using namespace std;
int main()
{
    // 数组
    int arr[5];
    // 给数组元素赋值
    // 1，
    // 数组元素的访问方式：数组名[下标](从0开始)
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // 访问数组元素
    cout << "First Way" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << "Second Way" << endl;
    // 2，
    int arr2[5] = {10, 20, 30};
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    // 利用循环的方式来输出数组元素
    cout << "the IF print" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    // 3,
    // 定义数组必须要有初始长度
    cout << "the Third Way" << endl;
    int arr3[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << endl;
    }
    return 0;
}