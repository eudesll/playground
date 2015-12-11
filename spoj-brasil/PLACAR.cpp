/* 
   SPOJ Brasil Problem Set (seletivas)
   1734. Quem vai ser reprovado
   Problem Name: PLACAR
*/

#include <iostream>
using namespace std;

int main (void) {

    int studentsQuantity;
    int instanceNumber = 1;

    while(cin >> studentsQuantity){

        int worstScore = 11;
        string worstStudent = "";

        int score;
        string studentName;

        for(int i = 0; i < studentsQuantity; i++){

            cin >> studentName;
            cin >> score;

            if(score < worstScore){

                worstScore = score;
                worstStudent = studentName;

            } else if(score == worstScore){

                int size = worstStudent.length() > studentName.length() ? worstStudent.length() : studentName.length();

                for(int j = 0; j < size; j++){

                    if((int)studentName[j] > (int)worstStudent[j] || j + 1 > worstStudent.length()){
                        //cout << (int)studentName[j] << "/" << studentName[j] << " " << (int)worstStudent[j] << "/" << worstStudent[j] << endl;
                        worstScore = score;
                        worstStudent = studentName;
                        break;
                    } else if (studentName[j] < worstStudent[j] || j + 1 > studentName.length() ) {
                        break;
                    }
                }

            }

        }

        cout << "Instancia " << instanceNumber++ << endl;
        cout << worstStudent << endl << endl;

    }

}

