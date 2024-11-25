	#include <stdio.h>
	#include<queue>
	#include<iostream>
		
	using namespace std;
	int a[10][10],  d[10], x , kq[10];
	int n;
	 void file()	
	 {
	 	FILE *f;
	 	f = fopen("thuchanh3.txt", "rt");
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
     void Queue1(int v){
     	queue<int> S;
     	S.push(v);
		 while (!S.empty()){
		 	int tam =S.front();
		 	S.pop();
		 	if(!d[tam]){
		 		printf("%d ", tam );
		 		d[tam]= 1;
		 		for(int i = 1; i <= n  ; i++ ){	
		 			if (a[tam][i] && !d[i]){
		 					S.push(i);
		 			}
		 		}
		 	}
		 } 
     }	
	  
	  int main(){
	  	file();
	  	xuatfile();
	  	queue<int> S ;
	  	   for(int i =0; i < n; i++ ){
      	d[i]=0;
      }
	  	printf("Nhap so dinh can duyet: ",x);
        scanf("%d",&x);
        Queue1(x);
        return 0;
	  }
