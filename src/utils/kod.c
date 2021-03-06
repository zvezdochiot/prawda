/*
                  �������������� ���� ���->�������->���8
*/
# include <stdio.h>
# include <string.h>
# include <malloc.h>
# include <stdlib.h>

# include <dirent.h>
# ifdef __WINDOWS__
   # include <dir.h>
#else
   # include <unistd.h>
#endif

# include <sys/types.h>
# include <sys/stat.h>

# define uchar unsigned char

#define SLASH   '/'
#define SLASH1  "/"

uchar T_dos_win[256]=
{ 0,   1,   2,   3,   4,   5,   6,   7,
  8,   9,  10,  11,  12,  13,  14,  15,
 16,  17,  18,  19,  20,  21,  22,  23,
 24,  25,  26,  27,  28,  29,  30,  31,
 32,  33,  34,  35,  36,  37,  38,  39,
 40,  41,  42,  43,  44,  45,  46,  47,
 48,  49,  50,  51,  52,  53,  54,  55,
 56,  57,  58,  59,  60,  61,  62,  63,
 64,  65,  66,  67,  68,  69,  70,  71,
 72,  73,  74,  75,  76,  77,  78,  79,
 80,  81,  82,  83,  84,  85,  86,  87,
 88,  89,  90,  91,  92,  93,  94,  95,
 96,  97,  98,  99, 100, 101, 102, 103,
104, 105, 106, 107, 108, 109, 110, 111,
112, 113, 114, 115, 116, 117, 118, 119,
120, 121, 122, 123, 124, 125, 126, 127,
192, 193, 194, 195, 196, 197, 198, 199,
200, 201, 202, 203, 204, 205, 206, 207,
208, 209, 210, 211, 212, 213, 214, 215,
216, 217, 218, 219, 220, 221, 222, 223,
224, 225, 226, 227, 228, 229, 230, 231,
232, 233, 234, 235, 236, 237, 238, 239,
176, 177, 178, 179, 180, 181, 182, 183,
184, 185, 186, 187, 188, 189, 190, 191,
192, 193, 194, 195, 196, 197, 198, 199,
200, 201, 202, 203, 204, 205, 206, 207,
208, 209, 210, 211, 212, 213, 214, 215,
216, 217, 218, 219, 220, 221, 222, 223,
240, 241, 242, 243, 244, 245, 246, 247,
248, 249, 250, 251, 252, 253, 254, 255,
240, 241, 242, 243, 244, 245, 246, 247,
248, 249, 250, 251, 252, 253, 254, 255 };

uchar T_win_koi[256]=
{ 0,   1,   2,   3,   4,   5,   6,   7, // 0
  8,   9,  10,  11,  12,  13,  14,  15,
 16,  17,  18,  19,  20,  21,  22,  23, // 1
 24,  25,  26,  27,  28,  29,  30,  31,
 32,  33,  34,  35,  36,  37,  38,  39, // 2
 40,  41,  42,  43,  44,  45,  46,  47,
 48,  49,  50,  51,  52,  53,  54,  55, // 3
 56,  57,  58,  59,  60,  61,  62,  63,
 64,  65,  66,  67,  68,  69,  70,  71, // 4
 72,  73,  74,  75,  76,  77,  78,  79,
 80,  81,  82,  83,  84,  85,  86,  87, // 5
 88,  89,  90,  91,  92,  93,  94,  95,
 96,  97,  98,  99, 100, 101, 102, 103, // 6
104, 105, 106, 107, 108, 109, 110, 111,
112, 113, 114, 115, 116, 117, 118, 119, // 7
120, 121, 122, 123, 124, 125, 126, 127,
128, 129, 130, 131, 132, 133, 134, 135, // 8
136, 137, 138, 139, 140, 141, 142, 143,
144, 145, 146, 147, 148, 149, 150, 151, // 9
152, 153, 154, 155, 156, 157, 158, 159,
160, 161, 162, 163, 164, 165, 166, 167, // a
//168, 169, 170, 171, 172, 173, 174, 175,
179, 169, 170, 171, 172, 173, 174, 175,
//176, 177, 178, 179, 180, 181, 182, 183, // b
176, 177, 178,   0, 180, 181, 182, 183, // b
//184, 185, 186, 187, 188, 189, 190, 191,
163, 185, 186, 187, 188, 189, 190, 191,
225, 226, 247, 231, 228, 229, 246, 250, // c
233, 234, 235, 236, 237, 238, 239, 240,
242, 243, 244, 245, 230, 232, 227, 254, // d
251, 253, 255, 249, 248, 252, 224, 241,
193, 194, 215, 199, 196, 197, 214, 218, // e
201, 202, 203, 204, 205, 206, 207, 208,
210, 211, 212, 213, 198, 200, 195, 222, // f
219, 221, 223, 217, 216, 220, 192, 209 };

