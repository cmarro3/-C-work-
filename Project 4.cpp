 #include<iostream> #include <string> #include <cmath> using namespace std;
class LineSegment{ private:
public:
};
LineSegment getLongerSegment(LineSegment segment, LineSegment segment1);
LineSegment::LineSegment(double A, double B, double C, double D, double a, double b, double c, double d) {
}
string show(LineSegment S){
}
double LineSegment::getSlope() {
}
double LineSegment::getLongerSegment() {
}
double LineSegment::getSegmentLength(){
       double A,B,C,D;
double data_C,data_D;
double data_a,data_b,data_c,data_d; friend string show(LineSegment);
  LineSegment(double A = 0, double B = 0, double C = 0, double D = 0, double a = 0, double b = 0, double c = 0, double d = 0);
double getSlope();
double getYIntercept(); double getSegmentLength(); double getLongerSegment(); double data_A;
double data_B;
      data_A = A; data_B = B; data_C = C; data_D = D; data_a = 3; data_b = 11; data_c = 6; data_d = 21;
    cout<<"A Line segment between points: ("+to_string(S.data_A)+", "+to_string(S.data_B)+"), ("+to_string(S.data_C)+", "+to_string(S.data_D)+",)"<<endl;
cout<<"B Line segment between points: ("+to_string(S.data_a)+", "+to_string(S.data_b)+"), ("+to_string(S.data_c)+", "+to_string(S.data_d)+",)"<<endl;
cout <<"The slope of A is: "<< S.getSlope() <<endl;
cout << "The y-intercept of B is: " << S.getYIntercept() <<endl;
cout << "The Length of segment A is: " << S.getSegmentLength() <<endl; cout << S.getLongerSegment()<<endl;
cout << "A + B is:("<< S.data_a + S.data_A << "," << S.data_B + S.data_b<< ")"" ""("<< S.data_C+S.data_c <<"" "," "" << S.data_D + S.data_d << ")"<<endl;
   float slope;
float x1,x2,y1,y2;
x1 = data_A;
x2 = data_C;
y1 = data_B;
y2 = data_D;
slope = (y2 - y1) /(x2 - x1); // slope = ( y2-y1) / (x2-x1) return slope;
   cout << "Line segment between the A points are: ("<< data_A << ","<< data_B << ") and (" << data_C << "," << data_D << ")" <<endl;
cout << "Line segment between the B points are: ("<< data_a << ","<< data_b << ") and (" << data_c << "," << data_d << ")" <<endl;
return 0;
   float segment; // sqrt(((x2-x1)^2)) - ((y2-y1)^2)) int x1,x2,y1,y2;
x1 = data_A;

 x2 = data_C;
y1 = data_B;
y2 = data_D;
segment = sqrt(pow((x2-x1),2) - pow((y2-y1),2)); return segment;
 }
double LineSegment::getYIntercept() {
}
class plus: public LineSegment{ public:
plus(double data): LineSegment(data,data,data,data){} };
int main() {
cout << show(A) << endl;
cout << show(B) << endl;
cout << A.getSlope() << endl;
cout << B.getYIntercept() << endl;
cout << A.getSegmentLength() << endl;
//cout << show(getLongerSegment(A,B) << endl; //cout << show(A+B)<< endl;
return 0; }
  float slope;
double intercept;
float x1,x2,y1,y2;
x1 = data_a;
x2 = data_c;
y1 = data_b;
y2 = data_d;
slope = (y2 - y1) /(x2 - x1); // slope = ( y2-y1) / (x2-x1) intercept = data_b - slope*data_a ;
return intercept;
        LineSegment A(2,8,4,9);
LineSegment B (3,11,6,21); // Clion keeps putting my instance B as A,B,C,D but that's already instance A and I can't rename my hints so i renamed my instance to values
         