#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

ifstream fileIn("poligon.in");
ofstream fileOut("poligon.out");

vector <int> vec;

int T, p;

struct shape{

    struct points{
        int x_coordinate;
        int y_coordinate;
        int number; 
    
    }a[100];
    
}t[6];

struct Delta{

    int point1;
    int point2;
    float distance;


}deltaDist[100];

int arr[10];

void Out(int point, int i);

void In(){
    fileIn>>p;
    int point;
    fileIn>>T;
    for(int i=0;i<T;i++){
        fileIn>>point;
        for(int j=0;j<point;j++){
            fileIn>>t[i].a[j].x_coordinate>>t[i].a[j].y_coordinate;
            t[i].a[j].number=j+1;
        }
        arr[i]=point;
    } 
}


float Euc_lenght(int point1, int point2, int shape_num ){
    return (sqrt(pow(t[shape_num].a[point2-1].x_coordinate - t[shape_num].a[point1-1].x_coordinate, 2)
                 + pow(t[shape_num].a[point2-1].y_coordinate - t[shape_num].a[point1-1].y_coordinate, 2)));

}

void Out(int point, int i){
        for(int j=0;j<point;j++){
            fileOut<<"("<<t[i].a[j].x_coordinate<<','<<t[i].a[j].y_coordinate<<")";
        }
        fileOut<<endl;
        fileOut<<endl;
}


void fillVec(int shape){

    for(int i=0;i<arr[shape];i++){
        vec.push_back(i+1);
    }
    vec.shrink_to_fit();

}

int deltTotal=0;
void countDistance(int shape){

    for(int i=0;i < vec.size()-1;i++){
        float x = Euc_lenght(vec[i], vec[i+1], shape);

        deltaDist[deltTotal].point1 = vec[i];
        deltaDist[deltTotal].point2 = vec[i+1];
        deltaDist[deltTotal].distance = x;
        deltTotal++;
    }

}

void countNewDistance(int shape, int point1, int point2){
    float x = Euc_lenght(point1, point2, shape);
    deltaDist[deltTotal].point1 = vec[point1];
    deltaDist[deltTotal].point2 = vec[point2];
    deltaDist[deltTotal].distance = x;
    deltTotal++;
}


int main(){
    In();
    //fileOut<<Euc_lenght(1,2,1);

    fillVec(1);
    for(auto i : vec)
        fileOut<<i<<" ";
    fileOut<<endl;
    countDistance(1);

    for(int i=0;i<deltTotal;i++){
        fileOut<<deltaDist[i].point1<<" "
                <<deltaDist[i].point2<<" "<< deltaDist[i].distance;
        fileOut<<endl;
    }



}