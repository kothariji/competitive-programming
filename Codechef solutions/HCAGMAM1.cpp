#include <iostream>
using namespace std;

int main(void) {
	int T,N_pay, B_pay,i,count,present;
	int max_count = 0, salary;
	char atd[31];
    cin>>T;
    while(T--){
        count = 0;
        present = 0;
        max_count = 0;
        cin>>N_pay>>B_pay;
        cin>>atd;
        i =0;
        while(atd[i]!='\0'){
            if (atd[i] == '1'){
                count++;
                present++;
            }
            else{
                if (max_count < count){
                    max_count = count;
                }
                count = 0;
            }
            i++;
        }
        if (max_count < count){
            max_count = count;
        }
        salary = (N_pay*present) + (max_count*B_pay);
        cout<<salary<<endl;
    }
	return 0;
}


