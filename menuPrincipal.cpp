// PROYECTO GRUPAL 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h> // Para caso 16.
#include <string> // Para caso 4 y 12.
#include <algorithm> //Para caso 4. 
#include <sstream> // Para caso 12.
#include <vector>


using namespace std;



void sumaMultiplicacion(); // 1. DECLARAR METODOS A USAR  --- Axel
void paroImpar(); // 2. DETERMINAR SI UN NUMERO ES PAR O IMPAR  -- Axel
void conversiones();    // 3. Converiones de unidades  --- Axel
void palindromo();         // 4. Determinar si una palabra o un número es palíndromo. -- Paula
void conversionNumeroLetras(); // 7. Conversion numero entero con decimales a letras -- Axel
void tabla_multiplicar();  // 8. Una tabla de multiplicar.  -- Paula
void decimalBinario();    // 11. Convertir numero decimal a binario -- Axel
void hexadecimales();     // 12. Conversión de números decimales a hexadecimales. -- Paula
void cajeroAutomatico();  // 15. Simulacion de un cajero automatico -- Axel
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
            	conversiones(); 
            	break;
            	
            case 4:
            	palindromo();
            	break;
            
            case 5:
            	break;
            
            case 6:
            	break;
            	
            case 7:
            	conversionNumeroLetras();
            	break;
            
            case 8:
            	tabla_multiplicar();
            	break;
            
            case 9:
            	break;
            
            case 10:
            	break;
            
            case 11:
            	decimalBinario();
            	break;
            
            case 12:
            	hexadecimales();
            	break;
            	
            	
            case 13:
            	break;
            
            case 14:
            	break;
            
            case 15: 
            cajeroAutomatico();
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


// 1.  CREAR METODO DECLARADO CON VARIABLES
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

// 2. DETERMINAR SI UN NUMERO ES PAR O IMPAR
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

