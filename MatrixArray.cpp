#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin thE coder
//Date   : 22-12-2019
//Time   : 11:37 am

int main()
{
    int ip;

    while(true){

    cin>>ip;

    if(ip==0)
    {
        goto level_out;
    }

    if(ip>=0 && ip<=100){
        
        int arr[ip][ip];

    if(ip%2!=0)
    {
        int center_value=ip-3;
        int center_point=(center_value/2)+1;


       int outerloop = (ip-1)/2;
       int innerloop = ip-2;
       
       int start = 0;
       int end = ip-1;
       int number = 1;


       //code for upper top starts

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[i][j]= number;
           }
           end--;
           start++;
           number++;
       }
      // arr[center_point][center_point]=number;

       //code for upper top ends

       //code for left side starts
       
       start = 0;
       end = ip-1;
       number = 1;

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[j][i]= number;
           }
           end--;
           start++;
           number++;
       }

        //code for left side ends


      // code for right side starts
       
        start = 0;
        end = ip-1;
        number = 1;

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[j][end]= number;
           }
           end--;
           start++;
           number++;
       }

       //code for right side ends

       //code for bottom side starts
       
        start = 0;
        end = ip-1;
        number = 1;

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++){

               arr[end][j] = number;
           }
           end--;
           start++;
           number++;
       }

       //code for bottom side ends

        for(int i=0; i<ip; i++)
        {
            for(int j=0; j<ip; j++)
            {
                if(j==ip-1)
                {
                    printf("%3d",arr[i][j]);
                }
                else
                {
                    printf("%3d",arr[i][j]);
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }



//code for even input

  if(ip%2==0)
    {
        int center_value=ip-3;
        int center_point=(center_value/2)+1;


       int outerloop = (ip-1)/2;
     

       int start = 0;
       int end = ip-1;
       int number = 1;


       //code for upper top starts

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[i][j]= number;
           }
           end--;
           start++;
           number++;
       }
       arr[center_point][center_point]=number;

       //code for upper top ends

       //code for left side starts
        start = 0;
        end = ip-1;
        number = 1;


       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[j][i]= number;
           }
           end--;
           start++;
           number++;
       }

        //code for left side ends


      // code for right side starts
        start = 0;
        end = ip-1;
        number = 1;


       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++)
           {
               arr[j][end]= number;
           }
           end--;
           start++;
           number++;
       }

       //code for right side ends

      //code for bottom side starts
        start = 0;
        end = ip-1;
        number = 1;

       for(int i=0; i<=outerloop; i++)
       {
           for(int j=start; j<=end; j++){

               arr[end][j] = number;
           }
           end--;
           start++;
           number++;
       }

       //code for bottom side ends

        for(int i=0; i<ip; i++)
        {
            for(int j=0; j<ip; j++)
            {
                if(j==ip-1)
                {
                    printf("%3d",arr[i][j]);
                }
                else
                {
                    printf("%3d",arr[i][j]);
                    cout<<" ";
                }
               
            }
            cout<<endl;
        }

    }

    }


     cout<<endl;

 }
    level_out:
    return 0;
}