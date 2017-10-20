//Author: Aaron Nicanor
#include<iostream>
#include<vector>

using namespace std;

int main(){

        int row, col;
        cout<<"Enter rows and columns of stars:"<<endl;
        cin>>row;
        cin>>col;

        if(row <= 0){

                

        }else if(col <= 0){

                

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

