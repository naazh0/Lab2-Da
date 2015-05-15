#include <iostream>
using namespace std;

/*void funcion(int n, int a[][]){
	int i, j;
	int n;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(a[i][j] != a[i][j+1] && a[i][j] != 0){
				a[i][j+1] = a[i][j];
			}
			else if(a[i][j] != a[i+1][j] && a[i][j] != 0){
				a[i+1][j] = a[i][j];
			}
		}
	}
}*/

void imprimir(int n, int a[][]){
	int i, j;
	for(i = 0; i < n; i++){
		cout << endl;
		for(j = 0; j < n; j++){
			cout << a[i][j] << "\t";
		}
	}
	cout << endl;
}

int main(){
	int i, j;
	int a, b, c;
	cin >> a >> b;
	int mat[a][a];
	//------Inserción de elementos a la matriz--------
	for(i = 0; i < a ; i++){
		cout << endl;
		for(j = 0; j < a; j++){
			cin >> c;
			mat[i][j] = c;
		}
	}
	imprimir(a, mat);
	cout << endl;
	
	return 0;
}