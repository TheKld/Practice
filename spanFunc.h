#include <vector>

int* span(vector<float> x, int n)
{
    int *results = new int[n];
    Stack<int> A;
    for (int i = 0; i <= n - 1; i++)
    {
        while (!A.empty() && x[A.top()] <= x[i])
        {
            A.pop();
        }
        if (A.empty()) {
            results[i] = i + 1;
        } else {
            results[i] = i - A.top();
        }
        A.push(i);
    }
    return results;
}
