#include<iostream.h>


struct info {
       float mark;
       char name[10];     
};

void input(info a[], int num) {
     for(int i = 1; i <= num; i++) {
         cout << "please input mark: ";
         cin >> a[i].mark;
         cout << "please input name: ";
         cin >> a[i].name;
     }
}

float getAver(info a[], int num) {
       float sum = 0;
       for(int i = 1; i <= num; i++) {
               sum += a[i].mark;
       }
       cout << "average is : " << sum/num << endl;
       return sum/num;
}

void bAver(info a[], int aver, int num) {
     cout << "inferior persons: " << endl;
     for(int i = 1; i <= num; i++) {
             if(a[i].mark < aver) {
                          cout << a[i].name << "  ";
						  cout << a[i].mark << "  ";
             }        
     }
     cout << endl;
}

void top(info a[], int num) {
     int loc = 1;//��߷�ѧ����������λ�� 
     for(int i = 2; i <= num; i++) {
             if(a[loc].mark < a[i].mark) {
                       loc = i;
             }                
     }      
     cout << "��߷��Լ���߷�ѧ��������: " << endl;
     cout <<a[loc].name << ": " << a[loc].mark << endl;
}

int main() {
    info a[31];
    int num;//ѧ����
	cout<<"����ѧ��������"<<endl;
    cin >> num;
    input(a, num);
    float aver = getAver(a, num);//���ƽ���� 
    bAver(a, aver, num);//������Է������ڰ༶ƽ���ֵ�ѧ��������
    top(a, num);//�����߷��Լ���߷�ѧ��������

    return 0;
}