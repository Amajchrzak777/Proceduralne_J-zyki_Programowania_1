/*
Student Adam Majchrzak
Please write a structure to manage data for some houses. The structure should contain
the following information:
• number of flats in the building
• value of the building
Please write a little program that uses your structure.
• Your program should ask the user how many buildings should be managed?
• Please check the input. If the input does not make sense, please request new input.
• The program should allocate dynamic memory for all flats (using malloc or calloc).
• Your program should calculate the total number of flats and the total value of all
flats.
• Your program should find the cheapest building and print the information
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct house
{
    int  number_building;
    float    value_building;
};

typedef struct house house_t;

void printHouse(house_t* ptr)
{
    printf("number of flats in the building: %i\n", ptr->number_building);
    printf("value of the building: %0.1f\n", ptr->value_building);
}


void readHouse(house_t* ptr)
{
    printf("Please enter the data for a new building.\n");
    printf("number of flats: ");
    scanf("%i",&ptr->number_building);
    printf("value of the building: ");
    scanf("%f",&ptr->value_building);
}


int main()
{
    int i;
    int dim = 0;
    do {
        printf("How many buildings should be managed ? ");
        scanf("%i",&dim);
    } while(dim <= 0);

    house_t* myHouse;
    myHouse = (house_t*) malloc(dim*sizeof(house_t));

    if (myHouse==NULL) {
        printf("Problem with memory!\n");
        return EXIT_FAILURE;
    }

    for (i=0; i<dim; i++)
    {
        readHouse(&myHouse[i]);
    }

    printf("\n\n");
    printf("The following the buildings:\n");
    for (i=0; i<dim; i++)
    {
        printHouse(&myHouse[i]);
    }


    float sum = 0.0;
    for (i=0; i<dim; i++)
    {
        sum += myHouse[i].number_building;
    }
    printf("Total number of flats: %0.1f\n",sum);

float val = 0.0;
    for (i=0; i<dim; i++)
    {
        val += myHouse[i].value_building;
    }
    printf("Total value of all flats: %0.1f\n",val);

    int cheap=0;
    for (i=0;i<=dim;i++){
    if (myHouse[i].value_building>cheap)
        {
       cheap=myHouse[i].value_building;}

    }
    printf("TO JEST NAJTANSZY DOM: %i \n", cheap);

    int min = myHouse[0].value_building;
    int MINIMUM=0;
    for (int i = 0; i < dim; ++i) {
        if (myHouse[i].value_building < min) {
            min = myHouse[i].value_building;
            MINIMUM = i;
        }
    }
    printf("The cheapest building is : \n");
    printf("number of flats in the building :%i\n",myHouse[MINIMUM].number_building);
    printf("value of the building :%0.1f\n",myHouse[MINIMUM].value_building);

    free(myHouse);
return EXIT_SUCCESS;
}
