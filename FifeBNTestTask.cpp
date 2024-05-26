#include <iostream>
#include <vector>
#include<string>
#include<algorithm>

bool findTwoNumbers(const std::vector<int>& arr, int K, int& num1, int& num2) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == K) {
            num1 = arr[left];
            num2 = arr[right];
            return true;
        }
        else if (sum < K) {
            ++left;
        }
        else {
            --right;
        }
    }

    return false;
}


bool checkString(const std::string& str1, const std::string& str2) {

    if (str1.size() != str2.size())
    {
        return false;
    }
    std::string sortStr1 = str1;
    std::string sortStr2 = str2;
    std::sort(sortStr1.begin(), sortStr1.end());
    std::sort(sortStr2.begin(), sortStr2.end());

    if (sortStr1 == sortStr2)
    {
        return true;
    }
    else { return false; }

}
int main() {

    //Задача 1
    std::string str1 = "H ello world!!!";
    std::string str2 = "Helolwo!!rld!  ";

    /*std::string str1;
    std::string str2;
    std::cin >> str1;
    std::cin >> str2;*/

    std::cout << (checkString(str1, str2)?"true":"false") << std::endl;



    /*
    //Задача 2
    //std::vector<int> arr {1, 2, 3, 4, 5, 6, 7, 8, 9};// Набір даних 1
    std::vector<int> arr{ -10, -3, 1, 3, 6, 7, 11, 15 };// Набір даних 2
    //std::vector<int> arr {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};// Набір даних 3
    //std::vector<int> arr {0, 0, 0, 0, 0, 0, 0, 0, 0};// Набір даних 4
    //std::vector<int> arr {5, 10, 15, 20, 25, 30, 35, 40};// Набір даних 5

    int K = 0;
    int num1, num2;
    if (findTwoNumbers(arr, K, num1, num2)) {
        std::cout << "num: " << num1 << " and " << num2 << " sum " << K << std::endl;
    }
    else {
        std::cout << "false " << K << std::endl;
    }
    */

    return 0;
}