#include <iostream>
using namespace std;

int main()
{
  const int minimumAllowedCoordinate = -1000;
  const int maximumAllowedCoordinate = 1000;
  const int originCoordinateValue = 0;

  float xCoordinate = 0, yCoordinate = 0;

  cout << "Enter coordinates x and y: ";
  cin >> xCoordinate >> yCoordinate;

  const bool isXCoordinateInAllowedRange = (minimumAllowedCoordinate <= xCoordinate && xCoordinate <= maximumAllowedCoordinate);
  const bool isYCoordinateInAllowedRange = (minimumAllowedCoordinate <= yCoordinate && yCoordinate <= maximumAllowedCoordinate);

  if (isXCoordinateInAllowedRange && isYCoordinateInAllowedRange)
  {
    if (xCoordinate > originCoordinateValue && yCoordinate > originCoordinateValue)
      cout << "The point is at quadrant one" << endl;
    else if (xCoordinate < originCoordinateValue && yCoordinate > originCoordinateValue)
      cout << "The point is at quadrant two" << endl;
    else if (xCoordinate < originCoordinateValue && yCoordinate < originCoordinateValue)
      cout << "The point is at quadrant three" << endl;
    else if (xCoordinate > originCoordinateValue && yCoordinate < originCoordinateValue)
      cout << "The point is at quadrant four" << endl;
    else if (xCoordinate == originCoordinateValue && yCoordinate == originCoordinateValue)
      cout << "The point is at Origin" << endl;
    else if (yCoordinate == originCoordinateValue)
      cout << "The point is on the X-axis" << endl;
    else if (xCoordinate == originCoordinateValue)
      cout << "The point is on the Y-axis" << endl;
  }
  else
  {
    cout << "Coordinates out of range!" << endl;
  }

  return 0;
}