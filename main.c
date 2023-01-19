#include <string.h>
#include <stdio.h>
#include <dir.h>
#include <stdlib.h>
#include <errno.h>


#define limit 1000

int Atrs[limit][limit]={0}, end=0, commandLength, dastoor=0;

// file syntax
//fopen("name", "mode")
//fwrite("phrase", bytes of phrase, 1, what file);

char *rest(int , char*);

void checkForAtrs(char *);

int whatcommand(char *word);

int create(char *address);

int main(){
    do {
        for (int i = 0; i < limit; ++i) {
            memset(Atrs[i], 0, sizeof(Atrs[i]));
        }

        char command[limit]={0};
        scanf("%[^\n]s", command);
        if(command[0]!=0) {
            dastoor = whatcommand(command);
            commandLength = strlen(command);
            checkForAtrs(command);
            switch (dastoor) {
                case -1:
                    printf("invalid command");
                    break;
                case 1:
//                create(command);
                    break;
                case limit:
                    break;
            }
        }
    }while(end);

    return 0;
}

char *rest(int i, char *word){
    int l=0;
    char c;
    do{
        l++;
        c= word[++i];
    }while(c != ' ' && c!=0);
    char *check= malloc(l);
    for (int j = 0; j < l; ++j) {
        check[j] = word[i++];
    }
    check[l] = '\0';
    return check;
}

int whatcommand(char *word) {
    printf("%s", word);
    if(!(strcmp(word, "quit"))){
        end++;
        return limit;
    }
    int i =0;
    switch(word[i++]){
        case 'c':
            switch (word[i++]) {
                case 'r': {

                    char *check=rest(i, word);
                    if (!(strcmp("eate",check)))
                        return 1;
                    else
                        return -1;
                }
            }
            break;
        case 'p':
            break;
        case 'r':
            break;
        case 'i':
            break;
        case 'f':
            break;
        case 'g':
            break;
        case 'u':
            break;
        case 't':
            break;
        case 'd':
            break;
        case 'a':
            break;
        case '-':
            break;
        default:
            return -1;
    }

}

void checkForAtrs(char *command){
    for (int i = 0; i < commandLength; ++i) {
        if(command[i]=='-')
            switch(command[++i]){
            case 'f': {
                char *test = rest(++i, command);
                if((!(strcmp(test, "ile")))&&(dastoor<12)){
                        Atrs[0][0]=1;
                        char* test2= rest(i+4, command);
                        int l= strlen(test2);
                        for(int j = 1; j <= l; ++j) {
                            Atrs[0][j]= test2[j-1];
                        }
                    return;
                }
            }

        }
    }

}

