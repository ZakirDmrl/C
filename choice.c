/* /*choice.c 
Müþteri takip programý
Bu program random access olarak dosyayý sýralý eriþim olarak okur,
dosyayý güncelleþtirir, yeni kayýt ekler ve siler.
*/
#include <stdio.h>
void display( FILE * );
void updateRecord( FILE * );
void newRecord( FILE * );
void deleteRecord( FILE * );
int enterChoice( void );
struct clientData
{ int acctNum;
 char lastName[ 15 ];
 char firstName[ 10 ];
 double balance;
};
void main()
{
 FILE *cfPtr;
 int choice;
 if ( ( cfPtr = fopen( "credit.dat", "r+" ) ) == NULL )
 printf( "File could not be opened.\n" );
 else
 { while ( ( choice = enterChoice() ) != 5 )
 { switch ( choice )
{
 case 1:
 display( cfPtr ); break;
 case 2:
 updateRecord( cfPtr ); break;
 case 3:
 newRecord( cfPtr ); break;
 case 4:
 deleteRecord( cfPtr ); break;
 }
 }
 fclose( cfPtr );
 }
}
void display( FILE *readPtr )
{ 
struct clientData client = { 0, "", "", 0.0 };
 rewind( readPtr );
printf ( "%-6s%-16s%-11s%10s\n",
"Hes#", "Soyad", "Ad","Alacak" );
 while ( !feof( readPtr ) )
 { fread( &client, sizeof( struct clientData ), 1, readPtr );
 if ( client.acctNum != 0 && !feof( readPtr ))
 printf( "%-6d%-16s%-11s%10.2f\n",
client.acctNum, client.lastName,
client.firstName, client.balance );	
 }
}
void updateRecord( FILE *fPtr )
{ int account;
 double transaction;
 struct clientData client = { 0, "", "", 0.0 };
 printf( "Enter account to update ( 1 - 100 ): " );
 scanf( "%d", &account );
 fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
SEEK_SET );
 fread( &client, sizeof( struct clientData ), 1, fPtr );
 if ( client.acctNum == 0 )
 printf( "Acount #%d has no information.\n", account );
 else
 { printf( "%-6d%-16s%-11s%10.2f\n\n", client.acctNum,
client.lastName, client.firstName, client.balance );
 printf( "Enter charge ( + ) or payment ( - ): " );
 scanf( "%lf", &transaction );
 client.balance += transaction;
 printf( "%-6d%-16s%-11s%10.2f\n",
client.acctNum, client.lastName,
client.firstName, client.balance );
 fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
SEEK_SET );
 fwrite( &client, sizeof( struct clientData ), 1, fPtr );
 }
}
void deleteRecord( FILE *fPtr )
{ struct clientData client, blankClient = { 0, "", "", 0.0 };
 int accountNum;
 printf( "Enter account number to delete ( 1 - 100 ): " );
 scanf( "%d", &accountNum );
 fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
SEEK_SET );
 fread( &client, sizeof( struct clientData ), 1, fPtr );
 if ( client.acctNum == 0 )
 printf( "Account %d does not exist.\n", accountNum );
 else
 { fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
SEEK_SET );
 fwrite( &blankClient, sizeof( struct clientData ), 1, fPtr );
 }
}
void newRecord( FILE *fPtr )
{ struct clientData client = { 0, "", "", 0.0 };
 int accountNum;
 printf( "Enter new account number ( 1 - 100 ): " );
 scanf( "%d", &accountNum );
 fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
SEEK_SET );
 fread( &client, sizeof( struct clientData ), 1, fPtr );
 if ( client.acctNum != 0 )
 printf( "Account #%d already contains information.\n",
client.acctNum );
 else
 { printf( "Enter lastname, firstname, balance\n? " );
 scanf( "%s%s%lf", &client.lastName, &client.firstName,
&client.balance );
 client.acctNum = accountNum;
 fseek( fPtr, ( client.acctNum - 1 )*sizeof( struct clientData),
SEEK_SET );
 fwrite( &client, sizeof( struct clientData ), 1, fPtr );
 }
}
int enterChoice( void )
{ int menuChoice;
 printf( "\nSecenekler\n"
 "1 - Hesap Goruntuleme\n"
 "2 - Hesap Guncelleme\n"
 "3 - Yeni Hesap\n"
 "4 - Hesap Sil\n"
 "5 - Cikis\n\n=> " );
 scanf( "%d", &menuChoice );
 return menuChoice;
}
