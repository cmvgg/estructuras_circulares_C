#include "circular_lists.h"
int replaceDotContent(const char *newDotContent, const char *insertPoint, int flag) {
    FILE *file = fopen("prueba.html", "r+");
    if (file == NULL)
	{
        perror("No se pudo abrir el archivo");
        return 0;
    }

    FILE *tempFile = fopen("temp.html", "w");
    if (tempFile == NULL)
	{
        perror("No se pudo crear el archivo temporal");
        fclose(file);
        return 0;
    }

    char *buffer = NULL;
    size_t size = 0;
    ssize_t read;
    int foundInsertionPoint = 0;
    int nodeExists = 0;
    static char lastInsertedNode[100] = "";

    while ((read = getline(&buffer, &size, file)) != -1)
	{
        if (foundInsertionPoint && strstr(buffer, insertPoint) != NULL)
		{
            if ((flag == 2 && lastInsertedNode[7] == newDotContent[7]) || nodeExists)
			{    
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
            }
			else
			{
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
                strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
                lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
            }
            foundInsertionPoint = 0; 
            nodeExists = 0; 
            continue; 
        }
        
        if (strstr(buffer, "node [shape=square];") != NULL)
		{
            foundInsertionPoint = 1; 
        }
        fprintf(tempFile, "%s", buffer);
        fflush(tempFile);
    }

    if (flag == 2 && strstr(buffer, newDotContent) != NULL)
	{
        nodeExists = 1;
        strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
        lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
    }
    fclose(file);
    fclose(tempFile);
    sleep(1);
    rename("temp.html", "prueba.html");
    free(buffer);
    printf("Contenido de %s DOT reemplazado en 'prueba.html'. Actualiza tu navegador para ver los cambios.\n", newDotContent);
    return 1;
}


int replaceDotContent2(const char *newDotContent, const char *insertPoint, int flag)
{
    FILE *file = fopen("prueba.html", "r+");
    if (file == NULL)
	{
        perror("No se pudo abrir el archivo");
        return 0;
    }

    FILE *tempFile = fopen("temp.html", "w");
    if (tempFile == NULL)
	{
        perror("No se pudo crear el archivo temporal");
        fclose(file);
        return 0;
    }

    char *buffer = NULL;
    size_t size = 0;
    ssize_t read;
    int foundInsertionPoint = 0;
    int nodeExists = 0;
    static char lastInsertedNode[100] = "";

    while ((read = getline(&buffer, &size, file)) != -1)
	{
        if (foundInsertionPoint && strstr(buffer, insertPoint) != NULL)
		{
            if ((flag == 2 && lastInsertedNode[7] == newDotContent[7]) || nodeExists)
			{
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
            }
			else
			{
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
                strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
                lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
            }
            foundInsertionPoint = 0; 
            nodeExists = 0; 
            continue; 
        }
        
        
        if (strstr(buffer, "node [shape=square];") != NULL) {
            foundInsertionPoint = 1; 
        }

        
        fprintf(tempFile, "%s", buffer);
        fflush(tempFile);
    }
	if(read == -1)
		printf("\n\nerror de lectura\n\n");
    
    if (flag == 2 && strstr(buffer, newDotContent) != NULL) {
        nodeExists = 1;
        strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
        lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
    }

    fclose(file);
    fclose(tempFile);
    sleep(1);
    rename("temp.html", "prueba.html");
    free(buffer);
    printf("Contenido de %s DOT reemplazado en 'prueba.html'. Actualiza tu navegador para ver los cambios.\n", newDotContent);
    return 1;
}


int replaceDotContent3(const char *newDotContent, const char *insertPoint, int flag) {
    FILE *file = fopen("prueba.html", "r+");
    if (file == NULL) {
        perror("No se pudo abrir el archivo");
        return 0;
    }

    FILE *tempFile = fopen("temp2.html", "w");
    if (tempFile == NULL) {
        perror("No se pudo crear el archivo temporal");
        fclose(file);
        return 0;
    }

    char *buffer = NULL;
    size_t size = 0;
    ssize_t read;
    int foundInsertionPoint = 0;
    int nodeExists = 0;
    static char lastInsertedNode[100] = "";

    while ((read = getline(&buffer, &size, file)) != -1) {
        if (strstr(buffer, insertPoint) != NULL) {
            if (flag == 1 || nodeExists) {
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
            } else {
                fprintf(tempFile, "%s\n", newDotContent);
                fflush(tempFile);
                strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
                lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
            }
            foundInsertionPoint = 0;
            nodeExists = 0;
            continue;
        }
        

        if (strstr(buffer, insertPoint) != NULL) {
            foundInsertionPoint = 1;
        }
        fprintf(tempFile, "%s", buffer);
        fflush(tempFile);
    }
    if (flag == 1 && strstr(buffer, newDotContent) != NULL) {
        nodeExists = 1;
        strncpy(lastInsertedNode, newDotContent, sizeof(lastInsertedNode) - 1);
        lastInsertedNode[sizeof(lastInsertedNode) - 1] = '\0';
    }

    fclose(file);
    fclose(tempFile);
    rename("temp2.html", "prueba.html");
    free(buffer);
	printf("Contenido de %s DOT reemplazado en 'prueba.html'. Actualiza tu navegador para ver los cambios.\n", newDotContent);
    return 1;
}