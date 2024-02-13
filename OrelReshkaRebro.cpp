#include<iostream>
using namespace std;

int main(){
    int nput;
    short reshkaSum, orelSum, rebroSum, maximum;
    
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    
    
    cout << "Программа Орёл или Решка, начать?[Введите количество раз попыток]" << endl;
    cin >> nput;
    for(int i; i<nput; i++)
    {
        if(1 + rand() %3 == 1){
            cout << "Решка" << endl;
            reshkaSum++;
        }
        else if(1 + rand() %3 == 2){
            cout << "Орёл" << endl;
            orelSum++;
        }
        else{
            cout << "Ребро" << endl;
            rebroSum++;
        }
    }
    
    cout << "Ребро: " << rebroSum << endl;
    cout << "Орёл: " << orelSum << endl;
    cout << "Решка: " << reshkaSum << " \n" << endl;
    
    maximum = max(rebroSum, max(reshkaSum, orelSum));
    
    if(maximum == rebroSum){
        cout << "Выйграло: " << "Ребро \n" << endl;
    }
    else if(maximum == reshkaSum){
       cout << "Выйграло: " << "Решка \n" << endl;
    }
    else if(maximum == orelSum){
        cout << "Выйграло: " << "Орёл \n" << endl;
    }
    
    return 0;
}
