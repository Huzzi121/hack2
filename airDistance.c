#include<stdio.h>
#include<math.h>

int main()
{
    double lat1,lon1,lat2,lon2;

    printf("Enter the coordinates of the origin:\n");
    printf("Latitude (in degrees): ");
        scanf("%lf", &lat1);
    printf("Longitude (in degrees): ");
        scanf("%lf", &lon1);
    
    printf("Enter the coordinates of the destination:\n");
    printf("Latitude (in degrees): ");
        scanf("%lf", &lat2);
    printf("Longitude (in degrees): ");
        scanf("%lf", &lon2);

    return 0;
}