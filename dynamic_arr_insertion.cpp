// Insertion
/*
#include<bits/stdc++.h>

using namespace std;

class Array
{
private:
    int *arr;
    int cap;
    int sz;

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;

    }

    void Increase_size()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for(int i = 0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }

    void Push_back(int x)
    {
        if(cap = sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }

    // Inser from any positiom

    // v.insert(v.begin()+i)

    void Insert(int pos, int x)
    {
        if(cap = sz)
        {
            Increase_size();
        }
        //for(int i = pos; i<sz; i++)

        for(int i = sz-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }

    void Print()
    {
        for(int i = 0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);

    a.Insert(1,5);

    a.Print();

    return 0;

}

*/


//Deletion//

#include<bits/stdc++.h>

using namespace std;

class Array
{
private:
    int *arr;
    int cap;
    int sz;

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;

    }

    void Increase_size()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for(int i = 0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }

    void Push_back(int x)
    {
        if(cap = sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }

    // Inser from any positiom

    // v.insert(v.begin()+i)

    void Insert(int pos, int x)
    {
        if(cap = sz)
        {
            Increase_size();
        }
        //for(int i = pos; i<sz; i++)

        for(int i = sz-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }


// To delete last element
    void Pop_back()
    {
        if(sz == 0)
        {
            cout<<"Current array size is 0\n";
            return;
        }
        sz--;
    }

    // erase func to delete from a position..
    void Erase(int pos)
    {
        if(pos>= sz)  // position jodi na thake.. (last Index = sz-1)
        {
            cout<<"Position doesn't exist\n";
            return;
        }
        for(int i = pos+1; i<sz; i++)
        {
            arr[i-1] = arr[i];
        }
        sz--;
    }

    void Print()
    {
        for(int i = 0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);

    a.Insert(1,5);
    a.Print();

    a.Pop_back();
    a.Print();
    a.Pop_back();
    a.Print();

    a.Erase(1);
    a.Print();

    return 0;

}
