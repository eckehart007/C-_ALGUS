#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    char rawString[500] = "{\"ID\":\"T11\", \"COUNT\":\"22\"}\r\n";
    char    *var;
    char    *val;
    char    *count = "";
    char    *id = "";
    printf(rawString);
    printf("*****************************\r\n");

    char * tok = strtok(rawString, " {}\",");
    //printf("%\r\n", tok);
    //tok = strtok(rawString, " \{\}\,:");
    //tok = strtok(strchr(tok + strlen(tok) + 1, ':') + 1, " {}\",");
    int i = 0;
    while (tok != NULL) {
        i++;
        var = tok;
        printf("Var%i:%s\r\n", i, var);
        tok = strtok(NULL, " {}\",:");
        if (tok == NULL) break;
        val = tok;
        printf("Val%i:%s\r\n", i, val);
        for(int i=0; sizeof(var);i++){
            printf("Char%i: ", i);
        }
        if (strcmp(var, "COUNT") == 0) {
            count = val;
        } else if (strcmp(var, "ID") == 0) {
            id = val;
        }
        tok = strtok(NULL, " {}\",");
    }
    printf("Count: %s\r\n", count);
    printf("ID: %s\r\n", count);
    return 0;

/*
    char    *tok = strtok(buf, " {}\",");
    char    *var;
    char    *val;
    modes_t  local_mode   = (modes_t)0;
    uint8_t  is_different = false;
    uint16_t temp;

    while (tok != NULL) {
        var = tok;
        tok = strtok(strchr(tok + strlen(tok) + 1, ':') + 1, " {}\",");

        if (tok == NULL) break;

        val = tok;

        // Compare the tokened string to a known string.
        // If matches, copy. Do some checking when appropriate.

        if (strcmp(var, "server") == 0) { // server
            // DBG("Kinesis server address found: %s", val);
            if (strlen(val) > sizeof(server)) { DBG("value too long!"); }  else {
                // If the new string is not the same as the previous one, set the flag and copy the new string.
                if (strcmp(server, val) != 0) {
                    is_different = true;
                    strcpy(server, val);
                }
            }
        }
        */
}
