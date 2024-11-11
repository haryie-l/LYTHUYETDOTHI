#include <conio.h>
#include <stdio.h>

int a[100][100];
int n;
 void file()
 {
 	FILE *f
 	f = fopen("Ma tran.txt", "rt");
 	if(f==NULL)
 	 printf("Khong co tap tin");
 	 else{
 	 	fscanf(f,"%d",&n);
 	 	 for(int i = 1 ; i<=n; i++)
 	 	 for( int j =1 ; j<n; j++)
 	 	 fscanf(f,"%d",&a[i][j]);
 	 }
 	 fclose(f);
 }
  void xuatfile()
  {
  	for(int i=1;i<n;i++)
  	for(int j=1;j<n;j++)
  	printf("%d",a[i][j]);
  	printf("\n");		
  }
  int ktdx(int x[100][100],int y,int z)
{
   for(int i=1;i<=y;i++)
    {
      for(int j=1;j<=z;j++)
      {
    if(x[i][j]!=x[j][i])
      {
    return 0;
      }
    }
}
return 1;
}

 int main ()
 {
 	file();
 	xuatfile();
 	if(doixung()==1){
 		printf("Do thi Vo Huong");
 		else
 		printf("Do thi Co Huong");
 	}
}
 	
