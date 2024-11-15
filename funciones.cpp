#include <iostream>
#include <cstdlib>
#include "Funciones.h"
#include "chimpocoYOponente.h"
#include "modocombate.h"
#include "modoAventura.h"

using namespace std;

void menu()
{
    cout<<"|===========CHIMPOCO FIGTH==================|"<<endl;
    cout<<"|===========MENU PRINCIPAL==================|"<<endl;
    cout<<"|ingresa 1: --> Para ir al Modo Aventura.   |"<<endl;
    cout<<"|ingresa 2: --> Para ir al Modo Versus.     |"<<endl;
    cout<<"|ingresa 3: --> Para ir al God Mode.        |"<<endl;
    cout<<"|ingresa 4: --> Para ir a las Estadisticas. |"<<endl;
    cout<<"|ingrese 5: --> Para ir al  Manual.         |"<<endl;
    cout<<"|ingrese 0: --> Para Salir.                 |"<<endl;
    cout<<"|===========================================|"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;


}



void nombre ()
{
    system("cls");
    cout<<"ingrese nombre de usuario: ";
    string usuaryA;
    cin>>usuaryA;

}


void modoAventura()
{
int PV =0;

    int enemigo[3];
    int chimpoco[3];
    nombre();
    eleccionChimpoco(chimpoco);
    for(int i =1 ; i <=5 ; i++){
        oponente(enemigo, i);
    combate(chimpoco, enemigo);
    if (chimpoco[PV]<=0){
        break;
    }



    }



}

void manual()
{

    system("cls");
    cout<<"manual:"<<endl;
    cout<<"Chimpoco Fight es un juego de pelea por turnos para uno/dos jugadores en el que"<<endl;
    cout<<"juegan con estrategia y el azar."<<endl;
    cout<<"Lo primero que tenes que hacer como entrenador Chimpocomon es elegir tu Chimpo compa�ero"<<endl;
    cout<<"para embarcarte en la lucha por la supremacia."<<endl;
    cout<<"Tu y tu chimpoco deberan enfrentarse a 5 enemigos uno mas poderoso que el otro. Puedes elegir entre 4 Chimpocos para que te acompa�en."<<endl,
        cout<<"Hay 4 Chimpocos de diferentes elementos:"<<endl;
    cout<<"1) Rockito ( elemento Tierra)"<<endl;
    cout<<"2) Picante ( elemento Fuego)"<<endl;
    cout<<"3) Freddy  ( elemento Hielo)"<<endl;
    cout<<"4) Rayin   ( elemento Rayo)"<<endl;
    cout<<"Tambien hay 5 oponentes a los que se enfrentaran nuestros Chimpocos:"<<endl;
    cout<<"1) Stitchard"<<endl;
    cout<<"2) FurbyZhor"<<endl;
    cout<<"3) helloCathy"<<endl;
    cout<<"4) BabyYorda"<<endl;
    cout<<"5) TioMickey"<<endl;

    cout<<"Nuestro juego cuenta con 3 modos:"<<endl;
    cout<<"Modo Aventura: Este modo de juego permite al jugador iniciar su historia como entrenador Chimpocomon y pelar contra los cinco oponentes."<<endl;
    cout<<"Primero deberas ingresar tu nombre de jugador y asi luego poder elegir tu compa�ero chimpoco. una vez que lo eligas comenzara la batalla contra los oponentes."<<endl;
    cout<<"El ChimpocoTournament se trata de 5 combates con una dificultad creciente y si logran vencer a los 5 oponentes se consagra como maesro Chimpocomon."<<endl;
    cout<<"Cuando un combate es exitoso la vida y los items de los chimpocos se reestablecen al 100%."<<endl;
    cout<<"el Chimpoco cuenta con una  accion por turno, puede ser un ataque o usar un item, los cuales son:"<<endl;
    cout<<"1) Boost de ataque por 2 turnos (+30% ataque) - 1 carga"<<endl;
    cout<<"2) Boost de defensa por 2 turnos (+20% defensa) - 1 carga"<<endl;
    cout<<"3)Pocion de vida ( cura 50% de la vida total) - 2 cargas"<<endl;

    cout<<"Modo Versus: Este modo permite a dos jugadores enfrentarse entre si en un combate."<<endl;
    cout<<"Cuando seleccionas esta opcion los jugaores deberan su nombre y luego ambos jugadores tiraran un dado y el que saque el numero mas alto elegira primero al chimpocco."<<endl;
    cout<<"-Si hay un empate se vuelve a tirar."<<endl;
    cout<<"-Los jugadores no podran elegir el mismo chimpoco."<<endl;

    cout<<"God Mode ( Modo Dios): Este modo esta hecho como un modo de prueba parecido al de aventura, ya que nuestros chimpocos contaran con la vida al 9999%."<<endl;
    cout<<"Los jugadores podran salir de la pelea y volver al menu principal en cualquier turno correspondiente."<<endl;

    cout<<"-Luego de los tres modos de juegos se encuentran las Estadisticas:"<<endl;
    cout<<"Estas deberan almacenar:"<<endl;
    cout<<"-Los turnos que aguanto/sobrevivio el chimpoco."<<endl;
    cout<<"-Las pociones utilizadas por los jugadores."<<endl;
    cout<<"-El da�o causado y el da�o recibido."<<endl;

    cout<<"----DETALLES SOBRE EL JUEGO----"<<endl;
    cout<<"--> Funcion de los combates:"<<endl;
    cout<<"-Tanto en el Modo Aventura como en el God Mode los participantes luego de ingresar su nombre deberan elegir un chimpoco con el que pelear."<<endl;
    cout<<"Los combates se mediran por turnos, en tu turno podras causarle da�o al enemigo, tambien podras usar items especiales/pociones que le daran al chimpoco mejoras por cierta cantidad de turnos."<<endl;
    cout<<"-En el Modo Versus 2 jugadores podran tirar un dado asi determinar quien elige al chimpoco primero y enfrentarse entre si."<<endl;

    cout<<"--> Pociones (items especiales):"<<endl;
    cout<<"-Pocion de ataque: Esta pocion nos dara un 30% de aumento de da�o de ataque durante dos turnos, solo se podra utilizar una vez."<<endl;
    cout<<"-Pocion de defensa: Esta pocion nos dara un 205 de aumento en nuestra defensa, tambien durara dos turnos y podremos utilizarla una vez."<<endl;
    cout<<"-Pocion de vida: Esta pocion la podremos usar dos veces y nos aumentara/recargara la vida total de nuestro chimpoco un 50% en el combate."<<endl;


    cout<<"--->CREDITOS DE DESARROLLADORES<---"<<endl;
    cout<<"----Lautaro Ruso----"<<endl;
    cout<<"----Augusto Mingorance----"<<endl;
    cout<<"----Benjamin Garcia rodriguez----"<<endl;
    system("pause");
}
