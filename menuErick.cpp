// PROYECTO GRUPAL 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h> // Para caso 16.
#include <string> // Para caso 4 y 12.
#include <algorithm> //Para caso 4. 
#include <sstream> // Para caso 12.




using namespace std ;


// 1. DECLARAR METODOS A USAR
void sumaMultiplicacion();

// DETERMINAR SI UN NUMERO ES PAR O IMPAR
void paroImpar();

void conversionArabigoRomano(int numero); // 5. fucion para convertir de arabigo a romano
void todasLasTablasDeMultiplicar(); // 9. imprime todas las tablas de multiplicar del 1 al 10
void figurasbasicas(); // 13. implica la creacion de figuras geometricas basicas}
void matriz(); // 17. numeros aleatorios para introducirlos en una sola matriz

bool espalindromo (const std::string & str) { //Funcion para caso 4.
        std::string strCopy= str;
        std::transform(strCopy.begin(), strCopy.end(), strCopy.begin(), ::tolower);
        return strCopy ==
        std::string (strCopy.rbegin(), strCopy.rend());
	   }   
	   
std:: string hexadecimal (int decimal){ //Funcion para caso 12.
	std::stringstream ss;
	ss<<std::hex<<decimal;
	return ss.str();
}

int main()

{
	int opcion;
	// 
    bool repetir = true;
    
    do {
    	
    	// 2. INGRESAR SELECCION EN EL MENU
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. REGLA DE LA SUMA Y MULTIPLICACION" << endl;
        cout << "\n\t2. NUMERO PAR O IMPAR" << endl;
        cout << "\n\t3. CONVERTIR KILOMETROS A MILLAS, METROS A PULGADAS, DE LIBRAS A KILOS Y VICEVERSA" << endl;
        cout << "\n\t4. DETERMINAR SI UNA PALABRA O UN NÚMERO ES PALÍNDROMO" << endl;
	    cout << "\n\t5. CONVERSION DE NUMEROS ARÁBIGOS A ROMANOS" << endl;
	    cout << "\n\t6. CONVERSION DE NUMEROS ENTEROS A LETRAS" << endl;
	    cout << "\n\t7. CONVERSION DE NUMEROS ENTEROS CON DECIMAL A LETRAS" << endl;
	    cout << "\n\t8. UNA TABLA DE MULTIPLICAR" << endl;
        cout << "\n\t9. TODAS LAS TABLAS DE MULTIPLICAR DEL 1 AL 10" << endl;
        cout << "\n\t10. CREAR DE FORMA GRAFICA LA MULTIPLICACION MANUAL 45x32" << endl;
        cout << "\n\t11. CONVERSION DE NUMEROS DECIMALES A BINARIO" << endl;
        cout << "\n\t12. CONVERSION DE NUMEROS DECIMALES A HEXADECIMALES" << endl;
        cout << "\n\t13. CREAR FIGURAS GEOMETRICAS BASICAS" << endl;
        cout << "\n\t14. MOVER UN PUNTO EN TODA LA PANTALLA" << endl;
        cout << "\n\t15. SIMULACION DE UN CAJERO (AUTOMATA)" << endl;
        cout << "\n\t16. CALCULAR LA HIPOTENUSA" << endl;
        /* programas opcionales */
        cout << "\n\t17. GENERAR NUMEROS ALEATORIOS Y LLENARLOS EN UNA MATRIZ" << endl;
        cout << "\n\t18. INGRESAR 3 PRODUCTOS CON SU PRECIO Y CALCULAR PROMEDIO DE LOS PRECIOS" << endl;
        cout << "\n\t19. DETERMINAR SI UNA PERSONA ES MAYOR O MENOR DE EDAD" << endl;
        cout << "\n\t20. CONTAR LAS VOCALES DE UNA FRASE" << endl;






        
        
        cout << "\n\t0. SALIR" << endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        // 3. AGREGAR CASO DE METODO
        switch (opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
            	break;
            case 4:
                break;
            case 5:
                int num;
                cout << "Ingrese el numero a convertir a romano: ";
                cin >> num;
                conversionArabigoRomano(num);
                break;
            case 6:
            	break;
            	
            case 7:
            	break;
            	
            case 8:
                break;
                
            case 9:
            	todasLasTablasDeMultiplicar();
            	break;
            
            case 10:
            	break;
            
            case 11:
            	break;
            	
            case 12:

                break;
                
            case 13:
            	figurasbasicas();
            	break;
            
            case 14:
            	break;
            
            case 15: 
                break;
                
            case 16:

                break;
                
            case 17:
            	matriz();
            	break;
            
            case 18:
            	break;
            	
            case 19:
                break;
                
            case 20:
            	break;
            
            
            // no cambiar este case ya que es para salir del menu
             case 0:
            	repetir = false;
            	break;
        }

        
    } while (repetir);
	 
    return 0;
}

