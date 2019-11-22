#include  <iostream>

using namespace std;
char direction = 'N';

int main()
{
int command;

cout << "Input command: ";
cin >> command;

if (command == -2)
{
return 0;
}

if (command == 0)
{
cout << direction << endl;
}else if (command == 1)
{
if (direction == 'N')
{
direction = 'W';
cout << "W" << endl;
}else if (direction == 'E')
{
direction = 'N';
cout << "N";
}else if (direction == 'S')
{
direction = 'E';
cout << "E" << endl;
}else if (direction == 'W')
{
direction = 'S';
cout << "S" << endl;
}
}else if (command == -1)
{
if (direction == 'N')
{
direction = 'E';
cout << "E" << endl;
}else if (direction == 'E')
{
direction = 'S';
cout << "S" << endl;
}else if (direction == 'S')
{
direction = 'W';
cout << "W" << endl;
}else if (direction == 'W')
{
direction = 'N';
cout << "N" << endl;
}
}

return main();
}
