class NestedIterator
{
    queue<int> myqueue;

public:
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        int n = nestedList.size();
        for (int i = 0; i < n; i++)
        {
            if (nestedList[i].isInteger())
            {
                myqueue.push(nestedList[i].getInteger());
            }
            else
            {
                vector<NestedInteger> nest = nestedList[i].getList();
                NestedIterator *tmp = new NestedIterator(nest);
                while (tmp->hasNext())
                {
                    myqueue.push(tmp->next());
                }
            }
        }
    }

    int next()
    {
        int tmp = myqueue.front();
        myqueue.pop();
        return tmp;
    }

    bool hasNext()
    {
        return !myqueue.empty();
    }
};