uchar T_koi_dos[256]=
{ 0,   1,   2,   3,   4,   5,   6,   7,
  8,   9,  10,  11,  12,  13,  14,  15,
 16,  17,  18,  19,  20,  21,  22,  23,
 24,  25,  26,  27,  28,  29,  30,  31,
 32,  33,  34,  35,  36,  37,  38,  39,
 40,  41,  42,  43,  44,  45,  46,  47,
 48,  49,  50,  51,  52,  53,  54,  55,
 56,  57,  58,  59,  60,  61,  62,  63,
 64,  65,  66,  67,  68,  69,  70,  71,
 72,  73,  74,  75,  76,  77,  78,  79,
 80,  81,  82,  83,  84,  85,  86,  87,
 88,  89,  90,  91,  92,  93,  94,  95,
 96,  97,  98,  99, 100, 101, 102, 103,
104, 105, 106, 107, 108, 109, 110, 111,
112, 113, 114, 115, 116, 117, 118, 119,
120, 121, 122, 123, 124, 125, 126, 127,
128, 129, 130, 131, 132, 133, 134, 135,
136, 137, 138, 139, 140, 141, 142, 143,
144, 145, 146, 147, 148, 149, 150, 151,
152, 153, 154, 155, 156, 157, 158, 159,
160, 161, 162, 163, 164, 165, 166, 167,
168, 169, 170, 171, 172, 173, 174, 175,
176, 177, 178, 179, 180, 181, 182, 183,
184, 185, 186, 187, 188, 189, 190, 191,
238, 160, 161, 230, 164, 165, 228, 163,
229, 168, 169, 170, 171, 172, 173, 174,
175, 239, 224, 225, 226, 227, 166, 162,
236, 235, 167, 232, 237, 233, 231, 234,
158, 128, 129, 150, 132, 133, 148, 131,
149, 136, 137, 138, 139, 140, 141, 142,
143, 159, 144, 145, 146, 147, 134, 130,
156, 155, 135, 152, 157, 153, 151, 154 };

uchar *T,T_reverse[256] ;

void help( void );
uchar *reverse( uchar *T ) ;
void   kod    ( char *Src, char *Dst, uchar *T );
void   kod_dir( char *Src, char *Dst, uchar *T );

/***************************************************************************/
int main( int argc, char *argv[] )
{
   long i,L ;

   if( argc<4 )
   {  help();  exit(0);  }

   if( 0==strcmp(argv[1],"-doswin") )
   {   T=T_dos_win ; goto M1;  }
   if( 0==strcmp(argv[1],"-winkoi") )
   {   T=T_win_koi ; goto M1;  }
   if( 0==strcmp(argv[1],"-koidos") )
   {   T=T_koi_dos ; goto M1;  }

   if( 0==strcmp(argv[1],"-windos") )
   {   T=reverse( T_dos_win ) ; goto M1;  }
   if( 0==strcmp(argv[1],"-koiwin") )
   {   T=reverse( T_win_koi ) ; goto M1;  }
   if( 0==strcmp(argv[1],"-doskoi") )
   {   T=reverse( T_koi_dos ) ; goto M1;  }

   printf("\n invalid switch \"%s\"",argv[1] );
   {  help();  exit(0);  }

   M1:
   if( 0==strcmp(argv[2],"-r") )
   {
       kod_dir( argv[3], argv[4], T );
   }
   else
   {
       kod( argv[2], argv[3], T );
   }
   return 0 ;
}
/* ------------------------------------------------------------------------ */
//  ��������������� ���������� 
//  Src � Dst - ����� ���������� ��� �������������� ���������
/* ------------------------------------------------------------------------ */
void kod_dir( char *Src, char *Dst, uchar *T )
{
   char path1[200],path2[200] ;

   DIR *my_dir ;
   struct dirent *ent ;
   static struct stat stat1 ;

   my_dir = opendir( Dst );
   if( my_dir==NULL ) 
   {  printf("\n Directory %s not exist",Dst ); exit(-1) ;  }
   closedir( my_dir ) ;

   my_dir = opendir( Src );
   if( my_dir==NULL ) 
   {  printf("\n Directory %s not exist",Src ); exit(-1) ;  }

   while( 1 )
   {
      ent = readdir( my_dir ) ;
      if( ent == NULL ) break ;
      strcpy(path1,Src); strcat(path1,SLASH1); strcat(path1,ent->d_name);
      stat( path1,&stat1 ) ;
      if( 0==(S_IFDIR&stat1.st_mode) )
      {  
	 strcpy(path2,Dst); strcat(path2,SLASH1); strcat(path2,ent->d_name);
	 kod( path1,path2,T );
      }
   }
   closedir( my_dir ) ;
}
/* ----------------------------------------------------------------------- */
void kod( char *Src, char *Dst, uchar *T )
{
   short i,k ;
   FILE  *fr,*fw ;
   uchar *m ;

   fr=fopen( Src,"rb" );
   if( fr==NULL )
   {   printf("\n source file not found" ); exit(-1);  }
   fw=fopen( Dst,"wb" );
   if( fw==NULL )
   {   printf("\n destinition file not created" ); exit(-1);  }
   m=(uchar *)malloc( 10000 );
   while( 1 )
   {
      k=fread( m,1,10000,fr );
      for( i=0 ; i<k ; i++ )
         m[i]=T[m[i]] ;
      fwrite( m,1,k,fw );
      if( k<10000 ) break ;
   }
}
/* ----------------------------------------------------------------------- */
void help( void )
{
   printf("\n kod - programm to translate russian text file dos->win->koi");
   printf("\n Autor: Anissimow D.W.       e-Mail: wolf@gambit.msk.su");
   printf("\n");
   printf("\n usage kod <switch> <sou_file> <dst_file>");
   printf("\n\n switches:");
   printf("\n   -doswin ");
   printf("\n   -winkoi ");
   printf("\n   -koidos ");
   printf("\n   -windos ");
   printf("\n   -doskoi ");
   printf("\n   -koiwin ");
   printf("\n\n example ");
   printf("\n kod -doskoi letter.dos letter.koi\n");

}
/* ----------------------------------------------------------------------- */
uchar *reverse( uchar *T )
{  short i ;

   for( i=0 ; i<256 ; i++ )
      T_reverse[T[i]]=i ;
   return T_reverse ;
}
