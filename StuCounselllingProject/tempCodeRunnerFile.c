//& get the value of the "Name" key
    cJSON *name = cJSON_GetObjectItemCaseSensitive(json, "Name");
    if (name != NULL && cJSON_IsString(name) && name->valuestring != NULL)
    {
        printf("Name: %s\n", name->valuestring);
    }
    else
    {
        printf("Error: 'Name' key not found or not a string\n");
    }

    //& get the value of the "Location" key
    cJSON *location = cJSON_GetObjectItem(json, "Location");
    if (location != NULL && cJSON_IsObject(location))
    {
        //& get the value of the "City" key
        cJSON *city = cJSON_GetObjectItemCaseSensitive(location, "City");
        if (city != NULL && cJSON_IsString(city) && city->valuestring != NULL)
        {
            printf("City: %s\n", city->valuestring);
        }
        else
        {
            printf("Error: 'City' key not found or not a string\n");
        }
    }
    else
    {
        printf("Error: 'Location' key not found or not an object\n");
    }
