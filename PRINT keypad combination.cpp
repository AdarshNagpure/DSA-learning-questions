#include<iostream>
#include<string>
using namespace std;

void print_helper(int num, string output, string options[10]){
    if(num==0){cout<<output<<endl;  return;}
    int digit = num%10;
    int i=0;
    while(i<options[digit].length()){  // options[digit] takes values "def" if digit is 3
    // now itss length is taken into consideration
    // number of elements in the string
    // last digit ke corresponding string is what we want, def is 3 but pqrs is 4 its taken into account this way
    print_helper(num/10, options[digit][i]+output, options);
    // do not do output+options[digit][i]  it gives wrong answers
    // here options[digit][i]+output means at digit position, on i^th index, attatch the output
    // "+" symbol for C++ attatches the string niot mathematical just attatch
    i++;
    }
    return;
}
void print(int num){
    string options[10]={"", "", "abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    print_helper(num, "", options);
    return;
}

int main(){
    int num;
    cin >> num;

    print(num);

    return 0;
}

