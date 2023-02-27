#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> oldPassword;
bool saveLastPassword(string newPassword);
void initializerPasswords();

int main()
{
    for(auto i : oldPassword){
        cout<<i<<endl;
    }

    bool salida = saveLastPassword("clave7");
    if(salida){
        cout<<"se adicionó la clave";
    }else
        cout<<"contraseña ya ha sido usada";

    cout<<endl;
    for(auto i : oldPassword){
       cout<<i<<endl;
        }

       return 0;
}

bool saveLastPassword(string newPassword){
    bool isUsed= false;
    for(auto x : oldPassword){
        if(x.compare(newPassword)==0){
                isUsed = true;
                break;
        }
    }
    if(!isUsed){
        reverse(oldPassword.begin(),oldPassword.end());
        oldPassword.pop_back();
        reverse(oldPassword.begin(),oldPassword.end());
        oldPassword.push_back(newPassword);
    }
    return isUsed;
}

void initializerPasswords(){
    oldPassword.push_back("clave1");
    oldPassword.push_back("clave2");
    oldPassword.push_back("clave3");
    oldPassword.push_back("clave4");
    oldPassword.push_back("clave5");
}
