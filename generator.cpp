#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool validate(string str)
{
    int str_size = 10;
    str_size = min(int(str.size()), str_size); // buffer size is 11 which is 10 symbols + terminal symbol

    for(int i = 0; i < str_size; i++)           
    {
        if(str[i] < 'A')
            return false;
    }
    return true;
}

int ProcessLogin(string login)
{
    uint32_t result = 0x0;
    uint32_t temp = 0;

    int login_size = min(10,int(login.size())); // buffer size is 11 which is 10 symbols + terminal symbol

    for(int i = 0; i < login_size; i++)
    {
        if(login[i] >= 'Z')
            login[i] -= 32;
        
       result += login[i];
    }
    result = result ^ 0x5678;
    return result;
}


void pass_generate(int login, int N)
{
    int pass = login ^ 0x1234
    cout << pass;
}

int main()
{
    string login;
    int N = 1;

    cout << "Enter login:\n";
    cin >> login;
    if(!validate(login))
    {
        cout << "Invalid login\n";
        return -1;
    }
    
    pass_generate(ProcessLogin(login), N);
}
