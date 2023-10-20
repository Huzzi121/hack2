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

    lat1=lat1 * 3.14/180.0;
    lon1=lon1 * 3.14/180.0;
    lat2=lat2 * 3.14/180.0;
    lon2=lon2 * 3.14/180.0;

    int R=6371.0;
    int Distance;

    Distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1)) * R;

    


    return 0;
}