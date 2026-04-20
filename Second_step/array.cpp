#include <iostream>
using namespace std;

// 数组实现
class Array
{
public:
    Array(int size = 10) : mCur(0), mCap_(size)
    {
        mpArr = new int[mCap_];
    }
    ~Array()
    {

        delete[] mpArr;
        mpArr = nullptr;
    }

public:
    // 末尾增加元素
    void push_back(int val)
    {

        if (mCur == mCap_)
        {
            expand(2 * mCap_);
        }

        mpArr[mCur++] = val;
    }
    // 末尾删除元素
    void pop_back();
    // 按位置增加元素
    void insert(int pos, int val);
    // 按位置删除元素
    void erase(int val);
    // 元素查询
    int find(int val);

private:
    // 内部数组扩容接口
    void expand(int size)
    {
        int *p = new int[size];
        memcpy(p, mpArr, sizeof(int) * mCur);
        mpArr = p;
        mCap_ = size;
    }
    void pop_back()
    {
        if (mCur == 0)
        {
            return;
        }
        mCur--;
    }
    void insert(int pos, int val)
    {
        if (pos < 0 || pos > mCur)
        {
            return; // throw"pos invalid";
        }
        if (mCur == mCap_)
        {
            expand(2 * mCap_);
        }
        // 移动元素
        for (int i = mCur - 1; i >= pos; i--)
        {
            mpArr[i + 1] = mpArr[i];
        }
        mpArr[pos] = val;
        mCur++;
    }

private:
    int *mpArr; // 指向可扩容的数组内存
    int mCap_;  // 数组的容量
    int mCur;   // 数组有效元素的个数
};
int main()
{
}
