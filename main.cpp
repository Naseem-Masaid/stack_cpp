#include<iostream>
    #define max 1000

    using namespace std;

    class sstack{
        int a[max];
        int top;

        public:
            void initialize();
            void push(int val);
            void pop();
            void peep();
            void display();
    };

    void sstack::initialize(){
        cout<<"stack kosong telah di buat ";
        top=-1;
    }

    void sstack::push(int val){
        if(top==max-1){
            cout<<"\nStack sudah penuh...";
            cout<<"\nStack sudah penuh...";
        }
        a[++top]=val;
    }

    void sstack::pop(){
        if(top==-1){
            cout<<"\nStack Berhasil di kosongkan..";
        }
        else{
            cout<<"\nPopnya adalah :"<<a[top];
            top--;
        }
    }

    void sstack::peep(){
        if(top==-1){
            cout<<"\nstack berhasil di kosongkan..";
        }
        else{
            cout<<"\nThe Topmost element is.."<<a[top];
        }
    }

    void sstack::display(){
        if(top==-1){
            cout<<"\nStack kosong..";
        }
        else{
            cout<<"\nStacknya adalah..";
            int x=top;
            while(x!=-1){
                cout<<a[x]<<" ";
                x--;
            }
        }
    }

    int main()
    {
        sstack s;
        int ch,x,val;
        s.initialize();
        cout<<"\nPilihan : \n1) Push \n2) Pop \n3) Peep \n4) Display \n5) Exit :P";
        while(1){
            cout<<"\nmasukan pilihan..";
            cin>>ch;
            if(ch==1){
                cout<<"\nMasukan Data..";
                cin>>val;
                s.push(val);
            }
            else if(ch==2){
               s.pop();
            }
            else if(ch==3){
                s.peep();
            }
            else if(ch==4){
                s.display();
            }
            else break;
        }
        return 0;
    }

