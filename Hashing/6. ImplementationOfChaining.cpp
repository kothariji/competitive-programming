
//Implementation of Insert and Remove Function in Hashing 

struct MyHash
{
    int BUCKET;
    list<int> *table;
     . . . . . 
     . . . . .

    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i=  key% BUCKET;
        table[i].remove(key);
    }
    . . . .
    . . . . 
}



//Implementation of Search Function in Hashing

struct MyHash
{
    int BUCKET;
    list<int> *table;

    . . . . . 
    . . . . .

    bool search(int key)
    {
        int i= key % BUCKET;
        for(auto x: table[i])
           if(x==key)
              return true;

        return false;      
    }

    . . .. . . .
    . . . ... . .

}
