#include<stdio.h>
int main()
{
  int a,b,res,choice;
  printf("====BITWISE OPERATION====\n");
  printf("Enter the first number");
  scanf("%d",&a);
  printf("Enter the second number");
  scanf("%d",&b);
  printf("{\n----MENU----\n");
  printf("1.Bitwise AND(&)\n");
  printf("2.Bitwise OR(|)\n");
  printf("3.Bitwise XOR(^)\n");
  printf("4.Bitwise NOT(~)\n");
  printf("5.Left Shift(<<)\n");
  printf("6.Right Shift(>>)\n");
  printf("\n Enter your choice:");
  scanf("%d",choice);
  switch(choice)
  {
    case1:
      res=a&b;
      printf("Bitwise AND result=%d",res);
    case2:
      res=a/b;
      printf("Bitwise OR result=%d",res);
      break;
    case3:
      res=a^b;
      printf("Bitwise XOR result=%d",res);
      break;
    case4:
      res=~a;
      printf("Bitwise NOT result=%d",res);
      break;
    case5:
      res=a<<b;
      printf("LEFT SHIFT result=%d",res);
      break;
    case6:
      res=a>>b;
      printf("RIGHT SHIFT result=%d",res);
      break;
    default:
      printf("Invalid choice");
}

 return 0;
}
      
      
                                

  