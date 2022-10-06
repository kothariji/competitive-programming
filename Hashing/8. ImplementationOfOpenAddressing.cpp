struct MyHash{
    int *arr;
    int cap, size;
    MyHash(int c)
    {
        cap=c;
        size=0;

        for(int i=0;i<cap;i++)
           arr[i]=-1;

    }

    int hash(int key)
    {
        return key%cap;
    }

    bool search(int key){ . . . . .}
    bool insert(int key){ . . . . .}
    bool erase(int key){. . . . . .}

}


//Implementation of Search Function

bool search(int key)
{
    int h= hash(key);
    int i=h;
    while(arr[i] !=-1)
    {
        if(arr[i]==key)
           return true;

        i=(i+1)%cap;
        if(i==h)
           return false;
    }

    return false;
}


bool insert(int key)
{
    if(size==cap)
       return false;

    int i= hash(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
      i= (i+1)%cap;

    if(arr[i]==key)
       return false;

    else{
        arr[i]=key;
        size++;
        return true;
    }
}



bool erase(int key)
{
    int h= hash(key);
    int i=h;
    while(arr[i]!= -1)
    {
        if(arr[i]==key)
        {
            arr[i]= -2;
            return true;
        }

        i= (i+1)%cap;
        if(i==h)
          return false;
    }
    return false;
}


****** Chaining v/s Open Addressing ******

Chaining has better performance and has better performance handling than Open Addressing.


1. In Chaining Hash Table never falls.
   In Open Addressing, Table may become full and resizing becomes mandatory.


2. In Chaining, Less Sensitive to Hash Functions.
   In Open Addressing, Extra Care required for clustering   


3. In Chaining, Poor Cache Performance
   In Open Addressing, It is Cache Friendly

4. In Chaining, Extra Space for Links.
   In Open Addressing, Extra space might be needed to achieve same performance as chaining.








