#include <stdio.h>

int main() {
    signed int input[976] = { // Big Line, Sorry
    +13,-18,+13,+10,+12,-4,+17,-16,-6,+10,+4,-1,+7,+13,-1,+16,-7,-6,+18,-6,+13,-8,+2,+16,-5,-14,-5,-2,+11,+17,+17,+9,-14,-17,+7,+16,-15,-13,-13,-11,+1,+6,-5,-4,-19,+9,-7,-18,+7,+8,-17,-6,-12,+9,-12,-13,+5,-12,+8,+9,+5,+11,-19,+11,-16,+15,-18,-12,+19,-18,-7,+5,-9,+13,+13,+8,-16,+3,-16,+7,-9,-12,-18,-12,+14,+18,-11,+2,+11,-18,-3,+5,-8,+18,+12,+18,+8,+4,+25,-13,+11,+7,-8,+16,+14,-7,-16,+22,-12,-8,+19,+6,+5,+8,+1,+26,+17,+14,+13,+18,+5,-17,-1,+6,-1,-3,-18,-6,+15,+16,+7,+18,+8,+13,+3,-18,-9,-17,+13,-5,+2,-5,+11,-9,+4,+13,+8,+2,-11,-11,-22,+13,-19,-19,+18,+10,+3,+10,+21,-13,+16,+1,+15,+17,+17,-5,+16,+17,+10,+4,+1,-3,-14,+18,-17,-6,-9,+17,-6,+1,-17,+7,-6,+2,+3,-11,-16,-17,-11,-1,-2,-17,+22,+3,+12,-13,+8,+20,+8,+6,-1,-4,+19,+17,+13,+8,+4,+6,+20,+9,+2,-3,+18,+6,-18,-8,+13,-4,+3,+13,+15,-7,+11,-15,+7,-17,+9,+18,+15,-12,+11,+6,+7,-17,+18,-4,-1,-15,-15,+4,-12,+11,+15,-12,-13,-17,+1,+2,+3,-17,+10,-7,-6,+10,-20,-11,-15,+8,-2,-12,+18,-16,-8,+4,+13,+20,-15,+11,+12,-16,+15,-12,-13,+12,-17,+16,+23,-18,-12,+2,+11,+3,-13,+17,+21,-24,+6,+11,-23,-18,-28,-1,-2,+16,+4,-13,+18,-16,-3,+5,+17,-4,-7,-13,-9,-16,-8,-7,+22,-19,-10,+6,+3,+23,-4,+5,-15,-17,-8,-8,+6,+6,-2,-15,+12,+6,-11,-9,-9,+15,-26,-6,-18,-7,-19,-2,+1,+3,+12,-11,-23,-4,-15,+9,-14,-5,-28,-9,+16,+22,+7,-16,+7,-1,+17,-12,+18,+12,-10,+4,-5,+14,-12,-6,+25,+13,-10,-9,+13,+21,-17,-9,-4,+18,-24,-1,-14,+10,+42,+24,-7,-6,+12,+8,+4,+24,-4,+18,+1,-24,+21,+17,+16,+51,-21,+70,-8,+15,+16,+2,-3,+10,+19,+15,+8,+21,+11,+10,-2,-7,-7,+5,-19,+7,-16,-1,+2,-14,-4,-14,+19,-7,-11,+7,+5,-10,-15,+4,-10,-11,-13,-11,+12,+13,-10,+3,+18,-9,+1,+12,+12,+18,-6,+4,-5,-3,+18,+1,-4,-33,+17,-4,+7,-13,+52,-3,-3,-18,-3,-5,+13,+9,+18,+23,-21,-15,-16,-23,-9,-4,-40,-3,+86,+18,-2,+27,-1,-12,+71,-8,+20,+37,-36,+43,-40,-69,-13,+35,+4,+6,-17,-178,-56,-14,-243,+3,+204,-22,+517,-71500,-244,-6,+19,-18,+1,+19,-23,-18,+10,+6,-14,+9,-7,+19,-11,-5,+23,+8,-6,-18,-20,-18,-7,+2,-11,+8,-18,+7,-14,+15,-19,-17,-10,-12,-6,+10,-6,+5,-7,+5,-11,-2,-15,+10,+1,-9,+18,+14,-10,-12,-13,+19,-15,-10,-5,-16,-12,+14,-15,-4,-9,-9,-11,-6,+2,+17,+11,-5,+19,+18,-19,+3,+3,+11,-3,+12,+7,+5,-10,-4,-6,-2,+7,-3,-7,+19,+2,+9,-8,+9,-15,-2,+18,-23,-23,-15,-6,+17,+17,-5,+14,-13,-18,-11,-10,-19,-5,-13,+12,-5,+16,+15,-6,-16,-8,-21,-2,+7,-3,-16,-6,+14,+7,+3,+5,-19,+6,+7,+11,-2,+4,-9,-16,-4,-15,-6,+7,-12,-8,-13,-8,+9,+3,+4,-6,+14,+13,-15,-18,-3,-2,+19,-1,+8,-14,+3,-17,-13,-2,+12,-2,+15,+13,+22,-3,+8,+16,-13,+15,-13,-6,-18,+10,-7,-5,+7,+12,-1,+5,+2,+10,+17,+22,-10,-5,+25,+5,-13,-10,-16,+19,-9,+5,+20,+10,-1,+9,-5,+23,-17,-14,-18,+9,-20,+14,+36,+16,+11,-24,-2,-3,-1,+20,-3,+8,+21,+11,+17,+14,+8,+3,+18,-15,+8,-16,+12,+8,+13,+16,-3,-16,+7,-15,+5,-2,+6,+10,-5,+2,-4,+18,+15,-3,-17,+4,+8,+15,-19,-11,+19,-1,+14,-19,+8,+3,+10,+16,-23,+2,-4,-9,+12,+18,-32,+8,-16,+25,+2,+4,-41,-8,-3,-19,+9,-2,+1,-9,+4,-17,-9,+11,+3,+20,-17,-9,+16,-18,-9,-12,+5,-3,+16,-23,+59,-23,+12,-16,-8,+15,+8,+25,-77,-48,+1,-26,+9,-17,-13,-29,-7,-3,-22,+18,-21,-26,-17,+2,+11,+11,+6,+11,+13,+13,+23,+24,+2,+17,-48,-38,-21,-10,+18,-27,-19,+6,+12,-14,-5,+2,+8,-14,-7,+2,-18,-10,-12,+13,+2,-18,+10,+3,+13,+6,-1,-4,-20,+4,-12,+9,-3,+1,+14,+17,-2,-12,+7,-16,-2,-14,-18,-5,+17,-10,+7,+5,-7,-3,-13,+15,+7,-5,-18,+4,-14,-9,-13,-16,-8,-6,+10,-1,+19,+14,-13,+4,+13,-9,+8,+6,-2,-15,+13,-8,+21,+11,-18,+16,-10,+6,+3,+20,+8,-9,-12,-20,+18,-12,-13,-13,+3,-2,-10,-1,+19,-4,-9,-7,+3,-4,-18,-16,+19,-12,+16,+5,+15,-11,-6,-21,+4,-19,-13,+10,+4,+7,-43,+34,+40,+23,+9,+14,+19,+11,+22,+9,-11,+22,+11,+11,-20,-17,+7,+15,-23,+6,-17,-8,-8,-4,+24,+18,+8,+17,-22,+19,+71889
    };

    int freqChanges[967];
    freqChanges[0] = input[0];
    int currentFreq;
    for(i=1;i<976;i++) {
	currentFreq = currentFreq + input[i-1]; // Setting Current Calculated Frequency For Checking Later on
	freqChanges[i] = currentFreq; // Putting everything in an array to be able to operate on them
    };

    // Needs: Way To Detect First Double Instance
}
