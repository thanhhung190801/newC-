#include <iostream>

using namespace std;
void NHAPMANG(int a[], int n)
{
    for (i=0; i<n;i++)
    {
        cout << "A["<<i<<"]= ";
        cin>> a[i];
    }
}
void XUATMANG(int a[] , int n)
{
    for (i = 0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void CHEN ( int a[] , int &n ,int vtchen, int sochen )
{
        for (i = n; i >=vtchen; i--)
        {
            a[i]=a[i-1];
        }
        n ++ ;
}
void XOA(int a[], int &n , int vtxoa)
{
        for (i = vtxoa; i<n; i++)
        {
            a[i]=a[i+1];
        }
        n --;
}
void xoasochan (int a[] , int&n ,int x)
{
        for (i = 0; i<n; i++)
        {
            if (a[i] % 2 == 0)
            {
                xoa (a,n,i);
            }
        }
}





int main()
{
    int n,vitri,so;
    cout << "NHAP N "<<endl;
    int n;
    cout << "NHAP MANG "<<endl;
    NHAPMANG(a,n);
    cout<<"xuat mang"<<endl;
    XUATMANG(a,n);
    cout << "DUOI DAY LA CONG VIEC CHEN"<<endl;
    cout << "nhap vi tri can chen "<<endl;
    cin  >> vitri ;
    cout << "nhap  so can chen "<<endl;
    cin  >>so;
    CHEN(a,n,vitri,so);
    cout<<"DAY SAU KHI CHEN"<<endl;
    XUATMANG(a,n);
    cout<<"nhap vi tri can xoa"<,endl;
    cin>>vitri;
    XOA(a,n,vitri);
    cout<<"DAY SAU KHI XOA LA: "<<endl;
    XUATMANG(a,n);
    xoasochan(a,n);
    cout<<"day sau khi xoa la"<<endl;
    XUATMANG(a,n)



    return 0;
}
