#include <iostream>
#include <stdio.h>

using namespace std;

#define ESIMENE     5
#define TEINE 	    20
#define KOLMAS		99

struct data_t {
    int esimene;
    int teine;
    int kolmas;
} my_data_struct;

int main()
{
     my_data_struct.esimene = ESIMENE;
     my_data_struct.teine = TEINE;
     my_data_struct.kolmas = KOLMAS;

    char * p_data_struct = reinterpret_cast<char *>(&my_data_struct);

    int size_of_data_t = sizeof(data_t)/sizeof(int);
    printf("%d\r\n", size_of_data_t);
    for(int i=0;i < size_of_data_t; i++)
    {
        printf("%i: %d\r\n", i, *(p_data_struct+(i*sizeof(int))));
    }

    int starting_address = int(p_data_struct);

    printf("Starting aadress: %x\r\n", starting_address);

	data_t *address = reinterpret_cast<data_t *> (starting_address);

    printf("Esimene: %d\r\n", address->esimene);
    printf("Teine: %d\r\n", address->teine);
    printf("Kolmas: %d\r\n", address->kolmas);
	//int second_sound_start_delay = address->second_sound_start_delay_s;
    return 0;
}
