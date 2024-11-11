#include <conio.h>
#include <stdio.h>

int a[100][100];
int n;
 void file()
 {
 	FILE *f;
 	f = fopen("Ma tran.txt", "rt");
 	if(f==NULL)
 	 printf("Khong co tap tin");
 	 else{
 	 	fscanf(f,"%d",&n);
 	 	 for(int i = 1 ; i<=n; i++)
 	 	 for( int j =1 ; j<=n; j++)
 	 	 fscanf(f,"%d",&a[i][j]);
 	 }
 	 fclose(f);
 }
  void xuatfile()
  {
  	for(int i=1;i<n;i++)
  	for(int j=1;j<n;j++)
  	printf("%d",a[i][j]);
  	printf("\t\n");		
  }
  int ktdx()
{
   for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
    if(a[i][j]!=a[j][i])
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
 	if(ktdx()==1){
 		printf("Do thi Vo Huong");
		 }
 		else
 		{
 		printf("Do thi Co Huong");
 	}
}
 	
