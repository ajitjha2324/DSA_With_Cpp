#include <iostream>
#include <vector>
using namespace std;

int buy_sell(vector<int> &prices)
{
    int bestBuy = prices[0];
    int n = prices.size();
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices{4, 2, 5, 2, 6, 8};
    cout << buy_sell(prices);
} 