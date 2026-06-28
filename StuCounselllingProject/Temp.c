#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include "cJSON.c"
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("college.json", "a+");

    //& read the data from the file
    char buffer[1024];
    int len =  fread(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    //& parse the json object
    cJSON* json = cJSON_Parse(buffer);

    //& check if the json object is null
    if (json == NULL) {
        printf("Error parsing JSON: %s\n", cJSON_GetErrorPtr());
        cJSON_Delete(json);
        return 1;
    }else {
        printf("JSON parsed successfully\n");
    }

    cJSON *current_element = NULL;
    
    cJSON_ArrayForEach(current_element, json) {
        cJSON *name = cJSON_GetObjectItemCaseSensitive(current_element, "Name");
        if (name != NULL && cJSON_IsString(name) && name->valuestring != NULL) {
            printf("Name: %s\n", name->valuestring);
        }
    }

    // //& get the value of the "Name" key
    // cJSON *name = cJSON_GetObjectItemCaseSensitive(json, "Name");
    // if (name != NULL && cJSON_IsString(name) && name->valuestring != NULL)
    // {
    //     printf("Name: %s\n", name->valuestring);
    // }
    // else
    // {
    //     printf("Error: 'Name' key not found or not a string\n");
    // }

    // //& get the value of the "Location" key
    // cJSON *location = cJSON_GetObjectItem(json, "Location");
    // if (location != NULL){
    //     printf("Location: %s\n", location->valuestring);
    // }


    return 0;
}