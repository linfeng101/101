#include<stdio.h>
struct time{
    int hour;
    int minutes;
    int seconds;
};
struct time timeupdate(struct time now);
int main(){
    struct time testtimes[5]=
    {{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}};
    for(int i=0;i<5;i++){
        printf("Time is %.2i:%.2i:%.2i",
        testtimes[i].hour,testtimes[i].minutes,testtimes[i].seconds);
        testtimes[i]=timeupdate(testtimes[i]);
        printf("Time is %.2i:%.2i:%.2i",
        testtimes[i].hour,testtimes[i].minutes,testtimes[i].seconds);
    }
    return 0;
}
struct time timeupdate(struct time now){
    now.seconds++;
    if(now.seconds==60){
        now.seconds=0;
        now.minutes++;
        if(now.minutes==60){
            now.hour++;
            if(now.hour==24){
                now.hour=0;
            }
        }
    }
    return now;
}