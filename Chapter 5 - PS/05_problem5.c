// 5. What will the following line produce in a C program:

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
    // right to left : 6, 6, 4
    // left to right : 4, 5, 5
}


