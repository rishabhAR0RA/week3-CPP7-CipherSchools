#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode *, int> mp;
        ListNode *t = head;

        while (t)
        {
            if (mp.count(t->next))
                return 1;

            mp[t]++;
            t = t->next;
        }
    }
};

int main()
{
    return 0;
}