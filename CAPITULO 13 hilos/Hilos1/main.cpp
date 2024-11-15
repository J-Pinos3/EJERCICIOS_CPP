#include <iostream>
#include <thread>
#include <string>

//https://www.bogotobogo.com/cplusplus/C11/1_C11_creating_thread.php
//PARTE1 CREATING THREADS - PARAMETERS TO A THREAD

void function1(){
    for(int i = 0; i < 200; i++){
        std::cout << " a";
    }
}

void function2(){
    for(int i = 0; i < 200; i++){
        std::cout << " b";
    }
}

void function3(){
    for(int i = 0; i < 200; i++){
        std::cout << " c";
    }
}

void function4(){
    std::cout << "thread function\n";
}


void function5(std::string msg){
    std::cout << "thread function\n";
    std::cout << "message: " << msg << "\n";
}

void function6(std::string &msg){
    std::cout << "thread function with a reference\n";
    std::cout << "message: " << msg << "\n";
    msg = "Kevin Moore";
    std::cout << "message updated: " << msg << "\n";
}

class MyFunctor{

public:
    void operator() (){
        std::cout << "functor\n";
    }

};

/*
int main(){

    std::thread t([](){
        std::cout << "labmda function\n";
    });
    std::cout << "hilo main\n";
    t.join();
    return 0;
}
*/

/*
int main(){

    std::string s{"Katy Perry"};
    std::string s2 = "John Bush";
    std::thread t(function5, s);
    std::thread t2(function6, std::ref(s2));
    std::cout <<"main's message " << s << "\n";
    std::cout <<"main's second message " << s2 << "\n";

    t.join();
    t2.join();


    return 0;
}
*/


/*
int main(){
    //FORMA1
    //MyFunctor functor;
    //std::thread t(functor);
    //std::cout << "main thread\n";con el join, primero se imprimer mai thread y luego functor
    //t.join();

    //t.join(); cpn el join, primero se ejecuta functor y luego se imprime main thread
    //std::cout << "main thread\n";

    std::thread t( (MyFunctor()) );
    t.join();
    std::cout << "main thread\n";

    return 0;
}
*/


/*
int main(){

    std::thread job(&function4);

    std::cout << "main thread\n";
    //job.join();
    job.detach();//it becomes an indepentent thread 'daemon'
    i can no longer make it go back to main thread

    return 0;
}
*/



/*
int main(){


    std::thread job1(function1);

    //job1.join();//el for loop se ejecuta al final
    for(int i = 1; i <= 100;i++){
        std::cout << i ;
    }
    //job1.join(); se mezcla todo

    return 0;
}
*/



int main()
{
    std::thread job1(function1);

    //si se comenta el join, se imprimen antes de todo
    //std::cout << "antes del join\n";
    //job1.join();
    //std::cout << "Luego del join\n";

    //con el join , primero se imprime lo del thread
    //job1.join();
    std::cout << "antes del join\n";
    //con el join , primero se imprime el antes del join
    job1.join();
    //al último se imprime el luego del join
    std::cout << "Luego del join\n";

    return 0;
}







/*
int main()
{
    std::thread job1(function1);
    std::thread job2(function2);
    std::thread job3(function3);

    job1.join();
    job2.join();
    job3.join();

    return 0;
}
*/
