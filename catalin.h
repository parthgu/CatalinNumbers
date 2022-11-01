#pragma once
#include <iostream>

using namespace std;

int catalinOf(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer += catalinOf(i) * catalinOf(n - 1 - i);
    }
    return answer;
}