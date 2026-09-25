#include <iostream>
using namespace std;

int main(){
    try{
        try{
            cout << "1";
            try{
                cout << "2";
                throw 99;
                cout << "3";
            }
            catch(const string* e){
                cout << "5";
            }
        }
        catch (const char* e){
            cout << "4";
        }
        catch(int x){
            cout << "6";
            throw 5;
        }
        cout << "7";
    }
    catch(int y){
        cout<< "8";
    }
}