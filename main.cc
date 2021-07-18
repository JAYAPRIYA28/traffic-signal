\\traffic signal control
#include <iostream>
using namespace std;
class traffic
{
public:
    int car;
    int truck;
    int twowheeler;
    int pedestrians;
    void pv_nul(int n, int p);
    void tv( int n,int p );
    void all_0(int n,int p);
};
// Member functions definitions
void traffic::tv (int n,int p)
{
    
    
    if(n<=10 && p==5)
        cout<<"green light for all vehicles and yellow for pedestrian\n";
    else if(p>5)
        cout<<"green light for pedesrians and red light for other vehicles";
    else if(p==5 && n!=0)
        cout<<"green light for pedestrians and yellow for other vehicles";
    else if (p==5 && n==0)
        cout<<"green light for pedestrians and red light for all vehicles";
   
    else if(n>10)

    {
        if(p<5 && p!=0)
            cout<<"green light for all vehicles and red for pedestrian\n";
        else if(p>5)
            cout<<"yellow light for all vehcles and green for pedestrian\n";
       else
       cout<<"green light for all vehicles and yellow light for pedestrians ";
    }
     

}
void traffic::pv_nul(int n,int p)
{
     if(n==0 && p!=0)
        cout<<"\nred light for all vehcles and green for pedestrian\n";
    else if(p==0 && n!=0)
        cout<<"\nred light for pedestrians and green light for all vehicles";
    
         
}

void traffic::all_0 (int n,int p)

{
    
    if(p==0 && n==0)
    
    cout<<"\nGreen lights for both pedestrian and all vehicles or no signal is displayed";
}
int main ()
{
    traffic vehicle;
    int n,c,total_v, pd,cont;

    do {
        cout<<"Enter the no of pedestrians\t :\t";
        cin>>vehicle.pedestrians;
        pd=vehicle.pedestrians;
        cout<<"Enter the no of car\t :\t";
        cin>>vehicle.car;
        cout<<"Enter the no of truck\t :\t";
        cin>>vehicle.truck;
        cout<<"Enter the no of two wheeler\t :\t";
        cin>>vehicle.twowheeler;
        total_v=vehicle.car+vehicle.truck+vehicle.twowheeler;
        cout<<"\n"<<total_v<<"\ttotal vehicles\n";
        cout<<pd<<"\tpedestrians\n";
        vehicle.tv(total_v,pd);
        vehicle.pv_nul(total_v,pd);
        vehicle.all_0(total_v,pd);
        cout<<"\n\n\nDo you want to continue?/n 1. yes 2. no";
        cin>>cont;
        
        
    } while(cont!=2);
    return 0;

}
