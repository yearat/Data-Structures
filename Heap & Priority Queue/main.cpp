#include<bits/stdc++.h>
#include"pqtype.h"
#include"pqtype.cpp"
#include"heaptype.h"

using namespace std;

int main()
{
    cout << "Hello" << endl;
    PQType<int>pq(15);
    if(pq.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);


    if(pq.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    int x;
    pq.Dequeue(x);
    cout << x << endl;
    pq.Dequeue(x);
    cout << x << endl;

    int n;
    int k;
    cin >> n;
    cin >> k;
    PQType<int>pq2(n);

    while(n--)
    {
        int inp;
        cin >> inp;
        pq2.Enqueue(inp);
    }





   int ans = 0;

    while(k--)
    {
        int xx;
        pq2.Dequeue(xx);
        ans+=xx;
       // cout << xx << " out" << endl;
        xx = xx/2;
        pq2.Enqueue(xx);
        //cout << xx << " in" << endl;

    }

  cout << ans << endl;







    return 0;
}