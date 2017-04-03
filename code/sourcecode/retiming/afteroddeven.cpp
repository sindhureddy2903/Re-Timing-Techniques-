#include <string>
#include <vector>
#include <list>
#include <iostream>


 class Sort
{

public:
static std::list<bool> q;


static void swap(std::vector<int> &a, int i, int j);


static void paf(bool val);


static bool pif(int a, int b);


	static void sort(std::vector<int> &a);


//static void main(std::vector<std::wstring> &args);

};

//.cpp file code:

std::list<bool> Sort::q;

void Sort::swap(std::vector<int> &a, int i, int j)
{

		int temp = a[i];

		a[i] = a[j];

		a[j] = temp;

}

void Sort::paf(bool val)
{

q.push_back(val);

}

bool Sort::pif(int a, int b)
{

q.push_back(a > b);

return q.front();

}

void Sort::sort(std::vector<int> &a)
{

int n = a.size();
std::cout<<"n value is"<<n<<"\n";
int i;

bool swapped = true;

while (swapped)
{

  swapped = false;


  //prologue

  q.clear();

  paf(a[1] > a[2]); // C1: Change1


  // modified loop

  for (i = 1; i + 2 + 1 <= n - 1; i += 2)
  { // C2: Changed to x.length-1

	 //if(a[i] > a[i+1]) {

	  if (pif(a[i + 2], a[i + 2 + 1]))
	  { // C3: Changed

		  swap(a, i, i + 1);

		  swapped = true;

	  }

  }


	// epilogue // C4

  if (q.front())
  {

	  swap(a, i, i + 1);

		swapped = true;

  }



  ///////////////////////////////

  //prologue

  q.clear();

  paf(a[0] > a[1]); // C1: Change1


  // modified loop

  for (i = 0; i + 2 + 1 <= n - 1; i += 2)
  { // C2: Changed to x.length-1

	 //if(a[i] > a[i+1]) {

	  if (pif(a[i + 2], a[i + 2 + 1]))
	  { // C3: Changed

		 swap(a, i, i + 1);

		 swapped = true;

	  }

  }


	// epilogue // C4

  if (q.front())
  {

	  swap(a, i, i + 1);

		swapped = true;

  }

}

}

int main(std::vector<std::wstring> &args)
{
    Sort s;
    int myints[]={9,8,7,6,5,4,3};
     std::vector<int> a(myints, myints + sizeof(myints) / sizeof(int) );
     std::cout <<"before sorting";
for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';



s.sort(a);
std::cout <<"after sorting";
for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

}
