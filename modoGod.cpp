#include <iostream>
#include <cstdlib>

using namespace std;

 int const PVED = 0;
    int const ataqueMinimoEd = 1;
    int const ataqueMaximoEd = 2;

    int const PVD = 0;
    int const ataqueMinimod = 1;
    int const ataqueMaximod = 2;

    void oponented(int enemigo [], int j)
{


    switch(j)
    {
    case 1:
        enemigo [PVED] = 150;
        enemigo [ataqueMinimoEd] = 5;
        enemigo [ataqueMaximoEd] = 15;
        break;
    case 2:
        enemigo [PVED] = 300;
        enemigo [ataqueMinimoEd] = 25;
        enemigo [ataqueMaximoEd] = 45;
        break;
    case 3:
        enemigo [PVED] = 450;
        enemigo [ataqueMinimoEd] = 40;
        enemigo [ataqueMaximoEd] = 55;
        break;
    case 4:
        enemigo [PVED] = 700;
        enemigo [ataqueMinimoEd] = 55;
        enemigo [ataqueMaximoEd] = 75;
        break;
    case 5:
        enemigo [PVED] = 1500;
        enemigo [ataqueMinimoEd] = 25;
        enemigo [ataqueMaximoEd] = 150;
        break;
    }

}
void nombred ()

{
    system("cls");
    cout<<"ingrese nombre de usuario: ";
    string(usuaryA);
    cin>>usuaryA;
}


void eleccionChimpocod(int chimpoco[])
{
    system("cls");

    cout<<"Seleccione un Chimpoco"<<endl;
    int eleccion;
    cin>>eleccion;



    switch(eleccion)
    {
    case 1:
        cout<<"elegiste a Cole, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 40;
        chimpoco[ataqueMaximod] = 50;
        break;
    case 2:
        cout<<"elegiste a Kai, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 55;
        chimpoco[ataqueMaximod] = 65;

        break;
    case 3:
        cout<<"elegiste a Zane, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 35;
        chimpoco[ataqueMaximod] = 55;

        break;
    case 4:
        cout<<"elegiste a jay, buena eleccion"<<endl;
        system ("pause");
        chimpoco[PVD] = 9999;
        chimpoco[ataqueMinimod] = 15;
        chimpoco[ataqueMaximod] = 85;

        break;
    default:
        cout<<"eleccion no valida"<<endl;
        system("pause");
        break;

    }

}
void combated(int chimpoco[], int enemigo[])
{
    bool ataque = 0;
     int chimpocoPVDmax = chimpoco[PVD];
    int enemigoPVEDmax = enemigo[PVED];
    int eleccion;
     int elegirPocion;
        int cargasAtaqued = 99;
        int cargasDefensad = 99;
        int cargasVidad =99;
        int instanciaAtaqued = 0;
        int instanciaDefensad = 0;
    while (chimpoco[PVD]>0 && enemigo[PVED]>0){


    int ataqueEnemigod = enemigo[ataqueMinimoEd] + (rand()% (enemigo[ataqueMaximoEd] - enemigo[ataqueMinimoEd])+1);
        if(ataque == true){
            ataque = false;
            system("cls");
            cout<<"TURNO ENEMIGO"<<endl;
        if(instanciaDefensad != 0){
            ataqueEnemigod = ataqueEnemigod * 0.8;
            instanciaDefensad--;
            cout<<"te queda "<< instanciaDefensad<<"del boost de defensa"<<endl;
        }
                cout<<"ataque enemigo: "<< ataqueEnemigod<<endl;
            chimpoco[PVD] -= ataqueEnemigod;
            if (chimpoco[PVD]<0){
                chimpoco[PVD] = 0;

            }
            cout<<"Nuestra vida:"<< chimpoco[PVD] <<"/"<<chimpocoPVDmax<<endl;
            system("pause>nul");

        }
        else{
            ataque = true;
            system("cls");

            cout<<"TU TURNO"<<endl;
            cout<<"1Ataque"<<endl;
            cout<<"2Items"<<endl;
            cout<<"3Salir del juego"<< endl;
            cin>>eleccion;
    int ataqueNuestrod = chimpoco[ataqueMinimod] + (rand()% (chimpoco[ataqueMaximod] - chimpoco[ataqueMinimod])+1);
            if (instanciaAtaqued != 0){
                ataqueNuestrod =  ataqueNuestrod * 1.30;
                instanciaAtaqued--;
                cout<<"te queda "<< instanciaAtaqued<<" del boost de ataque"<<endl;
            }
            if(eleccion == 1){

    cout<<"ataque chimpoco: "<< ataqueNuestrod<<endl;

            enemigo[PVED] -= ataqueNuestrod;
            if (enemigo[PVED]<0){
                enemigo[PVED] = 0;
            }
            }if (eleccion == 2){
            cout<<"Elegi un items "<<endl;
                cout<<"1 Boost de ataque "<< cargasAtaqued<<endl;
                cout<<"2 Boost de defensa "<< cargasDefensad<<endl;
                cout<<"3 Pocion de vida "<< cargasVidad<<endl;

                cin>>elegirPocion;

                    if(elegirPocion == 1 && cargasAtaqued != 0){

                        cout<<"elegiste el boost de ataque"<<endl;

                        instanciaAtaqued = 2;

                        cargasAtaqued--;

                    } else if(elegirPocion == 2 && cargasDefensad !=0){

                        cout<<"elegiste el boost de defensa"<<endl;
                        instanciaDefensad = 3;
                        cargasDefensad--;


                    }else if(elegirPocion == 3 && cargasVidad !=0){
                        if(chimpoco[PVD] >= chimpocoPVDmax){
                            cout<<"tenes la vida al maximo flaco que te vas a curar"<<endl;
                        }else{
                            cout<<"elegiste la pocion de vida"<<endl;
                            chimpoco[PVD] += chimpocoPVDmax *0.50;
                            cargasVidad--;
                            cout<<"te quedan"<<cargasVidad<<"pociones"<<endl;
                            if(chimpoco[PVD] > chimpocoPVDmax )
                                chimpoco[PVD] = chimpocoPVDmax;
                            if(cargasVidad == 0 ){
                            cout<<"Te quedaste sin pociones de vida";
                            }
                        }
                    }

             cout<<"Vida enemiga: "<<enemigo[PVED]<<"/"<< enemigoPVEDmax<<endl;
            system("pause>nul");

                }
                if (eleccion == 3) {
                int salirDelJuego = true;
                 if (chimpoco [PVD]=0) {
             cout << "Saliendo del juego... Regresando al menu principal." << endl;
             system("pause");
    }
                break;
            }
        }
    }
    if(chimpoco[PVD]<0){
    cout<<"mal ahi perdiste, suerte en la proxima"<<endl;
    system("pause");
    }
    if (chimpoco [PVD]>0) {
    cout<<"biennn ganaste amigo que capo"<<endl;
    system("pause");
    chimpoco[PVD]= chimpocoPVDmax;
    }
    if (chimpoco [PVD]=0) {
             cout << "Saliendo del juego... Regresando al menu principal." << endl;
             system("pause");
    }
}



void modoDios ()
{

    int enemigo[3];
    int chimpoco[3];
    nombred();
    eleccionChimpocod(chimpoco);
    for(int i =1 ; i <=5 ; i++){
        oponented(enemigo, i);
    combated(chimpoco, enemigo);
    if (chimpoco[PVD]<0){
        break;
    }


}
}
