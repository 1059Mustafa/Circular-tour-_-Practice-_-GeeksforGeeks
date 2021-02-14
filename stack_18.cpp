int tour(petrolPump p[],int n)
{
   int dis=0,pet=0;
   for(int i=0;i<n;i++)
   {
       pet+=p[i].petrol;
       dis+=p[i].distance;
   }
   if(pet<dis)
   {
       return -1;
   }
   int start=0,bal=0;
   for(int i=0;i<n;i++)
   {
       if(bal<0)
       {
           bal=p[i].petrol-p[i].distance;
           start=i;
       }
       else
       {
           bal=bal+p[i].petrol-p[i].distance;
       }
   }
   return start;
}

