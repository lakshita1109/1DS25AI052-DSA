#include <stdio.h>
// TRAVERSAl
int main() {
int a[5]={};
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

  

  //MINIMUM ELEMENT
int a[5]={};
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}
int min=a[0];
int index=0;
for(int i=1;i<5;i++){
    if(a[i]<min){
        min=a[i];
        index=i;
    }

}
printf("\n%d minimum found at %d\n",min,index);

  
//MAXIMUM ELEMENT
int a[5]={};
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}
int max=a[0];
int index=0;
for(int i=1;i<5;i++){
    if(a[i]>max){
        max=a[i];
        index=i;
    }

}
printf("\n%d maximum found at %d\n",max,index);


  //LINEAR SEARCH
int a[5]={};
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}
int search=3;
int index=0;
for(int i=0;i<5;i++){
    if(a[i]==search){
        index=i;
        break;
    }

}
printf("\n%d found at %d\n",search,index);


//INSERTION AT GIVEN POSITION 
  int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int insert=7;
int pos=2;
for(int i=5;i>pos;i--){
    a[i]=a[i-1];
}
a[pos]=insert;
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}


//INSERTION (BEGINNING)
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int insert=2;
int pos=0;
for(int i=5;i>pos;i--){
    a[i]=a[i-1];
}
a[pos]=insert;
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}


//INSERTION(END)
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int insert=2;
int pos=5;
for(int i=5;i>pos;i--){
    a[i]=a[i-1];
}
a[pos]=insert;
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}


  //DELETION AT GIVEN POSITION
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}

printf("\n");
int pos=2;
for(int i=pos;i<6;i++){
    a[i]=a[i+1];  
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}



// DELETION(BEGINING)
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int pos=0;
for(int i=pos;i<6;i++){
    a[i]=a[i+1];
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}


//DELETION(END)
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int pos=5;
for(int i=pos;i<6;i++){
    a[i]=a[i+1];
}
for(int i=0;i<5;i++){
    printf("%d",a[i]);

}


//SUM
int a[6]={};
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<6;i++){
    printf("%d",a[i]);

}
printf("\n");
int sum=0;
for(int i=0;i<6;i++){
    sum+=a[i];
}
printf("sum = %d",sum);

}
    return 0;
}
