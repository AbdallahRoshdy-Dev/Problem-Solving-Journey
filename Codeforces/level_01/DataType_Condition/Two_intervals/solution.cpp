#include <iostream>
using namespace std;

int main()
{
  // Allowed range for interval boundaries
  const int MIN_LIMIT = 0;
  const int MAX_LIMIT = 1000000000;

  // Input interval boundaries
  int firstIntervalStart, firstIntervalEnd;
  int secondIntervalStart, secondIntervalEnd;

  cout << "Enter two intervals as l1 r1 l2 r2: ";
  cin >> firstIntervalStart >> firstIntervalEnd >> secondIntervalStart >> secondIntervalEnd;

  // Check if all values are within allowed range
  if ((MIN_LIMIT <= firstIntervalStart && firstIntervalStart <= MAX_LIMIT) &&
      (MIN_LIMIT <= firstIntervalEnd && firstIntervalEnd <= MAX_LIMIT) &&
      (MIN_LIMIT <= secondIntervalStart && secondIntervalStart <= MAX_LIMIT) &&
      (MIN_LIMIT <= secondIntervalEnd && secondIntervalEnd <= MAX_LIMIT))
  {
    // Check if intervals are valid
    if (firstIntervalStart <= firstIntervalEnd && secondIntervalStart <= secondIntervalEnd)
    {
      // Check intersection (simplified condition could be used here)
      if (firstIntervalStart >= secondIntervalStart && firstIntervalStart <= secondIntervalEnd)
      {
        cout << "There is an intersection between ["
             << firstIntervalStart;
        if (firstIntervalEnd <= secondIntervalEnd)
        {
          cout << "," << firstIntervalEnd << "]" << endl;
        }
        else
        {
          cout << "," << secondIntervalEnd << "]" << endl;
        }
      }
      else if (secondIntervalStart >= firstIntervalStart && secondIntervalStart <= firstIntervalEnd)
      {
        cout << "There is an intersection between ["
             << secondIntervalStart;
        if (firstIntervalEnd <= secondIntervalEnd)
        {
          cout << "," << firstIntervalEnd << "]" << endl;
        }
        else
        {
          cout << "," << secondIntervalEnd << "]" << endl;
        }
      }
      else
      {
        cout << "There is no intersection" << endl;
      }
    }
    else
    {
      cout << "Illegal boundaries for intervals" << endl;
    }
  }
  else
  {
    cout << "One or more provided values are not within the allowed range" << endl;
  }

  return 0;
}


#include <iostream>
using namespace std;

int main()
{
  // Allowed range for interval boundaries
  const int MIN_LIMIT = 0;
  const int MAX_LIMIT = 1000000000;

  // Input interval boundaries
  int firstIntervalStart, firstIntervalEnd;
  int secondIntervalStart, secondIntervalEnd;

  cout << "Enter two intervals as l1 r1 l2 r2: ";
  cin >> firstIntervalStart >> firstIntervalEnd >> secondIntervalStart >> secondIntervalEnd;

  // Check if all values are within allowed range
  if ((MIN_LIMIT <= firstIntervalStart && firstIntervalStart <= MAX_LIMIT) &&
      (MIN_LIMIT <= firstIntervalEnd && firstIntervalEnd <= MAX_LIMIT) &&
      (MIN_LIMIT <= secondIntervalStart && secondIntervalStart <= MAX_LIMIT) &&
      (MIN_LIMIT <= secondIntervalEnd && secondIntervalEnd <= MAX_LIMIT))
  {
    // Check if intervals are valid
    if (firstIntervalStart <= firstIntervalEnd && secondIntervalStart <= secondIntervalEnd)
    {
      // Check intersection (simplified condition could be used here)
      int startIntersection, endIntersection;

      if (firstIntervalStart >= secondIntervalStart)
        startIntersection = firstIntervalStart;
      else
        startIntersection = secondIntervalStart;

      if (firstIntervalEnd <= secondIntervalEnd)
        endIntersection = firstIntervalEnd;
      else
        endIntersection = secondIntervalEnd;

      if (startIntersection <= endIntersection)
        cout << startIntersection << " " << endIntersection << endl;
      else
        cout << -1 << endl;
    }
    else
    {
      cout << "Illegal boundaries for intervals" << endl;
    }
  }
  else
  {
    cout << "One or more provided values are not within the allowed range" << endl;
  }

  return 0;
}