/*
    https://leetcode.com/problems/min-cost-to-connect-all-points/description/
    theuniqueFersa: YI!!
    more than 1/2 year lol (kidding) | 15/05/2025
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define endl '\n'
#define sz(v) (int)v.size()
#define fori(a,b,c) for(int a = b; a<c; a++)
#define PB push_back
using namespace std;
struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};

class Solution {
public:
    static int minCostConnectPoints(vector<vector<int>>& points) {
        int n = sz(points);
        vector<set<int>> connections(n, set<int>());
        vector<Edge> edges;
        fori(i, 0, n){
            fori(j, 0, n){
                if(connections[i].count(j) < 1 && connections[j].count(i) < 1){
                    Edge e = {i,j, abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]) };
                    edges.PB(e);
                }
            }
        }

        int cost = 0;

        vector<int> tree_id(n);
        // vector<Edge> result;

        for (int i = 0; i < n; i++)
            tree_id[i] = i;

        sort(edges.begin(), edges.end());

        for (Edge e : edges) {
            if (tree_id[e.u] != tree_id[e.v]) {//identifies cycles
                cost += e.weight;
                // result.push_back(e);

                int old_id = tree_id[e.u], new_id = tree_id[e.v];
                for (int i = 0; i < n; i++) {
                    if (tree_id[i] == old_id)
                        tree_id[i] = new_id;
                }
            }
        }
        return cost;
    }
};
    

int main(){
    vector<vector<int>> points = {{3,12},{-2,5},{-4,1}};
    cout << Solution::minCostConnectPoints(points) << endl;
    return 0;
}