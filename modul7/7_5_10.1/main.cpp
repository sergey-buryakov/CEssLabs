#include <iostream>
#include <vector>
#include <string>
using namespace std;

class out_of_range_exeption {
public:
	string msg;
	out_of_range_exeption(string txt = "argument out of range") : msg(txt) {}
};

class no_disks {
public:
	string msg;
	no_disks(string txt = "there are no disks at the source rod") : msg(txt) {}
};

class incorrect_size {
public:
	string msg;
	incorrect_size(string txt = "disk moved is of an incorrect size") : msg(txt) {}
};

class Hanoi
{
public:
    Hanoi()
    {
        rods.push_back(vector<int>());
        rods.push_back(vector<int>());
        rods.push_back(vector<int>());
        rods[0].push_back(3);
        rods[0].push_back(2);
        rods[0].push_back(1);
    };
    void Print()
    {
        for (int i = 0; i < rods.size(); i++)
        {
            cout << "tower " << i + 1 << ": ";
            if (rods[i].size() == 0) cout << "empty";
            else for (int j = 0; j < rods[i].size(); j++)
            {
                cout << rods[i][j] << " ";
            }
            cout << endl;
        }
    }
    void Action(string user)
    {
        int from, to;
        from = user[0] - 49;
        to = user[1] - 49;

        if (user.size() > 2 || from > 2 || to > 2)
            throw out_of_range_exeption("one or both towers are not in the 1-3 range");

        if ((rods[from]).size() == 0)
            throw no_disks();

        int disk = rods[from][rods[from].size() - 1];

        if (rods[to].size() > 0 && rods[to][rods[to].size() - 1] < disk)
            throw incorrect_size();
        rods[from].pop_back();

        rods[to].push_back(disk);

    }
    vector<vector<int>> rods;
};

int main()
{
    Hanoi tower;
	string user;
	tower.Print();
	cout << endl;
	while (tower.rods[2].size() < 3 && tower.rods[1].size() < 3)
	{
		cin >> user;
		try
		{
			tower.Action(user);
		}
		catch (out_of_range_exeption ex)
		{
			cout << ex.msg << endl;
        }
        catch (no_disks ex)
		{
			cout << ex.msg << endl;
        }
        catch (incorrect_size ex)
		{
			cout << ex.msg << endl;
        }
	}
	tower.Print();

    return 0;
}
