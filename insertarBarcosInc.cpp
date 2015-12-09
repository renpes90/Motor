#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
bool b5= false;
bool b4= false;
bool b3= false;
bool b2= false;
int row, col, dir;

void cinSafeInt(int &val)
{
	cin >> val;
	
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(100,'\n');
	}
}

	
char userGrid[9][9] = {
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
{'O','O','O','O','O','O','O','O','O'},
};


void displayBoard2(char userGrid[][9])
{
	cout << endl;
	cout << "         Columna         " << endl << endl; 
	
	for (int i = 0; i < 9; i++)
	{ 
		cout << "Fila " << i+1 << "     ";
		for (int q = 0; q < 9; q++)
		{
			cout << userGrid[i][q];
			if (q == 8)
			{
				cout << endl;
			}
		}
	}
}


int tablero[9][9]={//SE INICIALIZA EL TABLERO
		
	{0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,},
    
	};
	
void displayBoard(int tablero[][9])// IMPRIME EL TABLERO
{
	cout << endl;
	cout << "        Columna          " << endl << endl; 
	cout << "       123456789         " << endl << endl; 
	for (int i = 0; i < 9; i++)
	{ 
		
		cout << "F" << i+1 << "     ";
		for (int q = 0; q < 9; q++)
		{
			cout << tablero[i][q];
			if (q == 8)
			{
				cout << endl;
			}
		}
		
	
		
	}
}



	


void insertarPorta(){
	
	//int row, col, dir;
	
	cout << "Porta aviones 5 espacios"<< endl;
	cout << "Elije entre las filas (1-9): " << endl;
	cin >> row;
	cout << "Elije entre las columnas (1-9): " << endl;
	cin >> col;
	cout << "Elige  si vertical u horizontal v=1, h=2" << endl;
	cin >> dir;
	
	int valor;
	
	if (dir==1 && row<6){
		valor=tablero[row-1][col-1]+tablero[row][col-1]+tablero[row+1][col-1]+tablero[row+2][col-1]+tablero[row+3][col-1];
		
		if(valor==0){
		tablero[row-1][col-1] = 5;
		tablero[row][col-1] = 5;
		tablero[row+1][col-1] = 5;
		tablero[row+2][col-1] = 5;
		tablero[row+3][col-1] = 5;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b5=true;
		}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			cout << valor << endl;
			insertarPorta();
			
		}
	}else if (dir==2 && col<6){
		valor = tablero[row-1][col-1]+tablero[row-1][col]+tablero[row-1][col+1]+tablero[row-1][col+2]+tablero[row-1][col+3];
		if (valor==0){
		tablero[row-1][col-1] = 5;
		tablero[row-1][col] = 5;
		tablero[row-1][col+1] = 5;
		tablero[row-1][col+2] = 5;
		tablero[row-1][col+3] = 5;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b5=true;
		}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarPorta();
			
		}
	}else{
		
		system("cls");
		displayBoard(tablero);
		cout << "No se puede colocar ahi, intenta de nuevo" << endl;
		insertarPorta();
	}
	
}
void insertarAco(){
	//int row, col, dir;
	cout << "Acorazado 4 espacios"<< endl;
	cout << "Elije entre las filas (1-9): " << endl;
	cin >> row;
	cout << "Elije entre las columnas (1-9): " << endl;
	cin >> col;
	cout << "Elige  si vertical u horizontal v=1, h=2" << endl;
	cin >> dir;
	
	int valor;
	if (dir==1 && row<7){
		
		valor=tablero[row-1][col-1]+tablero[row][col-1]+tablero[row+1][col-1]+tablero[row+2][col-1];
		if (valor==0){
		tablero[row-1][col-1] = 4;
		tablero[row][col-1] = 4;
		tablero[row+1][col-1] = 4;
		tablero[row+2][col-1] = 4;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b4=true;
			}else{
				system("cls");
				displayBoard(tablero);
				cout << "No se puede colocar ahi, intenta de nuevo" << endl;
				insertarAco();
			}
	}else if (dir==2 && col<7){
		valor = tablero[row-1][col-1]+tablero[row-1][col]+tablero[row-1][col+1]+tablero[row-1][col+2];
		if (valor==0){
		tablero[row-1][col-1] = 4;
		tablero[row-1][col] = 4;
		tablero[row-1][col+1] = 4;
		tablero[row-1][col+2] = 4;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b4=true;}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarAco();
		}
	}else{
		system("cls");
		displayBoard(tablero);
		cout << "No se puede colocar ahi, intenta de nuevo" << endl;
		insertarAco();
	}
	
	
}
void insertarSub(){
	//int row, col, dir;
	cout << "Submarino 3 espacios"<< endl;
	cout << "Elije entre las filas (1-9): " << endl;
	cin >> row;
	cout << "Elije entre las columnas (1-9): " << endl;
	cin >> col;
	cout << "Elige  si vertical u horizontal v=1, h=2" << endl;
	cin >> dir;
	int valor;
	if (dir==1 && row<8){
		valor = tablero[row-1][col-1]+tablero[row][col-1]+tablero[row+1][col-1];
		if(valor==0){
		tablero[row-1][col-1] = 3;
		tablero[row][col-1] = 3;
		tablero[row+1][col-1] = 3;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
	    b3=true;}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarSub();
		}
	}else if (dir==2&& col<8){
		valor = tablero[row-1][col-1]+tablero[row-1][col]+tablero[row-1][col+1];
		if(valor==0){
		tablero[row-1][col-1] = 3;
		tablero[row-1][col] = 3;
		tablero[row-1][col+1] = 3;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b3=true;}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarSub();
		}
	}
	
}
void insertarBot(){
	//int row, col, dir;
	cout << "BoteRadar 2 espacios"<< endl;
	cout << "Elije entre las filas (1-9): " << endl;
	cin >> row;
	cout << "Elije entre las columnas (1-9): " << endl;
	cin >> col;
	cout << "Elige  si vertical u horizontal v=1, h=2" << endl;
	cin >> dir;
	int valor;
	if (dir==1 && row<9){
		valor=tablero[row-1][col-1]+tablero[row][col-1];
		if(valor==0){
		tablero[row-1][col-1] = 2;
		tablero[row][col-1] = 2;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
	    b2=true;}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarBot();
		}
	}else if (dir==2 && col<9){
		valor = tablero[row-1][col-1]+tablero[row-1][col];
		if(valor==0){
		tablero[row-1][col-1] = 2;
		tablero[row-1][col] = 2;
		system("cls");
		cout << "Has colocado tu barco" << endl;
		displayBoard(tablero);
		b2=true;}else{
			system("cls");
			displayBoard(tablero);
			cout << "No se puede colocar ahi, intenta de nuevo" << endl;
			insertarBot();
		}
	}
	
}


