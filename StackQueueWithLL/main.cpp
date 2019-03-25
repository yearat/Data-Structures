#include <bits/stdc++.h>
#include "list.h"
#include "list.cpp"
#include "stack.h"
#include "stack.cpp"
#include "queue.h"
#include "queue.cpp"

using namespace std;

int main()
{
    cout << "KAWAII" << endl;

    StackLL<char> st1;
    QueueLL<char> q1;
    StackLL<char> st2;
    QueueLL<char> q2;

    // TASK1
    cout << "Enter A String: " << endl;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        char x = s[i];
        st1.push(x);
        q1.enqueue(x);
    }

    int n = s.length();
    int matched = 0;
    while(!st1.isEmpty())
    {
        char a,b;
        a = st1.top();
        b = q1.frontItem();
        st1.pop();
        q1.dequeue();
        if(a==b)
            matched++;
    }



    if(matched==n)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;
    //END OF TASK1

    //TASk2

    cout << "Enter String 1: " << endl;
    string s1;
    cin >> s1;
    for(int i=0;i<s1.length();i++)
    {
        char x = s1[i];
        st2.push(x);
    }

    cout << "Enter String 2: " << endl;
    string s2;
    cin >> s2;
    for(int i=0;i<s2.length();i++)
    {
        char x = s2[i];
        q2.enqueue(x);
    }
    n = s1.length();
    matched = 0;

    if(s1.length()!=s2.length())
         cout << "Strings are not Reversed" << endl;

    else {
    while(!st2.isEmpty())
    {
        char m,n;
        m = st2.top();
        n = q2.frontItem();
        st2.pop();
        q2.dequeue();
        //cout << m << " " << n << endl;
        if(m==n)
            matched++;

    }

    if(matched==n)
        cout << "Strings are Reversed" << endl;
    else
        cout << "Strings are not Reversed" << endl;
    }

    return 0;
}
