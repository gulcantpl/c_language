#include <stdio.h>

float computeGPA(char graes[], int n);

int main(void)
{
    int n;

    printf("How many grades you will put ");
    scanf("%d", &n);

   
    char myGrades[n];

    printf("Enter your grades (Exmp: A B C F): ");
    
   
    for (int i = 0; i < n; i++) {
       
        scanf(" %c", &myGrades[i]); 
    }

   
    float finalGPA= computeGPA(myGrades, n);


    printf("Avarege (GPA): %.2f\n", finalGPA);

    return 0;
}

float computeGPA(char grades[], int n)
{
    float totalPoints = 0.0f;

    
    for (int i = 0; i < n; i++) {
        
       
        switch (grades[i]) {
            case 'A': case 'a':
                totalPoints += 4.0f;
                break;
            case 'B': case 'b':
                totalPoints += 3.0f;
                break;
            case 'C': case 'c':
                totalPoints += 2.0f;
                break;
            case 'D': case 'd':
                totalPoints += 1.0f;
                break;
            case 'F': case 'f':
                totalPoints += 0.0f;
                break;
            default:
                
                break;
        }
    }

    return totalPoints / n;
}