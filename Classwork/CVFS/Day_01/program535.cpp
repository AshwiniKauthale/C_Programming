/////////////////////////////////////////////////////////////////////////////////
//
//      Header File Inclusion
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

////////////////////////////////////////////////////////////////////////////////
//
//      User defined Macros
//
///////////////////////////////////////////////////////////////////////////////

// Maximum file size that we allow in the project
#define MAXFILESIZE 50

#define MAXOPENFILES 20

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

///////////////////////////////////////////////////////////////////////////////
//
//      User defined Structures
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//      Structure Name : BootBlock
//      Description :    Hold the information to boot the OS
//
///////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////////////
//
//      Structure Name : SuperBlock
//      Description :    Hold the information about the File System
//
///////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////////////
//
//      Structure Name : Inode
//      Description :    Hold the information about the File
//
///////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int ReferenceCount;

    int Permission;
    char *Buffer;               // Store actual data of file from Data Block
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

///////////////////////////////////////////////////////////////////////////////
//
//      Structure Name : FileTable
//      Description :    Hold the information about opened file
//
///////////////////////////////////////////////////////////////////////////////

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef FileTable FILETABLE;
typedef FileTable* PFILETABLE;         // Pointer Points to IIT

///////////////////////////////////////////////////////////////////////////////
//
//      Structure Name : UAREA
//      Description :    Hold the information about process
//
///////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];          // Array of Pointer in UAREA
};

///////////////////////////////////////////////////////////////////////////////
//
//      Global variables or objects used in the project
//
///////////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;

PINODE head = NULL;

///////////////////////////////////////////////////////////////////////////////
//
//      Function Name :  InitialiseUAREA
//      Description :    It is used to initialise UAREA member
//      Author :         Ashwini Vishnu Kauthale
//      Data :           13/01/2026
//
///////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }
    printf("Marvellous CVSF : UAREA gets initialized succesfully\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//      Function Name :  InitialiseSuperBlock
//      Description :    It is used to initialise Super bloch member
//      Author :         Ashwini Vishnu Kauthale
//      Data :           13/01/2026
//
///////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVSF : Super block gets initialized succesfully\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//      Function Name :  CreateDILB
//      Description :    It is used to create Linked list of inodes
//      Author :         Ashwini Vishnu Kauthale
//      Data :           13/01/2026
//
///////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn->FileName,"\0");
        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)    // LL is empty
        {
            head = newn;
            temp = newn;
        }
        else                // LL contains at least 1 node
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVSF : DILD created succesfully\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//      Function Name :  StartAuxillaryDataInitilisation
//      Description :    It is used to call all such function which are 
//                       used to initialise auxillary data
//      Author :         Ashwini Vishnu Kauthale
//      Data :           13/01/2026
//
///////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitilisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is done");

    printf("%s\n",bootobj.Information);

    InitialiseSuperBlock();

    CreateDILB();

    InitialiseUAREA();

    printf("MArvellous CVSF : Auxillary data initialised succesfully\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function of the project
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[4][20];
    int iCount = 0;

    StartAuxillaryDataInitilisation();

    printf("-------------------------------------------------------------------------------\n");
    printf("-------------------Marvellous CVSF started succesfully-------------------------\n");
    printf("-------------------------------------------------------------------------------\n");
    
    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\n Marvellous CVSF : >");
        fgets(str,sizeof(str),stdin);

        
    }
    return 0;
}