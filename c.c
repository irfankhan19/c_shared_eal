nt main(void) {

        char r1 = random();
        char r2 = random();
        char r3 = random();
        char r4 = random();
        char r5 = random();

        printf("These are random numbers : %i %i %i %i", r1, r2, r3, r4);

        // randomize();
        /* Simple "srand()" seed: just use "time()" */
         unsigned int iseed = (unsigned int)time(NULL);
         srand (iseed);

        char r12 = random();
        char r22 = random();
        char r32 = random();
        char r42 = random();

        printf("\nThese are random numbers : %i %i %i %i", r12, r22, r32, r42);

        return EXIT_SUCCESS;
}
