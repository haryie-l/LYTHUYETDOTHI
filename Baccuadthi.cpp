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
  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=n;j++)
  	printf("%d ",a[i][j]);
  	printf("\n");
  	}		
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
 int bacvao(int x){
 	int tong = 0;
 	for (int i =1; i<=n; i++)
 	tong = tong + a[i][x];
 	return tong;
 }
 int bacra(int x){
 	int tong = 0;
 	for(int j = 1; j<=n; j++)
 	 tong= tong + a[x][j];
 	 return tong;
 }
 int main ()
 {
 	int x;
 	file();
 	xuatfile();
 	printf("Nhap dinh cua do thi can tim bac: ",x);
 	scanf("%d",&x);
 	if(ktdx()==1){
     printf("Bac dinh %d la: %d ",x,bacra(x));
		 }
 		else
 		{
 	printf("Bac ra dinh %d la: %d ",x,bacra(x));
 	printf("Bac vao dinh %d la: %d ",x,bacvao(x));
 	}
}
