#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
void editname();
void main()
{
	string bookname[5];
	string authorname[5];
	vector<int> wrong_column_number;
	vector<string> wrong_column_name;
	string text;
	string text32;
	fstream newfile;
	fstream filebook;
	fstream fileauthor;
	int count1 = 0;
	int count2 = 0;
	int count_not_found = 0;
	newfile.open("iread_data.txt", ios::in);
	filebook.open("iread_book.txt", ios::out);

	if (newfile.is_open() && filebook.is_open()) { //checking whether the file is open
		string tp;
		while (getline(newfile, tp)) { //read data from file object and put it into string.
			text = tp.substr(0, tp.find('-'));
			cout << text << "\n"; //print the data of the string
			filebook << text << endl;
			count1++;
			count_not_found++;
			if (tp.find('-') == std::string::npos)
			{

				wrong_column_number.push_back(count1++);
				wrong_column_name.push_back(tp);
			}
			else
				count_not_found--;

		}
		newfile.close(); //close the file object.
		filebook.close();

	}
	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
	newfile.open("iread_data.txt", ios::in);

	fileauthor.open("iread_author.txt", ios::out);
	if (newfile.is_open() && fileauthor.is_open()) { //checking whether the file is open
		string tp;
		while (getline(newfile, tp)) { //read data from file object and put it into string.
			text32 = tp.substr(tp.find('-') + 1, tp.find_last_of(" "));
			cout << text32 << "\n"; //print the data of the string
			fileauthor << text32 << endl;
			count2++;
		}
		newfile.close(); //close the file object.

		fileauthor.close();
	}
	cout << count1;
	cout << endl;
	cout << count2;
	cout << endl;
	cout << "errors = " << count_not_found << endl;

	for (int i = 0; i < count_not_found; i++)
	{

		cout << "at column numbers : " << wrong_column_number[i] << " : " << wrong_column_name[i] << "\t";
	}

	editname();
	//cin >> text;
	//cout << text;
	system("pause");
}
void editname()
{
	vector<int> wrong_column_number;
	vector<string> wrong_column_name;
	fstream filebook;
	string text;
	fstream newfile;
	int count1 = 0;
	int count2 = 0;
	int count_not_found = 0;
	newfile.open("namesold.txt", ios::in);
	filebook.open("namesnew.txt", ios::out);
	if (newfile.is_open() && newfile.is_open() && newfile.is_open()) { //checking whether the file is open
		string tp;
		while (getline(newfile, tp)) { //read data from file object and put it into string.
			text = tp.substr(tp.find('.')+2, tp.find_last_of(""));
			cout << text << "\n"; //print the data of the string
			filebook << text << endl;
			count1++;
			count_not_found++;
			if (tp.find('.') == std::string::npos)
			{

				wrong_column_number.push_back(count1++);
				wrong_column_name.push_back(tp);
			}
			else
				count_not_found--;

		}
		newfile.close(); //close the file object.
		filebook.close();

	}
}
