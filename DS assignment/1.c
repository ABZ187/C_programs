#include<stdio.h>
#include<string.h>
int c =10,j,m,p;
void search(char city_name[c],char city_list[10][10]){
    for(j=0;j<10;j++){
        if(strstr(city_list[j],city_name)!=NULL){
            printf("city name found\n");
            break;
        }
    }
}
int main(){
    // noc :- No. of cities 4 
    // c :- max 10 char per city
    int i,n;
    char cities[10][10];
    char city[c];
    
    printf("How many cities name you want to enter?\n");
    scanf("%d",&n);
    printf("Enter the name of the cities\n");
    for(i=0;i<=n;i++){ // i<=n because it gets append \n at the end
        // gets(cities[i]); // stops taking input only if \n encountered,not recommended
        fgets(cities[i],sizeof(cities[i]),stdin); // stop taking input if EOF or \n  encountered or if reached the specified length
    }

    printf("Enter the search city\n");
    fgets(city,sizeof(city),stdin);

    search(city,cities);

    return 0;
}