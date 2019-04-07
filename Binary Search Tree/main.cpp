#include<bits/stdc++.h>
#include"binarysearchtree.h"
#include"binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int>bst;
    if(bst.IsEmpty())
        cout << "Tree is empty" << endl;

    bst.InsertItem(4);
    bst.InsertItem(9);
    bst.InsertItem(2);
    bst.InsertItem(7);
    bst.InsertItem(3);
    bst.InsertItem(11);
    bst.InsertItem(17);
    bst.InsertItem(0);
    bst.InsertItem(5);
    bst.InsertItem(1);

    if(bst.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << bst.LengthIs() << endl;

    int x = 9;
    bool searcher;
    bst.RetrieveItem(x,searcher);

    if(searcher==true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x = 13;
    bst.RetrieveItem(x,searcher);

    if(searcher==true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    bst.ResetTree(IN_ORDER);
    bst.ResetTree(PRE_ORDER);
    bst.ResetTree(POST_ORDER);

    bool finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,IN_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,PRE_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,POST_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    return 0;
}
