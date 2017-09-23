#include <stdio.h>

/**
  * go_south_east - changes the latitude and longitude for main
  * @lat: controls the player latitude
  * @lon: controls the player longitude
  * Description: Moves the latitude & longitude for the main function.
  */
void go_south_east(int * lat, int * lon)
{
  *lat = *lat - 1;
  *lon = *lon + 1;
}

/**
  * main - entry point
  * Description: Controls the position of the player.
  * Return: Always 0 (Success)
  */
int main(void)
{
  int latitude = 32;
  int longitude = -64;

  go_south_east(&latitude, &longitude);
  printf("Avast! Now at: %i, %i\n", latitude, longitude);
  return (0);
}
