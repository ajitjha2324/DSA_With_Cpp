#include <iostream>
#include <vector>
using namespace std;

vector<int> compare_Triplet(vector<int> vec1, vector<int> vec2)
{
    int aliceScore = 0;
    int bobScore = 0;
    for (int i = 0; i < vec1.size(); i++)
    {
        if (vec1[i] > vec2[i])
        {
            aliceScore++;
        }
        else if (vec1[i] < vec2[i])
        {
            bobScore++;
        }
    }
    return {aliceScore, bobScore};
}

int main()
{
    vector<int> vec1(3);
    int n = vec1.size();
    vector<int> vec2(3);
    int m = vec2.size();

    cout << "Enter Alice Points: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }
    cout << endl;
    cout << "Enter Bob Score: ";
    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }

    vector<int> result = compare_Triplet(vec1, vec2);
    cout << "Alice Score is: " << result[0] << " Bob Score is:" << result[1];
}