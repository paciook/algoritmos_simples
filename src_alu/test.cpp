#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only
#include "catch.hpp"
#include <vector>
#include <math.h>
#include <iostream>
#include "taller.h"


using namespace std;

TEST_CASE("Funcion divide") {
    
    SECTION("Caso de un par") {
            REQUIRE(divide(2,4));
    }

    SECTION("Caso de un impar") {
            REQUIRE(!divide(2,5));
    }

}


TEST_CASE("Funcion mayor") {
    
    SECTION("Caso de igualdad") {
            REQUIRE(mayor(4,4) == 4);
    }

    SECTION("Caso general") {
            REQUIRE(mayor(2,5) ==5);
    }

}

TEST_CASE("Funcion factorialPorCopia") {
    
    SECTION("Caso base") {
            REQUIRE(factorialPorCopia(1) == 1);
    }

    SECTION("Caso borde") {
            REQUIRE(factorialPorCopia(0) == 1);
    }

    SECTION("Caso general chico") {
            REQUIRE(factorialPorCopia(3) == 6);
    }

    SECTION("Caso general grande") {
            REQUIRE(factorialPorCopia(10) == 3628800);
    }

}



TEST_CASE("Funcion esPrimo") {
    
    SECTION("Caso borde") {
            REQUIRE(!esPrimo(1));
    }

    SECTION("Caso primo chico") {
            REQUIRE(esPrimo(17) );
    }

    SECTION("Caso primo de Mersenne") {
            REQUIRE(esPrimo(pow(2,13)-1));
    }

    SECTION("Caso primo factorial") {
            REQUIRE(esPrimo(factorialPorCopia(7)-1));
    }

    SECTION("Caso no primo") {
            REQUIRE(!esPrimo(3*278));
    }


}


TEST_CASE("Funcion primoGemelo") {
    
    SECTION("Caso tiene primo gemelo chico") {
            REQUIRE(primoGemelo(3));
    }

    SECTION("Caso tiene primo gemelo grande") {
            REQUIRE(primoGemelo(827) );
    }


    SECTION("Caso no tiene primo gemelo") {
            REQUIRE(!primoGemelo(143));
    }

}


TEST_CASE("Funcion esCapicua") {
  
    SECTION("Caso e sun numero") {
            cout << "Probando con string 123" << endl;
            esCapicua("123");
    }

    SECTION("Caso es esCapicua impar") {
            cout << "Probando con string abcba" << endl;
            esCapicua("abcba");
    }

    SECTION("Caso es esCapicua par") {
        cout << "Probando con string abba" << endl;
        esCapicua("abba");
    }

    SECTION("Caso no capicua") {
        cout << "Probando con string huerguito" << endl;
        esCapicua("huerguito");
    }

}

TEST_CASE("Funcion Fibonacci") {
    
    SECTION("Casos base") {
            REQUIRE(fibonacci(1) == 1);
            REQUIRE(fibonacci(0) == 0);

    }

    SECTION("Caso general chico") {
            REQUIRE(fibonacci(5) == 5);
    }


    SECTION("Caso general grande") {
            REQUIRE(fibonacci(17) ==1597);
    }

}


TEST_CASE("Funcion Escalera") {
    
    SECTION("Casos general") {
            escaleraSimple(4);

    }

}


TEST_CASE("Funcion esPerfecto") {
    
    SECTION("Caso chico perfecto") {
            REQUIRE(esPerfecto(6));
    }

    SECTION("Caso general chico") {
            REQUIRE(esPerfecto(496));
    }

    SECTION("Caso noPerfecto") {
            REQUIRE(!esPerfecto(45));
    }

}





