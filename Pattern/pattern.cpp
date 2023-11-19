#include<iostream>
using namespace std;

int
main ()
{

  int num;
  cout << "Enter number ";
  cin >> num;

  int n = num / 2;

  for (int row = 0; row < n; row++)
   {

      for (int i = 0; i < n - row - 1; i++)
     {
       cout << " ";
     }

      for (int star = 0; star < row + 1; star++)
     {
       cout << "* ";
     }

      cout << endl;
   }

  for (int row = 0; row < n; row++)
   {
      for (int space = 0; space < row; space++)
     {
       cout << " ";
     }

      for (int newStar = 0; newStar < n - row; newStar++)
     {
       cout << "* ";
     }
      cout << endl;
   }



cout<<endl;




  // Hollow pyramid
  for (int row = 0; row < num; row = row + 1)
   {
      for (int i = 0; i < num - row - 1; i++)
     {
       cout << " ";
     }
      for (int j = 0; j < row + 1; j++)
     {
       if (j == 0 || j == row + 1 - 1)
          {
           cout << "* ";
          }
       else
          {
           cout << "  ";
          }
     }
      cout << endl;
   }


    for(int i=0; i<num; i++){


         for(int j=0; j<i; j++){
              cout<<" ";
         }
         int totalCol = num-i;
         for(int k=0; k<totalCol; k++){
              if(k==0||k==totalCol-1){
                   cout<<"* ";
              }else{
                   cout<<"  ";
              }
         }
         cout<<endl;
    }

  cout<<"pyramid"<<endl;

  for (int row = 0; row < num; row++)
    {

      for (int star = 0; star < num - row; star++)
  {
    cout << "*" << " ";
  }

      for (int space = 0; space < 2 * row + 1; space++)
  {
    cout << " " << " ";
  }

      for (int star = 0; star < num - row; star++)
  {
    cout << "*" << " ";
  }

      cout << endl;
    }


  for (int outer = 0; outer < num; outer++)
    {

      for (int star = 0; star < outer + 1; star++)
  {
    cout << "*" << " ";
  }

      for (int space = 0; space < (2 * num) - (2 * outer) - 1; space++)
  {
    cout << " " << " ";
  }



      for (int star = 0; star < outer + 1; star++)
  {
    cout << "*" << " ";
  }

      cout << endl;
    }

  // hollow inverted half pyramid
  cout<<endl;
        for(int row=0; row<num; row++){
               for(int col=0; col<num-row; col++){

                   if(row==0||row==num-1){
                         cout<<"*"<<" ";
                   }
                   else if(col==0||col==num-row-1){
                        cout<<"*"<<" ";
                   }
                   else{
                        cout<<" "<<" ";
                   }
               }
               cout<<endl;
          }

         cout<<endl;



          for(int row=0; row<num; row++){

               char character;
               for(int col=0; col<row+1; col++){
                    int number =col+1;

                character= number+'A'-1;
                    cout<< character <<" ";
               }


               for(char ch=character; ch>'A';){
                    ch=ch-1;
                    cout<<ch<<" ";
               }
               cout<<endl;
          }

              for(int row=0; row<num; row++){

        for(int i=0; i<(2*row)+1; i++){

             if(i%2==0){
                  cout<<row+1<<" ";
             }
             else{
                  cout<<"*"<<" ";
             }

        }
        cout<<endl;
   }




  cout<<"pappu kumar";


  return 0;
}