#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <queue>
#include <fstream>
#include <string>
#include <ostream>
#include <sstream>
#include "StringSplitter.h"
#include "Cell.h"
using namespace std;

char yes = 'y';

char wall = '#';
char start = 'o';
char end = '*';
char space = '.';
//std::vector<char> v;

void PrintMaze(vector<vector<char>> &v);


void PrintMaze(vector<vector<char>> &v)
{
	
		for(int i = 0; i < v.size(); i++)
		{
			for(int j = 0; j < v.size(); j++)
			{
				//cout << "Test";
				cout << v[i][j];

			}
		}

		cout << endl;
}

int main(void) 
{
		
		vector<vector<char>> maze;
		//prompt user for file to open
		string file_to_open;

do{
		cout << "Enter file name: ";
		cin >> file_to_open;

		//open the file
		ifstream input_file(file_to_open);


		//safety checking
		if (input_file.is_open()) 
		{
				
			string dimensions = "";
			getline(input_file, dimensions);

			int width = 0;
			int height = 0;

			istringstream dimensions_stream{ dimensions };	

			dimensions_stream >> width;
			dimensions_stream >> height;

			//read from the file as long as more content is available
			while (input_file.good()) 
			{
				
				string current_line;
				getline(input_file, current_line);
				
				vector<char> newRow(current_line.begin(), current_line.end());
				maze.push_back(newRow);
				cout << current_line << endl;

				//puts file into a vector
			}
			PrintMaze(maze);
			//cout << v[1][1];
		}

		cout << "Select another maze? (y or n)";
		cin >> yes;

	} while(yes == 'y');
	
	return 0;
}