// Header Files 
# include<iostream> 
int main() 
{ 
// Variable Declarations 
 int a =10, b=4, c=0; 
 c = a % b; 
 std::cout<<" a "<<++a; 
 std::cout<<"\n a "<<( ++a + (a++) + b); 
 std::cout<<"\n a "<<( a++ + (a++) + (b++ * c)); 
}
