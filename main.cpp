//Author: Aaron Nicanor
#include<iostream>
#include<vector>

using namespace std;

int main(){

        int row, col;
        cout<<"Input number of rows"<<endl;
        cin>>row;
        cout<<"Input number of columns"<<endl;
        cin>>col;

        if(row <= 0){

                cout<<""<<endl;

        }else if(col <= 0){

                cout<<""<<endl;

        }else{

                vector< vector<char> > star;
                star.resize(row);
                for(int i = 0; i < star.size(); i++){

                        star[i].resize(col);

                }
                for(int i = 0; i < star.size(); i++){

                        for(int o = 0; o < star[i].size(); o++){

                                star[i][o] = '*';
                                cout<<star[i][o];

                        }
                        cout<<endl;

                }


        }


        return 0;
}

