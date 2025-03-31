#include <iostream>
#include "Eigen/Eigen"
using namespace std;
using namespace Eigen;

int main()
{
	//ESERCIZIO 1
	//Definisco la matrice A1
	MatrixXd A1(2,2);
	A1 << 5.547001962252291e-01, -3.770900990025203e-02, 8.320502943378437e-01, -9.992887623566787e-01;
	
	//Definisco il vettore b1
	VectorXd b1(2);
	b1 << -5.169911863249772e-01, 1.672384680188350e-01;
	
	
	//ESERCIZIO 2
	//Definisco la matrice A2
	MatrixXd A2(2,2);
	A2 << 5.547001962252291e-01, -5.540607316466765e-01, 8.320502943378437e-01, -8.324762492991313e-01;
	
	//Definisco il vettore b2
	VectorXd b2(2);
	b2 << -6.394645785530173e-04, 4.259549612877223e-04;
	
	
	//ESERCIZIO 3
	//Definisco la matrice A3
	MatrixXd A3(2,2);
	A3 << 5.547001962252291e-01, -5.547001955851905e-01, 8.320502943378437e-01, -8.320502947645361e-01;
	
	//Definisco il vettore b3
	VectorXd b3(2);
	b3 << -6.400391328043042e-10, 4.266924591433963e-10;
	
    return 0;
}
