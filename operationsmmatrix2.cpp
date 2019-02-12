//============================================================================
// Name        : operationsmmatrix2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
# define r1 3
# define r2 3
# define c1 3
# define c2 3

class matrix {
	int a[10][10], b[10][10], i, j, c[10][10];

public:
	matrix();
	void accept() {

		cout << "PLZ... ENTER ELEMENTS OF MATRIX 1 " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cin >> a[i][j];
			}
		}
		cout << "PLZ... ENTER ELEMENTS OF MATRIX 2 " << endl;
		for (i = 0; i < r2; i++) {
			for (j = 0; j < c2; j++) {
				cin >> b[i][j];
			}
		}

	}
	void add() {
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << a[i][j] + b[i][j];

			}
			cout << endl;
		}
		/*cout << " SUM  OF MATRIX 1 AND MATRIX 2 IS " << endl;
		 for (i = 0; i < r1; i++) {
		 for (j = 0; j < c1; j++) {
		 cout << c[i][j];
		 }
		 cout << endl;
		 }
		 cout << endl;*/
	}
	void adddiag() {
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				if (i == j) {
					c[i][j] = a[i][j] + b[i][j];
				} else
					c[i][j] = 0;
			}
		}
		cout << " SUM OF DIAGONALS OF MATRIX 1 AND MATRIX 2 IS " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << c[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	void sub() {
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				c[i][j] = a[i][j] - b[i][j];

			}
		}
		cout << " DIFFERENCE  OF MATRIX 1 AND MATRIX 2 IS " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << c[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	void transpose() {
		cout << "  TRANSPOSE OF MATRIX 1 IS " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << a[j][i];
			}
			cout << endl;
		}
		cout << endl;
		cout << "  TRANSPOSE OF MATRIX 2 IS " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << b[j][i];
			}
			cout << endl;
		}
		cout << endl;
	}
	void uppertriangular() {
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				if (i > j && a[i][j] != 0) {
					cout << " FIRST MATRIX NOT UPPER TRIANGULAR" << endl;
					return;
				}
			}
		}
		cout << "it is upper triangular" << endl;

	}

	void display() {
		cout << " ELEMENTS OF MATRIX 1 " << endl;
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c1; j++) {
				cout << a[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << " ELEMENTS OF MATRIX 2 " << endl;
		for (i = 0; i < r2; i++) {
			for (j = 0; j < c2; j++) {
				cout << b[i][j];
			}
			cout << endl;
		}
	}

	void multi() {
		int sum=0;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c2; j++) {
        for	(int k = 0; k < c1; k++)
        {
		sum=sum+a[i][k]*b[k][j];
		}
        c[i][j]=sum;
        sum=0;
	}
		}

	cout<<"PRODUCT OF TWO MATRICES "<<endl;
	for (int i = 0; i < r1; i++) {
				for (int j = 0; j < c2; j++) {
					cout<<c[i][j];
				}cout<<endl;
	}
	}
};
matrix::matrix() {
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			a[i][j] = 0;
		}
	}
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			b[i][j] = 0;
		}
	}

}

	int main() {

		matrix m;
		m.accept();

//		m.add();
//		m.adddiag();
//		m.sub();
		m.multi();
//		m.transpose();
//		m.uppertriangular();
		return 0;
	}
