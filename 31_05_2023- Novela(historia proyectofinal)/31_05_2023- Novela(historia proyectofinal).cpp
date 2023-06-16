// 31_05_2023- Novela(historia proyectofinal).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <conio.h>
#include <windows.h>


int main()
{
    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);

    int dec1 = 1;
    int dec2 = 1;
    int dec3 = 1;
    int dec4 = 1;
    int dec5 = 1;
    int dec6 = 1;
    int dec7 = 1;
    int dec8 = 1;
    int dec9 = 1;
    int dec10 = 1;
    int dec11 = 1;
    int dec12 = 1;
    int dec13 = 1;
    int dec14 = 1;
    int dec15 = 1;
    int dec16 = 1;
    int dec17 = 1;
    int dec18 = 1;
    int dec19 = 1;
    int dec20 = 1;
    int dec21 = 1;
    int dec22 = 1;

    std::string personaje_elegido = "tilin jijiji ja";

    std::cout << "        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠆⠀⠀       \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠔⠒⠉⠉⠁⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠗⠋⠁⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⢀⣀⣀⠤⠴⠒⠚⠉⠁⠀⠈⠑⢤⡀⢠⠀⠀⠀⠀⠀⠁⠀ \n";
    std::cout << "           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣤⠤⢤⡧⠤⠖⠒⠊⠉⠉⠉⠁⠈⠁⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠉⢺⠀⠀⠀⠀⠀⠈⡀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠘⢆⣠⣷⣤⣤⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢄⡀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠃ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⣴⡿⠛⢉⣉⡛⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⠑⠢⢤⣄⠀⡇⠀⠀⠀⠀⠀⢰ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢸⠏⠀⣴⣿⠁⢹⡆⠹⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡿⠷⢶⣦⠊⢈⠽⡇⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢰⠃⢹⣶⠋⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢡⠖⠑⣆⠹⣏⠁⠀⡇⠀⠀⠀⠀⠀⠀ \n",
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠸⡄⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢀⣿⠃⣸⠀⠈⠀⠀⡇⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠈⠓⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠘⠋⢁⡇⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢄⣠⠞⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⡀⠀⠀⠀⢠⠀⠀⠀⠀⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⡇⠀⠀⠀⢸⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⠇⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⢇⠀⠀⠀⠹⡀⠀⠀⠘⡆⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢸⠀⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠸⡄⠀⠀⠀⠉⠒⠤⣄⣃⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⡇⠀⠀⠀⡇⠀⠀⠀⠀ \n",
        std::cout << "            ⠀⠳⡀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠒⢶⠦⠗⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏⢸⠁⠀⠀⠸⠁⠀⠀⡠⠀ \n";
    std::cout << "            ⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠛⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠔⠁⠀⡏⠀⠀⢀⣇⣤⠴⠎⣁⣀ \n";
    std::cout << "            ⠀⠀⠀⠀⠑⣄⣀⣀⡀⠀⠀⠀⠀⢀⣏⣀⡀⠀⢙⡗⠢⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠔⠊⠁⠀⠀⠀⠘⠓⠒⡾⠉⠀⢹⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⢀⡜⠁⠀⠀⠈⠳⡄⠀⠀⡜⠉⠀⠉⢲⣸⠇⠀⠀⠈⠙⠒⠤⢤⣤⠔⠚⠉⠀⢸⡄⠀⠀⠀⠀⠀⠀⢀⡜⠁⠀⠀⠘⣆⣀⡀⠀ \n";
    std::cout << "            ⠀⠀⠀⢸⡁⠀⠀⠀⠀⠀⠘⣆⠞⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⢰⣇⡀⠀⣰⠊⠉⠙⢆⠀⠀⣠⠖⠊⠉⠙⠢⡀⠀⠀⢻⣿⣿⣿ \n";
    std::cout << "            ⠀⠀⠀⢰⢷⡀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⢰⡟⠀⠀⠀⠀⠀⠀⠀⣾⠀⠙⣦⡇⠀⠀⠀⠈⠆⠊⠁⠀⠀⠀⠀⠀⡇⠀⠀⠈⣿⣿⣿\n";
    std::cout << "            ⠀⠀⢠⠋⠙⢿⠢⣄⠀⠀⠀⠀⠁⠀⠀⠀⢠⠏⢱⣄⠀⠀⠀⢀⣀⠴⡟⢢⣀⠈⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠸⣿⡿ \n";
    std::cout << "            ⠀⠀⠃⠀⠀⠀⠱⣄⣙⣦⣀⡀⠀⠀⠀⡰⠿⣴⡏⠈⢻⣏⣉⠉⠀⠀⠁⠀⣹⠀⠀⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⢿⡟ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠓⢄⣠⠇⢀⡟⠀⠀⠘⠓⢄⡑⠀⠀⠚⠉⡏⡰⠋⠀⠀⠙⢦⣄⡀⠐⠊⠁⠙⠆⠀⠀⠀⠀⠀⠀⠈⣿ \n";
    Sleep(500);
    
    std::cout << "Suena tu alarma";
    Sleep(1500);
    
    std::cout << " son las 6:30 am,";
    Sleep(1500);
    std::cout << "es lunes,";
   Sleep(1500);
    std::cout << "lunes con l de que flojera,";
    Sleep(2000);
    std::cout << "tocaba otro dia de zzz de clases.";
    Sleep(2000);
    std::cout << "\n Que quieres hacer?";
   Sleep(2000);
    std::cout << " \n 1) Seguirte durmiendo por que sos tremendo flojo ";
    Sleep(2000);
    std::cout << " \n 2)Levantarte y hacer algo util en tu vida \n";
   
    std::cin >> dec1;

    if (dec1 == 1)
    {
        Sleep(1000);
        std::cout << "Te vuelves a dormir*\n";
        Sleep(2000);
        std::cout << "Pasan 15 minuto*\n";
        Sleep(2000);


        std::cout << "Llega tu mamá y te despierta a golpes*\n";
        Sleep(2000);
        std::cout << " \n ";
        std::cout << "        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠆⠀⠀       \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠔⠒⠉⠉⠁⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠗⠋⠁⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⢀⣀⣀⠤⠴⠒⠚⠉⠁⠀⠈⠑⢤⡀⢠⠀⠀⠀⠀⠀⠁⠀ \n";
        std::cout << "           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣤⠤⢤⡧⠤⠖⠒⠊⠉⠉⠉⠁⠈⠁⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠉⢺⠀⠀⠀⠀⠀⠈⡀ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠘⢆⣠⣷⣤⣤⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢄⡀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠃ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⣴⡿⠛⢉⣉⡛⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⠑⠢⢤⣄⠀⡇⠀⠀⠀⠀⠀⢰ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢸⠏⠀⣴⣿⠁⢹⡆⠹⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡿⠷⢶⣦⠊⢈⠽⡇⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢰⠃⢹⣶⠋⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢡⠖⠑⣆⠹⣏⠁⠀⡇⠀⠀⠀⠀⠀⠀ \n",
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠸⡄⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢀⣿⠃⣸⠀⠈⠀⠀⡇⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠈⠓⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠘⠋⢁⡇⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢄⣠⠞⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⠀⡀⠀⠀⠀⢠⠀⠀⠀⠀⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⠀⡇⠀⠀⠀⢸⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⠇⠀⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⢇⠀⠀⠀⠹⡀⠀⠀⠘⡆⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢸⠀⠀⠀⠀⠀⠀⠀⠀ \n";
        std::cout << "            ⠸⡄⠀⠀⠀⠉⠒⠤⣄⣃⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⡇⠀⠀⠀⡇⠀⠀⠀⠀ \n",
            std::cout << "            ⠀⠳⡀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠒⢶⠦⠗⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏⢸⠁⠀⠀⠸⠁⠀⠀⡠⠀ \n";
        std::cout << "            ⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠛⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠔⠁⠀⡏⠀⠀⢀⣇⣤⠴⠎⣁⣀ \n";
        std::cout << "            ⠀⠀⠀⠀⠑⣄⣀⣀⡀⠀⠀⠀⠀⢀⣏⣀⡀⠀⢙⡗⠢⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠔⠊⠁⠀⠀⠀⠘⠓⠒⡾⠉⠀⢹⠀⠀⠀⠀ \n";
        std::cout << "            ⠀⠀⠀⢀⡜⠁⠀⠀⠈⠳⡄⠀⠀⡜⠉⠀⠉⢲⣸⠇⠀⠀⠈⠙⠒⠤⢤⣤⠔⠚⠉⠀⢸⡄⠀⠀⠀⠀⠀⠀⢀⡜⠁⠀⠀⠘⣆⣀⡀⠀ \n";
        std::cout << "            ⠀⠀⠀⢸⡁⠀⠀⠀⠀⠀⠘⣆⠞⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⢰⣇⡀⠀⣰⠊⠉⠙⢆⠀⠀⣠⠖⠊⠉⠙⠢⡀⠀⠀⢻⣿⣿⣿ \n";
        std::cout << "            ⠀⠀⠀⢰⢷⡀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⢰⡟⠀⠀⠀⠀⠀⠀⠀⣾⠀⠙⣦⡇⠀⠀⠀⠈⠆⠊⠁⠀⠀⠀⠀⠀⡇⠀⠀⠈⣿⣿⣿\n";
        std::cout << "            ⠀⠀⢠⠋⠙⢿⠢⣄⠀⠀⠀⠀⠁⠀⠀⠀⢠⠏⢱⣄⠀⠀⠀⢀⣀⠴⡟⢢⣀⠈⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠸⣿⡿ \n";
        std::cout << "            ⠀⠀⠃⠀⠀⠀⠱⣄⣙⣦⣀⡀⠀⠀⠀⡰⠿⣴⡏⠈⢻⣏⣉⠉⠀⠀⠁⠀⣹⠀⠀⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⢿⡟ \n";
        std::cout << "            ⠀⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠓⢄⣠⠇⢀⡟⠀⠀⠘⠓⢄⡑⠀⠀⠚⠉⡏⡰⠋⠀⠀⠙⢦⣄⡀⠐⠊⠁⠙⠆⠀⠀⠀⠀⠀⠀⠈⣿ \n";
        std::cout << " \n ";
        std::cout << "Te dice que ya te levantes que ya vas tarde a la escuela y que sos un flojo inutil*\n";
        Sleep(2000);
        std::cout << " Te levantas con menos ganas que yo de hacer este programa* \n";
        Sleep(2000);
        std::cout << "\n Que quieres hacer?";
        Sleep(2000);
        std::cout << " \n 1) Meterte a bañar  ";
        Sleep(2000);
        std::cout << " \n 2) Vestirte e irte a desayunar \n";
        std::cin >> dec2;
        if (dec2 == 1)
        {
            Sleep(1000);
            std::cout << " \n Te ve tu mamá y te dice que ya ni tiempo tienes de eso que ya te vayas a desayunar. ";
            Sleep(2000);
            std::cout << " \n Te vistes y te bajas a desayunar* ";
            Sleep(2000);
            std::cout << " \n Te haces lo primero que ves* ";
            Sleep(2000);
            std::cout << " \n Llega tu mamá y te dice que ya era hora.";
            Sleep(2000);         
            std::cout << " \n Acabas de desayunar* ";
            Sleep(2000);
            std::cout << " \n ";
            std::cout << "\n Que quieres hacer ahora?";
            Sleep(2000);
            std::cout << " \n 1) Irte a la escuela  ";
            Sleep(2000);
            std::cout << " \n 2) Quedarte un rato mas y ver el celu \n";
            std::cin >> dec3;
            if (dec3 == 2)
            {
                Sleep(1000);
                std::cout << " \n  Ves un rato el celu pero...   ";
                Sleep(2000);
                std::cout << " \n Llega tu mamá y te dice:  que ya te vayas que se te hace tarde, tienes 3 minutos para llegar a tu escuela >:( ";
                Sleep(2000);
                std::cout << " \n Sales de tu casa corriendo tan rapido como una del conalep yendo hacia vato sin futuro*   ";
                Sleep(2000);
            }
        }
        else
        {
            Sleep(1000);
            std::cout << " \n Te vistes y te bajas a desayunar* ";
            Sleep(2000);
            std::cout << " \n Te haces lo primero que ves* ";
            Sleep(2000);
            std::cout << " \n Llega tu mamá y te dice que ya era hora.";
            Sleep(2000);
            std::cout << " \n Te dice: Aunque no te bañaste, hueles a jugador de lol, se va* ";
            Sleep(2000);
            std::cout << " \n Acabas de desayunar* ";
            Sleep(2000);
            std::cout << " \n ";
            std::cout << "\n Que quieres hacer ahora?";
            Sleep(2000);
            std::cout << " \n 1) Irte a la escuela  ";
            Sleep(2000);
            std::cout << " \n 2) Quedarte un rato mas y ver el celu \n";
            std::cin >> dec3;
            if (dec3 == 2)
            {
                Sleep(1000);
                std::cout << " \n  Ves un rato el celu pero...   ";
                Sleep(2000);
                std::cout << " \n Llega tu mamá y te dice:  que ya te vayas que se te hace tarde, tienes 3 minutos para llegar a tu escuela >:( ";
                Sleep(2000);
                std::cout << " \n Sales de tu casa corriendo tan rapido como una del conalep yendo hacia vato sin futuro*   ";
                Sleep(2000);
            }

        }
    }
    else
    {
        Sleep(1000);
        std::cout << "Te levantas con menos ganas que yo de hacer este programa* \n";
        Sleep(2000);
        std::cout << " \n ";
        std::cout << "\n Que quieres hacer?";
         Sleep(2000);
        std::cout << " \n 1) Meterte a bañar  ";
        Sleep(2000);
        std::cout << " \n 2) Vestirte e irte a desayunar \n";
        std::cin >> dec2;
        if (dec2 == 1)
        {
            Sleep(1000);
            std::cout << " \n Te bañas asi bien nice y dejas de oler a jugador de lol* ";
            Sleep(2000);
            std::cout << " \n Al acabar te pones tu uniforma y bajas a desayunar* ";
            Sleep(2000);
            std::cout << " \n Te haces lo primero que ves* ";
            std::cout << " \n ";
            Sleep(2000);

            std::cout << " \n ";
            std::cout << " \n ";
            std::cout << "        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠆⠀⠀       \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠔⠒⠉⠉⠁⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠗⠋⠁⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⢀⣀⣀⠤⠴⠒⠚⠉⠁⠀⠈⠑⢤⡀⢠⠀⠀⠀⠀⠀⠁⠀ \n";
            std::cout << "           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣤⠤⢤⡧⠤⠖⠒⠊⠉⠉⠉⠁⠈⠁⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠉⢺⠀⠀⠀⠀⠀⠈⡀ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠘⢆⣠⣷⣤⣤⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢄⡀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠃ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⣴⡿⠛⢉⣉⡛⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⠑⠢⢤⣄⠀⡇⠀⠀⠀⠀⠀⢰ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢸⠏⠀⣴⣿⠁⢹⡆⠹⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡿⠷⢶⣦⠊⢈⠽⡇⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢰⠃⢹⣶⠋⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢡⠖⠑⣆⠹⣏⠁⠀⡇⠀⠀⠀⠀⠀⠀ \n",
                std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠸⡄⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢀⣿⠃⣸⠀⠈⠀⠀⡇⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠈⠓⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠘⠋⢁⡇⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢄⣠⠞⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⠀⡀⠀⠀⠀⢠⠀⠀⠀⠀⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⠀⡇⠀⠀⠀⢸⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⠇⠀⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⢇⠀⠀⠀⠹⡀⠀⠀⠘⡆⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢸⠀⠀⠀⠀⠀⠀⠀⠀ \n";
            std::cout << "            ⠸⡄⠀⠀⠀⠉⠒⠤⣄⣃⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⡇⠀⠀⠀⡇⠀⠀⠀⠀ \n",
                std::cout << "            ⠀⠳⡀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠒⢶⠦⠗⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏⢸⠁⠀⠀⠸⠁⠀⠀⡠⠀ \n";
            std::cout << "            ⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠛⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠔⠁⠀⡏⠀⠀⢀⣇⣤⠴⠎⣁⣀ \n";
            std::cout << "            ⠀⠀⠀⠀⠑⣄⣀⣀⡀⠀⠀⠀⠀⢀⣏⣀⡀⠀⢙⡗⠢⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠔⠊⠁⠀⠀⠀⠘⠓⠒⡾⠉⠀⢹⠀⠀⠀⠀ \n";
            std::cout << "            ⠀⠀⠀⢀⡜⠁⠀⠀⠈⠳⡄⠀⠀⡜⠉⠀⠉⢲⣸⠇⠀⠀⠈⠙⠒⠤⢤⣤⠔⠚⠉⠀⢸⡄⠀⠀⠀⠀⠀⠀⢀⡜⠁⠀⠀⠘⣆⣀⡀⠀ \n";
            std::cout << "            ⠀⠀⠀⢸⡁⠀⠀⠀⠀⠀⠘⣆⠞⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⢰⣇⡀⠀⣰⠊⠉⠙⢆⠀⠀⣠⠖⠊⠉⠙⠢⡀⠀⠀⢻⣿⣿⣿ \n";
            std::cout << "            ⠀⠀⠀⢰⢷⡀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⢰⡟⠀⠀⠀⠀⠀⠀⠀⣾⠀⠙⣦⡇⠀⠀⠀⠈⠆⠊⠁⠀⠀⠀⠀⠀⡇⠀⠀⠈⣿⣿⣿\n";
            std::cout << "            ⠀⠀⢠⠋⠙⢿⠢⣄⠀⠀⠀⠀⠁⠀⠀⠀⢠⠏⢱⣄⠀⠀⠀⢀⣀⠴⡟⢢⣀⠈⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠸⣿⡿ \n";
            std::cout << "            ⠀⠀⠃⠀⠀⠀⠱⣄⣙⣦⣀⡀⠀⠀⠀⡰⠿⣴⡏⠈⢻⣏⣉⠉⠀⠀⠁⠀⣹⠀⠀⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⢿⡟ \n";
            std::cout << "            ⠀⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠓⢄⣠⠇⢀⡟⠀⠀⠘⠓⢄⡑⠀⠀⠚⠉⡏⡰⠋⠀⠀⠙⢦⣄⡀⠐⠊⠁⠙⠆⠀⠀⠀⠀⠀⠀⠈⣿ \n";
            std::cout << " \n ";
            std::cout << " \n ";
            std::cout << " \n Llega tu mamá y te felicita por que ve que hiciste algo util por primera vez en tu vida ";
            Sleep(2000);
            std::cout << " \n Te dice: Mmmmm (de rico xd),";
            Sleep(2000);
            std::cout << " Hueles a jugador de genshin impact (osea rico)";
            Sleep(2000);
            std::cout << " se va* ";
            Sleep(2000);
            std::cout << " \n ";
            std::cout << "\n Que quieres hacer ahora?";
            Sleep(2000);
            std::cout << " \n 1) Irte a la escuela  ";
            Sleep(2000);
            std::cout << " \n 2) Quedarte un rato mas y ver el celu \n";
            std::cin >> dec3;
            if (dec3 == 2)
            {
                Sleep(1000);
                std::cout << " \n  Ves un rato el celu ";
                Sleep(2000);
                std::cout << " \n Ves tu reloj y ves que ya es hora de irte ";
                Sleep(2000);
                std::cout << " \n Sales de tu casa*   ";
                Sleep(2000);
            }
        }
        else
        {
            Sleep(1000);
            std::cout << " \n Te vistes y te bajas a desayunar* ";
            Sleep(2000);
            std::cout << " \n Te haces lo primero que ves* ";
            Sleep(2000);
            std::cout << " \n Llega tu mamá y te felicita por que ve que hiciste algo util por primera vez en tu vida ";
            Sleep(2000);
            std::cout << " \n Te dice: Aunque no te bañaste, hueles a jugador de lol, se va* ";
            Sleep(2000);
            std::cout << " \n Acabas de desayunar* ";
            Sleep(2000);
            std::cout << " \n ";
            std::cout << "\n Que quieres hacer ahora?";
            Sleep(2000);
            std::cout << " \n 1) Irte a la escuela  ";
            Sleep(2000);
            std::cout << " \n 2) Quedarte un rato mas y ver el celu \n";
            std::cin >> dec3;
            if (dec3 == 2)
            {
                Sleep(1000);
                std::cout << " \n  Ves un rato el celu pero...   ";
                Sleep(2000);
                std::cout << " \n Llega tu mamá y te dice:  que ya te vayas que se te hace tarde ";
                Sleep(2000);
                std::cout << " \n Sales de tu casa*   ";
                Sleep(2000);
            }
            
        }

    }

    std::cout << " \n Vas rumbo a la escuela y vas a cruzar la calle... ";
    Sleep(2000);
    std::cout << " \n La empiezas a cruzar y vas a mitad de camino* ";
    Sleep(2000);
    std::cout << " \n Viene 2 carros haciendo carreras y te van a atropellar :0 ";
    Sleep(2000);
    std::cout << " \n El de la izquierda es rojo carton :0 ";
    Sleep(2000);
    std::cout << " \n El de la derecha es azul higado encebollado :0 ";
    Sleep(2000);
    std::cout << " \n ";
    std::cout << " \n ";
    std::cout << " ⣀⣠⣾⢿⣻⣿⣿⣿⣿⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⢧⠀⠀⠀⠀⡀⢤⠰⣴ ⠀\n";
    std::cout << "⣿⢿⣽⣻⣷⣻⣿⣿⣿⣾⣳⢿⣞⡷⣟⣾⢷⣻⣾⣳⢿⡧⠀⠀⠀⢂⠘⢦⣟⣿ ⠀\n";
    std::cout << "⣿⣻⢾⣳⣿⡯⣳⢏⡿⣷⢿⣯⢿⣽⣻⣽⣻⢷⣯⣟⣯⣷⡁⠄⡈⢄⠚⡴⣹⢾ ⠀\n";
    std::cout << "⣿⣽⣻⡟⢻⡇⠀⠉⠘⠿⣿⣞⣯⣟⣷⢯⣟⡿⣾⣽⣳⣿⣽⣾⣵⣮⡷⠾⠑⣿ ⠀\n";
    std::cout << "⣿⢾⣽⡘⢦⣻⡄⠀⠀⠀⠈⠻⣽⢾⣯⣟⣯⢿⣳⣯⡷⣯⠿⠟⠋⠁⠀⠀⢠⣿ ⠀\n";
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣧⡤⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡔⣏⢽⣻ ⠀\n";
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⢠⢤⡀⠀⠀⠀⠀⠀⢀⡤⣄⠀⠀⠀⢻⣾⡼⣯⣿ ⠀\n";
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠘⠛⠃⠀⢀⡀⠀⠀⠈⠻⠋⠀⠀⠀⠈⢿⣿⣿⣿ ⠀\n";
    std::cout << "⣿⣿⣿⣿⣿⣿⣿⣳⡴⣶⢦⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⢠⣞⡶⣆⠀⢹⣿⢿⣿⠀\n";
    std::cout << "⣿⣏⠟⡭⢛⡜⢲⢹⠈⠈⠁⠀⠀⠀⠰⣋⠥⢛⠀⠀⠀⠀⠙⠚⠁⠀⠀⡫⣞⣿⠀\n";
    std::cout << "⣿⣜⣣⢜⡡⢎⡱⢎⣧⠀⠀⠀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⢮⣿ ⠀\n";
    std::cout << "⡿⣞⣷⣯⣽⣾⣽⣻⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿ ⠀\n";
    std::cout << "⡿⣞⣷⣯⣽⣾⣽⣻⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠀\n";

    std::cout << " \n ";
    std::cout << " \n ";
    std::cout << " \n Cual quieres que te atropelle?  ";
    Sleep(2000);
    std::cout << " \n 1) El rojo carton (zzzz) ";
    Sleep(2000);
    std::cout << " \n 2) El de la derecha azul higado encebollado (God) ";
    Sleep(2000);
    std::cin >> dec4;
    std::cout << " \n ";
    std::cout << " \n ";
    std::cout << " \n Te atropella y mueres*";
    Sleep(2000);
    if (dec4 == 1)
    {
        std::cout << "\n Como elegiste que atropelle el  rojo carton te tocara renacer....  ";
            Sleep(2000);
            std::cout << " \n  Siendo el protagonista de un NTR (Tu no seras el que de...)(Tu no sabes que estas en un NTR) :,0 ";
            Sleep(2000);
            std::cout << " \n  Despiertas en el cuerpo de un tipico protagonista de un NTR (Con 17 años) pero con todos sus recuerdos";
            Sleep(2000);
            std::cout << " \n  Estas como en un tipo de cuarto y estas frente a un televisor";
            Sleep(2000);
            std::cout << " \n  Volteas a tu derecha y ves un CD";
            Sleep(2000);
            std::cout << " \n  Sabes que es lo que tienes que hacer...\n 1)Verlo \n 2)No Verlo ";
            Sleep(2000);
            std::cin >> dec5;
            if (dec5 == 1)
            {
                std::cout << " \n Decides verlo y ves...  ";
                Sleep(2000);
                std::cout << " un tutorial de cocina de como hacer cereal con leche :3";
                Sleep(2000);
                std::cout << " \n Ahora ves a tu izquierda y ves otro disco";
                Sleep(2000);
                std::cout << " \n Lo pones en el reproductor y...  ";
                Sleep(2000);
                std::cout << " \n ves a tu chavita (16 años) y a un profe haciendo el frutifantastico ";
                Sleep(2000);
                std::cout << " \n Te quedas impactado y no sabes que hacer ";
                Sleep(2000);
                std::cout << " \n Que haces? \n 1)Seguir viendolo \n Dejar de verlo ";
                Sleep(2000);
                std::cin >> dec6;
                if (dec6 == 1)
                {
                    std::cout << " \n (Antes que nada... Bro?) ";
                    Sleep(2000);
                    std::cout << " \n Estas muy xd que no lo voy a describir";
                    Sleep(2000);
                    std::cout << " \n Se acaba el video, estas triste y otra cosa que no dire.";
                    Sleep(2000);
                    std::cout << " \n Estas destrozado y no sabes que hacer ";
                    Sleep(2000);
                    std::cout << " \n 1) Llevar el video a la policia \n2)No hacer nada y seguir con tu chavita como si no supieras";
                    Sleep(2000);
                    std::cin >> dec7;
                    if (dec7 == 1)
                    {
                        std::cout << " \n Good Ending* ";
                        Sleep(2000);
                        std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                        Sleep(2000);
                        std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                        Sleep(2000);
                        std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. ";
                        Sleep(2000);
                    }
                    else
                    {
                        std::cout << "\n Pasas mas tiempo con tu chavita pero cada vez te llegan mas y mas videos";
                        Sleep(2000);
                        std::cout << "\n Cada vez mas y mas tu estabilidad mental y autoestima cae";
                        Sleep(2000);
                        std::cout << "\n Al principio tenias un fetiche pero ahora te desagradas a ti mismo";
                        Sleep(2000);
                        std::cout << "\n Que haces? \n 1) Terminar con ella \n 2)Seguir con ella";
                        Sleep(2000);
                        if (dec8 == 1)
                        {
                            std::cout << "\n Terminas con ella pero tu autoestima y estabilidad mental esta por los suelos";
                            Sleep(2000);
                            std::cout << "\n Aparece en las noticias que un joven se automato";
                            Sleep(2000);
                            std::cout << "\n Ese joven eres tu";
                            Sleep(2000);
                            std::cout << "\n Bad Ending";
                            Sleep(2000);
                            std::cout << "\n Debiste autoquererte desde el principio";
                            Sleep(2000);
                        }
                        else
                        {
                            std::cout << "\n Pasa un tiempo y aparece en las noticias que un joven se auto mato";
                            Sleep(2000);
                            std::cout << "\n Ese joven eres tu";
                            Sleep(2000);
                            std::cout << "\n Bad Ending";
                            Sleep(2000);
                            std::cout << "\n Debiste autoquererte desde el principio";
                            Sleep(2000);
                        }
                        
                    }
                }
                else
                {
                    std::cout << " \n Dejas de ver el video ";
                    Sleep(2000);
                    std::cout << " \n Estas destrozado y no sabes que hacer ";
                    Sleep(2000);
                    std::cout << " \n 1) Llevar el video a la policia \n2)No hacer nada y seguir con tu chavita como si no supieras";
                    Sleep(2000);
                    std::cin >> dec7;
                    if (dec7 == 1)
                    {
                        std::cout << " \n Good Ending* ";
                        Sleep(2000);
                        std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                        Sleep(2000);
                        std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                        Sleep(2000);
                        std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. ";
                        Sleep(2000);
                    }
                    else
                    {
                        std::cout << "\n Pasas mas tiempo con tu chavita pero cada vez te llegan mas y mas videos";
                        Sleep(2000);
                        std::cout << "\n Cada vez mas y mas tu estabilidad mental y autoestima cae";
                        Sleep(2000);
                        std::cout << "\n Al principio tenias un fetiche pero ahora te desagradas a ti mismo";
                        Sleep(2000);
                        std::cout << "\n Que haces? \n 1) Terminar con ella \n 2)Seguir con ella";
                        Sleep(2000);
                        if (dec8 == 1)
                        {
                            std::cout << "\n Terminas con ella pero tu autoestima y estabilidad mental esta por los suelos";
                            Sleep(2000);
                            std::cout << "\n Aparece en las noticias que un joven se automato";
                            Sleep(2000);
                            std::cout << "\n Ese joven eres tu";
                            Sleep(2000);
                            std::cout << "\n Bad Ending";
                            Sleep(2000);
                            std::cout << "\n Debiste autoquererte desde el principio";
                            Sleep(2000);
                        }
                        else
                        {
                            std::cout << "\n Pasa un tiempo y aparece en las noticias que un joven se auto mato";
                            Sleep(2000);
                            std::cout << "\n Ese joven eres tu, ya estabas muy afectado";
                            Sleep(2000);
                            std::cout << "\n Bad Ending";
                            Sleep(2000);
                            std::cout << "\n Debiste autoquererte desde el principio";
                            Sleep(2000);
                        }

                    }
                }
               
            }
            else
            {
                std::cout << "\n Piensas que es una broma o algun tipo de persona troll y lo tiras a la basura";
                 Sleep(2000);
                 std::cout << "\n Sigues tu dia normal (bueno lo que hacia la persona que ahora posees xd)";
                Sleep(2000);
                std::cout << "\n Sales con tu chavita asi todo felices pero la empiezas a ver mas rara que de costumbre";
                Sleep(2000);
               
                std::cout << "\n Que quieres hacer? \n 1)Preguntarle que le pasa \n 2) Pero no le di importancia ";
                std::cin >> dec6;

                if (dec6 == 1)
                {
                    std::cout << "\n Ella trata de evadir el tema pero tu le insistes";
                    Sleep(2000);
                    std::cout << "\n Te sonrie*";
                    Sleep(2000);
                    std::cout << "\n Sientes que hay gato encerrado*";
                    Sleep(2000);
                    std::cout << "\n Le sigues insistiendo y ella se enoja y se va*";
                    Sleep(2000);
                    std::cout << "\n Vuelves a tu casa y sigues viendo muchos cd";
                    Sleep(2000);
                    std::cout << "\n Que quieres hacer? \n 1) La ignorancia es felicidad \n 2) Los ves";
                    Sleep(2000);
                    std::cin >> dec7;
                    if (dec7 == 1)
                    {
                        std::cout << "\n Los ignoras y los vuelves a tirar";
                        Sleep(2000);
                        std::cout << "\n Escuchas que estan tocando la puerta";
                        Sleep(2000);
                        std::cout << "\n Los ignoras y los vuelves a tirar";
                        Sleep(2000);
                        std::cout << "\n Escuchas que tocan a la puerta";
                        Sleep(2000);
                        std::cout << "\n Que quieres hacer? \n 1) Vas a checar quien fue \n 2) Te haces el loco y mejor te vas a tu cuarto";
                        Sleep(2000);
                        std::cin >> dec8;
                        if (dec8 == 1)
                        {
                            std::cout << "\n Abres la puerta y ves que es la hermana de tu novia";
                            Sleep(2000);
                            std::cout << "\n Te pregunta si has visto los CD";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1) Le dices que no \n 2) Le preguntas como sabe eso";
                            Sleep(2000);
                            std::cin >> dec9;
                            if (dec9 == 1)
                            {
                                std::cout << "\n Ella te cuenta que en el contenido de los CD esta la evidencia de la infidelidad de tu Novia";
                                Sleep(2000);

                            }

                            std::cout << "\n Ella lo sabe por que ella la ha estado grabando, ya que cree que no mereces eso";
                            Sleep(2000);
                            std::cout << "\n Lo ha hecho durante mucho tiempo y desde el primer CD que te mando fue desde que empezo";
                            Sleep(2000);
                            std::cout << "\n Empiezas a pensar en todo lo que ha pasado y empiezas a unir los hilos";
                            Sleep(2000);
                            std::cout << "\n Te ofrece que si no le crees pueden ver los CD´s";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1) Le dices que le crees  \n 2) Le dices que vean los CD´s en tu cuarto";
                            Sleep(2000);
                            std::cin >> dec10;
                            if (dec10 == 1)
                            {
                                std::cout << "\n Te pones algo triste por creer eso pero es lo que hay";
                                Sleep(2000);
                                std::cout << "\n Le das las gracias por la informacion y la invitas a pasar a tu casa";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << "\n La haces pasar a tu cuarto y pones el reproductor y los videos";
                                Sleep(2000);
                                std::cout << "\n Efectivamente es lo que te dijo, pero es con el profesor :0";
                                Sleep(2000);
                                std::cout << "\n Te asqueas de ver el video y lo detienes instantaneamente";
                                Sleep(2000);
                                std::cout << "\n Te consuela y dice que nadie merece que le pase eso";
                                Sleep(2000);
                            }
                            std::cout << "\n Le preguntas que procede ahora?";
                            Sleep(2000);
                            std::cout << "\n Te ofrece una venganza o simplemente olvidarla";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1)Aceptar la venganza  \n 2) Simplemente olvidarla";
                            Sleep(2000);
                            std::cin >> dec11;
                            if (dec11 == 1)
                            {
                                std::cout << " \n Good Ending* ";
                                Sleep(2000);
                                std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                                Sleep(2000);
                                std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                                Sleep(2000);
                                std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. Excepto la hermana, ella es la excepcion ";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << " \n Terminas con ella pero te sientes algo mal por la decision";
                                Sleep(2000);
                                std::cout << " \n Logras superarla viendo videos de superacion personal ";
                                Sleep(2000);
                                std::cout << " \n Haces buena amistad con la hermana de tu ex y todo happy ";
                                Sleep(2000);
                            }


                        }
                        else
                        {
                            std::cout << " \n Prefieres ignorar aunque insistan mucho";
                            Sleep(2000);
                            std::cout << " \n Te vas a tu cuarto a pensar en todo";
                            Sleep(2000);
                            std::cout << " \n Pasa mas tiempo y sigues viendo muy rara a tu chava";
                            Sleep(2000);
                            std::cout << " \n Te trata mal y te cansas";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1)Terminarla \n 2) Seguir con ella";
                            Sleep(2000);
                            std::cin >> dec11;
                            if (dec11 == 1)
                            {
                                std::cout << " \n La terminas ";
                                Sleep(2000);
                                std::cout << " \n Te empiezas a enfocar en ti mismo y salen las cosas bien";
                                Sleep(2000);
                                std::cout << " \n Ya no lo buscas e ignoras cualqueir cosa que tenga que ver con ella";
                                Sleep(2000);
                                std::cout << " \n Terminas siendo una persona exitosa y todo sale bien :)";
                                Sleep(2000);

                            }
                            else
                            {
                                std::cout << " \n Sigues con ella pero cada vez mas y mas te va tratando peor";
                                Sleep(2000);
                                std::cout << " \n Llegas a un punto el cual ya la carga emocional es mucha ";
                                Sleep(2000);
                                std::cout << " \n La confrontas y ella te termina ";
                                Sleep(2000);
                                std::cout << " \n Tu tristeza mas tu carga emocional es mucha";
                                Sleep(2000);
                                std::cout << " \n Te auto matas*";
                                Sleep(2000);
                            }
                        }
                    }
                    else
                    {
                        std::cout << " \n 1) Llevar el video a la policia \n2)No hacer nada y seguir con tu chavita como si no supieras";
                        Sleep(2000);
                        std::cin >> dec7;
                        if (dec7 == 1)
                        {
                            std::cout << " \n Good Ending* ";
                            Sleep(2000);
                            std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                            Sleep(2000);
                            std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                            Sleep(2000);
                            std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. ";
                            Sleep(2000);
                        }
                        else
                        {
                            std::cout << "\n Pasas mas tiempo con tu chavita pero cada vez te llegan mas y mas videos";
                            Sleep(2000);
                            std::cout << "\n Cada vez mas y mas tu estabilidad mental y autoestima cae";
                            Sleep(2000);
                            std::cout << "\n Al principio tenias un fetiche pero ahora te desagradas a ti mismo";
                            Sleep(2000);
                            std::cout << "\n Que haces? \n 1) Terminar con ella \n 2)Seguir con ella";
                            Sleep(2000);
                            if (dec8 == 1)
                            {
                                std::cout << "\n Terminas con ella pero tu autoestima y estabilidad mental esta por los suelos";
                                Sleep(2000);
                                std::cout << "\n Aparece en las noticias que un joven se automato";
                                Sleep(2000);
                                std::cout << "\n Ese joven eres tu";
                                Sleep(2000);
                                std::cout << "\n Bad Ending";
                                Sleep(2000);
                                std::cout << "\n Debiste autoquererte desde el principio";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << "\n Pasa un tiempo y aparece en las noticias que un joven se auto mato";
                                Sleep(2000);
                                std::cout << "\n Ese joven eres tu";
                                Sleep(2000);
                                std::cout << "\n Bad Ending";
                                Sleep(2000);
                                std::cout << "\n Debiste autoquererte desde el principio";
                                Sleep(2000);
                            }

                        }
                    }
                }
                else
                {
                    std::cout << "\n Pasan un buen rato pero se rompe la taza y todos pa su casa (osea te vas a tu casa xd)";
                    Sleep(2000);
                    std::cout << "\n Vuelves a tu casa y sigues viendo muchos cd";
                    Sleep(2000);
                    std::cout << "\n Que quieres hacer? \n 1) La ignorancia es felicidad \n 2) Los ves";
                    Sleep(2000);
                    std::cin >> dec7;
                    if (dec7 == 1)
                    {
                        std::cout << "\n Los ignoras y los vuelves a tirar";
                        Sleep(2000);
                        std::cout << "\n Escuchas que estan tocando la puerta";
                        Sleep(2000);
                        std::cout << "\n Los ignoras y los vuelves a tirar";
                        Sleep(2000);
                        std::cout << "\n Escuchas que tocan a la puerta";
                        Sleep(2000);
                        std::cout << "\n Que quieres hacer? \n 1) Vas a checar quien fue \n 2) Te haces el loco y mejor te vas a tu cuarto";
                        Sleep(2000);
                        std::cin >> dec8;
                        if (dec8 == 1)
                        {
                            std::cout << "\n Abres la puerta y ves que es la hermana de tu novia";
                            Sleep(2000);
                            std::cout << "\n Te pregunta si has visto los CD";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1) Le dices que no \n 2) Le preguntas como sabe eso";
                            Sleep(2000);
                            std::cin >> dec9;
                            if (dec9 == 1)
                            {
                                std::cout << "\n Ella te cuenta que en el contenido de los CD esta la evidencia de la infidelidad de tu Novia";
                                Sleep(2000);

                            }

                            std::cout << "\n Ella lo sabe por que ella la ha estado grabando, ya que cree que no mereces eso";
                            Sleep(2000);
                            std::cout << "\n Lo ha hecho durante mucho tiempo y desde el primer CD que te mando fue desde que empezo";
                            Sleep(2000);
                            std::cout << "\n Empiezas a pensar en todo lo que ha pasado y empiezas a unir los hilos";
                            Sleep(2000);
                            std::cout << "\n Te ofrece que si no le crees pueden ver los CD´s";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1) Le dices que le crees  \n 2) Le dices que vean los CD´s en tu cuarto";
                            Sleep(2000);
                            std::cin >> dec10;
                            if (dec10 == 1)
                            {
                                std::cout << "\n Te pones algo triste por creer eso pero es lo que hay";
                                Sleep(2000);
                                std::cout << "\n Le das las gracias por la informacion y la invitas a pasar a tu casa";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << "\n La haces pasar a tu cuarto y pones el reproductor y los videos";
                                Sleep(2000);
                                std::cout << "\n Efectivamente es lo que te dijo, pero es con el profesor :0";
                                Sleep(2000);
                                std::cout << "\n Te asqueas de ver el video y lo detienes instantaneamente";
                                Sleep(2000);
                                std::cout << "\n Te consuela y dice que nadie merece que le pase eso";
                                Sleep(2000);
                            }
                            std::cout << "\n Le preguntas que procede ahora?";
                            Sleep(2000);
                            std::cout << "\n Te ofrece una venganza o simplemente olvidarla";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1)Aceptar la venganza  \n 2) Simplemente olvidarla";
                            Sleep(2000);
                            std::cin >> dec11;
                            if (dec11 == 1)
                            {
                                std::cout << " \n Good Ending* ";
                                Sleep(2000);
                                std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                                Sleep(2000);
                                std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                                Sleep(2000);
                                std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. Excepto la hermana, ella es la excepcion ";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << " \n Terminas con ella pero te sientes algo mal por la decision";
                                Sleep(2000);
                                std::cout << " \n Logras superarla viendo videos de superacion personal ";
                                Sleep(2000);
                                std::cout << " \n Haces buena amistad con la hermana de tu ex y todo happy ";
                                Sleep(2000);
                            }
                        

                        }
                        else
                        {
                            std::cout << " \n Prefieres ignorar aunque insistan mucho";
                            Sleep(2000);
                            std::cout << " \n Te vas a tu cuarto a pensar en todo";
                            Sleep(2000);
                            std::cout << " \n Pasa mas tiempo y sigues viendo muy rara a tu chava";
                            Sleep(2000);
                            std::cout << " \n Te trata mal y te cansas";
                            Sleep(2000);
                            std::cout << "\n Que quieres hacer? \n 1)Terminarla \n 2) Seguir con ella";
                            Sleep(2000);
                            std::cin >> dec11;
                            if (dec11 == 1)
                            {
                                std::cout << " \n La terminas ";
                                Sleep(2000);
                                std::cout << " \n Te empiezas a enfocar en ti mismo y salen las cosas bien";
                                Sleep(2000);
                                std::cout << " \n Ya no lo buscas e ignoras cualqueir cosa que tenga que ver con ella";
                                Sleep(2000);
                                std::cout << " \n Terminas siendo una persona exitosa y todo sale bien :)";
                                Sleep(2000);
                                
                            }
                            else
                            {
                                std::cout << " \n Sigues con ella pero cada vez mas y mas te va tratando peor";
                                Sleep(2000);
                                std::cout << " \n Llegas a un punto el cual ya la carga emocional es mucha ";
                                Sleep(2000);
                                std::cout << " \n La confrontas y ella te termina ";
                                Sleep(2000);
                                std::cout << " \n Tu tristeza mas tu carga emocional es mucha";
                                Sleep(2000);
                                std::cout << " \n Te auto matas*";
                                Sleep(2000);
                            }
                        }
                    }
                    else
                    {
                        std::cout << " \n Ves a tu chavita haciendolo con el profesor :0";
                        Sleep(2000);
                        std::cout << " \n Te sacas de onda y empiezas a unir todo y te das cuenta que por eso estaba tan rara";
                        Sleep(2000);
                        std::cout << " \n 1) Llevar el video a la policia \n2)No hacer nada y seguir con tu chavita como si no supieras";
                        Sleep(2000);
                        std::cin >> dec7;
                        if (dec7 == 1)
                        {
                            std::cout << " \n Good Ending* ";
                            Sleep(2000);
                            std::cout << " \n Haces que metan al profesor a la carcel por estar con una menor (aunque no haya algo de malo)";
                            Sleep(2000);
                            std::cout << " \n A tu ex chavita no hay consecuencias legales pero se gana la reputacion de ser una facilona y ahora nadie quiere estar con ella ";
                            Sleep(2000);
                            std::cout << " \n Y tu? Sigues viviendo tu vida sabiendo que las mujeres son todas unas mentirosas. ";
                            Sleep(2000);
                        }
                        else
                        {
                            std::cout << "\n Pasas mas tiempo con tu chavita pero cada vez te llegan mas y mas videos";
                            Sleep(2000);
                            std::cout << "\n Cada vez mas y mas tu estabilidad mental y autoestima cae";
                            Sleep(2000);
                            std::cout << "\n Al principio tenias un fetiche pero ahora te desagradas a ti mismo";
                            Sleep(2000);
                            std::cout << "\n Que haces? \n 1) Terminar con ella \n 2)Seguir con ella";
                            Sleep(2000);
                            if (dec8 == 1)
                            {
                                std::cout << "\n Terminas con ella pero tu autoestima y estabilidad mental esta por los suelos";
                                Sleep(2000);
                                std::cout << "\n Aparece en las noticias que un joven se automato";
                                Sleep(2000);
                                std::cout << "\n Ese joven eres tu";
                                Sleep(2000);
                                std::cout << "\n Bad Ending";
                                Sleep(2000);
                                std::cout << "\n Debiste autoquererte desde el principio";
                                Sleep(2000);
                            }
                            else
                            {
                                std::cout << "\n Pasa un tiempo y aparece en las noticias que un joven se auto mato";
                                Sleep(2000);
                                std::cout << "\n Ese joven eres tu";
                                Sleep(2000);
                                std::cout << "\n Bad Ending";
                                Sleep(2000);
                                std::cout << "\n Debiste autoquererte desde el principio";
                                Sleep(2000);
                            }

                        }
                    }
                }
            }



    }
    else
    {
        std::cout << "\n Despiertas en una vida tipo medieval";
        Sleep(2000);
        std::cout << "\n Hay encargos, bestias peligrosas, y gremio de aventureros.";
        Sleep(2000);
        std::cout << "\n Empiezas a juntar todos los hilos y como sos un virgen sin futuro sabes donde estas";
        Sleep(2000);   
        std::cout << "\n Estas en la tipica aventura medieval";
        Sleep(2000);
        std::cout << " tienes las estadisticas de granjero subidas a tope asi que...";
        Sleep(2000);
        std::cout << " te toca ser un simple granjero xd.";
        Sleep(2000);
        std::cout << "\n Por que?";
        Sleep(2000);
        std::cout << " Por que es mi historia y yo quiero que seas eso xd";
        Sleep(2000);
      
        
            std::cout << "\nSe te dan tus herramientas y magicamente una granja";
            Sleep(2000);
            std::cout << "\n Ya que pos no hay granja sin granjero xd";
            Sleep(2000);
            std::cout << "\n Tus estadisticas de granjero estan al tope pero hay otra cosa...";
            Sleep(2000);
            std::cout << "\n En tu menu dice: ´´Holus´´  ";
            Sleep(2000);
            std::cout << "\n No tienes ni idea de que sea  ";
            Sleep(2000);

            std::cout << "\n Te diriges a tu granja para empezar a ´´farmear´´ (chiste de granjeros)  ";
            Sleep(2000);
            std::cout << "\n Ves una papa que esta en el piso y te esta hablando ";
            Sleep(2000);
            std::cout << "\n Acabas de reencarnar en un mundo tipo RPG asi que no te sorprendes xd ";
            Sleep(2000);
            std::cout << ", recuerdas que Holus es verduras en latin asi que entiendes que tienes la capacidad de hablar con las papas y algunas frutas verduras";
            Sleep(2000);
            std::cout << "\n La papa te dice que si la ayudas a llegar a un lugar donde esta su familia (de papas)";
            Sleep(2000);
            std::cout << "\n Que haces? \n 1) Lo ayudas  \n2) La aplastas";
            Sleep(2000);
            std::cin >> dec6;
            if (dec6 == 1)
            {
                std::cout << "\n Aceptas ayudar a la papa, te pide que lo lleves a una parte del campo y la dejes ahi ";
                Sleep(2000);
                std::cout << "\n Vas caminando y sientes que algo va mal ";
                Sleep(2000);
                std::cout << "\n Sigues caminando y... ";
                Sleep(2000);
                std::cout << " no pasa nada, la dejas donde te pidio y te agradece ";
                Sleep(2000);
                std::cout << "\n Estadisticas: Subida de nivel +2 ";
                Sleep(2000);
                std::cout << "\n Que buena onda* ";
                Sleep(2000);
                std::cout << "\n Te regresas y ahora si vas a tu granja ";
                Sleep(2000);
               
            }
            else
            {
                std::cout << "\n La aplastas ";
                Sleep(2000);
                std::cout << "\n Estadisticas: Subida de nivel +1 ";
                Sleep(2000);
                std::cout << "\n sigues tu camino a tu granja";
                Sleep(2000);
            }

            std::cout << "\nLlegas y haces cosas de granjero xd ";
            Sleep(2000);
            std::cout << "\nPasa un tiempo y riegas tu cultivo hasta que... ";
            Sleep(2000);
            std::cout << "\n Escuchas un ruido re fuerte ";
            Sleep(2000);
            std::cout << "\n Que haces? \n 1) Vas hacia el sonido \n2) Lo ignoras ";
            Sleep(2000);
            std::cin >> dec7;
            if (dec7 == 1)
            {
                std::cout << "\n Llegas al medio de tu campo pero el sonido viene  debajo de la tierra ";
                Sleep(2000);
                std::cout << "\n Te agachas y efectivamente viene de debajo de la tierra ";
                Sleep(2000);
                std::cout << "\n Que haces? \n 1) Escarbar \n2) No hacer nada ";
                Sleep(2000);
                std::cin >> dec8;
                if (dec8 == 1)
                {
                    std::cout << "\n Escarbas en la tierra hasta que llegas a lo que parece ser una papa con cara que grita ";
                    Sleep(2000);
                    std::cout << "\n Te exaltas*";
                    Sleep(2000);
                }
                else
                {
                    std::cout << "\n Algo empieza a resurgir de la tierra";
                    Sleep(2000);
                    std::cout << "\n Se asoma una papa con cara que grita";
                    Sleep(2000);
                    std::cout << "\n Te exaltas*";
                    Sleep(2000);
                }

            }
            else
            {

                std::cout << "\n El sonido sigue y escuchas un ruido como de tierra";
                Sleep(2000);
                std::cout << "\n Volteas a donde viene el ruido y ves como una cosa";
                Sleep(2000);
                std::cout << "\n Te acercas un poco  es una papa con cara que grita";
                Sleep(2000);
            }
            std::cout << "\n De la nada la papa (con acento frances) empieza a decir cosas raras";
            Sleep(2000);
            std::cout << "\n Dice: Vivir duele pero gracias por darme la vida, ahora eres mi madre-";
            Sleep(2000);
            std::cout << " Te seguiré hasta el fin del mundo o hasta que me coma un asno";
            Sleep(2000);
            std::cout << "\n La papa reacciona*";
            Sleep(2000);
            std::cout << "\n OH MADRE!!!";
            Sleep(2000);
            std::cout << "No dejes que me conviertan en puré… la pimienta me hace estornudar";
            Sleep(2000);
            std::cout << "\n Que haces? \n 1)Le preguntas que que wea le pasa? \n2) La lanzas con todas tus fuerzas hasta africa (Osea te deshaces de la papa) ";
            Sleep(2000);
            std::cin >> dec9;
            if (dec9 == 1)
            {
                std::cout << "\n Le preguntas que si es terraplanista o por que dice cosas sin sentido, de seguro no tienes cerebro ";
                Sleep(2000);
                std::cout << "\n Te dice: Lo bueno de no tener  cerebro es que no piensas en  lo absurdo de la existencia, porque existimos?";
                Sleep(2000);
                std::cout << "Ehe-";
                Sleep(2000);
                std::cout << "\n Te hace pensar que eso ya lo escuchaste en algun lado...";
                Sleep(2000);
                std::cout << "\n Concluyes que hablar con la papa que habla no tiene sentido (ironicamente) "; 
                Sleep(2000);
                std::cout << "\n Que haces? \n 1)La llevas donde estaba la anterior papa que viste \n2) La lanzas con todas tus fuerzas hasta africa (Osea te deshaces de la papa) ";
                Sleep(2000);
                std::cin >> dec10;
            }
           if (dec9==2)
           {
                std::cout << "\n La lanzas con todas tus fuerzas y escuchas como lentamente se aleja su voz* ";
                Sleep(2000);
           }
           if (dec10 == 2)
           {
               std::cout << "\n La lanzas con todas tus fuerzas y escuchas como lentamente se aleja su voz* ";
               Sleep(2000);
           }
           if (dec10 == 1)
           {
               if (dec6 == 1)
               {
                   std::cout << "\n Vas con la familia de papas y le preguntas que si conocen a esta papa rara ";
                   Sleep(2000);
                   std::cout << "\n La papa: Pos te crees que todas las papas nos conocemos o que ";
                   Sleep(2000);
                   std::cout << "\n Osea si es mi hijo pero no por que sea una papa y el igual significa que nos llevemos ";
                   Sleep(2000);
                   std::cout << "\n Le respondes que ta bien y te vas ";
                   Sleep(2000);
               }
               else
               {
                   std::cout << "\n La dejas junto a la papa que aplastaste la primera vez y te vas";
                   Sleep(2000);
               }
           }
           
           std::cout << "\n Te regresas de nuevo al granero y sigues con tu chamba de granerini";
           Sleep(2000);
           std::cout << "\n Ves que eres bueno en esto de la granjeria asi que consigues mucho dinero y subes mucho de nivel";
           Sleep(2000);
           std::cout << "\n Ahora que tienes mucho dinero te cuestionas tu futuro en el mundo ya que tu unica meta en el momento era juntar dinero, ahora que? la vida ya no tiene sentido";
           Sleep(2000);
           std::cout << "\n Lo piensas un tiempo";
           Sleep(2000);
           std::cout << "\n Aparece un mensajero en caballo";
           Sleep(2000);
           std::cout << "\n Te dice que debes ir a la ayuda de un pueblo ya que aparecio un mounstro y tus habilidades podrian servir, aparte de que necesitan hombre para pelearle";
           Sleep(2000);
           std::cout << "\n Que haces? \n 1)Vas a ayudar \n2) No vas por que sos tremendo flojo ";
           Sleep(2000);
           std::cin >> dec11;
           if (dec11 == 1)
           {
               std::cout << "\n Agarras tu hoz de granjero*";
               Sleep(2000);
               std::cout << "\n Vas por que quieres ayudar*";
               Sleep(2000);
           }
           else
           {
               std::cout << "\n Le dices que no iras ya que no te interesa";
               Sleep(2000);
               std::cout << "\n Te obliga a ir ";
               Sleep(2000);
               std::cout << "\n Agarras tu hoz de granjero*";
               Sleep(2000);
                std::cout << " y te vas con el";
               Sleep(2000);
              
           }

           std::cout << "\n Llegas y ves una papa gigante con brazos y piernas rodeada de soldados y aventureros de bajo nivel";
           Sleep(2000);
           std::cout << "\n Se te hace conocida la papa...";
           Sleep(2000);

           if (dec6 == 1)
           {
               std::cout << "\n Es la papa que ayudaste a llegar con su familia :0";
               Sleep(2000);
               std::cout << "\n Que haces? \n 1)Te acercas y le hablas \n2) Ves como destruye la ciudad ";
               Sleep(2000);
               std::cin >> dec12;
               if (dec12 == 1)
               {
                   std::cout << "\n Te acercas y haces que te vea";
                   Sleep(2000);
                   std::cout << "\n Le hablas y le preguntas que por que tan enojado, que mejor se coma un snicker";
                   Sleep(2000);
                   std::cout << "\n Se te queda viendo y te dice:";
                   Sleep(2000);
                   std::cout << "pos venia a destruir cosas de aqui para alla ya que los humanos no paran de matar a los de mi raza";
                   Sleep(2000);
                   std::cout << " pero solo por que tu estas aqui se los perdonare esta vez";
                   Sleep(2000);
                   std::cout << " solo por que te debo un favor";
                   Sleep(2000);
                   std::cout << "\nLe dices. Hey pero antes de que te vayas";
                   Sleep(2000);
                   std::cout << "\nTen, comete un snicker";
                   Sleep(2000);
                   std::cout << " Mejor?";
                   Sleep(2000);
                   std::cout << "\n Responde: Mejor";
                   Sleep(2000);
                   std::cout << " se va*";
                   Sleep(2000);
                   std::cout << " Narrador: Subes de nivel... nivel actual: 50";
                   Sleep(2000);
                   std::cout << " Se te acerca el pueblo y te agradecen (aunque realmente haya sido factor suerte)";
                   Sleep(2000);
                   std::cout << " Que haces? \n 1)Te bañas en halagos \n2) Te vas mientras das la espalda epicamente ";
                   Sleep(2000);
                   std::cin >> dec13;
                   if (dec13 == 1)
                   {
                       std::cout << "\n Te restriegas los halagos en todo el ego ";
                       Sleep(2000);
                       std::cout << "\n Llega un mensajero de la nobleza";
                       Sleep(2000);
                       std::cout << "\n Quieren al responsable de que la bestia se haya ido";
                       Sleep(2000);
                       std::cout << "\n Todos te señalan*";
                      
                   }
                   else
                   {
                       std::cout << "\n Te empiezas epicamente hasta que escuchas que un caballo que viene a tu direccion";
                       Sleep(2000);
                       std::cout << "\n Un mensajero de la nobleza llega y te dice que te habla el rey";
                       Sleep(2000);
                      
                   }
                      
                  
                   Sleep(2000);
                   std::cout << "\n Te suben obligatoriamente al caballo y te llevan al castillo del rey";
                   Sleep(2000);
                   std::cout << "\n Te ofrecen a una minita que esta dispuesta a estar contigo ";
                   Sleep(2000);
                   std::cout << "\n No la puedes rechazar asi que vamos directo xd";
                   Sleep(2000);
                   std::cout << "\n Cual eliges?";
                   Sleep(2000);
                   std::cout << "\n 1) Una joven con una belleza tan grande como sus caprichos, se puede decir que su linaje le ha dado un corazón noble.";
                   Sleep(2000);
                   std::cout << "\n 2) Futura promesa de artes antiguas, en otros tiempos sería perseguida por sus costumbres pero ahora es perseguida por su belleza";
                   Sleep(2000);
                   std::cout << "\n 3) Experta cazadora, hábil trepadora, cabellera sedosa… como la de un gato… toda una belleza exótica ";
                   Sleep(2000);
                   std::cout << "\n 4) Había cierta mujer en Rusia tiempo atrás… Era grande y fuerte, con unos ojos de brillo flameante";
                   Sleep(2000);
                   std::cout << "\n 5) Llega hasta el fondo de tu alma gracias a sus manos tan hábiles, una noche con ella bastará para sentirte satisfecho";
                   Sleep(2000);
                   std::cin >> dec14;
                   switch (dec14)
                   {
                   case 1:

                       std::cout << "\n Haz elegido a... ";
                       Sleep(2000);
                       std::cout << "la hija del rey, ahora ella sera tu acompañante el resto de la aventura";
                       Sleep(2000);

                       personaje_elegido = "Katherine";
                       break;
                   case 2:

                       std::cout << "\n Haz elegido a... ";
                       Sleep(2000);
                       std::cout << "laHechicera, ahora ella sera tu acompañante el resto de la aventura";
                       Sleep(2000);

                       personaje_elegido = "Syndra";
                       break;

                   case 3:
                       std::cout << "\n Haz elegido a... ";
                       Sleep(2000);
                       std::cout << "la furra? wtf, ahora ella sera tu acompañante el resto de la aventura, castigo o castigo bro";
                       Sleep(2000);

                       personaje_elegido = "Loona";
                       break;
                   case 4:
                       std::cout << "\n Haz elegido a... ";
                       Sleep(2000);
                       std::cout << "Aventurera del gremio, ahora ella sera tu acompañante el resto de la aventura";
                       Sleep(2000);

                       personaje_elegido = "Marjorie";
                       break;
                   case 5:
                       std::cout << "\n Haz elegido a... ";
                       Sleep(2000);
                       std::cout << "la cocinera, ahora ella sera tu acompañante el resto de la aventura, no me niegues que por la descripcion creiste que era otra cosa 7w7 xd";
                       Sleep(2000);

                       personaje_elegido = "Akame";

                       break;


                   default:
                       std::cout << "Eso no existe che, son los papas, acabas de cagar todo el programa, te toca repetir, tenias una sola tarea y la hiciste mal\n";
                       break;
                   }
                   std::cout << "\n Ya que tienes acompañante sales y te diriges a tu granja \n";
                   Sleep(2000);
                   std::cout << personaje_elegido << " resulta ser muy amigable y hasta agradable ";
                   Sleep(2000);
                   std::cout << "(cabe recalcar que es legal  ";
                   Sleep(2000);
                   std::cout << " (namas digo";
                   Sleep(2000);
                   std::cout << "( aunque para esa epoca tampoco es que importara";
                   Sleep(2000);
                   std::cout << "(antes todo era mejor >.<";
                   Sleep(2000);
                   std::cout << "\n Te cuenta que escucho que ahuyentaste a un mounstro muy peligroso y que por eso se ofrecio como recompensa para ti (en el sentido de acompañante claro...";
                   Sleep(2000);
                   std::cout << " por ahora)";
                   Sleep(2000);
                   std::cout << " Que haces? \n 1)Le cuentas la verdad \n2) Le mientes y dices que obvi, que sos re god bro, ez pizi";
                   Sleep(2000);
                   std::cin >> dec15;
                   if (dec15 == 1)
                   {
                       std::cout << "\n Le cuentas que en realidad ese mounstro fue alguien que ayudaste en el pasado";
                       Sleep(2000);
                       std::cout << "\n Que solamente te debia un favor";
                       Sleep(2000);
                       std::cout << "\n" << personaje_elegido << " se sorprende de las grandes alianzas tienes, que hasta con mounstros tienes tratos";
                       Sleep(2000);
                       std::cout << "\n La ves que tiene una sonrisa ingenua asi que no le dices nada.";
                       Sleep(2000);

                   }
                   else
                   {
                       std::cout << "\n Dices que fue re sencillo";
                       Sleep(2000);
                       std::cout << ", que apenas el mounstro te vio se hecho a la huida, ya que eras demasiado poderoso, ez pizi";
                       Sleep(2000);
                       std::cout << ", aparte de que haz estado farmeando niveles asi que facilmente el mounstro sintio la diff de jg";
                       Sleep(2000);
                       std::cout << "\n Ves como " <<personaje_elegido <<" se imagina y te muestra una sonrisa ingenua";
                       Sleep(2000);
                   }
                   std::cout << "\n Llegan a la granja";
                   Sleep(2000);
                   std::cout << "\n Le muestras tu dia a dia cuidando a tus verduras y animales";
                   Sleep(2000);
                   std::cout << "\n Eres el tipico maestro que te dice: Ponte la chaqueta, quitate la chaqueta, tira la chaqueta, recoge la chaqueta, etc.";
                   Sleep(2000);
                   std::cout << "\n Pasa un tiempo y " << personaje_elegido <<" ya se cansa de que no haya mas accion que quitar plagas de plantas";
                   Sleep(2000);
                   std::cout << "\n Le muestras tu dia a dia cuidando a tus verduras y animales";
                   Sleep(2000);
                   std::cout << "\n Llega el dia de ir al pueblo a vender y van juntos";
                   Sleep(2000);
                   std::cout << "\n Llegan y empeizan a vender, hasta que escuchas un grito muy femenino";
                   Sleep(2000);
                   std::cout << " Que haces? \n 1)Vas a ver que pasa dejando el puesto con " <<personaje_elegido <<" \n2) No vas y te quedas en tu puesto";
                   Sleep(2000);
                   std::cin >> dec16;
                   if (dec16 == 1)
                   {
                       std::cout << "\n Llegas y ves a una minita siendo asaltada";
                       Sleep(2000);
                       std::cout << " Que haces? \n 1)La ayudas?  \n2) Te regresas";
                       Sleep(2000);
                       std::cin >> dec17;
                       if (dec17 == 1)
                       {
                           std::cout << "\n Tratas de hacerte el heroe pero te apuñalan 57 aveces";
                           Sleep(2000);
                           std::cout << "\n Mueres";
                           Sleep(2000);
                       }
                       else
                       {
                           std::cout << "\n Te regresas y " <<personaje_elegido <<" te pregunta que fue pero le dices que no fue nada";
                           Sleep(2000);

                           //copiar si no va
                           std::cout << "\n Vendes todos tus productos el resto del dia";
                           Sleep(2000);
                           
                           std::cout << "\n Se regresan a la granja a descansar, " <<personaje_elegido <<" te pregunta cuando habra algo de accion";
                           Sleep(2000);
                           std::cout << "\n Le respondes: El viento siempre viene conmigo,";
                           Sleep(2000);
                           std::cout << " y el viento...,";
                           Sleep(2000);
                           std::cout << " huele a lluvia";
                           Sleep(2000);
                           std::cout << "\n" << personaje_elegido << " no entendio nada pero te considera todo un sabio asi que no dice nada xd";
                           Sleep(2000);
                           std::cout << "\n Llegas a tu casa pero hay una banda de ladrones ";
                           Sleep(2000);
                           std::cout << " Que haces? \n 1)Defiendes tu casa  \n2)Te vas cagando ostias de tu casa";
                           Sleep(2000);
                           std::cin >> dec18;
                           if (dec18)
                           {
                               std::cout << "\n Se dan cuenta de tu presencia y te caen entre todos ";
                               Sleep(2000);
                               std::cout << "\n Mueres pero logra escapar " << personaje_elegido ;
                               Sleep(2000);
                               std::cout << "\n Acuerdate que eras un simple granjero xd ";
                               Sleep(2000);

                           }
                           else
                           {
                               std::cout << "\n Al momento de irte alejando pisas una rama y los ladrones se dan cuenta ";
                               Sleep(2000);
                               std::cout << "\n Se empiezan a aproximar hacia a ti";
                               Sleep(2000);
                               std::cout << "\n Mueres pero logra escapar " << personaje_elegido;
                               Sleep(2000);
                               std::cout << "\n Muy Unlucky ";
                               Sleep(2000);
                           }

                       }
                       


                   }
                   else
                   {
                       std::cout << "\n Finges que no escuchaste nada ";
                       Sleep(2000);
                       std::cout << "\n Vendes todos tus productos el resto del dia";
                       Sleep(2000);

                       std::cout << "\n Se regresan a la granja a descansar, " << personaje_elegido << " te pregunta cuando habra algo de accion";
                       Sleep(2000);
                       std::cout << "\n Le respondes: El viento siempre viene conmigo,";
                       Sleep(2000);
                       std::cout << " y el viento...,";
                       Sleep(2000);
                       std::cout << " huele a lluvia";
                       Sleep(2000);
                       std::cout << "\n" << personaje_elegido << " no entendio nada pero te considera todo un sabio asi que no dice nada xd";
                       Sleep(2000);
                       std::cout << "\n Llegas a tu casa pero hay una banda de ladrones ";
                       Sleep(2000);
                       std::cout << " Que haces? \n 1)Defiendes tu casa  \n2)Te vas cagando ostias de tu casa";
                       Sleep(2000);
                       std::cin >> dec18;
                       if (dec18)
                       {
                           std::cout << "\n Se dan cuenta de tu presencia y te caen entre todos ";
                           Sleep(2000);
                           std::cout << "\n Mueres pero logra escapar " << personaje_elegido;
                           Sleep(2000);
                           std::cout << "\n Acuerdate que eras un simple granjero xd ";
                           Sleep(2000);

                       }
                       else
                       {
                           std::cout << "\n Al momento de irte alejando pisas una rama y los ladrones se dan cuenta ";
                           Sleep(2000);
                           std::cout << "\n Se empiezan a aproximar hacia a ti";
                           Sleep(2000);
                           std::cout << "\n Logras correr mas rapido que ellos y escapas";
                           Sleep(2000);
                           std::cout << "\n Al llegar a un lugar seguro te cuestiona " << personaje_elegido <<" que por que huiste y no peleaste contra ellos";
                           Sleep(2000);
                           std::cout << " Que le dices? \n 1)Le dices la verdad que eres un simple granjero  \n2)Te inventas alguna excusa barata";
                           Sleep(2000);
                           std::cin >> dec19;
                           if (dec19)
                           {
                               std::cout << "\n Le cuentaas que en realidad no eres nadie poderoso ni nada";
                               Sleep(2000);
                               std::cout << "\n Solo quieres una vida tranquila sin tantos chismes";
                               Sleep(2000);
                               std::cout << "\n Que no pasa nada si se va, ya sabe como eres realmente";
                               Sleep(2000);
                               std::cout << "\n Se cuestiona que hacer";
                               Sleep(2000);
                               std::cout << "\n Te contesta: ";
                               Sleep(2000);
                               std::cout << "Te contesta: Al chile si, vamonos a vivir al monte mejor,  ";
                               Sleep(2000);
                               std::cout << "muy cliche esto de lo medieval ";
                               Sleep(2000);
                               std::cout << "\nSe fugan y viven una vida feliz fin. ";
                               Sleep(2000);

                           }
                           else
                           {
                               std::cout << "\n Le dices que era pa que tuvieran ventaja";
                               Sleep(2000);
                               std::cout << "\n No te cree ni mais y te exige la verdad";
                               Sleep(2000);
                               std::cout << "\n Ya no quiere smas lios asi que aceptas.";
                               Sleep(2000);
                               std::cout << "\n Le cuentaas que en realidad no eres nadie poderoso ni nada";
                               Sleep(2000);
                               std::cout << "\n Solo quieres una vida tranquila sin tantos chismes";
                               Sleep(2000);
                               std::cout << "\n Que no pasa nada si se va, ya sabe como eres realmente";
                               Sleep(2000);
                               std::cout << "\n Se cuestiona que hacer";
                               Sleep(2000);
                               std::cout << "\n Te contesta: ";
                               Sleep(2000);
                               std::cout << "Te contesta: Al chile si, vamonos a vivir al monte mejor,  ";
                               Sleep(2000);
                               std::cout << "muy cliche esto de lo medieval ";
                               Sleep(2000);
                               std::cout << "\nSe fugan y viven una vida feliz fin. ";
                               Sleep(2000);
                           }
                       }
                   }
               }
               else
               {
                   std::cout << "\n El mensajero ve como no haces absolutamente nada, ";
                   Sleep(2000);
                   std::cout << "\n De la nada el mounstro al destruir la ciudad te lanza un escombro ";
                   Sleep(2000);
                   std::cout << "\n Te mueres* ";
                   Sleep(2000);
                   std::cout << "\n Por no ayudar xd ";
                   Sleep(2000);
                   
               }
              
           }
           else
           {
               std::cout << "\n Es la papa habias aplastado el primer dia en el mundo este";
               Sleep(2000);
               std::cout << "\n Caminas lentamente hacia atras pero la papa te ve";
               Sleep(2000);
               std::cout << "\n Empieza a correr hacia a ti y te grita que te conoce";
               Sleep(2000);
               std::cout << "\n Te grita: SI NO TENGO CORAZÓN PORQUE ME DUELEEEEEEEEEE AHHHHHHH";
               Sleep(2000);
               std::cout << "\n Tratas de escapar pero no puedes";
               Sleep(2000);
               std::cout << "\n Te pisa multiples veces hasta que mueres";
               Sleep(2000);
               std::cout << "\n Fin, por ser mala gente bro";
               Sleep(2000);
           }
        
      
    }
   
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
