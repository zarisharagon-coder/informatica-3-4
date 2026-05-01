#include <stdio.h>
int main(void)
{
    int minutes;
    int start_time;
    int movie_duration;
    int end_time;
    int min;

    printf("Enter the Lenght of the movie in minutes:");
    scanf("%d", &minutes);
    printf("Enter the time when you will start the movie:");
    scanf("%d",&start_time);
    movie_duration= (minutes/60);
    end_time= (start_time + movie_duration);
    minutes= start_time% 60;
    printf("movie duration: %d hours and %d minutes\n",movie_duration   );
    printf("The movie ends at : %d\n", end_time,minutes);
    
}

