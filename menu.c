// menu card for the Hotel
#include<stdio.h>
int main()
    {
         char op,ch;

         printf("\n\n--------Welcome to the Hotel--------\n\n");
         printf("Select what you want->\n\n");
         printf("   1. starter\n   2. Main course\n   3. Dessert\n   4. Beverages\n");

         scanf("%c",&op);

         switch(op)
         {
            case '1':
            printf("You have choosed starter\n");
            printf("   1. Chicken 65     ---> 100\n   2. Dragon chicken ---> 150\n   3. Paneer pakoda  ---> 100\n   4. Fish finger    ---> 150\n");
            scanf(" %c",&ch);

// asd
            switch(ch)
            {
               case '1':
               printf("You have ordered 1 Chicken 65\n");
               break;
               case '2':
               printf("You have ordered 1 Dragon chicken\n");
               break;
               case '3':
               printf("You have ordered 1 Paneer pakoda\n");
               break;
               case '4':
               printf("You have ordered 1 Fish fingers\n");
               break;
               default:
               printf("Invalid order try again\n");
               break;
            }
            break;

            case '2':
            printf("You have choosed Main course:\n");
            printf("   1. Chicken Briyani ---> 150\n   2. Mutton Briyani  ---> 250\n   3. Prawn Briyani   ---> 200\n   4. Butter chicken  ---> 200\n");
            scanf(" %c",&ch);
            switch(ch)
            {
               case '1':
               printf("You have ordered 1 Chicken Briyani\n");
               break;
               case '2':
               printf("You have ordered 1 Mutton Briyani\n");
               break;
               case '3':
               printf("You have ordered 1 Butter Chiken\n");
               break;
               case '4':
               printf("You have ordered 1 Prawn Briyani\n");
               break;
               default:
               printf("Invalid order try again\n");
               break;
            }
            break;

            case '3':
            printf("You have choosed Dessert:\n");
            printf("   1. Gulab jamun            ---> 40\n   2. Ice cream              ---> 50\n   3. Fruit salad            ---> 60\n   4. Brownie with Ice Cream ---> 100\n");
            scanf(" %c",&ch);
            switch(ch)
            {
               case '1':
               printf("You have ordered 1 Gulab jamun\n");
               break;
               case '2':
               printf("You have ordered 1 Ice cream\n");
               break;
               case '3':
               printf("You have ordered 1 Fruit salad\n");
               break;
               case '4':
               printf("You have ordered 1 Brownie with Ice cream\n");
               break;
               default:
               printf("Invalid order try again\n");
               break;
            }
            break;

            case '4':
            printf("You have Beverages:\n");
            printf("   1. Fresh Lime Juice  ---> 40\n   2. Mojito            ---> 70\n   3. Soft Drink        ---> 40\n   4. Cold Coffee       ---> 50\n");
            scanf(" %c",&ch);
            switch(ch)
            {
               case '1':
               printf("You have ordered 1 Fresh Lime Juice\n");
               break;
               case '2':
               printf("You have ordered 1 Mojito\n");
               break;
               case '3':
               printf("You have ordered 1 Soft Drink\n");
               break;
               case '4':
               printf("You have ordered 1 Cold Coffee\n");
               break;
               default:
               printf("Invalid order try again\n");
               break;
            }
            break;

            default:
               printf("Invalid order try again\n");
         }
    }