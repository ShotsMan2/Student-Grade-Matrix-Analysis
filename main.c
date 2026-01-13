#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int m,n,i,j,matris[99][99],sum,ort,ogr;

    srand(time(NULL));+

    printf("n i giriniz ");
    scanf("%d",&n);

    printf("m i giriniz");
    scanf("%d",&m);



    for(i=0;i<n;i++){

        for(j=0;j<m;j++){
            matris[i][j]=rand()%101;

        }

    }

    ogr=0;

    for(i=0;i<n;i++){
        sum=0;
        printf("%d. ogrenci: ",i+1);
        for(j=0;j<m;j++){
            printf("%d\t",matris[i][j]);
            sum+=matris[i][j];
        }
        ort=sum/m;
        printf("ort: %d",ort);

        if(ort>50){
            ogr++;
        }
        printf("\n");
    }
    printf("\n 50 üstü: %d",ogr);

}
