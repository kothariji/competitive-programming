void initialize(map<int,int> &arr,vector<int> A){
    for(int i:A)
        arr[i]++; 
}

void deinitialize(map<int,int> &arr,vector<int> A){
    for(int i:A)
        arr[i]--;
}

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    map<int,int> arr;
    initialize(arr,arrive);
    deinitialize(arr,depart);
    for(auto i:arr)
        {
            K-=i.second;
            if(K<0)
                return false;
        }
    return true;
}
