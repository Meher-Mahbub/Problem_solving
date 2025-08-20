#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    Heap()
    {

    }

    void up_heapify(int idx)
    {
        while(nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);

    }

    void print_heap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    void down_heapify(int idx)
    {
        while(1){

        int largest = idx;
        int l = 2*idx + 1;
        int r = 2*idx +2;

        if(r < nodes.size() && nodes[largest] < nodes[l])
        {
            largest = l;
        }
        if(l<nodes.size() && nodes[largest]<nodes[r])
        {
            largest = r;
        }
        if(largest == idx)
            break;
        swap(nodes[idx], nodes[largest]);
        idx = largest;


        }

    }

    void Delete(int idx)
    {
        if(nodes[idx] >= nodes.size())
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void build_from_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 -1;
        for(int i = last_non_leaf; i>= 0; i--)
        {
            down_heapify(i);
        }
    }


};




int main()
{
    MaxHeap h;
    vector<int>a = {1,2,3,4,10,9,8,7};
    h.build_from_array(a);
    h.print_heap();

    return 0;
}
