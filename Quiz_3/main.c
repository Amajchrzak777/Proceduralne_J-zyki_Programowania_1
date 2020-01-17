/*
Student Adam Majchrzak
Please write a structure for storing the information of a particle. The structure for the
particle should contain:
• the mass (in kg),
• the x-coordinate (in m),
• and the velocity in x-direction (in m/s).
Your tasks:
(i) Please implement the struct for the particle.
(ii) Please write a function to print the data of a particle.
(iii) Please ask the user how many particles should be generated.
(iv) Please generate the particles with random data. Please note that the mass can
only be positive. The mass should be not be larger than 1000kg. The x position
should be between −100m and +100m. The velocity should be between −100m/s
and +100m/s. In exercise 8.4 we have worked with floating point random numbers.
(For an example see the file exercise8-4.c in the solutions for exercise 8 on our
moodle page.)
(v) Please calculate the momentum (p = m · v) and the kinetic energy (E =
1
2mv2
) for
each particle.
(vi) Please calculate the total momentum and the total kinetic energy of all particles.
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


struct particle
{
    int mass;
    int x_coordinatc;
    int vlocity;
};

typedef struct particle particle_t;

void printParticle1(particle_t* ptr)
{
    printf("the mass: %d\n", ptr->mass);
    printf("the x-coordinate: %d\n", ptr->x_coordinatc);
    printf("velocity inx-direction: %d\n", ptr->vlocity);
}

void readParticle(particle_t* ptr)
{
    printf("Please enter the data for a new particle.\n");
    printf("given mass: ");
    scanf("%d",&ptr->mass);
    printf("Please give the x_coordinatc of particle: ");
    scanf("%d",&ptr->x_coordinatc);
    printf("the velocity in x-direction: ");
    scanf("%d",&ptr->vlocity);
}


int main()
{
    srand(time(NULL));
    int i;
    int amountOfParticles= 0;
    float maximum = RAND_MAX;
    float energy=0;
    float momentum=0;
    float sumEnergy=0;
    float sumMomentum=0;
    do {
        printf("How many particles do you want to enter? ");
        scanf("%i",&amountOfParticles);
    } while(amountOfParticles <= 0);


    particle_t* myParticles;

    for(i=0;i<amountOfParticles;i++){
        myParticles[i].mass = rand()% 1000+1;
        myParticles[i].x_coordinatc = ((rand()/maximum*200-100));
        myParticles[i].vlocity = ((rand()/maximum*200-100));
    }

    for(i=0;i<amountOfParticles;i++){
        printParticle1(&myParticles[i]);
    }

    myParticles = (particle_t*) malloc(amountOfParticles*sizeof(particle_t));

    if (myParticles==NULL) {
        printf("Problem with memory!\n");
        return EXIT_FAILURE;
    }

    for (i=0; i<amountOfParticles; i++)
    {
        readParticle(&myParticles[i]);
    }

    printf("The following particles are in the group:\n\n");
    for (i=0; i<amountOfParticles; i++)
    {
        printParticle1(&myParticles[i]);
    }
    for(i=0;i<amountOfParticles;i++){
        energy = (float)1/2 * myParticles[i].mass * myParticles[i].vlocity * myParticles[i].vlocity;
        momentum = myParticles[i].mass * myParticles[i].vlocity;
        sumEnergy += energy[i];
        sumMomentum += momentum[i];
    }
    printf("Sum of energy: %f",sumEnergy);
    printf("Sum of momentum: %f",sumMomentum);

    free(myParticles);
    return EXIT_SUCCESS;
}
