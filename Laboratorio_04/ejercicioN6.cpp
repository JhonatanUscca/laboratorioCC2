int main(){
    int A[3][3],sum1=0,sum2=0,sum3=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"numero: ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0){
                sum1=sum1+A[i][j];
            }
            if(i==1){
                sum2=sum2+A[i][j];
            }
            if(i==2){
                sum3=sum3+A[i][j];
            }
        }
    }
    cout<<endl;
    if(sum1>=sum2&&sum1>=sum3){
        cout<<"la suma suma mayor es: "<<sum1;
 
    }
    else if(sum2>=sum1&&sum2>=sum3){
        cout<<"la suma suma mayor es: "<<sum2;
    }
    else{
        cout<<"la suma suma mayor es: "<<sum3;
    }
   
}
