#include <iostream>
#include <vector>
using namespace std;

struct graph
{
    vector<struct node> nodes;
    struct node* start;
};

struct node 
{
    int val;
    vector<int> edges; 
};


int main() 
{
    int t;
    cin >> t;
    struct graph *a = NULL;
    for(int i = 0; i < t; i++)
    {
        int nodeNum, edgeNum;
        cin >> nodeNum >> edgeNum;
        a->nodes = vector<struct node>(nodeNum);
        for(int j = 0; j < nodeNum; j++)
        {
            struct node n;
            a->nodes.push_back(n);
            n.val = i;
        }
        for(int j = 0; j < edgeNum; j++)
        {
            int ai,bi;
            cin >> ai >> bi;
            struct node nodeA = a->nodes.at(ai);
            struct node nodeB = a->nodes.at(bi);
	    	nodeA.edges.insert(nodeA.edges.begin(), bi);
	    	nodeB.edges.insert(nodeB.edges.begin(), ai);
		
        }

    }
    return 0;
}
