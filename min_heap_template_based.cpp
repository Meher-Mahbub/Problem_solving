#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MinHeap {
public:
    vector<T> nodes;

    MinHeap() {
        // Constructor
    }

    // Up-heapify to maintain the min-heap property
    void up_heapify(int idx) {
        while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2]) {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2; // Move to the parent
        }
    }

    // Insert a new element into the heap
    void insert(T x) {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1); // Start up-heapify from the last index
    }

    // Down-heapify to maintain the min-heap property
    void down_heapify(int idx) {
        while (1) {
            int smallest = idx;
            int l = 2 * idx + 1; // Left child
            int r = 2 * idx + 2; // Right child

            if (l < nodes.size() && nodes[l] < nodes[smallest]) {
                smallest = l;
            }
            if (r < nodes.size() && nodes[r] < nodes[smallest]) {
                smallest = r;
            }
            if (smallest == idx)
                break;

            swap(nodes[idx], nodes[smallest]);
            idx = smallest; // Move to the smallest child
        }
    }

    // Delete the element at the given index
    void deleteAt(int idx) {
        if (idx >= nodes.size()) {
            return;
        }
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back(); // Remove the last element
        down_heapify(idx);
    }

    // Get the minimum element (root of the heap)
    T getMin() {
        if (nodes.empty()) {
            cout << "Heap is empty!\n";
            return T(); // Return default value of T
        }
        return nodes[0];
    }

    // Print the heap elements
    void print_heap() {
        for (T val : nodes) {
            cout << val << " ";
        }
        cout << "\n";
    }
};

int main() {
    // Create a MinHeap for integers
    MinHeap<int> heap;

    heap.insert(10);
    heap.insert(5);
    heap.insert(3);
    heap.insert(2);
    heap.insert(15);
    heap.insert(20);
    heap.print_heap();

    cout << "Min element = " << heap.getMin() << "\n";

    heap.deleteAt(0);
    heap.print_heap();

    cout << "Min element = " << heap.getMin() << "\n";

    // Demonstrating with a MinHeap of strings
    MinHeap<string> stringHeap;
    stringHeap.insert("zebra");
    stringHeap.insert("apple");
    stringHeap.insert("orange");
    stringHeap.insert("banana");
    stringHeap.print_heap();

    cout << "Min string = " << stringHeap.getMin() << "\n";

    return 0;
}

