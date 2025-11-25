#include <iostream>
using namespace std;
class findTheSolution
{
public:
    int result[2] = {0, 0};
    int sum{0};
    void findsum(int x, int y)
    {
        sum = x + y;
    }

    int *findanswer(int *sortedarray, int size, int target)
    {
        int left = 0;
        int right = size - 1;
        while (left < right)
        {
            findsum(sortedarray[left], sortedarray[right]);
            if (target == sum)
            {
                result[0] = sortedarray[left];
                result[1] = sortedarray[right];
                break;
            }
            else if (target < sum)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return result;
    }
};

int main()
{
    cout << "Hello my name is subhash , i am starting a journey of coding " << endl;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 3;
    // int result[2] = {0, 0};
    int *finalresult;
    findTheSolution obj;
    finalresult = obj.findanswer(array, size, target);
    for (int i = 0; i < 2; i++)
    {
        cout << " the test result is :" << finalresult[i] << endl;
    }

    return 0;
}