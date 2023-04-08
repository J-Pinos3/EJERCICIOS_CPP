/*
LINKS
https://www.youtube.com/watch?v=MwwbgqG6bSk
https://www.guru99.com/cpp-dynamic-array.html#:~:text=The%20length%20of%20a%20dynamic,then%20erasing%20the%20old%20array.
https://www.youtube.com/watch?v=yGo5KA6m2OY
https://www.google.com/search?q=c%2B%2B+free%28%29%3A+double+free+detected+in+tcache+2&sxsrf=ALiCzsZk79j_1kvasW0YjSPimNaAykbCww%3A1672584338319&source=hp&ei=kpyxY6uBEbebwbkPxIekyAg&iflsig=AJiK0e8AAAAAY7GqomhF09AWSPFUyho199y4F-KoM5r5&ved=0ahUKEwirktyazqb8AhW3TTABHcQDCYkQ4dUDCAk&uact=5&oq=c%2B%2B+free%28%29%3A+double+free+detected+in+tcache+2&gs_lcp=Cgdnd3Mtd2l6EAMyCAgAEIAEEMsBOgQIIxAnOgQIABBDOg4ILhCABBCxAxDHARDRAzoICAAQgAQQsQM6CwguEIAEELEDEIMBOgoIABCABBCHAhAUOgUIABCABDoHCCEQoAEQClAAWI9hYOljaAFwAHgAgAGtAogBrQiSAQcwLjQuMS4xmAEAoAEBoAEC&sclient=gws-wiz


*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    cout <<"Using a dynamic array."<<endl<<endl;

    int size = 0, cnt = 0, step = 10, i;
    float x, *pARR = NULL;



    cout <<"Enter some numbers!"<<endl
         <<"End with q or another character"<<endl;


    while(cin >> x){

        if(cnt >= size){//array too small?, lets enlarge it
            cout <<endl<<"------------------------------------------------------------------"<<endl;
            float *p = new float[size+step];
            for(i = 0; i < size; i++){
                p[i] = pARR[i];
            }
            delete[] pARR;
            pARR = p;
            size += step;
            //delete[] p; como pARR y p tienen la misma memoria, al liberar a pARR, también se libera a p
        }
      pARR[cnt++] = x; //SUFIJO
      //pARR[++cnt] = x; ERROR PREFIJO
    }


    cout <<endl<<"*-*"<<endl;
    if(cnt == 0){
      cout <<"NO valid input!"<<endl;
    }else{

        float sum = 0.0;
        cout <<"your input:"<<endl;
        for(i = 0; i < cnt; i++){
            cout <<i<<":    "<<pARR[i]<<endl;
            sum += pARR[i];
        }
      cout <<endl<<"The average: " << sum/cnt;
    }


    delete[] pARR;

  return 0;
}
