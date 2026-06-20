// menu card for the Hotel
#include<stdio.h>
int main()
{
         char op,ch,ss;                                     // op = select the cat,  ch = wuw inside the cat,  ss = for while loop

         int qty,totel=0;                                   

         char ckn65=0,  dckn=0,  panpak=0,   fisfin=0;               // Starters
         char cknbri=0, mutbri=0, prabri=0, butckn=0;               // Main course
         char guljam=0, ice=0,   frusal=0,   broice=0;          // dessert
         char frelim=0, moj=0, soft=0,  cold=0;                  // beverage
         
         printf("\n\n--------Welcome to the Hotel--------\n\n");

   do
   {
            
      printf("\nSelect what you want->\n\n");
      printf("   1. Starter\n   2. Main course\n   3. Dessert\n   4. Beverages\n   5. Exit\n");

      printf("Enter your choise: ");
      scanf(" %c",&op);

         switch(op)
            {
               case '1':
               printf("\n---------- Starters ----------\n");
               printf("   1. Chicken 65     ---> 100\n   2. Dragon chicken ---> 150\n   3. Paneer pakoda  ---> 100\n   4. Fish finger    ---> 150\n");

               printf("Enter the Item: ");
               scanf(" %c",&ch);
               printf("Enter your Qty:");
               scanf(" %d",&qty);

                     switch(ch) 
                     {
                        case '1':
                        printf("You have ordered %c Chicken 65\n",qty);
                        ckn65+=qty;
                        break;

                        case '2':
                        printf("You have ordered %c Dragon chicken\n",qty);
                        dckn+=qty;                  
                        break;

                        case '3':
                        printf("You have ordered %c Paneer pakoda\n",qty);
                        panpak+=qty;
                        break;

                        case '4':
                        printf("You have ordered %c Fish fingers\n",qty);
                        fisfin+=qty;
                        break;
                        
                        default:
                        printf("Invalid order try again\n");
                        break;
                     }
                     break;

               case '2':
               printf("\n---------- Main Course ----------\n");
               printf("   1. Chicken Briyani ---> 150\n   2. Mutton Briyani  ---> 250\n   3. Prawn Briyani   ---> 200\n   4. Butter chicken  ---> 200\n");

               printf("Enter your choise :");
               scanf(" %c",&ch);
               printf("Enter your Qty:");
               scanf(" %d",&qty);

                     switch(ch)
                     {
                        case '1':
                        printf("You have ordered %c Chicken Briyani\n",qty);
                        cknbri+=qty;
                        break;

                        case '2':
                        printf("You have ordered %c Mutton Briyani\n",qty);
                        mutbri += qty;
                        break;

                        case '3':
                        printf("You have ordered %c Butter Chiken\n",qty);
                        butckn += qty;
                        break;

                        case '4':
                        printf("You have ordered %c Prawn Briyani\n",qty);
                        prabri += qty;
                        break;

                        default:
                        printf("Invalid order try again\n");
                        break;
                     }
                     break;

               case '3':
               printf("\n---------- Dessert ----------\n");
               printf("   1. Gulab jamun            ---> 40\n   2. Ice cream              ---> 50\n   3. Fruit salad            ---> 60\n   4. Brownie with Ice Cream ---> 100\n");

               printf("Enter your choise: ");
               scanf(" %c",&ch);
               printf("Enter your Qty:");
               scanf(" %d",&qty);

                     switch(ch)
                  {
                     case '1':
                     printf("You have ordered %c Gulab jamun\n",qty);
                     guljam += qty;
                     break;

                     case '2':
                     printf("You have ordered %c Ice cream\n",qty);
                     ice += qty;
                     break;

                     case '3':
                     printf("You have ordered %c Fruit salad\n",qty);
                     frusal += qty;
                     break;

                     case '4':
                     printf("You have ordered %c Brownie with Ice cream\n",qty);
                     broice += qty;
                     break;

                     default:
                     printf("Invalid order try again\n");
                     break;
                     }
                     break;

               case '4':
               printf("\n---------- Beverages ----------\n");
               printf("   1. Fresh Lime Juice  ---> 40\n   2. Mojito            ---> 70\n   3. Soft Drink        ---> 40\n   4. Cold Coffee       ---> 50\n");

               printf("Enter your choise: ");
               scanf(" %c",&ch);
               printf("Enter your Qty:");
               scanf(" %d",&qty);

                     switch(ch)
                     {
                     case '1':
                     printf("You have ordered %c Fresh Lime Juice\n",qty);
                     frelim += qty;
                     break;

                     case '2':
                     printf("You have ordered %c Mojito\n",qty);
                     moj += qty;
                     break;

                     case '3':
                     printf("You have ordered %c Soft Drink\n",qty);
                     soft += qty;
                     break;

                     case '4':
                     printf("You have ordered %c Cold Coffee\n",qty)
                     cold += qty;
                     break;

                     default:
                     printf("Invalid order try again\n");
                     break;
                     }
                     break;

               case '5':
               {
               printf("\n---------- Thankyou visit again! ----------\n");
               break;
               }

               default:
               {
               printf("Invalid choise\n");
               break;
               }
            }
            if(op != '5')
            {
               printf("\nWould you like to order more (y/n):");
               scanf(" %c",&ss);
            }
            else
            ss = 'n';


   } while (ss == 'Y' || ss == 'y');

//------------------------------------------------------------------------------------------------------------------

   printf("\n---------- Billing ----------\n\n");

   if(ckn65>0)
   {
      printf("  %d chicken65   Rs.%d\n",ckn65,ckn65*100);
      totel += ckn65*100;
   }
   // if(dckn<0)
   // {
   //    total += dckn*
   // }


printf("totel = %d\n",totel);
}
