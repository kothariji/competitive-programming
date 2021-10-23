#include<iostream>
using namespace std;

struct sparse
{
    int row;
    int col;
    int val;
};

int main()
{
    int choice;
    char ch = 'y';
    while(ch=='y')
    {
        cout<<"MENU\n\n1. Transpose of a Sparse Matrix\n2. Addition of 2 Sparse Matrices\n3. Multiplication of 2 Sparse Matrices\n\n";
        cout<<"Enter your choice -\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"\nTRANSPOSE OF A SPARSE MATRIX\n\n";
                int m, n, o, i, j, k, t, t1;
                cout<<"Enter the order (m x n) of the matrix, A -\n";
                cin>>m>>n;
                cout<<"Enter the no. of non-zero elements -\n";
                cin>>o;
                struct sparse sm[o], temp;
                cout<<"Now enter those values by specifying index (row,col,val) -\n";
                for(i=0; i<o; i++)
                    cin>>sm[i].row>>sm[i].col>>sm[i].val;

                //sorting the triplets row-wise
                for(i=0; i<o; i++)
                {
                    for(j=0; j<(o-1-i); j++)
                    {
                        if(sm[j].row > sm[j+1].row)
                        {
                            temp = sm[j];
                            sm[j] = sm[j+1];
                            sm[j+1] = temp;
                        }
                    }
                }
                /*  cout<<"Row-wise sorted triplets \n";
                for(i=0; i<o; i++)
                    cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                cout<<endl;  */

                //sorting the triplets col-wise
                for(i=0; i<o; i++)
                {
                    for(j=0; j<(o-1-i); j++)
                    {
                        if(sm[j].row == sm[j+1].row)
                        {
                            if(sm[j].col > sm[j+1].col)
                            {
                                temp = sm[j];
                                sm[j] = sm[j+1];
                                sm[j+1] = temp;
                            }
                        }
                    }
                }
                /*  cout<<"Col-wise sorted triplets \n";
                for(i=0; i<o; i++)
                    cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                cout<<endl;  */

                cout<<"\nThe Sparse Matrix, A -\n\n";
                k=0;
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if((k<o) && (i==sm[k].row) && (j==sm[k].col))
                        {
                            cout<<sm[k].val<<"   ";
                            k++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;

                //transpose
                t1=m;
                m=n;
                n=t1;

                for(i=0; i<o; i++)
                {
                    t = sm[i].row;
                    sm[i].row = sm[i].col;
                    sm[i].col = t;
                }
                //sorting the triplets row-wise
                for(i=0; i<o; i++)
                {
                    for(j=0; j<(o-1-i); j++)
                    {
                        if(sm[j].row > sm[j+1].row)
                        {
                            temp = sm[j];
                            sm[j] = sm[j+1];
                            sm[j+1] = temp;
                        }
                    }
                }
                /*  cout<<"Row-wise sorted triplets \n";
                for(i=0; i<o; i++)
                    cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                cout<<endl;  */

                //sorting the triplets col-wise
                for(i=0; i<o; i++)
                {
                    for(j=0; j<(o-1-i); j++)
                    {
                        if(sm[j].row == sm[j+1].row)
                        {
                            if(sm[j].col > sm[j+1].col)
                            {
                                temp = sm[j];
                                sm[j] = sm[j+1];
                                sm[j+1] = temp;
                            }
                        }
                    }
                }
                /*  cout<<"Col-wise sorted triplets \n";
                for(i=0; i<o; i++)
                    cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                cout<<endl;  */

                cout<<"Its Transpose, A' -\n\n";
                k=0;
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if((k<o) && (i==sm[k].row) && (j==sm[k].col))
                        {
                            cout<<sm[k].val<<"   ";
                            k++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl; 
                break;

            }

            case 2:
            {
                cout<<"\nADDITION OF 2 SPARSE MATRICES\n\n";
                int m1, n1, m2, n2, i, j, o1, o2, k1, k2, o3, k3;
                cout<<"Enter the order (m x n) of the 1st matrix, A -\n";
                cin>>m1>>n1;
                cout<<"Enter the no. of non-zero elements in A -\n";
                cin>>o1;
                struct sparse sm1[o1], temp;
                cout<<"Now enter those values by specifying index (row,col,val) -\n";
                for(i=0; i<o1; i++)
                    cin>>sm1[i].row>>sm1[i].col>>sm1[i].val;
                cout<<endl;
                cout<<"Enter the order (m x n) of the 2nd matrix, B -\n";
                cin>>m2>>n2;
                cout<<"Enter the no. of non-zero elements in B -\n";
                cin>>o2;
                struct sparse sm2[o2];
                cout<<"Now enter those values by specifying index (row,col,val) -\n";
                for(j=0; j<o2; j++)
                    cin>>sm2[j].row>>sm2[j].col>>sm2[j].val;
                cout<<endl;

                //sorting A
                    //sorting the triplets row-wise
                    for(i=0; i<o1; i++)
                    {
                        for(j=0; j<(o1-1-i); j++)
                        {
                            if(sm1[j].row > sm1[j+1].row)
                            {
                                temp = sm1[j];
                                sm1[j] = sm1[j+1];
                                sm1[j+1] = temp;
                            }
                        }
                    }
                    /*  cout<<"Row-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                    //sorting the triplets col-wise
                    for(i=0; i<o1; i++)
                    {
                        for(j=0; j<(o1-1-i); j++)
                        {
                            if(sm1[j].row == sm1[j+1].row)
                            {
                                if(sm1[j].col > sm1[j+1].col)
                                {
                                    temp = sm1[j];
                                    sm1[j] = sm1[j+1];
                                    sm1[j+1] = temp;
                                }
                            }
                        }
                    }
                    /*  cout<<"Col-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                //sorting B
                    //sorting the triplets row-wise
                    for(i=0; i<o2; i++)
                    {
                        for(j=0; j<(o2-1-i); j++)
                        {
                            if(sm2[j].row > sm2[j+1].row)
                            {
                                temp = sm2[j];
                                sm2[j] = sm2[j+1];
                                sm2[j+1] = temp;
                            }
                        }
                    }
                    /*  cout<<"Row-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                    //sorting the triplets col-wise
                    for(i=0; i<o2; i++)
                    {
                        for(j=0; j<(o2-1-i); j++)
                        {
                            if(sm2[j].row == sm2[j+1].row)
                            {
                                if(sm2[j].col > sm2[j+1].col)
                                {
                                    temp = sm2[j];
                                    sm2[j] = sm2[j+1];
                                    sm2[j+1] = temp;
                                }
                            }
                        }
                    }
                    /*  cout<<"Col-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                //displaying A
                cout<<"\nMatrix A\n\n";
                k1=0;
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        if((k1<o1) && (i==sm1[k1].row) && (j==sm1[k1].col))
                        {
                            cout<<sm1[k1].val<<"   ";
                            k1++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;

                //displaying B
                cout<<"\nMatrix B\n\n";
                k2=0;
                for(i=0; i<m2; i++)
                {
                    for(j=0; j<n2; j++)
                    {
                        if((k2<o2) && (i==sm2[k2].row) && (j==sm2[k2].col))
                        {
                            cout<<sm2[k2].val<<"   ";
                            k2++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;

                if((m1==m2) && (n1==n2))
                {
                    o3 = o1 + o2;
                    struct sparse sm3[o3];
                    i=0;
                    j=0;
                    k3=0;

                    //triplets of C

                    while(i<=(o1-1) || j<=(o2 - 1))
                    {
                        if((i>=o1) && (j<=(o2-1)))
                        {
                            sm3[k3].row = sm2[j].row;
                            sm3[k3].col = sm2[j].col;
                            sm3[k3].val = sm2[j].val;
                            k3++;
                            j++;
                        }
                        else if((j>=o2) && (i<=(o1-1)))
                        {
                            sm3[k3].row = sm1[i].row;
                            sm3[k3].col = sm1[i].col;
                            sm3[k3].val = sm1[i].val;
                            k3++;
                            i++;
                        }
                        else
                        {
                            if(sm1[i].row == sm2[j].row)
                            {
                                if(sm1[i].col == sm2[j].col)
                                {
                                    sm3[k3].row = sm1[i].row;
                                    sm3[k3].col = sm1[i].col;
                                    sm3[k3].val = sm1[i].val + sm2[j].val;
                                    k3++;
                                    i++;
                                    j++;
                                }
                                else if(sm1[i].col < sm2[j].col)
                                {
                                    sm3[k3].row = sm1[i].row;
                                    sm3[k3].col = sm1[i].col;
                                    sm3[k3].val = sm1[i].val;
                                    k3++;
                                    i++;
                                }
                                else
                                {
                                    sm3[k3].row = sm2[j].row;
                                    sm3[k3].col = sm2[j].col;
                                    sm3[k3].val = sm2[j].val;
                                    k3++;
                                    j++;
                                }
                            }

                            else if(sm1[i].row < sm2[j].row)
                            {
                                sm3[k3].row = sm1[i].row;
                                sm3[k3].col = sm1[i].col;
                                sm3[k3].val = sm1[i].val;
                                k3++;
                                i++;
                            }

                            else
                            {
                                sm3[k3].row = sm2[j].row;
                                sm3[k3].col = sm2[j].col;
                                sm3[k3].val = sm2[j].val;
                                k3++;
                                j++;
                            }
                        }
                    }
                    o3 = k3;
                    

                    //displaying C
                    cout<<"\nSum Matrix, C = A + B\n\n";
                    k3=0;
                    for(i=0; i<m1; i++)
                    {
                        for(j=0; j<n1; j++)
                        {
                            if((k3<o3) && (i==sm3[k3].row) && (j==sm3[k3].col))
                            {
                                cout<<sm3[k3].val<<"   ";
                                k3++;
                            }
                            else
                            {
                                cout<<"0"<<"   ";
                            }
                        }
                        cout<<endl;
                    }
                    cout<<endl;
                    }

                else
                    cout<<"The orders of A and B are not compatible for addition.\n\n";
                break;
            }

            case 3:
            {
                cout<<"\nMULTIPLICATION OF 2 SPARSE MATRICES\n\n";
                int m1, n1, m2, n2, i, j, o1, o2, k1, k2, o3, k3, m3, n3, ii;
                cout<<"Enter the order (m x n) of the 1st matrix, A -\n";
                cin>>m1>>n1;
                cout<<"Enter the no. of non-zero elements in A -\n";
                cin>>o1;
                struct sparse sm1[o1], temp;
                cout<<"Now enter those values by specifying index (row,col,val) -\n";
                for(i=0; i<o1; i++)
                    cin>>sm1[i].row>>sm1[i].col>>sm1[i].val;
                cout<<endl;
                cout<<"Enter the order (m x n) of the 2nd matrix, B -\n";
                cin>>m2>>n2;
                cout<<"Enter the no. of non-zero elements in B -\n";
                cin>>o2;
                struct sparse sm2[o2];
                cout<<"Now enter those values by specifying index (row,col,val) -\n";
                for(j=0; j<o2; j++)
                    cin>>sm2[j].row>>sm2[j].col>>sm2[j].val;
                cout<<endl;

                //sorting A
                    //sorting the triplets row-wise
                    for(i=0; i<o1; i++)
                    {
                        for(j=0; j<(o1-1-i); j++)
                        {
                            if(sm1[j].row > sm1[j+1].row)
                            {
                                temp = sm1[j];
                                sm1[j] = sm1[j+1];
                                sm1[j+1] = temp;
                            }
                        }
                    }
                    /*  cout<<"Row-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                    //sorting the triplets col-wise
                    for(i=0; i<o1; i++)
                    {
                        for(j=0; j<(o1-1-i); j++)
                        {
                            if(sm1[j].row == sm1[j+1].row)
                            {
                                if(sm1[j].col > sm1[j+1].col)
                                {
                                    temp = sm1[j];
                                    sm1[j] = sm1[j+1];
                                    sm1[j+1] = temp;
                                }
                            }
                        }
                    }
                    /*  cout<<"Col-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                //sorting B
                    //sorting the triplets row-wise
                    for(i=0; i<o2; i++)
                    {
                        for(j=0; j<(o2-1-i); j++)
                        {
                            if(sm2[j].row > sm2[j+1].row)
                            {
                                temp = sm2[j];
                                sm2[j] = sm2[j+1];
                                sm2[j+1] = temp;
                            }
                        }
                    }
                    /*  cout<<"Row-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                    //sorting the triplets col-wise
                    for(i=0; i<o2; i++)
                    {
                        for(j=0; j<(o2-1-i); j++)
                        {
                            if(sm2[j].row == sm2[j+1].row)
                            {
                                if(sm2[j].col > sm2[j+1].col)
                                {
                                    temp = sm2[j];
                                    sm2[j] = sm2[j+1];
                                    sm2[j+1] = temp;
                                }
                            }
                        }
                    }
                    /*  cout<<"Col-wise sorted triplets \n";
                    for(i=0; i<o; i++)
                        cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                    cout<<endl;  */

                //displaying A
                cout<<"\nMatrix A\n\n";
                k1=0;
                for(i=0; i<m1; i++)
                {
                    for(j=0; j<n1; j++)
                    {
                        if((k1<o1) && (i==sm1[k1].row) && (j==sm1[k1].col))
                        {
                            cout<<sm1[k1].val<<"   ";
                            k1++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;

                //displaying B
                cout<<"\nMatrix B\n\n";
                k2=0;
                for(i=0; i<m2; i++)
                {
                    for(j=0; j<n2; j++)
                    {
                        if((k2<o2) && (i==sm2[k2].row) && (j==sm2[k2].col))
                        {
                            cout<<sm2[k2].val<<"   ";
                            k2++;
                        }
                        else
                        {
                            cout<<"0"<<"   ";
                        }
                    }
                    cout<<endl;
                }
                cout<<endl;

                if(n1==m2)
                {
                    m3 = m1;
                    n3 = n2;
                    o3 = m1*n2;
                    struct sparse sm3[o3];
                    for(i=0; i<o3; i++)
                        sm3[i].val = 0;
                    
                    k3=0;

                    for(j=0; j<o2; j++)
                    {
                        for(i=0; i<o1; i++)
                        {
                            if(sm1[i].col == sm2[j].row)
                            {
                                sm3[k3].row = sm1[i].row;
                                sm3[k3].col = sm2[j].col;
                                sm3[k3].val = sm3[k3].val + sm1[i].val*sm2[j].val;
                                k3++;
                            }
                        }
                    }
                    o3=k3;

                    //sorting C
                        //sorting the triplets row-wise
                        for(i=0; i<o3; i++)
                        {
                            for(j=0; j<(o3-1-i); j++)
                            {
                                if(sm3[j].row > sm3[j+1].row)
                                {
                                    temp = sm3[j];
                                    sm3[j] = sm3[j+1];
                                    sm3[j+1] = temp;
                                }
                            }
                        }
                        /*  cout<<"Row-wise sorted triplets \n";
                        for(i=0; i<o; i++)
                            cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                        cout<<endl;  */

                        //sorting the triplets col-wise
                        for(i=0; i<o3; i++)
                        {
                            for(j=0; j<(o3-1-i); j++)
                            {
                                if(sm3[j].row == sm3[j+1].row)
                                {
                                    if(sm3[j].col > sm3[j+1].col)
                                    {
                                        temp = sm3[j];
                                        sm3[j] = sm3[j+1];
                                        sm3[j+1] = temp;
                                    }
                                }
                            }
                        }
                        /*  cout<<"Col-wise sorted triplets \n";
                        for(i=0; i<o; i++)
                            cout<<sm[i].row<<" "<<sm[i].col<<" "<<sm[i].val<<endl;
                        cout<<endl;  */
                    //displaying C
                    cout<<"\nProduct Matrix, C = A*B\n\n";
                    k3=0;
                    for(i=0; i<m3; i++)
                    {
                        for(j=0; j<n3; j++)
                        {
                            if((k3<o3) && (i==sm3[k3].row) && (j==sm3[k3].col))
                            {
                                cout<<sm3[k3].val<<"   ";
                                k3++;
                            }
                            else
                            {
                                cout<<"0"<<"   ";
                            }
                        }
                        cout<<endl;
                    }
                    cout<<endl;
                    

                }
                
                else
                    cout<<"The orders of A and B are not compatible for multiplication.\n\n"; 
                break;
            }

            default:
                break; 
        }
        cout<<"Do you want to continue? (y/n)\n";
        cin>>ch;
        cout<<endl;
    }
    return 0;

}