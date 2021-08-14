#import "stringFunctions.c"

int arrayIndex(char **values, char *searchedValue) {
    for (int i = 0; i < sizeof(values); i++) {
        if (compareStringsInsensitive(searchedValue, values[i])) {
            return i;
        }
    }
    return -1;
}