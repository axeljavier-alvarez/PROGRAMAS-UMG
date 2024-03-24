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

void palindromo();         // 4. Determinar si una palabra o un número es palíndromo.
void tabla_multiplicar();  // 8. Una tabla de multiplicar.
void hexadecimales();     // 12. Conversión de números decimales a hexadecimales.
void hipotenusa();        // 16. Calcular la Hipotenusa.
void edad();              // 19. Determinar si una persona es mayor o menor de edad.

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
             
              sumaMultiplicacion();
            break;
            
            case 2:
            	paroImpar();
            	break;
            	
            case 3:
            	break;
            	
            case 4:
            	palindromo();
            	break;
            
            case 5:
            	break;
            
            case 6:
            	break;
            	
            case 7:
            	break;
            
            case 8:
            	tabla_multiplicar();
            	break;
            
            case 9:
            	break;
            
            case 10:
            	break;
            
            case 11:
            	break;
            
            case 12:
            	hexadecimales();
            	break;
            	
            	
            case 13:
            	break;
            
            case 14:
            	break;
            
            case 15: 
                break;
            
            case 16:
            	hipotenusa();
            	break;
            	
            case 17:
            	break;
            
            case 18:
            	break;
            	
            case 19:
                edad();
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

// 4. Determinar si una palabra o un número es palíndromo.
void palindromo(){ 
	   	string entrada;
	   	
	   	cout<<"Ingrese una palabra o un numero para verificar si es un palindromo: "<<endl;
	   	cin>>entrada;
	   	
	   	if (espalindromo(entrada)){
	   		cout<<"Es un palindromo"<<endl;
		   } else { cout<<"No es un palindromo."<<endl;
		   }
	   }


// 8. Una tabla de multiplicar.
void tabla_multiplicar(){
	int num;
	
    do{
    	cout<<"Ingrese el NUMERO de la tabla de multiplicar, que usted desee visualizar: "<<endl;
        cin>>num;    	
	}while ((num<1) || (num>10));
	
	for (int i=1; i<13; i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	
	
}

// 12. Conversion de números decimales a hexadecimales.
void hexadecimales(){
	int num_decimal;
	
	cout<<"Ingrese un numero en decimal: "<<endl;
	cin>>num_decimal;
	
	string num_hexadecimal = hexadecimal(num_decimal);
	
	cout<<"El numero "<<num_decimal<<" en sistema hexadecimal es : "<<num_hexadecimal<<endl;
	
	
}

// 16. Calcular la hipotenusa.
void hipotenusa(){
	float opuesto, adyacente, suma, res;
	
	cout<<"Ingrese el valor del cateto opuesto: ";
	cin>>opuesto;
	cout<<"Ingrese el valor el cateto adyacente: ";
	cin>>adyacente;
	
	suma=(opuesto*opuesto)+(adyacente*adyacente);
	res=(sqrt(suma));
	
	cout<<"La hipotenusa es: "<<res<<endl;	
}

// 19. Determinar si una persona es mayor o menor de edad.
void edad(){
	int edad;
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	
	if(edad>=18){
		cout<<"La persona es mayor de edad."<<endl;
	}else{
		cout<<"La persona es menor de edad."<<endl;
	}
}
