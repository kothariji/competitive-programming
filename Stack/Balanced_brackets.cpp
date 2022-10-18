#include <bits/stdc++.h>
using namespace std;

//This ALgorithm checks whether all the brackets of string are balanced or not
//Go to Hackerrank "Balanced Brackets" Question to see more description

// Complete the isBalanced function below.
string isBalanced(string text) {
    //creating a stack to store opening brackets only
    stack <char> opening_brackets_stack;
    
    //Looping till string end
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];
        //storing the character in a next named char
        
        //if it is open bracket then simpy push it in stack
        if (next == '(' || next == '[' || next == '{') {
            opening_brackets_stack.push(next);
        }
        
        //if closed then check two conditions
        if (next == ')' || next == ']' || next == '}') {
            
             char last;
             //if the stack is empty means brackets will be unbalanced if not then it get the last bracket of stack
             if(!opening_brackets_stack.empty())
             {
                 last = opening_brackets_stack.top();
             }
            else  return "NO";
           
            //if last matches with next then pop that opening bracket otherwise return NO
            if ((last == '(' && next== ')') || (last == '[' && next == ']') || (last == '{' && next== '}'))
             {
                  opening_brackets_stack.pop();
                  continue;
            }          
            else
            return "NO";      
        }
    }
    
    //At the end if nothing is returned from loop then now check whether the stack is empty or not if yes then it means, string was balanced.
    if(opening_brackets_stack.empty())
    return "YES";
    else
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
