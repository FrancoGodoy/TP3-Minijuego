/* Franco Godoy
K1051
02/05/15*/

#include <iostream>

using namespace std;

int main ()
{
	cout << "Bienvenido al minijuego de tematicas. Por favor ingrese el numero " << endl;
	cout << "correspondiente para ingresar a la pregunta asignada. " << endl;
	cout << "Se lo evaluara y se le dara el IQ correspondiente." << endl;
	cout << "En caso de querer terminar el juego, por favor ingrese 0. Las opciones son:" << endl << endl;
	cout << "1) Tecnologia" << endl;
	cout << "2) Geografia" << endl;
	cout << "3) Quimica" << endl;
	cout << "4) Deportes" << endl;
	cout << "5) Entretenimiento" << endl;
	cout << "6) Historia" << endl;
	cout << "7) Animales" << endl;
	cout << "8) Para pensar" << endl << endl;
	int Puntos=0;
	
	int Ingr;
    while (Ingr !=0)
    {
    	bool PV = true;
		if (PV == false) 
		{
			cout << "Elija de nuevo otra opcion: " << endl;
    		cout << "1) Tecnologia" << endl;
			cout << "2) Geografia" << endl;
			cout << "3) Quimica" << endl;
			cout << "4) Deportes" << endl;
			cout << "5) Entretenimiento" << endl;
			cout << "6) Historia" << endl;
			cout << "7) Animales" << endl;
			cout << "8) Para pensar" << endl << endl;
		}
				PV=false;
		cin >> Ingr;
	switch (Ingr)
		{
			case 1: cout << "Usted ingreso 1 (Tecnologia). Su pregunta es:" << endl;
			cout << "¿Cuantas consolas playstation existen? (Contestar con numeros)" << endl;
			int Preg1;
			cin >> Preg1;
			if (Preg1 == 4)
			{
				cout << "Pregunta Correcta! " << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 2: cout << "Usted ingreso 2 (Geografia). Su pregunta es:" << endl;
			cout << "¿Cuantas provincias tiene Argentina? (Contestar con numeros)" << endl;
			int Preg2;
			cin >> Preg2;
			if (Preg2==23)
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 3:	cout << "Usted ingreso 3 (Quimica). Su pregunta es:" << endl;
					cout << "¿Que posee la tabla periodica? (Contestar con una palabra)" << endl;
					string quimica;
					cin >> quimica;
			if (quimica == "elementos")
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
					cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 4: cout << "Usted ingreso 4 (Deportes). Su pregunta es:" << endl;
					cout << "¿Cuantas copas del mundo tiene Argentina? (Contestar con un numero)" << endl;
					int deportes;
					cin >> deportes;
			if (deportes == 2)
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 5:	cout << "Usted ingreso 5 (Entretenimiento). Su pregunta es:" << endl;
					cout << "¿Cuantas peliculas forman la saga de Harry Potter? (Contestar con un numero)" << endl;
					int peliculas;
					cin >> peliculas;
			if (peliculas == 7)
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 6: cout << "Usted ingreso 6 (Historia). Su pregunta es:" << endl;
					cout << "¿En que año se independizo por completo Argentina? (Contestar con un numero)"
					int historia;
					cin >> historia;
			if (historia == 1806)
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else 
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 7: cout << "Usted ingreso 7 (Animales). Su pregunta es:" << endl;
					cout << "¿Cual es el unico animal que tiene 4 rodillas?" << endl;
					string anim;
					cin >> anim;
			if (anim == "elefante")
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			case 8: cout << "Usted ingreso 8(Para pensar). Su pregunta es:"
					cout << "Algunos meses tienen 30 dias y otros tienen 31 dias. Cuantos meses tienen 28 dias? (Contestar con una palabra)" << endl;
					string meses;
					cin >> meses;
			if (meses == "Todos")
			{
				cout << "Pregunta Correcta! :)" << endl;
				cout << "Usted ha sumado 5 puntos." << endl;
				Puntos +25;
				break;
			}
			else
			{
				cout << "Respuesta incorrecta! :(" << endl;
				break;
			}
			 
		system ("pause");
		cout << "Su puntaje ha sido de " << Puntos << " Puntos sobre 40!" << endl; 
		return 0;
			
		}
			    	
    	
    	
    	
    	
    	
    	
	}
}
