#include <iostream>
#include <iomanip>
#include "Eigen/Eigen"
using namespace std;
using namespace Eigen;

int main()
{
	cout << fixed << setprecision(1) << scientific;
	
	VectorXd x_esatto(2);
	x_esatto << -1.0e+0, -1.0e+00;
	
	//ESERCIZIO 1  
	//Definisco la matrice A1
	MatrixXd A1(2,2);
	A1 << 5.547001962252291e-01, -3.770900990025203e-02, 8.320502943378437e-01, -9.992887623566787e-01;
	
	//Definisco il vettore b1
	VectorXd b1(2);
	b1 << -5.169911863249772e-01, 1.672384680188350e-01;
	
	//Decomposizione PA=LU
	VectorXd x1_LU = A1.partialPivLu().solve(b1);
	double erroreLU1 = (x1_LU - x_esatto).norm()/x_esatto.norm();
	cout << "ESERCIZIO 1" << endl;
	cout << "Soluzione con PA=LU: x = [" << x1_LU.transpose() << "]" << endl;
	cout << "Errore relativo PA=LU: " << erroreLU1 << endl;
	
	//Decomposizione QR
	VectorXd y1_QR = A1.householderQr().solve(b1);
	double erroreQR1 = (y1_QR - x_esatto).norm()/x_esatto.norm();
	cout << "Soluzione con QR: y = [" << y1_QR.transpose() << "]" << endl;
	cout << "Errore relativo QR: " << erroreQR1 << endl;
	cout << endl;
	
	//ESERCIZIO 2
	//Definisco la matrice A2
	MatrixXd A2(2,2);
	A2 << 5.547001962252291e-01, -5.540607316466765e-01, 8.320502943378437e-01, -8.324762492991313e-01;
	
	//Definisco il vettore b2
	VectorXd b2(2);
	b2 << -6.394645785530173e-04, 4.259549612877223e-04;
	
	//Decomposizione PA=LU
	VectorXd x2_LU = A2.partialPivLu().solve(b2);
	double erroreLU2 = (x2_LU - x_esatto).norm()/x_esatto.norm();
	cout << "ESERCIZIO 2" << endl;
	cout << "Soluzione con PA=LU: x = [" << x2_LU.transpose() << "]" << endl;
	cout << "Errore relativo PA=LU: " << erroreLU2 << endl;
	
	//Decomposizione QR
	VectorXd y2_QR = A2.householderQr().solve(b2);
	double erroreQR2 = (y2_QR - x_esatto).norm()/x_esatto.norm();
	cout << "Soluzione con QR: y = [" << y2_QR.transpose() << "]" << endl;
	cout << "Errore relativo QR: " << erroreQR2 << endl;
	cout << endl;
	
	
	//ESERCIZIO 3
	//Definisco la matrice A3
	MatrixXd A3(2,2);
	A3 << 5.547001962252291e-01, -5.547001955851905e-01, 8.320502943378437e-01, -8.320502947645361e-01;
	
	//Definisco il vettore b3
	VectorXd b3(2);
	b3 << -6.400391328043042e-10, 4.266924591433963e-10;
	
	//Decomposizione PA=LU
	VectorXd x3_LU = A3.partialPivLu().solve(b3);
	double erroreLU3 = (x3_LU - x_esatto).norm()/x_esatto.norm();
	cout << "ESERCIZIO 3" << endl;
	cout << "Soluzione con PA=LU: x = [" << x3_LU.transpose() << "]" << endl;
	cout << "Errore relativo PA=LU: " << erroreLU3 << endl;
	
	//Decomposizione QR
	VectorXd y3_QR = A3.householderQr().solve(b3);
	double erroreQR3 = (y3_QR - x_esatto).norm()/x_esatto.norm();
	cout << "Soluzione con QR: y = [" << y3_QR.transpose() << "]" << endl;
	cout << "Errore relativo QR: " << erroreQR3 << endl;
	
    return 0;
}
