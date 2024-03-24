// PROYECTO GRUPAL 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>

using namespace std ;

// 1. REGLA DE LA SUMA Y MULTIPLICACION
void sumaMultiplicacion();   
// 2. DETERMINAR SI UN NUMERO ES PAR O IMPAR           
void paroImpar();                       
void convertirEnteroALetra();           // 6. CONVERSION DE NUMEROS ENTEROS A LETRAS
void graficaMultiplicacionManual();     // 10. CREAR DE FORMA GRAFICA LA MULTIPLICACION MANUAL 45x32
void moverPunto();                      // 14. MOVER UN PUNTO EN TODA LA PANTALLA
void calcularPromedioPrecios();         // 18. INGRESAR 3 PRODUCTOS CON SU PRECIO Y CALCULAR PROMEDIO DE LOS PRECIOS
void contarVocales();                   // 20. CONTAR LAS VOCALES DE UNA FRASE


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
            	break;
            
            case 5:
            	break;
            
            case 6:
            	convertirEnteroALetra();
            	break;
            	
            case 7:
            	break;
            
            case 8:
            	break;
            
            case 9:
            	break;
            
            case 10:
            	graficaMultiplicacionManual();
            	break;
            
            case 11:
            	break;
            
            case 12:
            	break;
            	
            	
            case 13:
            	break;
            
            case 14:
            	moverPunto();
            	break;
            
            case 15: 
                break;
            
            case 16:
            	break;
            	
            case 17:
            	break;
            
            case 18:
            	calcularPromedioPrecios();
            	break;
            	
            case 19:
            	break;
        
            case 20:
            	contarVocales();
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

// Definimos 4 arreglos unidades,decenas,centenas y especiales
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
	string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
	string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
	string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
// Funcion para permitir que al ingresar un numero como entrada y lo devuelve en Letras
string convertir(int numero) {
    if (numero == 1000)
        return "mil";
    else if (numero >= 100) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0)
            return centenas[centena];
        else
            return centenas[centena] + " " + convertir(resto);
    }
    else if (numero >= 20) {
        int decena = numero / 10;
        int resto = numero % 10;
        if (resto == 0)
            return decenas[decena];
        else
            return decenas[decena] + " y " + convertir(resto);
    }
    else if (numero >= 10) {
        return especiales[numero - 10];
    }
    else {
        return unidades[numero];
    }
}
// Aqui se implementa la funcion correspondiente a la opcion 7
void convertirEnteroALetra(){ 
	int numero;
    cout << "Ingrese un numero del 1 al 1000: ";
    cin >> numero;
    if (numero >= 1 && numero <= 1000) {
        cout << "El numero " << numero << " en letras es: " << convertir(numero) << endl;
    } else {
        cout << "El numero ingresado está fuera del rango permitido." << endl;
    }
}	

// Aqui se implementa la funcion correspondiente a la opcion 10
void graficaMultiplicacionManual(){

	// Declaramos nuestras variables
    int num1 = 45;
    int num2 = 32;

    // Proceso de la operacion 45 * 32
    int producto = num1 * num2;
    int productoParcial1 = num1 * (num2 % 10);
    int productoParcial2 = num1 * (num2 / 10) * 10;

    // Presentacion grafica de la operacion 45 * 32
    cout << setw(10) << num1 << endl;
    cout << "x" << setw(9) << num2 << endl;
    cout << setw(11) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(10) << productoParcial1 << endl;
    cout << setw(10) << productoParcial2 << endl;
    cout << setw(11) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(10) << producto << endl;
}

// Aqui se implementa el programa correspondiente a la opcion 14
void moverPunto(){
	// Coordenadas iniciales del punto
    int x = 0;
    int y = 0;

    // Limpiar la pantalla
    system("cls");

    // Bucle para mover el punto
    while (true) {
        // Limpiar la pantalla
        system("cls");

        // Dibujar el punto en las coordenadas actuales
        for (int i = 0; i < y; ++i)
            cout <<endl;
        for (int i = 0; i < x; ++i)
            cout << " ";
        cout << "*";

        // Esperar un momento antes de mover el punto
        Sleep(100);

        // Borrar el punto actual
        cout << "\b \b";

        // Cambiar las coordenadas del punto
        x = (x + 1) % 80; // Asegurar que x esté en el rango de 0 a 79
        y = (y + 1) % 24; // Asegurar que y esté en el rango de 0 a 23
    }
    
    int opcion;
    bool repetir = true;
    
    do {
        cout << "\n\n\t\t\tMenu de Opciones" <<endl;
        cout << "\t\t\t----------------" <<endl;
        // Opciones del menu
        cout<< "\n\t14. MOVER UN PUNTO EN TODA LA PANTALLA" <<endl;
        // Otras opciones del menu
        cout << "\n\t0. SALIR" <<endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            // Otros cases...
            case 14:
                moverPunto();
                break;
            // Otros cases...
            case 0:
                repetir = false;
                break;
        }
    }while (repetir);
}

// Aqui se implementa el programa correspondiente a la opcion 18
void calcularPromedioPrecios(){
	
	const int numProductos = 3;
    string productos[numProductos];
    double precios[numProductos];
    double sumaPrecios = 0;

    // Solicita pruducto y precios
    for (int i = 0; i < numProductos; ++i) {
        cout << "\nIngrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i];
        cout << "Ingrese el precio de " << productos[i] << ": Q";
        cin >> precios[i];
        sumaPrecios += precios[i];
    }

    // Calculo del promedio de los precios de los productos ingresados
    double promedio = sumaPrecios / numProductos;

    cout << "\nProductos ingresados y sus precios:\n";
    for (int i = 0; i < numProductos; ++i) {
        cout << productos[i] << ": Q " << fixed << setprecision(2) << precios[i] << endl;
    }
    cout << "\nEl promedio de los precios es: Q " << fixed << setprecision(2) << promedio << endl;
}

// Aqui se implementa la funcion correspondiente a la opcion 20
void contarVocales() {
    string frase;
    int contadorVocales = 0;

    // Solicita igresar una frase
    cout << "Ingrese una frase: ";
    cin.ignore(); // Ignorar el salto de linea anterior
    getline(cin, frase); // lee la frase

    // Cuenta las vocales
    for (char caracter : frase) {
        caracter = tolower(caracter);
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contadorVocales++;
        }
    }

    cout << "La cantidad de vocales en la frase es: " << contadorVocales << endl;
}

