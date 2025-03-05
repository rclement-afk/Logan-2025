#include <kipr/wombat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <constants.h>
#include <time.h>
#include <stddef.h>
#include <stdbool.h>
////////////////////////////////////////////////////////////////
//ALERT OMNI_STRAFE IS HARD CODED TO 90 DEGREES and 45 DEGREES//
////////////////////////////////////////////////////////////////


int main()
{

    /*FILE *file997 = fopen ("Arm.txt","r");
    char line[16];
    while(fgets(line, sizeof(line),file997))

    {printf("%s is arm", line);}
    fclose(file997);
    int arm=atof(line);
    printf(" arm: %d \n", arm);

    FILE *file996 = fopen ("Claw.txt","r");
    char line1[16];
    while(fgets(line1, sizeof(line1),file996))

    {printf("claw: %s\n", line);}
    fclose(file996);
    int  claw=atof(line1);
    printf(" claw: %d\n", claw);

    FILE *file988 = fopen ("Turret.txt","r");
    char line2[16];
    while(fgets(line2, sizeof(line2),file988))

    {printf("%s is BIAS", line2);}
    fclose(file988);
    int turret=atof(line2);
    // double bias2 = bias_placeholder;
    printf(" turret: %d\n", turret);


	//fprintf(stdout,"echo '120' , /home/pi/text.txt ");
    //puts("echo '120' > /home/pi/text.txt ");
*/


    
    //moving out of the starting box
    four_wheel_drive(-1200,0.50);
    msleep(500);
    smart_servo(claw,100,1);
    smart_servo(arm,100,1);
    msleep(800);
    omni_strafe(90,2);
    msleep(500);
    four_turn(-90);
    msleep(700);
    smart_servo(arm,100,1);
    msleep(1000);
    demo_gyro_square_up(1200);
    msleep(1000);
    smart_servo(turrent,100,1);
    msleep(500);
    
    //starting known palms grab
    four_wheel_drive(-1200,1);
    msleep(200);
    four_turn(60);
    msleep(500);
    smart_servo(arm,0,1);
    msleep(800);
    four_wheel_drive(1200,10);
    msleep(1000);
    four_turn(15);
    msleep(500);
    four_wheel_drive(1200,7);
    msleep(1000);
    four_wheel_drive(-1200,1);
	smart_servo(arm,80,1);
    smart_servo(claw,0,1);
    msleep(1000);
    return 0;
}
//four_wheel_drive(int target_mav_speed, double inches)
//four_turn(double degrees)*/