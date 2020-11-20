#include<iostream>
#include<vector>
#include           <cmath>
using namespace std;
void generate_integer(){
vector<vector<int>> M{{1, 2, 3},{4,-5,8}};
for(int                i=0; i < M.size(); i++) {
for (int j = 0; j < M[i].size(); j++)
cout << M[i][j] << ".0000 " << " ";
cout << endl;
}
}
void normalize(){
int result;
int result2;
vector<int>v1 = {1,2,3};
vector<int>v2 = {4,-5,8};
result = sqrt(1) , sqrt(2) , sqrt(3);
result2 = sqrt(4), sqrt(-5), sqrt(8);
cout << "the normalize vector is: " << result << result2 << " ";
}
void dot_product(){
vector<int>v1 = {1,2,3};
vector<int>v2 = {4,-5,8};
int endresult = 0;
for (int i = 0; i < v1.size(); i++)
endresult = endresult + v1[i] * v2[i];
cout << endl;
cout << "The dot product is: "<< endresult << endl;
}
void cross_product(){
int f[0]; f[1]; f[2];
vector<int>v1 = {1,2,3};
vector<int>v2 = {4,-5,8};
f[0] = v1[1] * v2[2] - v1[2] * v2[1];
f[1] = v1[2] * v2[0] - v1[0] * v2[2];

f[2] = v1[0] * v2[1] - v1[1] * v2[0];
cout << "The cross product is: " << f[0]<< " " << f[1] << " " << f[2] << endl;
}
void const_multiply(){
vector<int>v1 = {1,2,3};
int x[0]; x[1]; x[2];
x[0] = 5*v1[0];
x[1] = 5*v1[1];
x[2] = 5*v1[2];
cout << "The result of const of 5 for v1 is: " << x[0]<< " " << x[1]<< " " <<
x[2] << " ";
}
void add(){
int a[0]; a[1]; a[2];
vector<int>v1 = {1,2,3};
vector<int>v2 = {4,-5,8};
a[0] = v1[0]+v2[0];
a[1] = v1[1]+v2[1];
a[2] = v1[2]+v2[2];
cout << endl;
cout << "The result of adding v1 and v2 is: " << a[0]<< " " << a[1]<< " " <<
a[2] << " ";
}
int main(){
generate_integer();
normalize();
dot_product();
cross_product();
const_multiply();
add();
return 0; }
