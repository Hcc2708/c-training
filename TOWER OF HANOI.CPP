#include<iostream>

using namespace std;
int cnt=0;

void toh(int n, char a, char b ,char c)     /// a= source , b= auxiliary , c= destination
{
	if(n==1){
		cout<<++cnt<<" move 1 disc from "<<a<<" to "<<c<<"\n";
        return;
	}
	else
	{
		toh(n-1,a,c,b);              /// toh(n-1, source, destination, auxiliary) // interchange between destination and auxiliary because to transfer n-1 disk from source to auxiliary we will use destination as auxiliary , since we are passing disks from source to auxiliary the auxiliary will now destination and this changes will happen continuously to passing n-1 disks from one tower to another
		cout<<"check \n";
		cout<<++cnt<<" move 1 disc from "<<a<<" to "<<c<<"\n";
		toh(n-1,b,a,c);              /// toh(n-1, auxiliary, source, destination) // now when n-1 disks will pass to auxiliary and nth bit is passed to destination. now we will use source as auxiliary to pass n-1 disks from auxiliary to destination.
	}
}
int main()
{
	toh(4,'A','B','C');
}
/// so for each move remember your destination and auxiliary
/// lets S is source and A is auxiliary and D is destination then
/// let's 5 element are there then
/// to pass 5 disk (in order) from S to D our plan is to pass 5-1 Disk first  from S to A so that last 5th disk we can pass to D
/// now our aim is to pass 4 disk from S to A , we will use same logic of to pass n-1 into auxiliary first and then nth element Destination so here the auxiliary we will use D and Destination will be A
/// so for S source and A destination our passing plan is to pass first 4-1 to D and then 4th element to A but again to pass 4-1 into D we need to use same logic of to pass n-1 into auxiliary first so we need to
/// decide auxiliary for D( which is destination now) now and now the auxiliary for this will be A now
/// same process will keep on going(without pass any element(disk)) until we do not have only one disk and destination to pass that disk.
/// after this much recursion( after deciding the destination for one disk which is the top most disk) the passing will start
/// here in this case of 5 disk the destination will be D for top most disk ( in even number of total disk the Destination for top most element will be the auxiliary tower which we are using to pass whole disk into Destination  and for odd number of disk the destination will be actual destination where we have to pass whole disk)
/// now after passing the top most disk the second recursive function will called and the same logic of Destination and Auxiliary for each n-1 Disk will now used between S and A.  (earlier till finding the destination for top most disk it was between A and D only.)
