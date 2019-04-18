#include<stdio.h>
#include<conio.h>

int main()
{
    int   count[8],mark,vtr,i,pin;
          printf("Enter ADMINISTRATOR Password:\n");
          scanf("%d",&pin);
          printf("\n");
        while (pin!=1200)
        {
            system("color c");
            printf("\t\t\t\t\tWelcome to Electronic Voting System\n\n\n");
            printf("Wrong Password!!!!\n");
            printf("Enter your password again:\n");
            scanf("%d",&pin);
            printf("\n\n\n");
        }

        system("color d");
        printf("\n\t\t\t\t\t\tWelcome to Admin \n\n\n");
        printf("\nEnter the total number of voter :");
        scanf("%d",&vtr);

        for(i=0; i<=7; i++)
        {
            count[i]=0;
        }
        printf("\n\n\n");
        system("pause");
        system("cls");

        for(i=0; i<=vtr-1; i++)
        {
            printf("Voter no #%d", i+1);

            printf("\n");

            printf("\t\t\t\t\t\t OFFICIAL BALLOT\n");
            printf("\t\t\t\t\t OFFICIAL LIST OF CANDIDATES\n");

            printf("1. MD.Fazlay Elahi.\n");

            printf("2. Fahim Ashhab.\n");

            printf("3. Ashiqur Rahman.\n");

            printf("4. Tanvir Zaman.\n");

            printf("5. Maruf Ahmed.\n");

            printf("6. Shourav.\n");

            printf("7. Tajrina Azhar Jui.\n");

              printf("\n\n\n\n\n\n");

            printf("\t\t\t\t\t::::::VOTING INSTRUCTIONS:::::::\n\n");

            printf("\tTO VOTE FOR YOUR CANDIDATE, PLEASE TYPE THE NUMBER\n\t CORRESPONDING TO YOUR CANDIDATE\n\n");

            printf("Enter Candidate serial Number you want to Vote:::::: \n\n\n");

            printf("Enter your vote to candidate :");
            scanf("%d",&mark);

            system("cls");

            printf("CONGRATULATIONS! YOUR VOTE HAS BEEN ACCEPTED!\n");
            printf("THE NEXT VOTER WILL NOW INPUT HIS/HER VOTE.\n");
            printf("THANK YOU FOR VOTING!\n");
            printf("\n\n");
            system("pause");

              if(mark==1)
            {
                ++count[0];
            }
            else if(mark==2)
            {
                ++count[1];
            }
            else if(mark==3)
            {
                ++count[2];
            }
            else if(mark==4)
            {
                ++count[3];
            }
            else if(mark==5)
            {
                ++count[4];
            }
            else if(mark==6)
            {
                ++count[5];
            }
            else if(mark==7)
            {
                ++count[6];
            }
            else
            {
                ++count[7];
            }

            system("cls");
        }

         system("color B");
         printf("\t\t\t\t\tThe Voting process has finished! \n\n");
         printf("\tPress any key to show results.....\n\n");
         system("pause");
         system("cls");

        system("color 2");
        printf("\n MD.Fazlay Elahi got: %d",count[0]);
        printf("\n Fahim Ashhab got:    %d",count[1]);
        printf("\n Ashiqur Rahaman got: %d",count[2]);
        printf("\n Tanvir Zaman got:    %d",count[3]);
        printf("\n Maruf Ahmed got:     %d",count[4]);
        printf("\n Shourav got:         %d",count[5]);
        printf("\n Tajrina Azhar got:   %d",count[6]);
        printf("\n Spoil Ballot :       %d",count[7]);
        printf("\n\n\n\n");


        int largest=0,s=0;

        for (i=0; i<vtr; i++)
        {
            if (count[i] > largest)
            {
                largest = count[i];
                s=i+1;
            }
        }

        switch(s)
        {
        case 1:
            printf("\n\t\t\t\t\tThe winner is MD.Fazlay Elahi.\n");
            break;
        case 2:
            printf("\n\t\t\t\t\tThe winner is Fahim Ashhab.\n");
            break;
        case 3:
            printf("\n\t\t\t\t\tThe winner is  Ashiqur Rahaman.\n");
            break;
        case 4:
            printf("\n\t\t\t\t\tThe winner is Tanvir Zaman.\n");
            break;
        case 5:
            printf("\n\t\t\t\t\tThe winner is Maruf Ahmed.\n");
            break;
        case 6:
            printf("\n\t\t\t\t\tThe winner is Shourav.\n");
            break;
        case 7:
            printf("\n\t\t\t\t\tThe winner is Tajrina Azhar Jui.\n");
            break;
        default:
            printf("\nNo one wins\n");
            break;
        }
        return 0;

}



