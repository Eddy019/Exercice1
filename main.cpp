#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

int main() {


    FILE *fichier1 , *fichier2 , *fichier3;

    int choix=0 ;
    char16_t c ;
    cout <<"Which file do you want to analyse ? "<< endl <<"For Call (1) " << endl  << "For Phonebook (2)" <<endl ;
    cin >> choix;




    fichier1 = fopen ("C:/Users/PCATT/Desktop/MSAB/Assignment1/Calls.bin" , "rb"  );
    fichier2 = fopen ("C:/Users/PCATT/Desktop/MSAB/Assignment1/Phonebook_Main.bin" , "rb"  );
    fichier3 = fopen ("C:/Users/PCATT/Desktop/MSAB/Assignment1/Phonebook_Details.bin" , "rb"  );



    switch (choix) {


        case 1 :


            cout<< "this is hexa of Calls.bin: "<< endl <<" "<<endl;

                    if ( fichier1) {



                        vector <string> tab;


                        for (int i = 0; i < 206; i++) {
                            fseek(fichier1, i, SEEK_SET);
                            char t1[207];
                            t1[i] = getc(fichier1);

                            c = t1[i];
                            cout << " " << hex << (int) c;




                        }

                    }



            break;


        case 2 :


            for (int i = 0; i < 86; i++) {
                fseek(fichier2, i, SEEK_SET);
                char t2[107];
                t2[i] = getc(fichier2);

                char16_t c = t2[i];
                cout << " " << hex << (int) c;

            }






    }




    fclose( fichier1);





}