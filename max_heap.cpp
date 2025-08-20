#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;

    Heap()
    {
       // constructor
    }

    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1); // last idx( n.size()-1 ) theke up_heapify start korbo

    }

    void print_heap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    // O(logn)
    void down_heapify(int idx)
    {
        while(1)   //loop cholte thakbe....
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest == idx)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    // O(logn)
    void Delete(int idx)
    {
        if(idx >= nodes.size())
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    int ExtractMax()
    {
        int ret = nodes[0];
        Delete(0);
        return ret;
    }

};


int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    heap.print_heap();

    //heap.Delete(0);
    //heap.print_heap();

    cout<<"Max element = "<<heap.getMax()<<"\n";

    cout<<"Max element = "<<heap.ExtractMax()<<"\n";
    cout<<"Max element = "<<heap.ExtractMax()<<"\n";

    return 0;

}
