#include <iostream>
using namespace std;
int main()
{
    /*
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

    ---------------------------------------------------------------------

    // The funtion of the name of one dimensional array
    // 可以统计整个数组在内存中的长度
    // 可以获取数组在内存中的首地址
    // 数组名的用途
    // 1，可以通过数组名统计整个数组占用内存的大小

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "the space of the array" << "\n"
         << sizeof(arr) << endl;
    cout << "The space of per section" << "\n"
         << sizeof(arr[1]) << endl;
    cout << "how many sections in this array?" << "\n"
         << (sizeof(arr) / sizeof(arr[0])) << endl;

    // 2，可以通过数组名查看数组的首地址

    cout << "the address of the array" << "\n"
         << (long long)arr << endl;
    cout << "the address of the fiest section of the array" << "\n"
         << (long long)&arr[0] << endl;
    cout << "The address of the second section of the arrat" << "\n"
         << (long long)&arr[1] << endl;

    //数组名是常量，不能进行赋值操作。
    //arr = 100; not allowed

    -----------------------------------------------------------------------
    // exercise of the array
    int max;
    int arr[5] = {300, 350, 200, 400, 250};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the max is " << max << endl;
    return 0;
    int start = 0;
    int arr[5] = {1, 3, 2, 5, 4};
    cout << "逆秩前效果" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "逆秩后效果" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
    //起始元素下标
    //末尾元素下标
    int temp;//临时变量
    */
}