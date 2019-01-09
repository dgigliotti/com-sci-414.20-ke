#include <stdio.h>
#include <math.h>

main() {
    
// declare variables

const float FIRSTRATE = 42;
const float SECONDRATE = 37;

float qtyKorunas;
float firstConv;
float secondConv;
float diff;

FILE *diskfile;

printf("*** Koruna Exchange App *** \n\n");

// prompt user for savings account

printf("How many korunas do you have in your savings account? ");
scanf("%f", &qtyKorunas);
printf("\nThe exchange information for %0.0f korunas is now being recorded.\n\n", qtyKorunas);

// calculate conversion

firstConv = qtyKorunas / FIRSTRATE;
secondConv = qtyKorunas / SECONDRATE;
diff = (fabs(firstConv - secondConv));

// write output file

diskfile = fopen("c:\\class\\dgigliotti-ke.txt", "w");

// display conversion info

fprintf(diskfile, "For %0.0f korunas:\n", qtyKorunas);
fprintf(diskfile, "At the rate of %0.0f korunas per U.S. dollar,\n", FIRSTRATE);
fprintf(diskfile, "   you have %0.2f U.S. dollars.\n", firstConv);
fprintf(diskfile, "At the rate of %0.0f korunas per U.S. dollar,\n", SECONDRATE);
fprintf(diskfile, "   you have %0.2f U.S. dollars.\n\n", secondConv);
fprintf(diskfile, "The difference is %0.2f U.S. dollars.\n\n", diff);

// close output file

fclose(diskfile);

return 0;
}
