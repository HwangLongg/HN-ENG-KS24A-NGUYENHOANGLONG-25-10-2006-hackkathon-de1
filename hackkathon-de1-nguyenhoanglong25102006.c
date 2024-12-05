#include <stdio.h>
int main  (){
    int n , m ;
    int arr[m];
    printf ("1.Nhập số phần tử và giá trị cho mảng");
    printf ("2.In ra giá trị các phần tử trong mảng theo dạng");
    printf ("3.Đếm số lượng các phần tử chẵn lẻ trong mảng");
    printf ("4.Tìm giá trị lớn thứ hai trong mảng");
    printf ("5.Thêm một phần tử vào đầu mảng, phần tử mới thêm vào mảng phải do người dùng nhập vào");
    printf ("6.Xóa phần tử tại một vị trí cụ thể (người dùng nhập vị trí)");
    printf ("7.Sắp xếp mảng theo thứ tự giảm dần (Insertion sort)");
    printf ("8.Cho người dùng nhập vào một phần tử, tìm kiếm xem phần tử đó có tồn tại trong mảng hay không (Binary search)");
    printf ("9.In ra toàn bộ số nguyên tố trong mảng đã được bình phương.");
    printf ("10.Sắp xếp mảng theo thứ tự giảm dần");
    while (1){
        printf ("Moi chon menu ");
        scanf ("%d",&n);
        if (n > 0 && n < 11) {
            switch (n){
            case 1 :
            printf ("moi nhap so phan tu cua mang ");
            scanf ("%d",m);
            printf ("moi nhap tung phan tu cua mang");
            for ( int i = 0 ; i < m ; i++){
                scanf ("%d",&arr[m]);
            }
for (int i = 0 ; i < m ; i++){
                if (arr[i] >= 0){
                printf ("%d",arr[i]);
                }
            }            break ;
            case 2 :
            for ( int i = 0 ; i < m ; i++){
                printf ("phan tu arr[%d] = %d \n",i, arr[i]);
            }
            break ;
            case 3 :
            int max ;
            int min = arr[0];
            for (int i = 0 ; i < m ; i++){
                if (max < arr[i]){
                    max = arr[i];
                }}
                printf (" phan tu lon nhat la %d ",max);
                for (int d = 0 ; d < m ; d++ ){
                    if ( min > arr[i] ){
                        min = arr[i];
                    }
                }printf ("phan tu nho nhat la %d ",min);
            break ;
            case 4 :
            int sum ;
            for (int i = 0 ; i < m ; i++ ){
                sum += arr[i] ;
            }
            printf ("tong cua tat ca cac phan tu la %d ",sum);
            break ;
            case 5 :
            int c ;
            printf ("moi nhap phan tu can them vao ");
            scanf ("%d",&c);
            arr[m] = c ;
                for (int i = 0 ; i < m ; i++){
                if (arr[i] >= 0){
                printf ("%d",arr[i]);
                }
            }            break ;
            case 6 :
            int index ;
            printf ("moi nguoi dung nhap vao vi tri can xoa ");
            scanf ("%d",&index);
            for (int i = index-1  ; i < m ; i++){
                arr[i] = arr[i+1];

            }
                for (int i = 0 ; i < m ; i++){
                if (arr[i] >= 0){
                printf ("%d",arr[i]);
                }
            }            break ;
            case 7 :
                int k ;
            int arrSize = sizeof(arr)/sizeof(int);
            for ( int i = 0 ; i < arrSize ; i++){
                for ( int j  = 0 ; j < arrSize-1-i ; j++){
                    if (arr[j] < arr[j+1] ){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp ;
                    }
                }
            }
            for (int k = 0; k < arrSize ; k++){
                printf ("%d\n",arr[k]);
            }
            break ;
            case 8 ;
            int o ;
           
            printf ("moi nhap vao phan tu can tim ");
            scanf ("%d",&o);
            for (int i = 0 ; i < m ; i++){
                if ( o == arr[i ]){
                    printf ("phan tu co trong mang va o vi tri %d",i);
                    break ;
                }
                printf ("phan tu khong co trong mang ")
            }
            break ;
            case 9 :
            for (int i = 0 ; i < m ; i++){
                if (arr[i] >= 0){
                printf ("%d",arr[i]);
                }
            }
            break ;
        }
            


        }
    }
       return 0 ;
}
