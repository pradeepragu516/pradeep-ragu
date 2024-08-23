#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function prototypes
void displayscore();
void help();
void writescore(float score, char plnm[20]);

int main() {
    int countq, countr;
    int r, i;
    int nq[6], w;
    float score;
    char choice;
    char playername[20];
    time_t initialtime, finaltime;

    system("cls"); // Clear the screen

mainhome:
    system("cls");
    puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n");
    puts("\n\t\t-------------------------------");
    puts("\n\t\t Enter 'S' to start game       ");
    puts("\n\t\t Enter 'V' to view high score  ");
    puts("\n\t\t Enter 'H' for help            ");
    puts("\n\t\t Enter 'Q' to quit             ");
    printf("\n\t\t-------------------------------\n\n\t\t  ");

    choice = toupper(getchar());
    getchar(); // To consume the newline character

    if (choice == 'V') {
        displayscore();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(0);
    } else if (choice == 'H') {
        help();
        getchar(); // Wait for a key press
        goto mainhome;
    } else if (choice == 'S') {
        system("cls");

        printf("\n\n\n\t\t\tEnter your name...");
        printf("\n\t\t\t(only one word)\n\n\t\t\t");
        scanf("%19s", playername);

    home:
        system("cls");
        initialtime = time(NULL);
        countq = countr = 0;
        i = 1;

    start:
        srand(time(NULL));
        r = rand() % 23 + 1;
        nq[i] = r;
        for (w = 0; w < i; w++) {
            if (nq[w] == r) goto start;
        }

        switch (r) {
            case 1:
                printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?");
                printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.4");
                }
                break;

            case 2:
                printf("\n\n\nHow many points are possible in a compound pendulum about which");
                printf(" time period is same?");
                printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.4");
                }
                break;

            case 3:
                printf("\n\n\nWho was the first US President?");
                printf("\n\nA.Richard Nikson\tB.Abraham Lincoln\n\nC.John F. Kennedy\tD.George Washington\n\n");
                countq++;
                if (toupper(getchar()) == 'D') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is D.George Washington");
                }
                break;

            case 4:
                printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
                printf("\n\nA.Glenn McGrath\tB.Mahela Jayawardene\n\nC.Matthew Hayden\tD.Sachin Tendulkar\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Glenn McGrath");
                }
                break;

            case 5:
                printf("\n\n\nWhich country won the Fifa World Cup 1998?");
                printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.France");
                }
                break;

            case 6:
                printf("\n\n\nWhich syllable is stressed in the word 'democracy'?");
                printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
                countq++;
                if (toupper(getchar()) == 'B') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is B.2nd");
                }
                break;

            case 7:
                printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
                printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
                countq++;
                if (toupper(getchar()) == 'C') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.Australia");
                }
                break;

            case 8:
                printf("\n\n\nWhat is the height of Mount Everest in feet?");
                printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
                countq++;
                if (toupper(getchar()) == 'D') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is D.8848");
                }
                break;

            case 9:
                printf("\n\n\nWhat is the capital of Denmark?");
                printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                }
                break;

            case 10:
                printf("\n\n\nWhich syllable is stressed in the word 'instantaneous'?");
                printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
                countq++;
                if (toupper(getchar()) == 'C') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.3rd");
                }
                break;

            case 11:
                printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
                printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschelle Gibbs\tD.Sanath Jayasuriya\n\n");
                countq++;
                if (toupper(getchar()) == 'C') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.Herschelle Gibbs");
                }
                break;

            case 12:
                printf("\n\n\nWho was the only player to take 4 successive wickets?");
                printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Brett Lee\tD.Muttiah Muralitharan\n\n");
                countq++;
                if (toupper(getchar()) == 'B') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");
                }
                break;

            case 13:
                printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
                printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.South Africa");
                }
                break;

            case 14:
                printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
                printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
                }
                break;

            case 15:
                printf("\n\n\nWhich country is Maria Sharapova from?");
                printf("\n\nA.Russia\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Russia");
                }
                break;

            case 16:
                printf("\n\n\nWhat is the world's longest river?");
                printf("\n\nA.Nile\tB.Koshi\n\nC.Ganga\tD.Amazon\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Nile");
                }
                break;

            case 17:
                printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
                printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
                countq++;
                if (toupper(getchar()) == 'C') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.Australia");
                }
                break;

            case 18:
                printf("\n\n\nWhat is the height of Mount Everest in feet?");
                printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
                countq++;
                if (toupper(getchar()) == 'D') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is D.8848");
                }
                break;

            case 19:
                printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
                printf("\n\nA.Glenn McGrath\tB.Mahela Jayawardene\n\nC.Matthew Hayden\tD.Sachin Tendulkar\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Glenn McGrath");
                }
                break;

            case 20:
                printf("\n\n\nWhat is the capital of Denmark?");
                printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                }
                break;

            case 21:
                printf("\n\n\nWhich syllable is stressed in the word 'instantaneous'?");
                printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
                countq++;
                if (toupper(getchar()) == 'C') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.3rd");
                }
                break;

            case 22:
                printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
                printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
                }
                break;

            case 23:
                printf("\n\n\nWhat is the world's longest river?");
                printf("\n\nA.Nile\tB.Koshi\n\nC.Ganga\tD.Amazon\n\n");
                countq++;
                if (toupper(getchar()) == 'A') {
                    printf("\n\nCorrect!!!");
                    countr++;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Nile");
                }
                break;
        }

        i++;
        if (i <= 5) goto start;

        finaltime = time(NULL);
        score = (float)countr * 100 / 5;
        if (score > 0.00 && score < 100)
            printf("\n\n\t\t******** CONGRATULATION *********");
        else if (score == 100.00)
            printf("\n\n\t\t******** CONGRATULATION *********");
        else
            printf("\n\n\t\t******** SORRY ********");

        printf("\n\t\t %s, You scored %.2f points", playername, score);
        writescore(score, playername);
        printf("\n\n\t\tWant to play again? (Y/N) : ");
        choice = toupper(getchar());
        getchar(); // To consume the newline character

        if (choice == 'Y')
            goto home;
        else
            goto mainhome;
    }
    return 0;
}

void displayscore() {
    system("cls");
    char name[20];
    float s;
    FILE *f;
    f = fopen("score.txt", "r");
    if (f == NULL) {
        printf("\nThere is no high score yet.");
    } else {
        fscanf(f, "%s%f", name, &s);
        printf("\n\n\t\t ");
        printf("\n\n\t\t %s has secured the highest score %.2f", name, s);
        fclose(f);
    }
    getchar(); // To consume the newline character
}

void help() {
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are a total of 6 questions.");
    printf("\n >> You will be given 4 options and you have to press A, B, C, or D for");
    printf("\n    the correct option.");
    printf("\n >> Each correct answer will be awarded 1 point.");
    printf("\n >> You can score up to 5 points in this game.");
    printf("\n >> You can score up to 100% in this game.");
    printf("\n >> Your score will be displayed at the end.");
    printf("\n >> You can view the highest score secured so far.");
    printf("\n -------------------------------------------------------------------------");
}

void writescore(float score, char plnm[20]) {
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "r");
    if (f == NULL) {
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", plnm, score);
        fclose(f);
    } else {
        fscanf(f, "%s%f", nm, &sc);
        if (score >= sc) {
            fclose(f);
            f = fopen("score.txt", "w");
            fprintf(f, "%s\n%.2f", plnm, score);
            fclose(f);
        }
    }
}
