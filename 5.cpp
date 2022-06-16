#include <iostream>
#include <string>

using namespace std;

void reverteString(string *str){
    string aux = *str;
    string aux2 = "";
    
    for(int i = aux.size()-1; i >= 0; i--){
        aux2.push_back(aux[i]);
    }
    
    *str = aux2;
}
int main()
{
    string str;
    
    getline(cin,str);
    
    reverteString(&str);
    
    cout << str << endl;
    
    return 0;
}