// 4.  CREAR METODO DECLARADO CON VARIABLES
void sumaMultiplicacion(){
    float num1, num2, suma, resta, multiplicacion, division;
                
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                
                cout << "Ingrese el segundo numero: ";
                cin  >> num2;
                
                cout << "\t---------------------------" << endl;
                suma = num1 + num2;
                resta = num1 - num2;
                multiplicacion = num1 * num2;
                division = num1 / num2;
                
                cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;
                cout << "La resta de " << num1 << " y " << num2 << " es: " << resta << endl;
                cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion << endl;
                cout << "La division de " << num1 << " y " << num2 << " es: " << division << endl;

}

void paroImpar(){
	int num, resul;      
    cout<<"ingrese el numero: ";
    cin>>num;

    if(num%2==0){
        resul=1;
        cout<<"El numero ingresado es Par ";
        } else{
            resul=-1;
            cout<<"El numero ingresado es ipar";
        }
}

// 5. fucion para convertir de arabigo a romano
void conversionArabigoRomano(int numero) {
	int valores[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    string simbolos[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    
    // Construir el número romano
    string romano = "";
    for (int i = 0; i < 13; ++i) {
        while (numero >= valores[i]) {
            romano += simbolos[i];
            numero -= valores[i];
        }
    }
    cout << romano;
}

// 9. Función para mostrar todas las tablas de multiplicar del 1 al 10
void todasLasTablasDeMultiplicar() {
    for (int i = 1; i <= 10; ++i) {
        cout << "\nTabla de multiplicar del " << i << ":" << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "-------------------" << endl;
    }
}

void figurasbasicas() {

 int opcion;
    
    cout << "Seleccione la figura geométrica que desea ver:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectángulo" << endl;
    cout << "3. Triángulo" << endl;
    cout << "4. Círculo" << endl;
    cout << "Ingrese el número correspondiente a la opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            int lado;
            cout << "Ingrese el tamaño del lado del cuadrado: ";
            cin >> lado;
            for (int i = 0; i < lado; ++i) {
                for (int j = 0; j < lado; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 2: {
            int ancho, alto;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            cout << "Ingrese la altura del rectángulo: ";
            cin >> alto;
            for (int i = 0; i < alto; ++i) {
                for (int j = 0; j < ancho; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 3: {
            int altura;
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            for (int i = 0; i < altura; ++i) {
                for (int j = 0; j <= i; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 4: {
            int radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            for (int i = -radio; i <= radio; ++i) {
                for (int j = -radio; j <= radio; ++j) {
                    if (sqrt(i * i + j * j) <= radio) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        }
        default:
            cout << "Opción inválida." << endl;
    }
}

void matriz() {
    const int filas = 3;
    const int columnas = 3;
    int matriz[filas][columnas];

    // Inicializar la semilla de tiempo para obtener números aleatorios diferentes en cada ejecución
    srand(time(0));

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
        }
    }

    // Mostrar la matriz
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
