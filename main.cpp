#include <bits/stdc++.h>

using namespace std;
typedef  struct Node{
int data;
struct Node *next;

}Node,*list1;

list1 L;
        void init(){//��ʼ��
        L=new Node;
        L->next=NULL;

        }
        //ͷ�巨
        void  tochafa(int n){
             list1 p;
        for(int i=0;i<n;i++){
                p=new Node;
            cin>>p->data;
            p->next=L->next;
            L->next=p;

        }

        }
        //���
        void qk(){
        if(L==NULL) return;
        list1 p;
        p=L;
        p=p->next;

        while(p){
           list1 t=p->next;
           free(p);
           p=t;

        }
        L->next=NULL;

        }
        //β�巨
        void wcf(int n){
        list1 r;
         list1 p;
        r=L;
        for(int i=0;i<n;i++){
            p=new Node;
            cin>>p->data;
            p->next=NULL;
            r->next=p;
            r=p;

        }



        }
        void  show(){
             list1 p;
        p=L;
        p=p->next;
        while(p){
            cout<<p->data<<" ";
            p=p->next;

        }

        }
            //�����ɾ��

            void   listdelete(int i){
            list1 p;
            p=L;
            int j=0;
            while((p->next)&&j<i-1){
                        p=p->next;
                        j++;

            }
          if(!(p->next)||j>i-1) return;
             list1 q=p->next;
          p->next=q->next;
          free(q);
            }
            //����Ĳ���
            void listinsert(int i,int e){
            list1 p;
            p=L;
            int j=0;
            while(p&&j<i-1){
                p=p->next;
                j++;
            }
            if(!p||j>i-1)  return;
            list1 s;
        s=new Node;

        s->data=e;
        s->next=p->next;
        p->next=s;


            }
            int chaz(int e){
                list1 p;
        p=L;
        p=p->next;
        int n=1;
        while(p){
            if(p->data==e) return n;
            n++;
            p=p->next;

        }
            return -1;
            }
int main()
{
    init();
    cout<<"��ѡ������ѡ��"<<endl;
    cout<<"1.��������"<<endl;
    cout<<"2.��������"<<endl;
    cout<<"3.ɾ���ڼ�������"<<endl;
    cout<<"4.��������"<<endl;
    cout<<"5.���"<<endl;
    cout<<"6.����"<<endl;
    cout<<"7.�������"<<endl;
    int a,g,m;
    while(1){
        cin>>a;
        if(a==1){
            cout<<"����㼸����"<<endl;
            cin>>g;
            cout<<"��������"<<endl;
            wcf(g);
          cout<<"����ѡ��ѡ��"<<endl;
        }
        if(a==2){
            cout<<"����㼸����"<<endl;
            cin>>g;
            cout<<"��������"<<endl;
            tochafa(g);
            cout<<"����ѡ��ѡ��"<<endl;
        }
        if(a==3){
            cout<<"����ɾ���ĵڼ����������"<<endl;
            cin>>g;
            listdelete(g);
            cout<<"����ѡ��ѡ��"<<endl;
        }
        if(a==4){
            cout<<"����������ţ�����"<<endl;
            cin>>g>>m;
            listinsert(g,m);
            cout<<"����ѡ��ѡ��"<<endl;
        }
        if(a==5){
            show();
            break;
        }
        if(a==6){
            cout<<"������Ҫ���ҵ�����"<<endl;
            cin>>g;
            cout<<chaz(g)<<endl;

        }
        if(a==7){
            qk();
        }
    }
    //tochafa(3);
   // wcf(3);
   //listdelete(1);
  // listinsert(1,3);
   // show();



    return 0;
}
