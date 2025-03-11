#include <stdio.h>
int main() 
{
    int totalApples = 21;
    int userChoice, computerChoice;
    printf("Welcome to the Apple Picking Game!\n");
	printf("\nIn this Game there are 21 Apples And you have to Pick between 1 to 4 \nThere will be turns......\nThe one who Picked the last Apple Will Loose the game.\nLets Hope you will win this Game\n\n\n");
   	printf("\n Press Any Key To Continue........");
	getch();
	system("cls");
    while (1)
 {
        do 
{
            printf("Enter your choice (1 to 4): ");
            scanf("%d", &userChoice);
        } 
while (userChoice < 1 || userChoice > 4);

        if (userChoice >= totalApples) {
            printf("You picked the last apple. You lose!\n");
            break;
        }

        totalApples -= userChoice;
        printf("\nRemaining apples: %d\n", totalApples);

        computerChoice = 5 - userChoice;
        printf("\nComputer chooses %d apple(s).\n", computerChoice);
        totalApples -= computerChoice;
        printf("\nRemaining apples: %d\n\n", totalApples);

        if (totalApples <= 0) {
            printf("\nThe computer picked the last apple. You win!\n");
            break;
        }
    }

    return 0;
}
