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
    movie_duration= minutes/60;
    end_time= start_time + movie_duration;
    min=minutes %60;
    if(min>=60)
    end_time= end_time+(min/60 );
    printf("movie duration: %d hours and %d minutes\n",movie_duration,min   );
    printf("The movie ends at : %d:%02d\n", end_time,min);

}

