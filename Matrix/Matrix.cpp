#include <iostream>
#define MAX 4
using namespace std;

void print_matrix(int matrix[][MAX], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void add_matrix(int a[][MAX], int b[][MAX], int c[][MAX], int m, int n){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void multiply_matrix(int a[][MAX], int b[][MAX], int c[][MAX], int m, int n, int t){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < t; j++){
            c[i][j] = 0;
            for(int k = 0; k < n; k++)
                c[i][j] = c[i][j] + (c[i][k] * c[k][j]);
        }
}
