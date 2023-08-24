#include <iostream>

using namespace std;
float rectungle(float a , float b)
{
    float area = a * b ;
    return area ;
}
 float squre (float x)
{
    float area = x * x ;
        return area ;
}
 float circle ( float p )
{
    float area = 3.1415926535 *p *p ;
    return area ;
}
float triangle ( float c , float d )
{
    float area = 0.5 * c * d ;
    return area ;
}




int main()
{

    cout << " enter 1 for rectungle " << endl ;
    cout << " enter 2 for squire " << endl ;
    cout << " enter 3 for circle " << endl ;
    cout << " enter 4 for traingle " << endl ;
    int option ;
    cin >> option ;

    if(option==1){
        float a , b ;
     cout<<"How many: ";
     int n;
     cin>>n;
     float rr[n];
     for(int i=0;i<n;i++){
     cout << " please give the hight of rectungle "<<i+1<<" : " << endl ;
     cin >> a ;
     cout << " please givr the lengh of rectungle "<<i+1<<" : " << endl ;
     cin >> b ;
     rr[i]=rectungle(a,b);
     }
     for(int i=0;i<n;i++){
        cout << "area of rectungle "<<i+1<<" is :" << rr[i]  << endl;
     }



    }else if(option==2){
    float x ;
    cout<<"How many: ";
     int n;
     cin>>n;
     float rr[n];
     for(int i=0;i<n;i++){
    cout << "please give the lengh of squre "<<i+1<<" : " << endl;
    cin >> x ;
     rr[i]=squre (x);
     }
     for(int i=0;i<n;i++){
        cout << "area of sqre "<< i+1<<"is :" << rr[i] << endl;
     }



    }else if(option==3){
    float p ;
     int n ;
     cout<<"How many: ";
     cin >> n ;
     float rr[n];
     for (int i=0;i<n;i++){
      cout << "please give the redious of circle "<<i+1<<" : " << endl ;
      cin >> p ;
      rr[i]=circle(p);
    }
    for(int i=0;i<n;i++){
        cout << " area of circle " <<i+1<<" is :" << rr[i] <<endl ;
    }
    }else if(option==4){
        float c , d ;
        int n ;
        cout << " How maney : " ;
        cin >> n ;
        float rr[n];
        for (int i=0;i<n;i++){
      cout << " please give the hight of traingle "<<i+1<<" : " << endl ;
      cin >> c ;
      cout << " please give the lengh of traingle "<<i+1<<" : " << endl ;
      cin >> d ;
      rr[i]= triangle(c,d);}
     for (int i=0;i<n;i++)
      cout << "the area of traingle "<<i+1<<" is :" << rr[i] << endl ;

    }







      return 0 ;
 }
