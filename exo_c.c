#include <stdio.h>
int main() {
    int n,m,i,somme,cpt=0,cpt_impaire=0;
    float moyenne;
    do{
    printf("entrez n entiers positifs");
    scanf("%d", &n);
    if(n<0){
    puts ("erreur:un entier doit etre positif");
    }
   }while(n<0);
   for(i=0; i<n; i++){
        do{
        puts("veuillez saisir un entier");
        scanf("%d", &m);
        }while(m<0);
   if(m%2==0){
       cpt++;
       somme+=m;
   }
    else{
        cpt_impaire++;
    }
    }
    moyenne=somme/cpt;
    printf("la moyenne est : %.2f", moyenne);
    printf("le nombre d'entier impaire est : %d", cpt_impaire);



return 0;

    }




