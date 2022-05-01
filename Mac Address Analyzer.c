/*
 * Name:Bruno d. Imfurankase m.
 * ID: 2597151
 */
#include <stdio.h>

int main() {
    int focte,socte,tocte,foocte,fiocte,siocte;
    /*
     *Focte= First octet, Socte=second octet, tocte=third octet, foocte=fourth octet,fiocte=fifth octet,
     * siocte= sixth octet.
     */
    int choice,temp,status;
    int  focte_bin = 0, rem = 0, place = 1,lastdig_focte_bin,seclastdig_focte_bin;
    /*
     * focte_bin=binary form of the first octet
     * Lastdig_focte_bin=last digit of the binary form of the first octet(first bit).
     * seclastdig_focte_bin=second last digit of the binary form of the first octet(second bit).
     */

        printf("Welcome to MAC Analyser!\n");

        printf("Please enter a MAC address:");
        status=scanf("%x-%x-%x-%x-%x-%x",&focte,&socte,&tocte,&foocte,&fiocte,&siocte);
        while(status!= 6){//Validation of the input
            while((temp=getchar())!= EOF && temp != '\n');
            printf("This is not a valid MAC address!\nPlease enter a MAC address:");
            status=scanf("%x-%x-%x-%x-%x-%x",&focte,&socte,&tocte,&foocte,&fiocte,&siocte);
        }
    printf("This is Valid! \n");
      while(1){ //infinite loop
        printf("==================\n");
        printf("1. Is it Unicast or Multicast?\n");
        printf("2. Is Global or Local?\n");
        printf("3. What is the Manufacturer Info?\n");
        printf("4. Enter Another Mac address\n");
        printf("5. Exit\n");
        printf("==================\n");
        printf("What would you like to do:");
        scanf("%d",&choice);
        //converting first octet to binary
        while(focte)
        {
            rem   = focte % 2;
            focte   = focte / 2;
            focte_bin   = focte_bin + (rem * place);
            place = place * 10;
        }
        if(choice==1){ //unicast or multicast
            //checking the last digit(first bit) of the octet
            lastdig_focte_bin=focte_bin % 10;
            if(lastdig_focte_bin==0){
                printf("Is it unicast or multicast? \n Unicast: First bit = 0. \n");
            }
            else{
                printf("Is it unicast or multicast? \n Multicast: First bit = 1.\n");
            }
        }
        else if(choice==2){ //global or local
            //check second last digit
            focte_bin= focte_bin/10;
            seclastdig_focte_bin= focte_bin % 10;
            if(seclastdig_focte_bin==0){
                printf("Is it Global or local? \n Global: Second bit = 0. \n");
            }
            else{
                printf("Is it Global or local? \n Local: Second bit = 1. \n");
            }
        }
        else if(choice==3){
            //check manufacturer. First get decimal values of the hexadecimal values
            if (focte == 204 && socte == 70 &&tocte == 214) { //check if manufacturer is cisco
                        printf("What is manufacturer info? \n Manufacturer Info: Cisco \n");
            }
            else if (focte == 0 && socte == 8 && tocte == 32) {//check if manufacturer is cisco
                        printf("What is manufacturer info? \n Manufacturer Info: Cisco \n");
                    }
            else if (focte == 0 &&socte == 154 && tocte == 205) { //check if manufacturer is huawei
                        printf("What is manufacturer info? \n Manufacturer Info: Huawei \n");
                    }
            else if (focte == 60 && socte == 90 && tocte == 180) { //check if manufacturer is google
                    printf("What is manufacturer info? \n Manufacturer Info: Google \n");
                }
            else {
                    printf("What is manufacturer info? \n Manufacturer Info: Unknown \n");
                }
            }

        else if(choice==4){
            printf("Please enter a MAC address:");
            status=scanf("%x-%x-%x-%x-%x-%x",&focte,&socte,&tocte,&foocte,&fiocte,&siocte);
            while(status!= 6){//Validation of the input
                while((temp=getchar())!= EOF && temp != '\n');
                printf("This is not a valid MAC address!\nPlease enter a MAC address:");
                status=scanf("%x-%x-%x-%x-%x-%x",&focte,&socte,&tocte,&foocte,&fiocte,&siocte);
            }
            printf("This is Valid! \n");
        }
        else if(choice==5){//exit
            printf("Byeee!");
            return 0;
        }
        else{
            printf("Invalid choice \n");
        }

}
}