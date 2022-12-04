#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
size_t letter_count(  char c,const char *s )
{
    size_t n = 0;
    if ( c != '\0' )
    {
        for ( const char *p = s; ( p = strchr( p, c ) ) != NULL; ++p )
        {
            ++n;
        }
    }
    return n;
}
int main(int argc,char *argv[])
{

FILE    *infile;
char    *buffer;
long    numbytes;
infile = fopen(argv[1], "r");
if(infile == NULL)
    return 1;
fseek(infile, 0L, SEEK_END);
numbytes = ftell(infile);
fseek(infile, 0L, SEEK_SET);	
buffer = (char*)calloc(numbytes, sizeof(char));	
fread(buffer, sizeof(char), numbytes, infile);
fclose(infile);
printf("The file called test.dat contains this text\n\n%s", buffer);

 char a = 'a';
 char b = 'b';
 char c = 'c';
 char d = 'd';
 char e = 'e';
 char f = 'f';
 char g = 'g';
 char h = 'h';
 char i = 'i';
 char j = 'j';
 char k = 'k';
 char l = 'l';
 char m = 'm';
 char n = 'n';
 char o = 'o';
 char p = 'p';
 char q = 'q';
 char r = 'r';
 char s = 's';
 char t = 't';
 char u = 'u';
 char v = 'v';
 char w = 'w';
 char x = 'x';
 char y = 'y';
 char z = 'z';
printf( "%d%c", letter_count( a, buffer ),a  );
printf( "%d%c", letter_count( b, buffer ),b  );
printf( "%d%c", letter_count( c, buffer ),c  );
printf( "%d%c", letter_count( d, buffer ),d  );
printf( "%d%c", letter_count( e, buffer ),e  );
printf( "%d%c", letter_count( f, buffer ),f  );
printf( "%d%c", letter_count( g, buffer ),g  );
printf( "%d%c", letter_count( h, buffer ),h  );
printf( "%d%c", letter_count( i, buffer ),i  );
printf( "%d%c", letter_count( j, buffer ),j  );
printf( "%d%c", letter_count( k, buffer ),k  );
printf( "%d%c", letter_count( l, buffer ),l  );
printf( "%d%c", letter_count( m, buffer ),m  );
printf( "%d%c", letter_count( n, buffer ),n  );
printf( "%d%c", letter_count( o, buffer ),o  );
printf( "%d%c", letter_count( p, buffer ),p  );
printf( "%d%c", letter_count( q, buffer ),q  );
printf( "%d%c", letter_count( r, buffer ),r  );
printf( "%d%c", letter_count( s, buffer ),s  );
printf( "%d%c", letter_count( t, buffer ),t  );
printf( "%d%c", letter_count( u, buffer ),u  );
printf( "%d%c", letter_count( v, buffer ),v  );
printf( "%d%c", letter_count( w, buffer ),w  );
printf( "%d%c", letter_count( x, buffer ),x  );
printf( "%d%c", letter_count( y, buffer ),y  );
printf( "%d%c", letter_count( z, buffer ),z  );
printf("\n");
//correct version
// with changing in function
//printf( "%d%c", letter_count( a, buffer ),a  );
    return 0;

/* free the memory we 1used for the buffer */
free(buffer);
 
return 0;
}

//https://stackoverflow.com/questions/60913458/how-do-i-count-how-many-times-a-letter-appears-in-a-string-c-programming
//http://www.fundza.com/c4serious/fileIO_reading_all/4_IO_readall.c