void instrucciones(){
	cout << endl << endl << "        ||||||JUEGO DE BATALLA NAVAL||||||" << endl << endl;
	cout << endl << endl << "        INSTRUCCIONES" << endl << endl;
	cout << "Hay 4 tipos de naves. Elige el origen y en que direccion pondras tus naves "
		<< endl << endl;
}

void salir(){
	
}

void jugar(){
	
	
	int hitA=0, hitB=0, value, hitC=0, tries=0, sunk=0;
	
	cout << endl << endl << "        ||||||JUEGO DE BATALLA NAVAL||||||" << endl << endl;

		
	do
	{                      
		
		
		cout << endl << endl << "Esta es la vista del tablero ::";
		cout << endl;
		
		displayBoard2(userGrid);
		
		
		cout << endl << endl << "-Elije entre las filas (1-6): ";
		cinSafeInt(row);
		
		
		cout << "-Elije entre las columnas (1-4): " ;
		cinSafeInt(col);
		
		cout << endl;
		
		if (col > 0 && col < 5)
		{
			if (row > 0 && row < 7)
			{   
				value = tablero[row-1][col-1];
				
				
				
				
				
				
				if (value == 1)
				{
					cout << "Has fallado ";
					userGrid[row-1][col-1] = 'T';
					tries++;
				}
				
				
				else if (value == 2)
				{
					cout << ">>Le has dado al barco 1. ";
					
					tries++;
					hitA++;
					
					userGrid[row-1][col-1] = 'X';
					tablero[row-1][col-1] = 5;
					
					if (hitA == 3)
					{
						cout << ">>Has undido el barco 1!<<";
						hitA = 0;
						sunk++;
					}
					
					else
					{
						cout << 3 - hitA << " golpes más y podras undirlo.<< ";
						
						
					}
				}
				
				else if (value == 3)
				{
					cout << ">>Le has dado al barco 2. ";  
					
					tries++;            
					hitB++;
					
					userGrid[row-1][col-1] = 'X';
					tablero[row-1][col-1] = 5;
					
					if (hitB == 2)
					{
						cout << ">>Has undido el barco 2!<<" << endl;
						hitB = 0;
						sunk++;
					}
					
					else
					{
						cout << 2 - hitB << " golpes más y podras undirlo.<< ";
						
						
					}
				}
				
				else if (value == 4)
				{ 
					cout << ">>Le has dado al barco 3. ";  
					
					tries++;
					hitC++;
					
					userGrid[row-1][col-1] = 'X';
					tablero[row-1][col-1] = 5;
					
					if (hitC == 4)
					{
						cout << ">>Has undido el barco 3!<<" << endl;
						hitC = 0;
						sunk++;
					}
					
					else
					{
						cout << 4 - hitC << " golpes más y podras undirlo.<< ";
						
					}
				}
				
				else if (value == 5)
				{
					cout << endl << "Ya habias elegido ese espacio" << endl;
					
				}
			}
			else 
			{
				cout << endl << ">>Ingrese una fila y columna valida" << endl << endl;
			}
			
		}
		
		else 
		{
			cout << endl << ">>Ingrese una fila y columna valida" << endl << endl;
		}
		
		
		if (sunk == 3)
		{
			cout << endl;
			
			displayBoard2(userGrid);
			
			cout << endl << endl << "Felicidades ya has ganado! " 
				<< endl << endl << "Total de intentos: " << tries << endl;  
			
		}
	}
	
	
	
while (sunk < 3);
	
	system("PAUSE");
}


