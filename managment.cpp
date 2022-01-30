#include<iostream.h>
using namespace std;
int main()
{
    int quant;
    int choice;
    int qrooms=0,qpasta=0,qramen=0,qshakes=0,qburger=0, qchicken=0,  qroti=0 , qdal=0;
    
    int srooms=0,spasta=0,sramen=0,sshakes=0,sburger=0, schicken=0, sroti=0 , sdal=0;

    int total_rooms=0, total_pasta=0, total_ramen=0, total_shakes=0, total_burger=0,  total_chickent=0, total_roti=0 , total_dal=0;


    cout<<"\n\t quantity of item we have ";
    cout<<"\n rooms available";
    cin>>q rooms;
    cout<<"\n quantity of pasta ";
    cin>>q pasta;
    cout<<"\n  quantity of ramen";
    cin>>q ramen;
    cout<<"\n  quantity of shake";
    cin>>q shake;
    cout<<"\n  quantity of burger";
    cin>>q burger;
    cout<<"\n  quantity of chicken";
    cin>>q chicken;
    cout<<"\n  quantity of roti";
    cin>>q roti;
    cout<<"\n  quantity of dal";
    cin>>q dal;
     
    cout<<"\n\t\t\t please select from the menu options";
    cout<<"n\n1) rooms";
    cout<<"\n2) pasta" ;
    cout<<"\n3) ramen";
    cout<<"\n4) shake";
    cout<<"\n5) burger";
    cout<<"\n6) chicken";
    cout<<"\n7) roti";
    cout<<"\n8) dal";
    cout<<"\n9) information regarding sales and collection";
    cout<<"\n10) exit";
    cout<<"\n\n please enter your choice!";
    cin>>choice
    switch (choice)
    {
        case 1:
        cout<<"\n\n Enter the number of room you want:";
        cin>>quant;
        if (qroom-sroom >= quant)
        {
            sroom=sroom+quant;
            total_room+quant*1200);
            cout<<"\n\n\t\t"<<quant<<"room have been alloted to you!";

        }
        else
        cout<<"\n\t only"<<qrooms-srooms<<"roomremaning in hotel";
        break;
        
        case 2:
        cout<<"\n\n Enter the number of pasta you want:";
        cin>>quant;
        if (qpasta-spasta >= quant)
        {
            spasta=spasta+quant;
            total_pasta+quant*120);
            cout<<"\n\n\t\t"<<quant<<"pasta is ordered !";

        }
        else
        cout<<"\n\t only"<<qpasta-spasta<<"pasta remaning in hotel";
        break;
        
        case 3:
        cout<<"\n\n Enter the number of ramen you want:";
        cin>>quant;
        if (qramen-sramen >= quant)
        {
            sramen=sramen+quant;
            total_ramen+quant*120);
            cout<<"\n\n\t\t"<<quant<<"ramen is ordered !";

        }
        else
        cout<<"\n\t only"<<qramen-sramen<<"ramen remaning in hotel";
        break;
        
        case 4:
        cout<<"\n\n Enter the number of shake you want:";
        cin>>quant;
        if (qshake-sshake >= quant)
        {
            sshake=sshake+quant;
            total_shake+quant*120);
            cout<<"\n\n\t\t"<<quant<<"shake is ordered !";

        }
        else
        cout<<"\n\t only"<<qshake-sshake<<"shake remaning in hotel";
        break;

        case 5:
        cout<<"\n\n Enter the number of burger you want:";
        cin>>quant;
        if (qburger-sburger >= quant)
        {
            sburger=sburger+quant;
            total_burger+quant*100);
            cout<<"\n\n\t\t"<<quant<<"burger is ordered !";

        }
        else
        cout<<"\n\t only"<<qburger-sburger<<"burger remaning in hotel";
        break;

        case 6:
        cout<<"\n\n Enter the number of chicken you want:";
        cin>>quant;
        if (qchicken-schicken >= quant)
        {
            schicken=schicken+quant;
            total_chicken+quant*120);
            cout<<"\n\n\t\t"<<quant<<"chicken is ordered !";

        }
        else
        cout<<"\n\t only"<<qchicken-schicken<<"chicken remaning in hotel";
        break;

        case 7:
        cout<<"\n\n Enter the number of roti you want:";
        cin>>quant;
        if (qroti -sroti  >= quant)
        {
            sroti =sroti +quant;
            total_roti +quant*120);
            cout<<"\n\n\t\t"<<quant<<"roti  is ordered !";

        }
        else
        cout<<"\n\t only"<<qroti-sroti <<"roti  remaning in hotel";
        break;

        case 8:
        cout<<"\n\n Enter the number of dal you want:";
        cin>>quant;
        if (qdal-sdal >= quant)
        {
            sdal=sdal+quant;
            total_dal+quant*120);
            cout<<"\n\n\t\t"<<quant<<"dal is ordered !";

        }
        else
        cout<<"\n\t only"<<qdal-sdal<<"dal remaning in hotel";
        break;

       case 9:
       cout<<"\n\t\t details of sales and collection"
       cout<<"\n\n number of rooms we had:"<<qrooms;
       cout<<"\n\n number of rooms we gave for rent"<<srooms;
       cout<<"\n\n remaining rooms :"<<qrooms-srooms;
       cout<<"\n\n Total room collection of the day:"<<total_rooms; 

       cout<<"\n\n number of pasta we had:"<<qpasta;
       cout<<"\n\n number of pasta we gave for rent"<<spasta;
       cout<<"\n\n remaining pasta  :"<<qpastas-spasta;
       cout<<"\n\n Total pasta collection of the day:"<<total_pasta; 

       
       cout<<"\n\n number of ramen we had:"<<qramen;
       cout<<"\n\n number of ramen we gave for rent"<<ramen;
       cout<<"\n\n remaining ramen  :"<<qramen-sramen;
       cout<<"\n\n Total ramen collection of the day:"<<total_pramen; 

       cout<<"\n\n number of shake we had:"<<qshake ;
       cout<<"\n\n number of shake  we gave for rent"<<shake ;
       cout<<"\n\n remaining shake  :"<<qshake-spasta;
       cout<<"\n\n Total shake  collection of the day:"<<total_shake ; 
       
       cout<<"\n\n number of burger we had:"<<qburger ;
       cout<<"\n\n number of  burger  we gave for rent"<<burger ;
       cout<<"\n\n remaining  burger  :"<<qburger-sburger;
       cout<<"\n\n Total  burger  collection of the day:"<<total_ burger ; 
       
       cout<<"\n\n number of chicken we had:"<<qchicken ;
       cout<<"\n\n number of  chicken  we gave for rent"<<chicken;
       cout<<"\n\n remaining  chicken  :"<<qchicken-schicken;
       cout<<"\n\n Total  chicken  collection of the day:"<<total_chicken; 
       
       cout<<"\n\n number of roti we had:"<<qroti  ;
       cout<<"\n\n number of  roti   we gave for rent"<<roti ;
       cout<<"\n\n remaining  roti  :"<<qroti -sroti ;
       cout<<"\n\n Total  roti   collection of the day:"<<total_roti ; 

       cout<<"\n\n number of dal we had:"<<qdal ;
       cout<<"\n\n number of  dal  we gave for rent"<<dal;
       cout<<"\n\n remaining  dal  :"<<qdal-sdal;
       cout<<"\n\n Total  dal  collection of the day:"<<total_dal; 
       
       cout<<"\n\n Total collection of the day:"<<total_rooms+total_pasta+total_ramen+ total_shakes+total_burger+total_chicken+total_roti+total_dal; 
       break:

       case 10:
           exit(0);
        
           default:
           cout<<"\n please select the number mention above!"
    }    
    goto m;    
}