// 3. CONVERSIONES Axel
void conversiones(){
	float kilometros, millas;
    float metros, pulgadas;
    float libras, kilos;
    
    // Convirtiendo Kilometros a millas
  cout << "CONVIRTIENDO KILOMETROS A MILLAS: \n";
  cout << "Ingrese la cantidad de kilometros: ";
  cin >> kilometros;
  millas = kilometros * 0.621371;
  cout << kilometros << " kilometros equivalen a " << millas << " millas." << endl;
  
   // Convertir millas a kilómetros
  cout << "CONVIRTIENDO MILLAS A KILOMETROS: \n";
  cout << "Ingrese la cantidad de millas: ";
  cin >> millas;
  kilometros = millas * 1.60934;
  cout << millas << " millas equivalen a " << kilometros << " kilometros." << endl;
  
  // Convertir metros a pulgadas 
  cout << "CONVIRTIENDO METROS A PULGADAS: \n";
  cout << "Ingrese la cantidad de metros: ";
  cin >> metros;
  pulgadas = metros * 39.3701;
  cout << metros << " metros equivalen a " << pulgadas << " pulgadas." << endl;
  
  
  // Convertir pulgadas a metros
  cout << "CONVIRTIENDO PULGADAS A METROS: \n";
  cout << "Ingrese la cantidad de pulgadas: ";
  cin >> pulgadas;
  metros = pulgadas * 0.0254;
  cout << pulgadas << " pulgadas equivalen a " << metros << " metros." << endl;

  // Convertir libras a kilos
  cout << "CONVIRTIENDO LIBRAS A KILOS: \n";
  cout << "Ingrese la cantidad de libras: ";
  cin >> libras;
  kilos = libras * 0.453592;
  cout << libras << " libras equivalen a " << kilos << " kilos." << endl;
  
  // Convertir kilos a libras
  cout << "CONVIRTIENDO KILOS A LIBRAS: \n";
  cout << "Ingrese la cantidad de kilos: ";
  cin >> kilos;
  libras = kilos * 2.20462;
  cout << kilos << " kilos equivalen a " << libras << " libras." << endl;

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

// 7. Conversion de numeros con decimales a letras 

string convertir_entero(int numero) {
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  if (numero < 10) {
    return unidades[numero];
  } else if (numero < 100) {
    string resultado = decenas[numero / 10];
    if (numero % 10 > 0) {
      resultado += " y " + unidades[numero % 10];
    }
    return resultado;
  } else if (numero < 1000) {
    string resultado = centenas[numero / 100];
    if (numero % 100 > 0) {
      resultado += " " + convertir_entero(numero % 100);
    }
    return resultado;
  } else {
    return "Número demasiado grande";
  }
}

string convertir_decimal(int numero) {
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  string resultado = "";
  for (int i = 0; i < 2; i++) {
    int digito = numero % 10;
    resultado = unidades[digito] + resultado;
    if (i == 0) {
      resultado = " coma " + resultado;
    }
    numero /= 10;
  }
  return resultado;
}

string convertir_numero(double numero) {
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  int parte_entera = (int)numero;
  int parte_decimal = (int)((numero - parte_entera) * 100);
  string resultado = convertir_entero(parte_entera);
  if (parte_decimal > 0) {
    resultado += " con " + convertir_decimal(parte_decimal);
  }
  return resultado;
}


void conversionNumeroLetras(){
	
  double numero;
  cout << "Ingrese un numero con decimales: ";
  cin >> numero;
  cout << "El numero en letras es: " << convertir_numero(numero) << endl;

  

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

// 11. Conversion de numeros decimales a binarios

void decimalBinario(){
	int numero, remainder;
    string valorBinario = "";

    cout << "Ingrese un numero decimal: ";
    cin >> numero;
    
    // Verificacion para numeros negativos
    if (numero < 0) {
     cout << "No se pueden convertir numeros negativos " << endl;
    }
    
    // Recorrido de numero
  while (numero != 0) {
    remainder = numero % 2;
    valorBinario = to_string(remainder) + valorBinario;
    numero /= 2;
  }

  cout << "Su valor binario es: " << valorBinario << endl;
  
  
}

// 12. Conversion de números decimales a hexadecimales.
void hexadecimales(){
	int num_decimal;
	
	cout<<"Ingrese un numero en decimal: "<<endl;
	cin>>num_decimal;
	
	string num_hexadecimal = hexadecimal(num_decimal);
	
	cout<<"El numero "<<num_decimal<<" en sistema hexadecimal es : "<<num_hexadecimal<<endl;
	
	
}

// 15. Simulacion de cajero automatico
void cajeroAutomatico(){
  int opcion;
  float saldo = 100.0f; // Con un saldo inicial
  vector<float> transacciones; // Transacciones realizadas
  
  // Bucle para repetir el menu del cajero
  while (true) {
    // Mostrar menú
    cout << endl;
    cout << "**Bienvenido al cajero automático**" << endl;
    cout << "**Seleccione una opción:**" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retiro de efectivo" << endl;
    cout << "3. Deposito de efectivo" << endl;
    cout << "4. Salir" << endl;
    cout << ">> ";
    cin >> opcion;

    // Procesar la opción seleccionada
    switch (opcion) {
      case 1:
        // Consultar saldo
        cout << "Su saldo actual es: $" << saldo << endl;
        break;
      case 2:
        // Retiro de dinero
        float monto_retiro;
        cout << "Ingrese el monto a retirar: $";
        cin >> monto_retiro;
        if (monto_retiro > saldo) {
          cout << "No puede realizar el retiro por su saldo insuficiente." << endl;
        } else {
          saldo -= monto_retiro;
          transacciones.push_back(-monto_retiro);
          cout << "El retiro fue realizado con exito" << endl;
          cout << "Nuevo saldo: $" << saldo << endl;
        }
        break;
      case 3:
        // Si quiere depositar dinero xd
        float monto_deposito;
        cout << "Ingrese el monto a depositar: $";
        cin >> monto_deposito;
        saldo += monto_deposito;
        transacciones.push_back(monto_deposito);
        cout << "Deposito realizado con éxito." << endl;
        cout << "Nuevo saldo es: $" << saldo << endl;
        break;
      case 4:
        // Salir del cajero
        exit(EXIT_SUCCESS);
        cout << "Gracias por utilizar nuestros servicios " << endl;
        break;
      default:
        // En caso de error
        cout << "No se puede realizar la accion, intentar de nuevo " << endl;
        break;
    }
  }
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