void insertar(){
	
	system("cls");
	
	int op;
	
	cout << endl << endl << "        ||||||JUEGO DE BATALLA NAVAL||||||" << endl << endl;
	displayBoard(tablero);
	cout << "Hay 4 tipos de naves. Elige el origen y en que direccion pondras tus naves "
		<< endl << endl;
	cout << "Que barco deseas insertar?"
		<< endl << endl;
	
		cout<<"1. Portaviones"<<endl;
		cout<<"2. Acorazado"<<endl;
		cout<<"3. Submarino"<<endl;
		cout<<"4. Bote Radar"<<endl;
		cout<<"5. Jugar"<<endl;
		
		cin>>op;
		cout<<"-------------------------"<<endl;
		switch(op){
		case 1:
			if(b5==false){
			insertarPorta();
			}else{
				cout<<"ya has insertado ese barco"<<endl;
				
			}
			insertar();
			break;
		case 2:
			if(b4==false){
			insertarAco();
			}
			else{
				cout<<"ya has insertado ese barco"<<endl;
				}
			insertar();
	
			break;
		case 3:
			if(b3==false){
			insertarSub();
			}else{
				cout<<"ya has insertado ese barco"<<endl;
			}
			insertar();
			break;
		case 4:
			if(b2==false){
			insertarBot();
			}
			else{
				cout<<"ya has insertado ese barco"<<endl;
			}
			insertar();
			break;
		case 5:

			jugar();
			break;
			
		default :
			
			insertar();
			break;
		}
	
	}





void menu(){
	int op;
	cout << endl << endl << "        ||||||JUEGO DE BATALLA NAVAL||||||" << endl << endl;
	cout<<"1. Jugar"<<endl;
	cout<<"2. Instrucciones"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>op;
	cout<<"-------------------------"<<endl;
	switch(op){
	case 1:
		insertar();
		break;
	case 2:
		instrucciones();
		menu();
		break;
	case 3:
		salir();
		break;
	default:
		//cout<<"ola kase"<<endl;
		menu();
	}
	
}

int main (int argc, char *argv[]) {

	menu();
	
}

