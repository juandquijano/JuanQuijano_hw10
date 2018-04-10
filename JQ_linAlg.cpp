#include <iostream> 
double **matrix_product(double **a, double **b,int filas1, int colum1, int filas2, int colum2);
double **get_Matrix(int M, int N);

int main(){

	int a1;
	int a2;
	int b1;
	int b2;
	std::cout<< "ingrese el numero de columnas de la primer matriz:"<< std::endl;		
		
	std::cout<< "ingrese el numero de filas de la primer matriz:"<< std::endl;
	
	std::cout<< "ingrese el numero de columnas de la segunda matriz:"<< std::endl;
		
	std::cout<< "ingrese el numero de filas de la segunda matriz:"<< std::endl;
}



//se declara los atributos fila y columna para cada matriz 
//funcion del punto 1 
double **matrix_product(double **a, double **b,int filas1, int colum1, int filas2, int colum2){
	//Se inicializa la matriz resultado 
	double **result = new double*[filas1];	
	//se crea la matriz
	for (int i=0;i<filas1;i++){
		result[i] =new double[colum2];
	}
	int j;//se rellena la matriz
	for (int i=0;i<filas1; i++){
		for (int j=0;j<colum2; j++){//se inicializa la matriz con un arreglo de ceros 
			result[i][j]=0;
			 for (int k=0; k<colum1;k++){//se llena la matriz resultado con la 								multiplicacion
			 	result[i][j]=a[i][k]*b[k][j];

			}
		}
 		
 
	}
	
return result;
}

//funcion del punto 2 recibe como parametro m y N
double **get_Matrix(int M, int N){
//inicializar la matriz
	double **r = new double*[M];
//se crea la matriz
	for (int i=0;i<M;i++){
		r[i] =new double[N];

	}

	for (int i=0;i<M; i++){
			
			 for (int k=0; k<N;k++){//se llena la matriz con los valores de parametro
			 	double v;//
				std::cout<< "ingrese el valor de la matriz en i:" << i << "j:" << k << std::endl;
				std::cin >>v;
				r[i][k]=v;			
				}
		}
return r;

}



 		
