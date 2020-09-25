#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct item {
    int weight, value;
    bool operator < (const item& other) const {
        return weight < other.weight;
    }
};

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n, totalWeight;
    cin >> n >> totalWeight;

    vector<item> items;
    for (int i = 0; i < n; ++i) {
        int weight, value;
        cin >> weight >> value;
        items.push_back({weight, value});
    }

    sort(items.begin(), items.end());
    reverse(items.begin(), items.end());

    int totalValue = 0;
    vector<int> candidates;

    for (int power = 0; power <= 30; ++power) {
        int weight = 1 << power;
        while (items.size() > 0 && items.back().weight == weight) {
            candidates.push_back(items.back().value);
            items.pop_back();
        }

        sort(candidates.begin(), candidates.end());

        if (totalWeight & weight) {
            if (candidates.size() > 0) {
                totalValue += candidates.back();
                candidates.pop_back();
            }
        }

        vector<int> newCandidates;
        while (candidates.size() >= 2) {
            int combinedValue = candidates.back();
            candidates.pop_back();
            combinedValue += candidates.back();
            candidates.pop_back();
            newCandidates.push_back(combinedValue);
        }

        if (candidates.size() >= 1) {
            newCandidates.push_back(candidates.back());
            candidates.pop_back();
        }

        candidates = newCandidates;
    }

    cout << totalValue << '\n';
    
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

map<pair<int,int> ,int> Map;

int64_t knap(vector<int> &w, vector<int> &v, int index , int maxWeight)
{
    if(index == w.size())
        return 0;

    if(Map.find({index , maxWeight}) != Map.end())
        return Map[{index , maxWeight}];

    if(w[index] > maxWeight)
        return Map[{index , maxWeight}] = knap(w , v , index+1 , maxWeight);

    int64_t option1 = knap(w , v , index + 1 , maxWeight);
    int64_t option2 = knap(w , v , index + 1 , maxWeight - w[index]) + v[index];

    return Map[{index , maxWeight}] =  max(option1 , option2);
}

int32_t main()
{
    int n,maxWeight;    cin>>n>>maxWeight;

    vector<int> v(n) , w(n);

    for(int i=0 ; i<n ; i++)
        cin>>w[i]>>v[i];

    int64_t ans = knap(w,v,0,maxWeight);

    cout<<ans;
}
*/
