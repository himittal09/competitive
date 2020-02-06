#include<bits/stdc++.h>

using namespace std;

class Box {
private:
    long l, b, h;
public:
    Box () {
        b=0;
        h=0;
        l=0;
    }
    Box (int length, int breadth, int height) {
        b=breadth;
        h=height;
        l=length;
    }
    Box (const Box &b) {
        b = b.b;
        h = b.h;
        l = b.l;
    }

    int getLength() {
        return l;
    }
    int getBreadth () {
        return b;
    }
    int getHeight () {
        return h;
    }
    long long CalculateVolume() {
        return h * l * b;
    }
    friend bool operator < (Box const &b) {
        if (l < b.l) {
            return true;
        } else if (l == b.l && b < b.b) {
            return true;
        } else if (l == b.l && b == b.b && h < b.h) {
            return true;
        } else {
            return false;
        }
    }
    friend bool operator < (Box&A, Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        } else {
            return false;
        }
    };
    friend ostream& operator << (ostream& out, Box& B) {
        out << B.l << " " << B.b << " " << B.h;    
        return out;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}