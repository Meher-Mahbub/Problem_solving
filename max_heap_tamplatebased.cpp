#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MaxHeap {
public:
    vector<T> nodes;

    MaxHeap() {
        // Constructor
    }

    // Up-heapify to maintain the max-heap property
    void up_heapify(int idx) {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2]) {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2; // Move to the parent
        }
    }

    // Insert a new element into the heap
    void insert(T x) {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1); // Start up-heapify from the last index
    }

    // Print the heap elements
    void print_heap() {
        for (T val : nodes) {
            cout << val << " ";
        }
        cout << "\n";
    }

    // Down-heapify to maintain the max-heap property
    void down_heapify(int idx) {
        while (1) {
            int largest = idx;
            int l = 2 * idx + 1; // Left child
            int r = 2 * idx + 2; // Right child

            if (l < nodes.size() && nodes[largest] < nodes[l]) {
                largest = l;
            }
            if (r < nodes.size() && nodes[largest] < nodes[r]) {
                largest = r;
            }
            if (largest == idx)
                break;

            swap(nodes[idx], nodes[largest]);
            idx = largest; // Move to the largest child
        }
    }

    // Delete the element at the given index
    void Delete(int idx) {
        if (idx >= nodes.size()) {
            return;
        }
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back(); // Remove the last element
        down_heapify(idx);
    }

    // Get the maximum element (root of the heap)
    T getMax() {
        if (nodes.empty()) {
            cout << "Heap is empty!\n";
            return T(); // Return default value of T
        }
        return nodes[0];
    }

    // Extract the maximum element and remove it from the heap
    T ExtractMax() {
        if (nodes.empty()) {
            cout << "Heap is empty!\n";
            return T(); // Return default value of T
        }
        T ret = nodes[0];
        Delete(0); // Remove the root
        return ret;
    }
};

int main() {
    // Create a MaxHeap for integers
    MaxHeap<int> heap;

    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    heap.print_heap();

    cout << "Max element = " << heap.getMax() << "\n";

    cout << "Max element extracted = " << heap.ExtractMax() << "\n";
    cout << "Max element extracted = " << heap.ExtractMax() << "\n";

    // Demonstrating with a MaxHeap of strings
    MaxHeap<string> stringHeap;
    stringHeap.insert("apple");
    stringHeap.insert("orange");
    stringHeap.insert("banana");
    stringHeap.insert("grape");
    stringHeap.print_heap();

    cout << "Max string = " << stringHeap.getMax() << "\n";

    return 0;
}

