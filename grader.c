#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void buffer_clean(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_score(double arr[], int size){
    for (int i=0; i<size; i++){
        printf("please input the scores: ");


        while (scanf("%lf",&arr[i]) !=1){
            printf("Wrong input! try again\n");
            buffer_clean();
            printf("please input the scores:");
        }
        buffer_clean();
    }
}
void show_scores(double arr[], int size){
    for (int i=0; i<size; i++){
        printf("student %d: %.2lf\n", i + 1, arr[i]);
    }
}
void cal_avg(double arr[], int size){
    double sum=0.0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    }
    double average= sum/size;
    printf("The average of the score is %.2lf\n",average);
}
void min_max(double arr[], int size){
    double max=0.0;
    double min=0.0;
    for (int i=0; i<size; i++){
        if (i==0){
            max= arr[i];
            min= arr[i];
        }
        else {
            if (arr[i]>max){
                max=arr[i];
            }
            if (arr[i]<min){
                min=arr[i];
            }
        }
    }
    printf("The maximum score is %.2lf\n",max);
    printf("The minimum score is %.2lf\n",min);
}
void count_boundaries(double arr[], int size){
    int count_A=0;
    int count_pass=0;
    int count_fail=0;
    for (int i=0; i<size; i++){
        if (arr[i]>=90){
            count_A+=1;
        }
        if (arr[i]>=50){
            count_pass+=1;
        }
        if (arr[i]<50){
            count_fail+=1;
        }
    }
    printf("The number of students who got A grade is: %d\n",count_A);
    printf("The number of students who passed is: %d\n",count_pass);
    printf("The number of students who failed is: %d\n",count_fail);
}

int main(){
    int size=5;
    double score[size];
    input_score(score,size);
    show_scores(score,size);
    cal_avg(score,size);
    min_max(score,size);
    count_boundaries(score,size);

    return 0;
}
