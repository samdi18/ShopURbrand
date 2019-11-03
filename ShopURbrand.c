#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
char name[50];
char pass[50];
FILE *st;
FILE *rb;
struct ip{

char n[100];

}r[20];

struct info{

char name[100];
double price;

}p[10];
static int g =0;

void tv(void);// yeah i know we have lots of user define function...
void game(void);
void ele(void); //ele is a fuction which will show electronics products
void football(void);
void cricket(void);void notify(void);
void jersey(void); void wbb(void); void wchanel(void); void wgucci(void); void whermes(void); void wmarcj(void); void wmk(void);
void book(void); void hp(void); void laptop(void); void ota(void); void gmc(void); void mobile(void);
void men(void); void barmani(void); void bca(void); void bck(void); void bgucci(void); void bhermes(void); void bhugob(void);
void women(void); void brp(void); void badidas(void); void bnike(void); void wprada(void); void wversace(void);
void shoes(void);
void ent(void);// ent is a fucntion to access Entertainment category.
void sports(void);
void perfume(void);
void mainmenu(void);
void login(char *name, char *lastn, char *birth, char *email, char *credit, char*address, char *pass);
void bill(void);
void watch(void);
void ecp(void);
void ecw(void);
void help(void); void adv(void); void art(void); void biog(void); void bulova(void); void mont(void);
void tag(void); void fict(void); void his(void); void mystery(void); void nf(void);
void omega(void); void psy(void); void rolex(void); void roman(void); void seiko(void); void tissot(void); void tra(void);
void cartier(void); void hamilton(void); void dend(void);
void bchanel(void); void bgp(void); void bguess(void); void bhbp(void); void bversace(void); void mf(void); void wf(void);
void menshoe(void); void womenshoe(void); void bsgucci(void); void bsmoreschi(void); void bspuma(void); void wbbp(void);
void wbvlp(void); void wchanelp(void); void wCKp(void); void wCLs(void); void wguccis(void); void wJCp(void); void wJCs(void);
void wjuicyp(void); void wLVs(void); void wMBs(void); void wPRp(void); void wRLp(void); void sale(void); int recu();
void loreal(void);void mac(void);void est(void);void urban(void);void lancome(void);
void ccss(void);void reg(void); void robot(void);void rshop(void); void rend(void); void rbill(void);
// Its really hard to count ..
//96-7 functions now including the 6 for cosmetics

int recu(int r1,int r2){

    int ans;

 if (r2 == 1)
 ans = r1; /* simple case */
 else
 ans = r1 + recu(r1, r2 - 1); /* recursive step */

return (ans);
}
int ans;

int main(){
    system("cls");
    system("COLOR F1");
    puts("       /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\     ");
puts("       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ");
puts("         |~|\\    /|~|      ~~~~~~~~~   ----------");
puts("         | | \\  / | |      | ~~~~~~~   ---- -----");
puts("         | |  \\/  | |      | |            | |   ");
puts("         | |      | |      --------       | |   ");
puts("         |~|      |~|      ------- |      | |    ");
puts("                                 | |      | |       ");
puts("         ---      ---      ------- |      ---      ");
puts("                           ---------      @INC. ");
puts("        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("        \\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\");
    int r1 = 5, r2 =8;
    ans = recu(r1, r2);
    puts("\nFor Security reason Answer This question first. 5 * 8 = ? Choose The Best Answer:");
    puts("\n1.40\t2.90\t3.100\t4.500");

    if(getch()== '1'){
        printf("\nYou guessed it right.. %d is the correct answer. your human and CORRECT! ",ans);
        reg();
    }
    else{
        //printf("\nWrong Answer. Correct answer is %d .\nAnyway you can register, We believe robots need to shopping as well! Try our Electronic products!Other things might not good for you", ans);
        robot();

    }

		return 0;
}

void robot(void){
    system("cls");
    system("COLOR B5");
    rb = fopen("roboticcart.txt", "w");
    fclose(rb);
    char ip[500];
    printf("\n\t\t\t\t\tWrong Answer. Correct answer is %d . NOW WE KNOW WHAT YOU ARE\n", ans);
puts("\n                                               \\    /");
puts("                                             --------- ");
puts("                                             | o    o |");
puts("                                             |   \\/   |");
puts("                                             |   --   |");
puts("                                             ----------");
puts("                                              __|   |__");



puts("\n--------------------------------- WELCOME TO WWW.ShopURBrand.ROBOTIC.COM ---------------------------------");
puts("\nWe understand the feelings of robot of not getting the opportunity for shopping.");
puts("\nBut the time has come, A NEW ERA of robotic shopping is about to begin with us ");
puts("You can buy any mechanical parts from us to mod yourself into much stronger and efficient machine.... Lets get it started !!!!!\n");
puts("\nREGISTRATION::::::>");
puts("\nYou don't have to write a 100 line bio for registration like human just put you IP Address so that we can detect you location");
gets(ip);

puts("\nBe careful about pressing buttons if you press wrong button you have to give you IP address again: \n");
puts("\n1>>Products [1]");
puts("\n2>>Bill     [B] ");
puts("\n3>>EXIT     [0] ");
switch(getch()){

case '1':
    rshop();
    break;
case 'b':
    rbill();
    break;
case '0':
    rend();
    break;
default:
    {
        puts("\nWROGN BUTTON! TRY AGAIN");
        robot();
    }


}

}
void rshop(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t\t\t         ______   ");
puts("\t\t\t\t\t\t\t\t\t\t         |    |    ");
puts("\t\t\t\t\t\t\t\t\t\t      -------------  ");
puts("\t\t\t\t\t\t\t\t\t\t      /   shop    \\");
puts("\t\t\t\t\t\t\t\t\t\t     /     UR      \\");
puts("\t\t\t\t\t\t\t\t\t\t    /    BRAND      \\");
puts("\t\t\t\t\t\t\t\t\t\t   -------------------");

    puts("\n\t\t\t\t\t\t\t------------------------------------- ROBOTIC SHOP ---------------------------");
    puts("\n\t\t\t\t\t\t\tRecharge yourself with our products");

    puts("\n\t\t\t\t\t\t\t1.Supper fast Battery Charger by APPLE $500");
    puts("\n\t\t\t\t\t\t\t2.Super Strong Body Armor by GUCCI $500");
    puts("\n\t\t\t\t\t\t\t3.OS De robotic V9.1.1 $1000 ");
    puts("\n\t\t\t\t\t\t\t4.Chanel Perfume de Robotica: Don't Smell Like a COW $2000 ");
    switch(getch()){

case '1':
    {        rb = fopen("roboticcart.txt", "a+");
    fprintf(rb,"Supper fast Battery Charger by APPLE $500\n");
    //fprintf(st,"%d \n", 1299);
    fclose(rb);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    rshop();
    break;

    }
case '2':
    {
        rb = fopen("roboticcart.txt", "a+");
    fprintf(rb,"Super Strong Body Armor by GUCCI $500\n");
    //fprintf(st,"%d \n", 1299);
    fclose(rb);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    rshop();
    break;
    }
case '3':
    {
        rb = fopen("roboticcart.txt", "a+");
    fprintf(rb,"OS De robotic V9.1.1 $1000\n");
    //fprintf(st,"%d \n", 1299);
    fclose(rb);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    rshop();
    break;
    }
case '4':
    {
        rb = fopen("roboticcart.txt", "a+");
    fprintf(rb,"Chanel Perfume de Robotica: Don't Smell Like a COW $2000\n");
    //fprintf(st,"%d \n", 1299);
    fclose(rb);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    rshop();
    break;
    }

case 'm':
case 'M':
    rshop();
    break;
case 'b':
//case 'C':
    rbill();
    break;
case '0':
//case 'E':
    rend();
    break;
default:
    {
        puts("\nPressed the wrong number. Try again");
        rshop();
    }
    }

}

    void rbill(void){
        system("cls");
puts("\n\t\t\t\t\t\t\t\t\t   ____________________________________________");
puts("\t\t\t\t\t\t\t\t\t   |$10,000      PAY TIME       ___________   |");
puts("\t\t\t\t\t\t\t\t\t   |                           |1010101010|   |");
puts("\t\t\t\t\t\t\t\t\t   |                           |0101010101|   |");
puts("\t\t\t\t\t\t\t\t\t   |             MONEY         |0110100011|   |");
puts("\t\t\t\t\t\t\t\t\t   |                           ------------   |");
puts("\t\t\t\t\t\t\t\t\t   |$10,000                        #codeit    |");
puts("\t\t\t\t\t\t\t\t\t   |__________________________________________|");


        puts("\n\t\t\t\t\t\t\t----------------------------- ROBOT PAY -------------------------------");
          rb = fopen("roboticcart.txt","r");

    puts("\n\t\t\t\t\t\t\tSelected product: \n");

int i = 0;
double rtotal = 0;

while(!feof(rb)){

fgets(r[i].n, 100, rb);

printf("\n\t\t\t\t\t\t\t%d Product Name: %s ",i+1, r[i].n);

i++;
}
fclose(rb);
puts("\n\t\t\t\t\t\t\t--------------------------------------");
printf("\n\t\t\t\t\t\t\t\t TOTAL IS : %lf", rtotal);
puts("\n\t\t\t\t\t\t\tWHAT A BEAUTIFUL TOTAL ISN'T IT? CONTROLL YOUR HAPPINESS ! TOTAL IS 0 BECUSE WE ARE NOT SENDING ANYTHING TO YOU");
puts("\n\t\t\t\t\t\t\tCome back after 2050, we have a plan to give our service to robots .. Now forget about shopping and do our house chores");
puts("\n\t\t\t\t\t\t\tPress any button to exit! Happy Shopping!! oops!");
switch(getch()){
default:
    rend();}
    }

    void rend(void){
        system("cls");
        puts("\n\n\t\t\t\t\t\t\t----------------Thank you and bye bye!!!!!---------------------");
        puts("\n\n\t\t\t\t\t\t\t                 COME BACK AFTER 2050");



    }

void reg(void){
system("cls");
system ("COLOR B5");
 st = fopen("cart.txt", "w");//This line is just to erase everything from cart after paying bill
	fclose(st);


	int a = 0; //its for flagging in password.
	// main function is  registration and login  system!
puts("\n                                            ______   ");
puts("                                            |    |    ");
puts("                                         ------------  ");
puts("                                        /   shop     \\");
puts("                                       /     UR       \\");
puts("                                      /    BRAND       \\");
puts("                                     /                  \\");
puts("                                    ----------------------");

	puts("\n\n\n***************************** WELCOME TO ShopURBrand.COM ******************************");
	printf("\nWe are here to make your shopping experience more comfortable. We are offering ");
	puts("\nworlds preeminent luxury brands, recognized the world over for its fashion,");
	puts("innovation and impeccable craftsmanship.");
	puts("_______________________________________________________________________________");
	printf("For shopping with us you have to open an account in here! For registration follow instruction below\n");
	char email[50], birth[11], lastn[30];
	char credit[21], address[50];
	printf("\nWe need some of your personal informations. It will be safe with us. Now give us some information about you\n");
	puts("\n************************** REGISTRATION ***************************************");
	printf("\nFirst Name : ");
	gets(name);
	printf("\nLast Name : ");
	gets(lastn);
	printf("\nBirthday : DD-MM-YYYY ");
	gets(birth);

	printf("\nyour email: ");
	gets(email);
	printf("\nCredit card number : ");
	gets(credit);
	printf("\nHouse address : ");
	gets(address);
	printf("\nNow set your password : ");
	gets(pass);
	printf("\nYour registration is complete! Now you can sign in with your email and password");
	char passw[50], user[50];// these are just to log in.
	puts("\n*****************************************************************************");
	do{
		//Logging in.  security problem :p
		//a = 0;
		puts("\n\n\n****************************** SIGN IN ********************************");
		printf("\nEmail :\t");
		gets(user);
		printf("\nPASSWORD : \t");
		gets(passw);
		puts("\n*****************************************************************************");
		//ahhh that password thing is making me crazy!
		if (strcmp(email, user) == 0 && strcmp(pass, passw) == 0){
			a = 1;
			puts("\nLogged in");
		}
		else{
			printf("wrong password or email");
		}
	}
while (a != 1);
login(name, lastn, birth, email, credit, address, pass);

}

void login(char *name, char *lastn, char *birth, char *email, char *credit, char*address, char *pass){
    system("cls");
    system("COLOR F1");

		puts("\n\n\n\t\t\t\t\t\t\t**************************** PROFILE **************************************");
		puts("\n\t\t\t\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~ ");
		puts("\n\t\t\t\t\t\t\t\t\t  |     upload       |");
		puts("\n\t\t\t\t\t\t\t\t\t  |      your        |");
		puts("\n\t\t\t\t\t\t\t\t\t  |     profile      |");
		puts("\n\t\t\t\t\t\t\t\t\t  |     picture      |");
		puts("\n\t\t\t\t\t\t\t\t\t  |                  |");
		puts("\n\t\t\t\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~ ");
		printf("\n\n\n\t\t\t\t\t\t\tName %s %s.\n\t\t\t\t\t\t\tEmail address : %s\n\t\t\t\t\t\t\tCredit card : %s\n\t\t\t\t\t\t\tAddress : %s", name, lastn, email, credit, address);
	puts("\n\t\t\t\t\t\t\tTo see our product categories press <M> , if you need help press <H>");
	//char t;
	//scanf_s("%c", &t);
	switch (getch()){
	case'm':
	case'M':
		mainmenu();
		break;
	case 'H':
	case 'h':
		help();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\nPressed wrong button. Try again");
		login(name, lastn, birth, email, credit, address, pass);//as we are going back to profile we have to send these stupid things too!
	}
	}

}

void mainmenu(void){
    system("cls");
    system(" COLOR F1");
	//almost every categories are here! we can add or change categories if we want! question is selection.
	puts("\n\t\t\t\t\t\t\t\t****************************************** MAIN MENU ********************************************");
    puts("\n\t\t\t\t\t\t\t\t\tClick away and enjoy the experience of high fashion mall raiding sitting at home and get your ");
    puts("\n\t\t\t\t\t\t                             worth's while at (our shops name) because we aim to please");
	puts("\t\t\t\t\t\t\t         ---------------------------------------------------------------------------------------------------");
	puts("\n\n\t\t\t\t\t                         1>>Mens Lifestyle prdouct \t2>>Womens Lifestyle Product");
	puts("\n\t\t\t\t\t\t\t                           3>>Shoes    \t4>>Entertainment\n");
	puts("\n\t\t\t\t\t\t\t                          5>>Sports\t6>>Perfume\t7>>Books\n");
	puts("\n\t\t\t\t\t\t\t                           8>>Watch \t9>>Cosmetics");
	puts("\n\n\t\t\t\t\t\t\t                 **Offers** and Product on SALE. Press <S> ");
	switch (getch()){
	case '1':
		men();
		break;
	case '2':
		women();
		break;
	case '3':
		shoes();
		break;
	case '4':
		ent();
		break;
	case '5':
		sports();
		break;
	case '6':
		perfume();
		break;
	case '7':
		book();
		break;
	case '8':
		watch();
		break;
    case '9':
        ccss();
        break;
	case 'e':
	case 'E':
		dend();
		break;
    case 'h':
    case 'H':
        help();
        break;
	case 's':
	case 'S':
		sale();
		break;
    case 'c':
    case 'C':
        bill();
        break;
	default:{
		puts("\n\nYou pressed wrong button, Try again");
			mainmenu(); //if press wrong button it will take back to the main manu.
		break; }



	}


}

void men(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t\t\t    /\\/\\/\\/\\/\\/\\/\\/\\/\\");
puts("\t\t\t\t\t\t\t\t\t\t   --------------------");
puts("\t\t\t\t\t\t\t\t\t\t   |                  |");
puts("\t\t\t\t\t\t\t\t\t\t   |   0          0   |");
puts("\t\t\t\t\t\t\t\t\t\t   |         |        |");
puts("\t\t\t\t\t\t\t\t\t\t   |                  | ");
puts("\t\t\t\t\t\t\t\t\t\t   |       ~~~~~      |");
puts("\t\t\t\t\t\t\t\t\t\t   |__________________|");



	puts("\n\t\t\t\t\t\t\t************************** MEN LIFESTYLE ***************************");
	puts("\n\t\t\t\t\t\t\tSelect your desire brand to see the available products");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Gucci\t\t2.Hermes\n\t\t\t\t\t\t\t\t3.Hugo Boss\t4.C&A\n\t\t\t\t\t\t\t\t5.Armani\t6.Calvin Klein\n\t\t\t\t\t\t\t\t7.Ralph Lauren ");
	switch (getch()){
	case '1':
		bgucci();
		break;
	case '2':
		bhermes();
		break;
	case '3':
		bhugob();
		break;
	case '4':
		bca();
		break;
	case '5':
		barmani();
		break;
	case '6':
		bck();
		break;
	case '7':
		brp();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button Taking back");
		men();
	}

	}

}
// we need a function to close the application
//\t\t\t\t\t have to add these stupid thing in every damn line ... but is more important thn FIFA
void women(void){
    system("cls");
    system("COLOR FD");
puts("\n\t\t\t\t\t\t\t\t\t\t   -----------------");
puts("\t\t\t\t\t\t\t\t\t\t   ||||_________||||");
puts("\t\t\t\t\t\t\t\t\t\t   |||| 0      0||||");
puts("\t\t\t\t\t\t\t\t\t\t   ||||         ||||");
puts("\t\t\t\t\t\t\t\t\t\t   |||/   *--*  \\|||");
puts("\t\t\t\t\t\t\t\t\t\t   ||/|---------|\\||");
	puts("\n\t\t\t\t\t\t\t**************************WOMEN LIFESTYLE*****************************\n");
	puts("\n\t\t\t\t\t\t\tSelect your desired brand to see the available products");
	puts("\n\t\t\t\t\t\t\t---------------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Gucci\t\t2.Hermes Vintage\n\t\t\t\t\t\t\t\t3.Prada\t\t4.Versace\n\t\t\t\t\t\t\t\t5.Marc Jacob\t6.Chanel\n\t\t\t\t\t\t\t\t7.Burberry\t8.Michael Kors");
	switch (getch()){
	case '1':
		wgucci();
		break;
	case '2':
		whermes();
		break;
	case '3':
		wprada();
		break;
	case '4':
		wversace();
		break;
	case '5':
		wmarcj();
		break;
	case '6':
		wchanel();
		break;
	case '7':
		wbb();
		break;
	case '8':
		wmk();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tSorry!You have pressed the wrong button.Try again!");
		women();
	}

	}
}

void shoes(void){
    system("cls");
	puts("\n\t\t\t\t\t\t\t**************************** SHOES ********************************");
    puts("\n\t\t\t\t\t\t\tWith the right footwear we believe that one can rule the world!");
	puts("\n\t\t\t\t\t\t\t\t1.For Men\t\t2.For Women");
	switch (getch()){
	case '1':
		menshoe();
		break;
	case '2':
		womenshoe();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button, Try again!");
		shoes();
	}
	}
}
void ccss(void){
    system("cls");
    system(" COLOR FD");
puts("\n\t\t\t\t\t\t\t\t\t\t           ----    ");
puts("\t\t\t\t\t\t\t\t\t\t           |  |");
puts("\t\t\t\t\t\t\t\t\t\t           |  |");
puts("\t\t\t\t\t\t\t\t\t\t        ---------");
puts("\t\t\t\t\t\t\t\t\t\t        |       |");
puts("\t\t\t\t\t\t\t\t\t\t        | M.A.C |");
puts("\t\t\t\t\t\t\t\t\t\t        |_______|");
puts("\t\t\t\t\t\t\t\t\t\t        ---------");
    puts("\n\t\t\t\t\t\t\t******************************MAKE-UP**************************************");
    puts("\n\t\t\t\t\t\t\tYou cant buy happiness but you can buy make-up which is kind of the same thing!!");
    puts("\n\t\t\t\t\t\t\t\t1>> L'Oreal Paris \t2>> M.A.C \n\t\t\t\t\t\t\t\t3>> EstŽe Lauder \t4>> Urban Decay \n\t\t\t\t\t\t\t\t5>>.LanCome\n");
    switch(getch()){
        case '1':
            loreal();
            break;
        case '2':
            mac();
            break;
        case '3':
            est();
            break;
        case '4':
            urban();
            break;
        case '5':
            lancome();
            break;
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:{
            puts("\n\t\t\t\t\t\t\tYou have pressed the wrong button.Try again.");
            ccss();
        }
    }
    }

void ent(void){
    system("cls");
    system("COLOR F1");
puts("\n\t\t\t\t\t\t\t\t\t\t  ----------------    -----------   ------      ");
puts("\t\t\t\t\t\t\t\t\t\t  |              |    |         |   | MO  |");
puts("\t\t\t\t\t\t\t\t\t\t  |     TV       |    |  XBOX   |   | BI  |");
puts("\t\t\t\t\t\t\t\t\t\t  |              |    |         |   | LE  |");
puts("\t\t\t\t\t\t\t\t\t\t  ----------------    -----------   -------");

	puts("\n\t\t\t\t\t\t\t****************************** Entertainment **************************************\n");
	//puts("\nPress the number to access what you want");
	puts("\n\n\n\t\t\t\t\t\t\t\t1.TV\t2.Gaming\t3.Electronics.");
	//puts("\n\nIf your want to go back to main menu PRESS <M>");

	switch (getch()){
	case '1':
		tv();
		break;
	case '2':
		game();
		break;
	case '3':
		ele();
		break;
	case 'm':
    case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
    default:{
		puts("\n\t\t\t\t\t\t\tWrong button! TRy again");
		ent();
	}

	}

}
void sports(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t\t\t          ||");
puts("\t\t\t\t\t\t\t\t\t\t          || ");
puts("\t\t\t\t\t\t\t\t\t\t         ----");
puts("\t\t\t\t\t\t\t\t\t\t         |C |");
puts("\t\t\t\t\t\t\t\t\t\t         | B|");
puts("\t\t\t\t\t\t\t\t\t\t         |__|");
puts("\t\t\t\t\t\t\t\t\t\t         ----");

	puts("\n\t\t\t\t\t\t\t***************************** SPORTS *********************************");
	puts("\n\t\t\t\t\t\t\tPress the number to access your desire product.");
	puts("\n\t\t\t\t\t\t\t\t1.football\t2.Cricket\n\t\t\t\t\t\t\t\t3.Jersey Collection.");

	switch (getch()){
	case '1':
		football();
		break;
	case '2':
		cricket();
		break;
	case '3':
		jersey();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
    default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
		sports(); }

	}

}
void perfume(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t\t\t        -------");
puts("\t\t\t\t\t\t\t\t\t\t         |   |");
puts("\t\t\t\t\t\t\t\t\t\t      ------------");
puts("\t\t\t\t\t\t\t\t\t\t      |          |");
puts("\t\t\t\t\t\t\t\t\t\t      | Burberry |");
puts("\t\t\t\t\t\t\t\t\t\t      |  perfume |");
puts("\t\t\t\t\t\t\t\t\t\t      |__________|");
puts("\t\t\t\t\t\t\t\t\t\t     /____________\\");
	puts("\n\t\t\t\t\t\t\t***************************** PERFUME ***************************************");
	puts("\n\t\t\t\t\t\t\tFragrance is all about sensation and imagery and can evoke vision, feelings and thoughts");
	puts("\t\t\t\t\t\t\t------------------------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t0.EXCLUSIVE COLLECTION\n\n\t\t\t\t\t\t\t\t1.Mens fragrance\t2.Womens fragrance ");
	switch (getch()){
	case '0':
		ecp();
		break;
	case '1':
		mf();
		break;
	case '2':
		wf();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again!");
		perfume();
	}
	}

}
void book(void){
    system("cls");
    system("COLOR B5");
puts("\n\t\t\t\t\t\t\t\t\t\t\t      _________");
puts("\t\t\t\t\t\t\t\t\t\t\t      |       |");
puts("\t\t\t\t\t\t\t\t\t\t\t      | BOOKS |");
puts("\t\t\t\t\t\t\t\t\t\t\t      | ~~~~~ |");
puts("\t\t\t\t\t\t\t\t\t\t\t      |_______|");

	puts("\n\t\t\t\t\t\t\t*********************************** BOOKS *********************************************");
	//puts("");
	//puts("\nThere are some genre for you: \nAccess your desire  Genre PRESSING  number");
	puts("\n\n\t\t\t\t\t\t\t\t0.Art\t1.Biography\n\n\t\t\t\t\t\t\t\t2.Non-Fiction\t3.Fiction\n\n\t\t\t\t\t\t\t\t4.Mystery\t5.Adventure\n\n\t\t\t\t\t\t\t\t6.Romace\t7.Psychology\n\n\t\t\t\t\t\t\t\t8.History\t9.Travel");
	//need switch and function to complete ......
	switch (getch()){
	case '0':
		art();
		break;
	case '1':
		biog();
		break;
	case '2':
		nf();
		break;
	case '3':
		fict();
		break;
	case '4':
		mystery();
		break;
	case '5':
		adv();
		break;
	case '6':
		roman();
		break;
	case '7':
		psy();
		break;
	case '8':
		his();
		break;
	case '9':
		tra();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tWrong button, Try again");
		book();
	}

	}
}
void football(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t************************ FOOTBALL ******************************");
	puts("\n\t\t\t\t\t\t\tWe are offering football accessories with a great price. So get what you want and play with beauty");
	puts("\n\t\t\t\t\t\t\t-----------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Adidas boots X15.1, price: $200.\n\t\t\t\t\t\t\t\t2.Nike boots CR7 price : $240\n\t\t\t\t\t\t\t\t3.Nike boots T22.0, price $185\n\t\t\t\t\t\t\t\t4.Adidas 10M Made to win $ 500");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':{
    st = fopen("cart.txt", "a+");
    fprintf(st,"Adidas boots x15.1\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    football();
    break;

}
case '2':{
        st = fopen("cart.txt", "a+");
    fprintf(st,"Nike boots CR7\n");
    fprintf(st,"%d \n", 240);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    football();
    break;

}
case '3':
    {
           st = fopen("cart.txt", "a+");
    fprintf(st,"Nike boots T22.0, price \n");
    fprintf(st,"%d \n", 185);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    football();
    break;

    }
case '4':{
        st = fopen("cart.txt", "a+");
    fprintf(st,"Adidas 10M made to win\n");
    fprintf(st,"%d \n", 500);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    football();
    break;}
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:{
    puts("\n\t\t\t\t\t\t\tPressed the wrong button. try again!");
    football();
    }

	}
}
void jersey(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------ JERSEY COLLECTION -----------------------");
	puts("\n\t\t\t\t\t\t\tBuy your favourite team jersey to support them in the pitch. Whatever you select its going to cost only $200.");
	puts("\t\t\t\t\t\t\tSo get your favorite team jersey now, league is just about to begin");
	puts("\t\t\t\t\t\t\t-----------------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Argentian National team (Home:MESSI 10)\n\n\t\t\t\t\t\t\t\t2.Brazil National Team(Home:neymar 10) ");
	puts("\n\t\t\t\t\t\t\t\t3.Germany national team (Home)\n\n\t\t\t\t\t\t\t\t4.FC Barcelona (Home)");
	puts("\n\t\t\t\t\t\t\t\t5.Manchster United FC (Home)");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case 'm':
case 'M':
    mainmenu();
    break;
case 'e':
case 'E':
    dend();
    break;
case 'c':
case 'C':
    bill();
    break;
    case '1':{
    st = fopen("cart.txt", "a+");
    fprintf(st,"Argentian National team (Home:MESSI 10)\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    jersey();
    break;
    }
    case '2':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Brazil National Team(Home:neymar 10)\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    jersey();
    break;
        }
    case '3':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Germany national team (Home)\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    jersey();
    break;
        }
        case '4':{
            st = fopen("cart.txt", "a+");
    fprintf(st,"FC Barcelona (Home)\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    jersey();
    break;
    }
    case '5':{st = fopen("cart.txt", "a+");
    fprintf(st,"Manchster United FC (Home)\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    jersey();
    break;
    }
    default:{
    puts("\n\t\t\t\t\t\t\tpressed wrong button try again!");
    jersey();
    }

	}
}
void ele(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t\t\t  ----------------    -----------   ------      ");
puts("\t\t\t\t\t\t\t\t\t\t  |              |    |         |   | MO  |");
puts("\t\t\t\t\t\t\t\t\t\t  |     TV       |    |  XBOX   |   | BI  |");
puts("\t\t\t\t\t\t\t\t\t\t  |              |    |         |   | LE  |");
puts("\t\t\t\t\t\t\t\t\t\t  ----------------    -----------   -------");
	puts("\n\t\t\t\t\t\t\t---------------------- ELECTRONICS ---------------------");
	puts("\n\t\t\t\t\t\t\tSelect what you want");
	puts("\n\t\t\t\t\t\t\t_________________________________________________________");
	puts("\n\t\t\t\t\t\t\t\t1.MOBILE PHONE\t2.Head phones\n\t\t\t\t\t\t\t\t3.Gaming Consol\t4.Laptop\n\t\t\t\t\t\t\t\t5.Other accessories ");
	switch (getch()){
	case '1':
		mobile();
		break;
	case '2':
		hp();
		break;
	case '3':
		gmc();
		break;
	case '4':
		laptop();
		break;
	case '5':
		ota();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
		ele();
	}
	}

}
void tv(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------------ TV ------------------------------\n");
	puts("\n\t\t\t\t\t\t\t\t1. Sony BRAVIA 40inch 60HZ 1080p LED  Smart TV $420");
	puts("\n\t\t\t\t\t\t\t\t2. Sony BRAVIA 48inch 60HZ 1080p LED  Smart TV $580");
	puts("\n\t\t\t\t\t\t\t\t3. Sony BRAVIA 50inch 120HZ 1080p 3D LED Smart TV $798");
	puts("\n\t\t\t\t\t\t\t\t4. Samsung 50inch 60Hz 1080p LED Smart TV $562");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Sony BRAVIA 40inch 60HZ 1080p LED  Smart TV\n");
    fprintf(st,"%d \n", 420);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tv();
    break;}
    case '2':{st = fopen("cart.txt", "a+");
    fprintf(st,"Sony BRAVIA 48inch 60HZ 1080p LED  Smart TV\n");
    fprintf(st,"%d \n", 580);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tv();
    break;
    }
    case '3':{st = fopen("cart.txt", "a+");
    fprintf(st,"Sony BRAVIA 50inch 120HZ 1080p 3D LED Smart TV\n");
    fprintf(st,"%d \n", 798);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tv();
    break;
    }
    case '4':{st = fopen("cart.txt", "a+");
    fprintf(st,"Samsung 50inch 60Hz 1080p LED Smart TV\n");
    fprintf(st,"%d \n", 562);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tv();
    break;}
    case 'm':
    case 'M':
        mainmenu();
        break;
    case 'e':
    case 'E':
        dend();
        break;
    case 'c':
    case 'C':
        bill();
        break;
        default:{
        puts("\n\t\t\t\t\t\t\tWrong button try again!");
        tv();}

	}
}
void cricket(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t********************** CRICKET ******************************\n");
	puts("\n\t\t\t\t\t\t\t\t1.Australia Team Jersey $200\n\t\t\t\t\t\t\t\t2.Bangladesh Team Jersey $20\n\t\t\t\t\t\t\t\t3.Kookabura Cricket Bat $400\n\t\t\t\t\t\t\t\t4.Cricket ball Kookabura $10");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':{st = fopen("cart.txt", "a+");
    fprintf(st,"Australia Team Jersey\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    cricket();
    break;}
    case '2':{
    st = fopen("cart.txt", "a+");
    fprintf(st,"Bangladesh Team Jersey\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    cricket();
    break;}
    case '3':{st = fopen("cart.txt", "a+");
    fprintf(st,"Kookabura Cricket Bat\n");
    fprintf(st,"%d \n", 400);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item added in cart",g);
    cricket();
    break;}
    case '4':{st = fopen("cart.txt", "a+");
    fprintf(st,"Cricket ball Kookabura\n");
    fprintf(st,"%d \n", 10);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    cricket();
    break;}
    case 'm':
    case 'M':
        mainmenu();
        break;
    case 'c':
    case 'C':
        bill();
        break;
    case 'e':
    case 'E':
        dend();
        break;
        default:{
        puts("\n\t\t\t\t\t\t\tPressed the wrong button! Try Again");
        cricket();}
        }

}
void game(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t************************** GAMES ******************************\n");
	//products
	puts("\n\t\t\t\t\t\t\t\t1.Fifa 16 : Feel the game $60\n\t\t\t\t\t\t\t\t2. Call of duty: Black ops II $65");
	puts("\n\t\t\t\t\t\t\t\t3.Witcher 3: Wild Hunt $70 \n\t\t\t\t\t\t\t\t4.Uncharted IV  $65");
	puts("\n\t\t\t\t\t\t\t\t5.Grand Theft Auto V $75.");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Fifa 16 : Feel the game\n");
    fprintf(st,"%d \n", 60);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    game();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Call of duty: Black ops II\n");
    fprintf(st,"%d \n", 65);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    game();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Witcher 3: Wild Hunt\n");
    fprintf(st,"%d \n", 70);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    game();
    break;
    }
case '4':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"Uncharted IV\n");
    fprintf(st,"%d \n", 65);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    game();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Grand Theft Auto V\n");
    fprintf(st,"%d \n", 75);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    game();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
    default:{
    puts("\n\t\t\t\t\t\t\tPressed the wrong button . Try again!");
    game();}


	}

}
void bill(void){
    system("cls");

puts("\n\t\t\t\t\t\t\t\t\t   ____________________________________________");
puts("\t\t\t\t\t\t\t\t\t   |$10,000      PAY TIME       ___________   |");
puts("\t\t\t\t\t\t\t\t\t   |                           |1010101010|   |");
puts("\t\t\t\t\t\t\t\t\t   |                           |0101010101|   |");
puts("\t\t\t\t\t\t\t\t\t   |             MONEY         |0110100011|   |");
puts("\t\t\t\t\t\t\t\t\t   |                           ------------   |");
puts("\t\t\t\t\t\t\t\t\t   |$10,000                        #codeit    |");
puts("\t\t\t\t\t\t\t\t\t   |__________________________________________|");
    st = fopen("cart.txt","r");
    puts("\n\t\t\t\t\t\t\t------------------------------- CART ----------------------------------");
    puts("\n\t\t\t\t\t\t\tSelected product: \n");

int i = 0;
double total = 0;

while(!feof(st)){

fgets(p[i].name, 100, st);
//fflush(stdin);
fscanf(st, "%lf ", &p[i].price);
//fflush(stdin);
//fclose(st);

printf("\n\t\t\t\t\t\t\t\t|%d Product Name: %s \n\t\t\t\t\t\t\t\tPrice :$ %.2lf ",i+1, p[i].name,p[i].price);
total += p[i].price;
i++;
}
if(total >=10000){
    printf("\n\t\t\t\t\t\t\t\t|\tGIft product : Tag Heuer Formula 1: Calibre 16 Automatic Chronograph 44 mm\n\t\t\t\t\t\t\t\t Price:$18281(Not added)");


}

//printf("\nPrice : %.2lf ",p[i].price);
fclose(st);
puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------");
printf("\n\t\t\t\t\t\t\t\tTotal is %.2lf", total);
puts("\n\n\t\t\t\t\t\t\tOur drone will soon be at your Door step with your products");
puts("\n\t\t\t\t\t\t\tIf you don't receive anything then our drone might have been knocked out by Bird on your way home, Don't blame us for this. Go and get the bird");
puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------");
puts("\n\t\t\t\t\t\t\tIf you are Done Press [ENTER] to exit!!. OR you can Press [BACKSPACE] to add more thing in cart");

switch(getch()){
 case '\b':
 case 'm':
 case 'M':
    mainmenu();
    break;
 case '\n':
 case 'e':
 case 'E':
    dend();
    break;
 default:
    dend();


}

}
void watch(void){
    system("cls");
puts("\n\t\t\t\t\t\t\t\t              ________________");
puts("\t\t\t\t\t\t\t\t              |               |");
puts("\t\t\t\t\t\t\t\t    ----------|   TAGHEUER    |----------");
puts("\t\t\t\t\t\t\t\t              |12 <--- .---> 6|");
puts("\t\t\t\t\t\t\t\t    ----------|               |----------");
puts("\t\t\t\t\t\t\t\t              |_______________|");

	puts("\n\t\t\t\t\t\t\t************************** WATCH *********************************");
	puts("\n\t\t\t\t\t\t\t\"Life, its made up of with two things time and love. A watch tells one, but what tells the other? We tell each other and it requires perfect timing.\"");
	puts("\n\t\t\t\t\t\t\tGet your watch for the perfect time");
	puts("\n\n\t\t\t\t\t\t\tPick your desire Brands.");
	puts("\n\t\t\t\t\t\t\t_____________________________________________________________________");
	puts("\n\n\t\t\t\t\t\t\t\t0.***EXCLUSIVE COLLECTIONS***\n\n\t\t\t\t\t\t\t\t1.Rolex\t\t2.Omega\n\n\t\t\t\t\t\t\t\t3.Mont Blanc\t4.TAGHeuer\n\n\t\t\t\t\t\t\t\t5.Hamilton\t6.Seiko\n\n\t\t\t\t\t\t\t\t7.Tissot\t8.Bulova\n\n\t\t\t\t\t\t\t\t9.Cartier");
	switch (getch()){
	case '1':
		rolex();
		break;
	case '2':
		omega();
		break;
	case '3':
		mont();
		break;
	case '4':
		tag(); //
		break;
	case '5':
		hamilton();
		break;
	case '6':
		seiko();
		break;
	case '7':
		tissot();
		break;
	case '8':
		bulova();
		break;
	case '9':
		cartier();
		break;
	case '0':
		ecw();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tWrong button, Taking back to Watch");
			watch();
	}

	}

}
void ecp(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------------------- SPECIAL FRAGRANCE COLLECTION ---------------------------- ");
	puts("\n\t\t\t\t\t\t\t\t1.Clive Christians imperial majesty perfume  $215000");
	puts("\n\t\t\t\t\t\t\t\t2.Hermes perfume 24 Faubourg (Per ounce) $1500");
	puts("\n\t\t\t\t\t\t\t\t3.Jar Perfume The bolt of Lightening (Per ounce) $756 ");
	puts("\n\t\t\t\t\t\t\t\t4.Chanel No. 5 (per ounce) $121.71 ");
	puts("\n\t\t\t\t\t\t\t\t5.Baccarat les larmes sacrees de thebes (per ounce) $6800");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Clive Christians imperial majesty perfume\n");
    fprintf(st,"%d \n", 215000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecp();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Hermes perfume 24 Faubourg (Per ounce)\n");
    fprintf(st,"%d \n", 1500);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecp();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Jar Perfume The bolt of Lightening (Per ounce)\n");
    fprintf(st,"%d \n", 756);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecp();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Chanel No. 5 (per ounce)\n");
    fprintf(st,"%d \n", 121.71);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecp();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Baccarat les larmes sacrees de thebes (per ounce)\n");
    fprintf(st,"%d \n", 6800);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecp();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
    default:{
    puts("\n\t\t\t\t\t\t\tPressed the wrong button . Try again ");
    ecp();
    }

    }

//exclusive perfume collections.still not writing considering storing process..
}
void ecw(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t**************************** SPECIAL WATCH COLLECTION ******************************");
	puts("\n\t\t\t\t\t\t\tPick your one now!!!!!");
	puts("\n\t\t\t\t\t\t\t-------------------------------------------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Chopard 210 carat $25 Million\n\t\t\t\t\t\t\t\t2.Patek Philippe Super Complication $11 Million");
	puts("\n\t\t\t\t\t\t\t\t3.Patek Philippe Ref.1527 $5.6 Million");
	puts("\n\t\t\t\t\t\t\t\t4.Hublot Diamond Watch $5 Million");
	puts("\n\t\t\t\t\t\t\t\t5.Cartier Secret watch Phoenix Decor $2.7 Million\n");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Chopard 210 carat\n");
    fprintf(st,"%d \n", 25000000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecw();
    break;

	}
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Patek Philippe Super Complication\n");
    fprintf(st,"%d \n", 11000000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecw();
    break;
    }
case '3':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"Patek Philippe Ref.1527\n");
    fprintf(st,"%d \n", 5600000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecw();
    break;
    }
case '4':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"Hublot Diamond Watch\n");
    fprintf(st,"%d \n", 5000000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecw();
    break;
    }
case '5':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"Cartier Secret watch Phoenix Decor\n");
    fprintf(st,"%d \n", 2700000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ecw();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:{
    puts("\n\t\t\t\t\t\t\tPressed the wrong button .! Try again");
    ecw();
    }
	}
	//exclusive watch direct prduct... still not writing considering storing process..
}
void help(void){
    system("cls");
	puts("\n\t\t\t\t\t\t\t*********************** HELP ************************\n");
	puts("\n\t\t\t\t\t\t\tSince our website is new may be its going to be a bit rocky experience for you.");
	puts ("\t\t\t\t\t\t\tIf you face any problem leave a feedback So that we can make it better for you.");
    puts("\n\t\t\t\t\t\t\tWe will fix all bugs as soon as possible");

	puts("\n\t\t\t\t\t\t\tWe are here to help you, whatever the matter is\n\n\n");
	puts("\n\t\t\t\t\t\t\t\tIMPORTANT:");
	puts("\n\t\t\t\t\t\t\t\t1.Press M from any where to go back to main menu to select your desire category");
	puts("\n\t\t\t\t\t\t\t\t2.Press E to Exit, you can exit from any where after login just pressing E.");
	puts("\n\t\t\t\t\t\t\t\t3.If you press E it will EXIT.. all your selected items will be lost");
	puts("\n\t\t\t\t\t\t\t\t4.Select your item by pressing the number written in the right side of the product");
	puts("\n\t\t\t\t\t\t\t\t5.if you want to exit before log in CLICK on the [X] button, available on the right top corner of the window");
	puts("\n\t\t\t\t\t\t\t\t6.Press <C> if you are done selecting product , YOU CAN BUY AS MANY PRODUCTS AS YOU WISH!");
	puts("\n\t\t\t\t\t\t\t\t7.To see the product on sale please press <S>");
	//puts("\nSinc")
	//-----------------------------------------------
	puts("\n\t\t\t\t\t\t\tNow if you want to buy something go back to main menu and select your category. OR press <E> to exit");

	switch (getch()){
		case 'm':
		case 'M':
			mainmenu();
			break;
			case'e':
			case'E':
				dend();
				break;
			default:{
				puts("Wrong button! Try out from main menu");
				mainmenu(); }

	}
}

void art(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------------ ART ---------------------------- ");
	puts("\n\t\t\t\t\t\t\t\t1.Ways of seeing by John Berger $18");
	puts("\n\t\t\t\t\t\t\t\t2.The Story of Art by E.H.Gombrich $23");
	puts("\n\t\t\t\t\t\t\t\t3.The Art Book by Phaidon Press $21");
	puts("\n\t\t\t\t\t\t\t\t4.Girl With a pearl Earring by Tracy Chevalier $20");
	puts("\n\t\t\t\t\t\t\t\t5.Understanding Comics: The Invisible Art by Scott McCloud $22.65");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Ways of seeing by John Berger\n");
    fprintf(st,"%d \n", 18);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    art();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Story of Art by E.H.Gombrich\n");
    fprintf(st,"%d \n", 23);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    art();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Art Book by Phaidon Press\n");
    fprintf(st,"%d \n", 21);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    art();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Girl With a pearl Earring by Tracy Chevalier\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    art();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Understanding Comics: The Invisible Art by Scott McCloud\n");
    fprintf(st,"%lf \n", 22.65);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    art();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again!");
        art();
    }

	}

	// art category books
}
void biog(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------- BIOGRAPHY -----------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.The Diary of a young Girl by Anne Frank $20");
	puts("\n\t\t\t\t\t\t\t\t2.Steve Jobs by Walter Isaacson $25");
	puts("\n\t\t\t\t\t\t\t\t3.John Adams by David McCullough $22");
	puts("\n\t\t\t\t\t\t\t\t4.Into The Wild by Jon Krakauer $21");
	puts("\n\t\t\t\t\t\t\t\t5.Celopatra: A Life by Stacy Schiff $25");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"The Diary of a young Girl by Anne Frank\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    biog();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Steve Jobs by Walter Isaacson\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    biog();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"John Adams by David McCullough\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    biog();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Into The Wild by Jon Krakauer\n");
    fprintf(st,"%d \n", 21);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    biog();
    break;
    }
    case '5':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Celopatra: A Life by Stacy Schiff\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    biog();
    break;
        }
    case 'm':
    case 'M':
        mainmenu();
        break;
    case 'c':
    case 'C':
        bill();
        break;
    case 'e':
    case 'E':
        dend();
        break;
    default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button . try Again");
            biog();
        }

	}


	//Biography books
}
void nf(void){
  //  system("cls");
	//non - fiction books
	puts("\n\t\t\t\t\t\t\t--------------------- Non-Fiction ----------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Freakonomics : A Rogue Economics Explose the Hidden Side Of everythin by Steven D.Levitt $25.");
	puts("\n\t\t\t\t\t\t\t\t2.The Immortal Life of Henrietta lacks by Rebecca Skloot $22");
	puts("\n\t\t\t\t\t\t\t\t3.A Short History of Nearly Everything by Bill Bryson $20");
	puts("\n\t\t\t\t\t\t\t\t4.In Cold Blood by Truman Capote $18");
	puts("\n\t\t\t\t\t\t\t\t5.Stiff: The curious Lives of Human Cadavers by Mary Roach $19");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Freakonomics : A Rogue Economics Explose the Hidden Side Of everythin by Steven D.Levitt\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    nf();
    break;
    }
case '2':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"The Immortal Life of Henrietta lacks by Rebecca Skloot\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    nf();
    break;
    }
case '3':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"A Short History of Nearly Everything by Bill\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    nf();
    break;
    }
case '4':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"In Cold Blood by Truman Capote\n");
    fprintf(st,"%d \n", 18);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    nf();
    break;
    }
    case '5':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Stiff: The curious Lives of Human Cadavers by Mary Roach\n");
    fprintf(st,"%d \n", 19);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    nf();
    break;
    }
    case 'm':
    case 'M':
        mainmenu();
        break;
    case 'c':
    case 'C':
        bill();
        break;
    case 'e':
    case 'E':
        dend();
        break;
    default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            nf();
        }


	}

}
void fict(void){
//fiction category books!
//system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------- FICTION -----------------------");
	puts("\n\t\t\t\t\t\t\t\t1.To kill a MockingBird by Harper Lee $20");
	puts("\n\t\t\t\t\t\t\t\t2.The Great Gatsby by F.Scott Fitzgerald $25");
	puts("\n\t\t\t\t\t\t\t\t3.The da Vinci Code by Dan Brown $30");
	puts("\n\t\t\t\t\t\t\t\t4.The Hobbit : Middle-Earth Universe by J.R.R Tolkein $28 ");
	puts("\n\t\t\t\t\t\t\t\t5.The curious Incident of the Dog in the Night-Time by Mark Haddon $15");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"To kill a MockingBird by Harper Lee\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    fict();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Great Gatsby by F.Scott Fitzgerald\n");
    fprintf(st,"%d \n", 30);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    fict();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The da Vinci Code by Dan Brown\n");
    fprintf(st,"%d \n", 19);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    fict();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Hobbit : Middle-Earth Universe by J.R.R Tolkein\n");
    fprintf(st,"%d \n", 28);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    fict();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The curious Incident of the Dog in the Night-Time by Mark Haddon\n");
    fprintf(st,"%d \n", 15);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    fict();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'e':
case 'E':
    dend();
    break;
case 'c':
case 'C':
    bill();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number . try again");
        fict();
    }


	}

}
void mystery(void){
	// mystery books
	//system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------- MYSTERY -----------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Gone Girl by Gillian Flynn $20");
	puts("\n\t\t\t\t\t\t\t\t2.Angels and Demons by Dan Brown $25");
	puts("\n\t\t\t\t\t\t\t\t3.Murder On the orient Express by Agatha Cristie $20");
	puts("\n\t\t\t\t\t\t\t\t4.The Adventures of Sherlock Holmes by Arthur Conan Doyle $35");
	puts("\n\t\t\t\t\t\t\t\t5.The Mysterious Affair at styles by Agatha Cristie $20 ");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Gone Girl by Gillian Flynn\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mystery();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Angels and Demons by Dan Brown\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mystery();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Murder On the orient Express by Agatha Cristie\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mystery();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Adventures of Sherlock Holmes by Arthur Conan Doyle\n");
    fprintf(st,"%d \n", 35);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mystery();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Mysterious Affair at styles by Agatha Cristie\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mystery();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
        mystery();
    }

	}

}
void adv(void){
    //system("cls");
	// adventure books
	puts("\n\t\t\t\t\t\t\t---------------------------- ADVENTURE ------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Harry potter series all book by J.K Rowling $100 ");
	puts("\n\t\t\t\t\t\t\t\t2.The Lighting Thief by Rick Riordan $20");
	puts("\n\t\t\t\t\t\t\t\t3.The Princess Bride by William Goldman $19");
	puts("\n\t\t\t\t\t\t\t\t4.The Three Musketeers by Alexandre Dumans $18");
	puts("\n\t\t\t\t\t\t\t\t5.Lord of the Ring: The Return of the King by J.R.R. Tolkine $26");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){
case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Harry potter series all book by J.K Rowling\n");
    fprintf(st,"%d \n", 100);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    adv();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Lighting Thief by Rick Riordan\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    adv();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Princess Bride by William Goldman\n");
    fprintf(st,"%d \n", 19);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    adv();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Three Musketeers by Alexandre Dumans\n");
    fprintf(st,"%d \n", 18);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    adv();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Lord of the Ring: The Return of the King by J.R.R. Tolkine\n");
    fprintf(st,"%d \n", 26);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    adv();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button.. try again");
        adv();
    }

	}

}
void roman(void){
	//Romance books
	//system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------------- ROMANCE ---------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Twilight by Stephenie Meyer $20");
	puts("\n\t\t\t\t\t\t\t\t2.Fifty Shades of Gray by E.L James $25");
	puts("\n\t\t\t\t\t\t\t\t3.Pride and Prejudice by Jane Austen $22 ");
	puts("\n\t\t\t\t\t\t\t\t4.The Time Traveler's Wife by Audrey niffenegger $25");
	puts("\n\t\t\t\t\t\t\t\t5.A Walk To Remember by Nicholas Sparks $21");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Twilight by Stephenie Meyer\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    roman();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Fifty Shades of Gray by E.L James\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    roman();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Pride and Prejudice by Jane Austen\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    roman();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The Time Traveler's Wife by Audrey niffenegger\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    roman();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"A Walk To Remember by Nicholas Sparks\n");
    fprintf(st,"%d \n", 21);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    roman();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
        roman();
    }

	}

}

void psy(void){
	//psychology books
	//system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------- Psychology -----------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Quite: The Power of Introverts In a world that can't stop Talking by Susan cain $15");
	puts("\n\t\t\t\t\t\t\t\t2.Blink:The Power of Thinking without thinking by Malcolm Gladwell $30");
	puts("\n\t\t\t\t\t\t\t\t3.Thinking, Fast and Slow by Daniel Kahneman $20");
	puts("\n\t\t\t\t\t\t\t\t4.Man's Search for Meaning by Viktor E.Frankl $25");
	puts("\n\t\t\t\t\t\t\t\t5.The Psychopath Test: A journey Through The Madness $22");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Quite: The Power of Introverts In a world that can't stop Talking by Susan cain\n");
    fprintf(st,"%d \n", 15);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    psy();
    break;
    }
case '2':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Blink:The Power of Thinking without thinking by Malcolm Gladwell\n");
    fprintf(st,"%d \n", 30);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    psy();
    break;
    }
case '3':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Thinking, Fast and Slow by Daniel Kahneman\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    psy();
    break;
    }
case '4':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"Man's Search for Meaning by Viktor E.Frankl\n");
    fprintf(st,"%d \n", 25);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    psy();
    break;
    }
case '5':
    {
         st = fopen("cart.txt", "a+");
    fprintf(st,"The Psychopath Test: A journey Through The Madness\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    psy();
    break;
    }
case 'e':
case 'E':
    dend();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'm':
case 'M':
    mainmenu();
    break;
default:
    {

        puts("\n\t\t\t\t\t\t\tWrong button! try again");
        psy();
    }
	}
}

void his(void){
	//History books
	//system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------------- HISTORY --------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.1776 by David McCullough $18");
	puts("\n\t\t\t\t\t\t\t\t2.The Rise and Fall of the Third Reich: A History of Nazi Germany by William L.Shirer $20");
	puts("\n\t\t\t\t\t\t\t\t3.Salt: A World History by Mark Kurlansky $11");
	puts("\n\t\t\t\t\t\t\t\t4.The phillers of the Earth by ken Follett $22");
	puts("\n\t\t\t\t\t\t\t\t5.Voyager by Diana Gabaldon $15");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"1776 by David McCullough\n");
    fprintf(st,"%d \n", 18);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    his();
    break;
    }
case '2':
    {
     st = fopen("cart.txt", "a+");
    fprintf(st,"The Rise and Fall of the Third Reich: A History of Nazi Germany by William L.Shirer\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    his();
    break;
    }
case '3':
    {

    st = fopen("cart.txt", "a+");
    fprintf(st,"Salt: A World History by Mark Kurlansky\n");
    fprintf(st,"%d \n", 11);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    his();
    break;
    }
case '4':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"The phillers of the Earth by ken Follett\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    his();
    break;
    }
case '5':
    {
    st = fopen("cart.txt", "a+");
    fprintf(st,"Voyager by Diana Gabaldon\n");
    fprintf(st,"%d \n", 15);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    his();
    break;}

case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
    case 'E':
    case 'e':
        dend();
        break;
    default:
        {

            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            his();
        }
	}

}

void tra(void){
	//travel books
	//system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------------- TRAVEL ------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.A Walk in the Woods: Rediscover America on the Appalachian Trail by Bill Bryson $22");
	puts("\n\t\t\t\t\t\t\t\t2.Eat, Pray, Love by Elizabeth Gilbert $18");
	puts("\n\t\t\t\t\t\t\t\t3.Neither Here nor There:Travels in Europe by Bill Bryson $19");
	puts("\n\t\t\t\t\t\t\t\t4.Under The Tuscan Sun by Frances Mayes $22");
	puts("\n\t\t\t\t\t\t\t\t5.1000 Place to see before you Die by Patricia Schultz $22");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"A Walk in the Woods: Rediscover America on the Appalachian Trail by Bill Bryson\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tra();
    break;
        }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Eat, Pray, Love by Elizabeth Gilbert\n");
    fprintf(st,"%d \n", 18);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tra();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Neither Here nor There:Travels in Europe by Bill Bryson\n");
    fprintf(st,"%d \n", 19);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tra();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Under The Tuscan Sun by Frances Mayes\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tra();
    break;
    }
case '5':
    {

        st = fopen("cart.txt", "a+");
    fprintf(st,"1000 Place to see before you Die by Patricia Schultz\n");
    fprintf(st,"%d \n", 22);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    tra();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tWrong button. try again");
        tra();
    }
	}
}
// after this line there are some watch brand function, we wil use these function to show both women and men watch .
void rolex(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------- ROLEX ------------------------");
	//Rolex watch
	puts("\n\t\t\t\t\t\t\t\t1.Rolex Sky Dweller Sundust 18kt Gold Mens Wathc $38,900");
	puts("\n\t\t\t\t\t\t\t\t2.Rolex Datejust Rhodium Diamond 18kt White Gold Men $8995 ");
	puts("\n\t\t\t\t\t\t\t\t3.Rolex Day-Date Gold with Diamond and Ruby Women Watch $42700");
	puts("\n\t\t\t\t\t\t\t\t4.Rolex GMT Master II $8000");
	puts("\n\t\t\t\t\t\t\t\t5.Rolex Ladys President New Style Heavy Band 18kt yellow gold $19500");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Rolex Sky Dweller Sundust 18kt Gold Mens Watch\n");
            fprintf(st,"%d \n", 38900);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            rolex();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Rolex Datejust Rhodium Diamond 18kt White Gold Men\n");
            fprintf(st,"%d \n", 8995);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            rolex();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Rolex Day-Date Gold with Diamond and Ruby Women Watch\n");
            fprintf(st,"%d \n", 42700);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            rolex();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Rolex GMT Master II\n");
            fprintf(st,"%d \n", 8000);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            rolex();
            break;
        }
        case '5':
        {

            st = fopen("cart.txt", "a+");
            fprintf(st,"Rolex Ladys President New Style Heavy Band 18kt yellow gold\n");
            fprintf(st,"%d \n", 19500);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 5 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            rolex();
            break;
        }
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            rolex();
        }
    }


}
void omega(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------- OMEGA -------------------------");
	//omega watch
	puts("\n\t\t\t\t\t\t\t\t1.Omega James Bond Spectre Movie Mens watch $7295");
	puts("\n\t\t\t\t\t\t\t\t2.Omega De Ville prestige Silver Black Leather Watch $2690");
	puts("\n\t\t\t\t\t\t\t\t3.Omega Womens 123.10.12 Constellation Silver $2050");
	puts("\n\t\t\t\t\t\t\t\t4.Omega Womens 123.15.27.60.51.001 Black Guilloche $5502");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Omega James Bond Spectre Movie Mens watch\n");
            fprintf(st,"%d \n", 7295);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            omega();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Omega De Ville prestige Silver Black Leather Watch\n");
            fprintf(st,"%d \n", 2690);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            omega();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Omega Womens 123.10.12 Constellation Silver\n");
            fprintf(st,"%d \n", 2050);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            omega();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Omega Womens 123.15.27.60.51.001 Black Guilloche\n");
            fprintf(st,"%d \n",5502);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            omega();
            break;
        }

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            omega();
        }
    }

}
void mont(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------- MONT BLANC -------------------------");
	//mont blanc
	puts("\n\t\t\t\t\t\t\t\t1.Montblanc Star 4810 Automatic $2500\n\t\t\t\t\t\t\t\t2.Montblanc \"Homage to Nicolas Rieussec\" $7403");
	puts("\n\t\t\t\t\t\t\t\t3.Montblanc TimeWalker ChronoVoyager UTC $3400\n\t\t\t\t\t\t\t\t4.Montblanc Heritage Chronométrie Quantième Complet $2600");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Montblanc Star 4810 Automatic\n");
            fprintf(st,"%d \n", 2500);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            mont();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Montblanc \"Homage to Nicolas Rieussec\"\n");
            fprintf(st,"%d \n", 7403);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            mont();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Montblanc TimeWalker ChronoVoyager UTC\n");
            fprintf(st,"%d \n", 3400);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            mont();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Montblanc Heritage Chronométrie Quantième Complet\n");
            fprintf(st,"%d \n",2600);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            mont();
            break;
        }

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            mont();
        }
    }

}
void tag(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------- TAG HEUER --------------------------");
	//tag heuer watch
	puts("\n\t\t\t\t\t\t\t\t1.Tag Heuer Formula 1: Calibre 16 Automatic Chronograph 44 mm $18281");
	puts("\n\t\t\t\t\t\t\t\t2.Tag Heuer Carrera CALIBRE 6 AUTOMATIC WATCH 39MM $2395");
	puts("\n\t\t\t\t\t\t\t\t3.TAG Heuer Men's WAS2110.FC6180 Carrera Watch With Black Leather Band $2300");
	puts("\n\t\t\t\t\t\t\t\t4.AQUARACER 300M CALIBRE 5 AUTOMATIC WATCH 41MM JERMEY LIN SPECIAL EDITION $10000");
	puts("\n\t\t\t\t\t\t\t\t5.Tag Heuer Formula I Steel and Ceramic 37MM $1450");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Tag Heuer Formula 1: Calibre 16 Automatic Chronograph 44 mm\n");
            fprintf(st,"%d \n", 18281);
            fclose(st);
            puts("\n\t\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t\t%d item  added in Cart",g);
            tag();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Tag Heuer Carrera CALIBRE 6 AUTOMATIC WATCH 39MM\n");
            fprintf(st,"%d \n", 2395);
            fclose(st);
            puts("\n\t\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t\t%d item  added in Cart",g);
            tag();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"TAG Heuer Men's WAS2110.FC6180 Carrera Watch With Black Leather Band\n");
            fprintf(st,"%d \n", 2300);
            fclose(st);
            puts("\n\t\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t\t%d item  added in Cart",g);
            tag();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"AQUARACER 300M CALIBRE 5 AUTOMATIC WATCH 41MM JERMEY LIN SPECIAL EDITION \n");
            fprintf(st,"%d \n", 10000);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tag();
            break;
        }
        case '5':
        {

            st = fopen("cart.txt", "a+");
            fprintf(st,"Tag Heuer Formula I Steel and Ceramic 37MM\n");
            fprintf(st,"%d \n", 1450);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 5 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tag();
            break;
        }
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            tag();
        }
    }
}
void hamilton(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------- HAMILTON ------------------------");
	//hamilton watch
	puts("\n\t\t\t\t\t\t\t\t1.JazzMaster GMT Auto H32685731 $1737.50 ");
	puts("\n\t\t\t\t\t\t\t\t2.Khaki Aviation Worldtimer Chrono Quartz H76714335 $1600");
	puts("\n\t\t\t\t\t\t\t\t3. Khaki Aviation X - Wind Auto Chrono LE $1766");
    puts("\n\t\t\t\t\t\t\t\t4.JazzmasterLady Auto H1564625 $1890.66");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

    switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"JazzMaster GMT Auto H32685731\n");
            fprintf(st,"%lf \n", 1737.50);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            hamilton();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Khaki Aviation Worldtimer Chrono Quartz H76714335\n");
            fprintf(st,"%d \n", 1600);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            hamilton();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Khaki Aviation X - Wind Auto Chrono LE\n");
            fprintf(st,"%d \n", 1766);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            hamilton();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"JazzmasterLady Auto H1564625\n");
            fprintf(st,"%lf \n", 1890.66);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            hamilton();
            break;
        }

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            hamilton();
        }
    }
}
void seiko(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------- SEIKO --------------------------");
	//seiko watch
	puts("\n\t\t\t\t\t\t\t\t1.Perpetual Solar Chronograph V198 $1200");
	puts("\n\t\t\t\t\t\t\t\t2.Kinetic GMT 5M85 $500");
	puts("\n\t\t\t\t\t\t\t\t3.Kinetic 3 Hands Calendar 5M82 $3200");
	puts("\n\t\t\t\t\t\t\t\t4.Automatic 4R38 $2500");
	puts("\n\t\t\t\t\t\t\t\t5.Kinetic Perpetual $800");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Perpetual Solar Chronograph V198\n");
            fprintf(st,"%d \n", 1200);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            seiko();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Kinetic GMT 5M85\n");
            fprintf(st,"%d \n", 500);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            seiko();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Kinetic 3 Hands Calendar 5M82\n");
            fprintf(st,"%d \n", 3200);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            seiko();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Automatic 4R38 \n");
            fprintf(st,"%d \n", 2500);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            seiko();
            break;
        }
        case '5':
        {

            st = fopen("cart.txt", "a+");
            fprintf(st,"Kinetic Perpetual\n");
            fprintf(st,"%d \n", 800);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 5 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            seiko();
            break;
        }
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            seiko();
        }
    }
}
void tissot(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------- TISSOT --------------------------");
	//tissot watch
	puts("\n\t\t\t\t\t\t\t\t1.Tissot Watch T044.417.2 $360");
	puts("\n\t\t\t\t\t\t\t\t2.Tissot Womens TIST033.125.155.08.29 $200");
	puts("\n\t\t\t\t\t\t\t\t3.Tissot Men's T063.610.16.037.00 Silver $230");
	puts("\n\t\t\t\t\t\t\t\t4.Tissot T0636171603700 Tradition Men's Chrono Quartz Silver $310");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Tissot Watch T044.417.2\n");
            fprintf(st,"%d \n", 360);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tissot();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Tissot Womens TIST033.125.155.08.29\n");
            fprintf(st,"%d \n", 200);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tissot();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Tissot Men's T063.610.16.037.00 Silver \n");
            fprintf(st,"%d \n", 230);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tissot();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Tissot T0636171603700 Tradition Men's Chrono Quartz Silver \n");
            fprintf(st,"%d \n",310);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            tissot();
            break;
        }

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            tissot();
        }
    }
}
void bulova(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------------- BULOVA -----------------------");
	//bulova watch
	puts("\n\t\t\t\t\t\t\t\t1.Bulova Men's 96B175 Precisionist Stainless Steel $410.00");
	puts("\n\t\t\t\t\t\t\t\t2.Bulova Women's 96R19 Diamond Chronograph $132.00");
	puts("\n\t\t\t\t\t\t\t\t3.Bulova Men's 96C105 Black Dial Bracelet Watch $190");
	puts("\n\t\t\t\t\t\t\t\t4.Bulova Men's 98H51 Leather Dress Watch $100");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Bulova Men's 96B175 Precisionist Stainless Steel\n");
            fprintf(st,"%d \n", 410);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            bulova();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Bulova Women's 96R19 Diamond Chronograph\n");
            fprintf(st,"%d \n", 132);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            bulova();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Bulova Men's 96C105 Black Dial Bracelet Watch\n");
            fprintf(st,"%d \n", 190);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            bulova();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Bulova Men's 98H51 Leather Dress Watch\n");
            fprintf(st,"%d \n", 100);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            bulova();
            break;
        }

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            bulova();
        }
    }
}

void cartier(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------- CARTIER ----------------------");
	//Cartier watch
	puts("\n\t\t\t\t\t\t\t\t1.Cartier Women's W6700155 Ronde Solo Black $2200");
	puts("\n\t\t\t\t\t\t\t\t2.Cartier Women's W69010Z4 Ballon Bleu Stainless Steel $3816");
	puts("\n\t\t\t\t\t\t\t\t3.Cartier Women's W69007Z3 Ballon Bleu Stainless Steel and 18K Gold $6097.01");
	puts("\n\t\t\t\t\t\t\t\t4.Cartier Midsize W69011Z4 Ballon Bleu Stainless Steel $400");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

        case '1':
        {st = fopen("cart.txt", "a+");
            fprintf(st,"Cartier Women's W6700155 Ronde Solo Black\n");
            fprintf(st,"%d \n", 2200);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 1 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            cartier();
            break;
        }
        case '2':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Cartier Women's W69010Z4 Ballon Bleu Stainless Steel\n");
            fprintf(st,"%d \n", 3816);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 2 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            cartier();
            break;
        }
        case '3':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Cartier Women's W69007Z3 Ballon Bleu Stainless Steel and 18K Gold\n");
            fprintf(st,"%lf \n", 6097.01);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 3 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
        cartier();
            break;
        }
        case '4':
        {
            st = fopen("cart.txt", "a+");
            fprintf(st,"Cartier Midsize W69011Z4 Ballon Bleu Stainless Steel  \n");
            fprintf(st,"%d \n", 400);
            fclose(st);
            puts("\n\t\t\t\t\t\t\tItem 4 is selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            cartier();
            break;
        }
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tWrong button. try again");
            cartier();
        }
    }
}
void mf(void){
    system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------- MEN FRAGRANCE ---------------------");
	//men perfume brand. Their function starts with b
	puts("\n\t\t\t\t\t\t\t\t1.Hugo Boss\t2.Gucci\n\t\t\t\t\t\t\t\t3.Chanel\t4.Versace\n\t\t\t\t\t\t\t\t5.Guess Seductive");
	switch (getch()){
	case '1':
		bhbp();
		break;
	case '2':
		bgp();
		break;
	case '3':
		bchanel();
		break;
	case '4':
		bversace();
		break;
	case '5':
		bguess();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button, try again");
		mf();
	}


	}
}
void wf(void){
    system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------- WOMEN FRAGRANCE --------------------");
    puts("\n\t\t\t\t\t\t\tA woman who doesnt wear perfume has no future ~ CoCo Chanel");

	puts("\n\t\t\t\t\t\t\t\t1.Jimmy Choo\t2.Paco Rabanne\n\t\t\t\t\t\t\t\t3.Juicy Couture\t4.Burberry\n\t\t\t\t\t\t\t\t5.Chanel\t6.Calvin Klein\n\t\t\t\t\t\t\t\t7.Bvlgari\t8.Ralph Lauren");

	switch (getch()) {
	case '1':
		wJCp();
		break;
	case '2':
		wPRp();
		break;
	case '3':
		wjuicyp();
		break;
	case '4':
		wbbp();
		break;
	case '5':
		wchanelp();
		break;
	case '6':
		wCKp();
		break;
	case '7':
		wbvlp();
		break;
	case '8':
		wRLp();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
   default:{
		puts("\n\t\t\t\t\t\t\tSorry!You have pressed the wrong button.Try again!");
		wf();
	}

	}
}

//------------------------
void bgucci(void){
    //system("cls");
	// boys gucci product.
	puts("\n\t\t\t\t\t\t\t---------------------------------- GUCCI ------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Checked flannel heritage suit $3190");
	puts("\n\t\t\t\t\t\t\t\t2.Metal tag leather bi-fold wallet $250");
	puts("\n\t\t\t\t\t\t\t\t3.Havana acetate square-frame sunglasses $375");
	puts("\n\t\t\t\t\t\t\t\t4.Cotton piquet polo with leather label and piping details $495");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

	case '1':{

	st = fopen("cart.txt", "a+");
    fprintf(st,"Checked flannel heritage suit\n");
    fprintf(st,"%d \n", 3190);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgucci();
    break;
	}
	case '2':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Metal tag leather bi-fold wallet\n");
    fprintf(st,"%d \n", 250);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgucci();
    break;
        }
    case '3':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Havana acetate square-frame sunglasses\n");
    fprintf(st,"%d \n", 375);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgucci();
    break;
        }
    case '4':
        {
            st = fopen("cart.txt", "a+");
    fprintf(st,"Cotton piquet polo with leather label and piping details\n");
    fprintf(st,"%d \n", 495);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 is selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgucci();
    break;
        }
    case 'm':
    case 'M':
        mainmenu();
        break;
    case 'c':
    case 'C':
        bill();
        break;
    case 'e':
    case 'E':
        dend();
        break;
    default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button.. try again");
            bgucci();
        }

	}
}
void bhermes(void){
    //system("cls");
	// boys hermes from paris
	puts("\n\t\t\t\t\t\t\t-------------------------------- HERMES --------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Aller Retour mens scarf $530");
	puts("\n\t\t\t\t\t\t\t\t2.Shirt plain cotton poplin $480");
	puts("\n\t\t\t\t\t\t\t\t3.Boston Summer Cover pleated bermuda shorts $760");
	puts("\n\t\t\t\t\t\t\t\t4.T-Shirt with pocket $345");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

case '1':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Aller Retour mens scarf\n");
    fprintf(st,"%d \n", 530);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhermes();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Shirt plain cotton poplin\n");
    fprintf(st,"%d \n", 480);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhermes();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Boston Summer Cover pleated bermuda shorts\n");
    fprintf(st,"%d \n", 760);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhermes();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"T-Shirt with pocket\n");
    fprintf(st,"%d \n", 345);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhermes();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. try again");
        bhermes();
    }




	}
}

void bhugob(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------------ HUGO BOSS---------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.BOSS HUGO BOSS Men's Short Sleeve V-Neck T-Shirt UPF 50+ $50");
	puts("\n\t\t\t\t\t\t\t\t2.'Jason' | Slim Fit, Italian Cotton Patterned Dress Shirt by BOSS $175");
	puts("\n\t\t\t\t\t\t\t\t3.ClasseE' | Regular Fit, Cotton Checked Shirt by BOSS Orange $135");
	puts("\n\t\t\t\t\t\t\t\t4.'Jason' | Slim Fit, Spread Collar Cotton Dress Shirt by BOSS $235");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"BOSS HUGO BOSS Men's Short Sleeve V-Neck T-Shirt UPF 50+\n");
    fprintf(st,"%d \n", 50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhugob();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"'Jason' | Slim Fit, Italian Cotton Patterned Dress Shirt by BOSS\n");
    fprintf(st,"%d \n", 175);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhugob();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"ClasseE' | Regular Fit, Cotton Checked Shirt by BOSS Orange\n");
    fprintf(st,"%d \n", 135);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhugob();
    break;
    }
case '4':{
    st = fopen("cart.txt", "a+");
    fprintf(st,"'Jason' | Slim Fit, Spread Collar Cotton Dress Shirt by BOSS\n");
    fprintf(st,"%d \n", 235);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhugob();
    break;}
case 'm':
case 'M':
    mainmenu();
    break;
case 'C':
case 'c':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
        bhugob();
    }



	}
}
void bca(void){
	//  boys C&A product
	//system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------------------- C & A -------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Biker jacket $600");
	puts("\n\t\t\t\t\t\t\t\t2.Schlichtes Shirt aus 100% Baumwolle Color:Amber $600");
	puts("\n\t\t\t\t\t\t\t\t3.The slim Schmales Jeans $3000");
	puts("\n\t\t\t\t\t\t\t\t4.The straight 5 Pocket jeans $3000");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

	switch(getch()){

case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Biker jacket\n");
    fprintf(st,"%d \n", 600);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bca();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Schlichtes Shirt aus 100% Baumwolle Color:Amber\n");
    fprintf(st,"%d \n", 600);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bca();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The slim Schmales Jeans\n");
    fprintf(st,"%d \n", 3000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bca();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"The straight 5 Pocket jeans\n");
    fprintf(st,"%d \n", 300);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bca();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. try again");
        bca();
    }


	}
}
void barmani(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------------------- ARMANI --------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Suit in stretch wool satin $1495.00");
	puts("\n\t\t\t\t\t\t\t\t2.Slim fit shirt in stretch cotton polin $295");
	puts("\n\t\t\t\t\t\t\t\t3.CASHMERE JACKET $2525");
	puts("\n\t\t\t\t\t\t\t\t4.Slim fit medium wash jeans $395.0");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Suit in stretch wool satin\n");
    fprintf(st,"%d \n", 1495);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    barmani();
    break;
    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Slim fit shirt in stretch cotton polin\n");
    fprintf(st,"%d \n", 295);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    barmani();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"CASHMERE JACKET\n");
    fprintf(st,"%d \n", 2525);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    barmani();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Slim fit medium wash jeans\n");
    fprintf(st,"%d \n", 395);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    barmani();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong button. try again!");
        barmani();
    }


	}

}
void bck(void){
	// boys calvin klein
	//system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------------------- CALVIN KLEIN ----------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Calvin Klein Men's 3 Pack Cotton Classics Short Sleeve Crew Neck T-Shirt $20");
	puts("\n\t\t\t\t\t\t\t\t2.Calvin Klein Jeans Men's Short Sleeve Wash Story V-Neck $40");
	puts("\n\t\t\t\t\t\t\t\t3.Calvin Klein Jeans Men's Reverse Slub Henley $39.50");
	puts("\n\t\t\t\t\t\t\t\t4.Calvin Klein Jeans Men's Blotch Print Plaid Short Sleeve Woven $60");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {
                st = fopen("cart.txt", "a+");
    fprintf(st,"Calvin Klein Men's 3 Pack Cotton Classics Short Sleeve Crew Neck T-Shirt\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bck();
    break;
    }
case '2':
    {
                st = fopen("cart.txt", "a+");
    fprintf(st,"Calvin Klein Jeans Men's Short Sleeve Wash Story V-Neck\n");
    fprintf(st,"%d \n", 40);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bck();
    break;
    }
case '3':
    {
                st = fopen("cart.txt", "a+");
    fprintf(st,"Calvin Klein Jeans Men's Reverse Slub Henley\n");
    fprintf(st,"%lf \n", 39.50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bck();
    break;
    }
case '4':
    {
                st = fopen("cart.txt", "a+");
    fprintf(st,"Calvin Klein Jeans Men's Blotch Print Plaid Short Sleeve Woven\n");
    fprintf(st,"%d \n", 60);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bck();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
    puts("\n\t\t\t\t\t\t\tPressed the Wrong button. Try again");
    bck();
    }

	}
}
void brp(void){
// boys polo ralph lauren product
//system("cls");
puts("\n\t\t\t\t\t\t\t-------------------------------- RALPH LAUREN ------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Black label Coated pilot jacket $995.0");
	puts("\n\t\t\t\t\t\t\t\t2.Black label Speed biker jacket $795");
	puts("\n\t\t\t\t\t\t\t\t3.Solid Peau de soie Tie $155");
	puts("\n\t\t\t\t\t\t\t\t4.Soft gents card case $95");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Black label Coated pilot jacket\n");
    fprintf(st,"%d \n", 995);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    brp();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Black label Speed biker jacket\n");
    fprintf(st,"%d \n", 795);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    brp();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Solid Peau de soie Tie\n");
    fprintf(st,"%d \n", 155);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    brp();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Soft gents card case\n");
    fprintf(st,"%d \n", 95);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    brp();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        brp();
    }

	}
}
void badidas(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------ ADIDAS COLLECTION FOR MEN -------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Ultra Boost Shoes $180\n\t\t\t\t\t\t\t\t2.Solar Boost Shoes $100");
	puts("\n\t\t\t\t\t\t\t\t3.Tubular Moc Runner $110\n\t\t\t\t\t\t\t\t4.ZX 8000 Bost $140");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Ultra Boost Shoes\n");
    fprintf(st,"%d \n", 180);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    badidas();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Solar Boost Shoes\n");
    fprintf(st,"%d \n", 100);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    badidas();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Tubular Moc Runner\n");
    fprintf(st,"%d \n", 110);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    badidas();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"ZX 8000 Bost\n");
    fprintf(st,"%d \n", 140);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    badidas();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        badidas();
    }

	}

	// boys adidas shoes
}

void bnike(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------- NIKE BOYS COLLECTION -----------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Jordan Superfly $150\n\t\t\t\t\t\t\t\t2.Nike Air Max 95 Ultra $185");
	puts("\n\t\t\t\t\t\t\t\t3.Nike Zoom Penny VI Premium $185\n\t\t\t\t\t\t\t\t4.Nike Rosh One $85\n\t\t\t\t\t\t\t\t5.LeBron 12 EXT iD $295");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Jordan Superfly\n");
    fprintf(st,"%d \n", 150);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bnike();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Nike Air Max 95 Ultra\n");
    fprintf(st,"%d \n", 185);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bnike();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Nike Zoom Penny VI Premium\n");
    fprintf(st,"%d \n", 185);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bnike();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Nike Rosh One \n");
    fprintf(st,"%d \n", 85);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bnike();
    break;
    }
case '5':
    {
        st = fopen("cart.txt", "a+");
        fprintf(st,"5.LeBron 12 EXT iD\n ");
        fprintf(st, "%d \n", 295);
        fclose(st);
        puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
        g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
        bnike();
        break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bnike();
    }

	}
}
//-------------------------------------
void bhbp(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------ HUGO BOSS PERFUME FOR MEN ----------------------");
	puts("\n\t\t\t\t\t\t\t\t1.EAU DE $45\n\t\t\t\t\t\t\t2.Boss in Motion $40\n\t\t\t\t\t\t\t\t3.WMU Hugo $52\n\t\t\t\t\t\t\t\t4.EAU DE: Just different $50");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"EAU DE\n");
    fprintf(st,"%d \n", 45);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhbp();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Boss in Motion\n");
    fprintf(st,"%d \n", 40);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhbp();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"WMU Hugo\n");
    fprintf(st,"%d \n", 52);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhbp();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"EAU DE: Just different\n");
    fprintf(st,"%d \n", 50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bhbp();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bhbp();
    }

	}
	// boys hugo boss perfume
}
void bgp(void){
	// boys gucci perfume
	//system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------------- Gucci  Perfume -----------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Gucci pour Homme 50ml $68");
	puts("\n\t\t\t\t\t\t\t\t2.Gucci sport pour homme 50ml eau de $68");
	puts("\n\t\t\t\t\t\t\t\t3.Gucci pour homme woody chypre travel spray 50ml $55");
	puts("\n\t\t\t\t\t\t\t\t4.Gucci Made to measure 90ml $90");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Gucci pour Homme 50ml\n");
    fprintf(st,"%d \n", 68);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgp();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Gucci sport pour homme 50ml eau de\n");
    fprintf(st,"%d \n", 68);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
bgp();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Gucci pour homme woody chypre travel spray 50ml\n");
    fprintf(st,"%d \n", 55);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgp();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Gucci Made to measure 90ml\n");
    fprintf(st,"%d \n", 90);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bgp();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bgp();
    }

}
}
void bchanel(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------------Chanel for HIM ------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.BLEU DE CHANEL $90.00");
	puts("\n\t\t\t\t\t\t\t\t2.ALLURE HOMME $70");
	puts("\n\t\t\t\t\t\t\t\t3.ALLURE HOMME SPORT EAU EXTREME $80");
	puts("\n\t\t\t\t\t\t\t\t4.ALLURE HOMME SPORT $94");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"BLEU DE CHANEL\n");
    fprintf(st,"%d \n", 90);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bchanel();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"ALLURE HOMME\n");
    fprintf(st,"%d \n", 70);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bchanel();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"ALLURE HOMME SPORT EAU EXTREME\n");
    fprintf(st,"%d \n", 80);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bchanel();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"ALLURE HOMME SPORT\n");
    fprintf(st,"%d \n", 94);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bchanel();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bchanel();
    }

}
}
void bversace(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------------------- VERSACE -----------------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.OUD NOIR $150");
	puts("\n\t\t\t\t\t\t\t\t2.Versace Eros Eau de Toilette Spray for Men, 3.4 Fluid Ounce $46.97");
	puts("\n\t\t\t\t\t\t\t\t3.Man Eau Fraiche Eau De Toilette Spray Men by Versace, 6.7 Ounce $59.0");
	puts("\n\t\t\t\t\t\t\t\t4.Versace Signature By Gianni Versace Eau-de-toilette Spray for Men, 6.70-Fluid Ounce $49.49");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"OUD NOIR\n");
    fprintf(st,"%d \n", 150);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bversace();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Versace Eros Eau de Toilette Spray for Men, 3.4 Fluid Ounce\n");
    fprintf(st,"%lf \n", 46.97);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bversace();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Man Eau Fraiche Eau De Toilette Spray Men by Versace, 6.7 Ounce\n");
    fprintf(st,"%d \n", 59);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bversace();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Versace Signature By Gianni Versace Eau-de-toilette Spray for Men, 6.70-Fluid Ounce\n");
    fprintf(st,"%lf \n", 49.49);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bversace();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bversace();
    }

}
}
void bguess(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------------------------- GUESS SEDUCTIVE ----------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Guess Seductive Men EDT spray 3.4 Ounce $22.34");
	puts("\n\t\t\t\t\t\t\t\t2.Guess Seductive Homme BLUE 3.4 Ounce $20.89");
	puts("\n\t\t\t\t\t\t\t\t3.Guess Seductive Homme 3 Piece Set $29.99");
	puts("\n\t\t\t\t\t\t\t\t4.Guess seductive homme Blue 3.4 oz $29.88");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Guess Seductive Men EDT spray 3.4 Ounce\n");
    fprintf(st,"%lf \n", 22.34);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bguess();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Guess Seductive Homme BLUE 3.4 Ounce\n");
    fprintf(st,"%lf \n", 20.89);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bguess();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Guess Seductive Homme 3 Piece Set\n");
    fprintf(st,"%lf \n", 29.99);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bguess();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Guess seductive homme Blue 3.4 oz\n");
    fprintf(st,"%lf \n", 29.88);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bguess();
    break;
    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bguess();
    }

}


}
void dend(void){
    system("cls");
	// this function will exit the program by taking review and feedback.
	st = fopen("cart.txt", "w");//This line is just to erase everything from cart after paying bill
	fclose(st);
	puts("\n\n\n__________________________________________________________________________________\n");
	char star[10];
	char fdb[500];
	FILE *re;
	puts("\nThanks for shopping with us. Hope you have got what you wanted.");
	puts("\nRate us putting star! (in scale of 5)....");
	gets(star);
	puts("\nGive us your feedback :");// may be we can add a  file to make copy of feed back from user so that we can review it later for real!!!
	gets(fdb);
	re = fopen("review.txt", "a+");
	fprintf(re, "%s\n", fdb);
	fclose(re);
	puts("\nThanks for your feedback we will review it later.");
}
void menshoe(void){
    system("cls");
//mens shoe brands
	puts("\n\t\t\t\t\t\t\t********************* SHOES FOR MEN ***********************");
	puts("\n\t\t\t\t\t\t\t\1.Nike\t\t2.Adidas\n\t\t\t\t\t\t\t\t3.Puma\t4.Moreschi\n\t\t\t\t\t\t\t\t5.Gucci");
	switch (getch()){
	case '1':
		bnike();
		break;
	case '2':
		badidas();
		break;
	case '3':
		bspuma();
		break;
	case '4':
		bsmoreschi();
		break;
	case '5':
		bsgucci();
		break;
	case 'm':
	case'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed wrong button Select correctly");
		menshoe();

	}

	}
}

void womenshoe(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t*********************LUXURY SHOES FOR WOMEN*******************");
    puts("\n\t\t\t\t\t\t\tÔGive a girl the right shoes, and she can conquer the world.Õ Ð Marilyn Monroe");
	puts("\n\t\t\t\t\t\t\t\t1.Gucci\t2.Louis Vuitton\n\t\t\t\t\t\t\t\t3.Christina Louboutin\t4.Jimmy Choo\n\t\t\t\t\t\t\t\t5.Manolo Blahnik");
	switch (getch()) {
	case '1':
		wguccis();
		break;
	case '2':
		wLVs();
		break;
	case '3':
		wCLs();
		break;
	case '4':
		wJCs();
		break;
	case '5':
		wMBs();
		break;
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tSorry!You have pressed the wrong button.Try again!");
		womenshoe();
	}

	}
}

void mobile(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------ MOBILE PHONE -------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Blackberry Classic $349.50\n\t\t\t\t\t\t\t\t2.iPhone 6 64GB Space Gray $805");
	puts("\n\t\t\t\t\t\t\t\t3.Samsung Galaxy S6 Black $575\n\t\t\t\t\t\t\t\t4.Microsoft Lumia 930 Orange $340");
	puts("\n\t\t\t\t\t\t\t5.Motorola Nexus 6 $500");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
		switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Blackberry Classic\n");
    fprintf(st,"%lf \n", 349.50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mobile();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"iPhone 6 64GB Space Gray\n");
    fprintf(st,"%d \n", 805);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mobile();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Samsung Galaxy S6 Black\n");
    fprintf(st,"%d \n", 575);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mobile();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Microsoft Lumia 930 Orange\n");
    fprintf(st,"%d \n", 240);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
  printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mobile();
    break;
    }
case '5':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Motorola Nexus 6\n");
    fprintf(st,"%d \n", 500);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    mobile();
    break;

    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        mobile();
    }

}

}
void hp(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------------ HEAD PHONE --------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Skull candy PlYR 1 Head phone $150");
	puts("\n\t\t\t\t\t\t\t\t2.BOSE QC 20 Head phone for Apple and Android Devices $300");
	puts("\n\t\t\t\t\t\t\t\t3.Beats x MCM $249.95\n\t\t\t\t\t\t\t\t4.Skull Candy Fix $50");
	puts("\n\t\t\t\t\t\t\t\t5.BOSE Custom QC 25 Head Phone $399");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Skull candy PlYR 1 Head phone\n");
    fprintf(st,"%d \n", 150);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    hp();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"BOSE QC 20 Head phone for Apple and Android Devices\n");
    fprintf(st,"%d \n", 300);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    hp();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Beats x MCM\n");
    fprintf(st,"%lf \n", 249.95);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    hp();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Skull Candy Fix\n");
    fprintf(st,"%d \n", 50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    hp();
    break;
    }
case '5':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"BOSE Custom QC 25 Head Phone\n");
    fprintf(st,"%d \n", 399);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    hp();
    break;

    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        hp();
    }

}
	//Head phone collection
}
void gmc(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------- GAMING WORLD ----------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Xbox one 500GB $341.99");
	puts("\n\t\t\t\t\t\t\t\t2.Xbox one 1TB $400");
	puts("\n\t\t\t\t\t\t\t\t3.Xbox one DAY ONE Controller $45");
	puts("\n\t\t\t\t\t\t\t\t4.Xbox one ELITE Controller $150");
	puts("\n\t\t\t\t\t\t\t\t5.Play Station 4 500GB $399");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	//puts("\n6.PS4 Controller $58");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Xbox one 500GB\n");
    fprintf(st,"%lf \n", 341.99);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    gmc();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Xbox one 1TB\n");
    fprintf(st,"%d \n", 400);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    gmc();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Xbox one DAY ONE Controller\n");
    fprintf(st,"%d \n", 45);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    gmc();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Xbox one ELITE Controller\n");
    fprintf(st,"%d \n", 150);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    gmc();
    break;
    }
case '5':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Play Station 4 500GB\n");
    fprintf(st,"%d \n", 399);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    gmc();
    break;

    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        gmc();
    }

}
	//gaming console and joypad collection
}
void laptop(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t------------------------- LAPTOP ---------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1. Mac Book Pro 13.Inch: \n\t\t\t\t\t\t\t\tProcessor: 5th gen i7\n\t\t\t\t\t\t\t\tHard disk: 512GB HDD \n\t\t\t\t\t\t\t\tGraphics card: Nvidia Geforce 930M 2GB \n\t\t\t\t\t\t\t\tPrice: $1299  ");
	puts("\n\t\t\t\t\t\t\t\t2. New Mac Book 12.inch: \n\t\t\t\t\t\t\t\tProcessor: Intel Core M\n\t\t\t\t\t\t\t\tHard disk: 512GB HDD \n\t\t\t\t\t\t\t\tPrice: $1299 ");
	puts("\n\t\t\t\t\t\t\t\t3. Hp Envy 14.Inch : \n\t\t\t\t\t\t\tProcessor: 5th gen i7 \n\t\t\t\t\t\t\tHard disk: 1TB HDD \n\t\t\t\t\t\t\t\tGraphics card: Nvidia Geforce 930M 2GB \n\t\t\t\t\t\t\t\tPrice: $900 ");
	puts("\n\t\t\t\t\t\t\t\t4. Lenovo Think pad 12.Inch (Military grade): \n\t\t\t\t\t\t\t\tProcessor: 5th gen i7 \n\t\t\t\t\t\t\t\tHard Disk: 1TB HDD\n\t\t\t\t\t\t\t\t Graphics card: Nvidia Geforce 930M\n\t\t\t\t\t\t\t\tPrice: $1000 ");
	puts("\n\t\t\t\t\t\t\t\t5. Lenovo Yoga-13(Ultra Book) 13.Inch:\n\t\t\t\t\t\t\t\tProcessor: 5th gen i7 \n\t\t\t\t\t\t\t\tHard disk: 500GB HDD \n\t\t\t\t\t\t\t\tPrice : $980 ");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Mac Book Pro 13.Inch\n");
    fprintf(st,"%d \n", 1299);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    laptop();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"New Mac Book 12.inch\n");
    fprintf(st,"%d \n", 1299);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    laptop();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Hp Envy 14.Inch\n");
    fprintf(st,"%d \n", 900);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    laptop();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Lenovo Think pad 12.Inch (Military grade)\n");
    fprintf(st,"%d \n", 1000);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    laptop();
    break;
    }
case '5':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Lenovo Yoga-13(Ultra Book) 13.Inch\n");
    fprintf(st,"%d \n", 980);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    laptop();
    break;

    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        laptop();
    }

}
	//swtich and file option to write
}
void ota(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------- OTHER ELECTRONIC ACCESSORIES -----------------------");
	puts("\n\t\t\t\t\t\t\t\t1.iphone charger $20\t2.Screen protector $10\n\t\t\t\t\t\t\t\t3.Microsoft Band $170\t4.Apple Watch $480 ");
	puts("\n\t\t\t\t\t\t\t\t5.Lumia wireless Charger $50");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"iphone charger\n");
    fprintf(st,"%d \n", 20);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ota();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Screen protector\n");
    fprintf(st,"%d \n", 10);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ota();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Microsoft Band\n");
    fprintf(st,"%d \n", 170);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ota();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Apple Watch\n");
    fprintf(st,"%d \n", 480);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ota();
    break;
    }
case '5':
    {st = fopen("cart.txt", "a+");
    fprintf(st,"Lumia wireless Charger\n");
    fprintf(st,"%d \n", 50);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 5 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    ota();
    break;

    }
case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        ota();
    }

}


}

//\t\t\t\t\t
//new fucntion zone!
//------------------------------- women shoes brand function zone------------------
void wguccis(void){
    //system("cls");
//gucci women shoes
 puts("\n\t\t\t\t\t\t\t----------------------------GUCCI women shoes--------------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Gucci Women's Horsebit Khaki Leather Canvas Ballerina Flats $521");
    puts("\n\t\t\t\t\t\t\t\t2. Gucci Women's Natural Canvas Lace-up Seakers, Natural 324246 $1100");
    puts("\n\t\t\t\t\t\t\t\t3. Gucci Women's Cream Beige Patent Leather Classic Pumps Round Toe Shoes $595");
    puts("\n\t\t\t\t\t\t\t\t4. Gucci Leather Tortoise Ankle Booties $1750");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Horsebit Khaki Leather Canvas Ballerina Flats\n");
            fprintf(st,"%d \n", 521);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wguccis();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Natural Canvas Lace-up Seakers, Natural 324246\n");
            fprintf(st,"%d \n", 1100);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wguccis();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Cream Beige Patent Leather Classic Pumps Round Toe Shoes\n");
            fprintf(st,"%d \n", 595);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wguccis();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Leather Tortoise Ankle Booties\n");
            fprintf(st,"%d \n", 1750);
            fclose(st);
            printf("\n\t\tItem 4 has been selected");
            g++;
    printf("\n\t\t%d item  added in Cart",g);
            wguccis();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wguccis();
        }


    }


}

void wLVs(void){
    //system("cls");
	//Women shoes for Louis Vuitton
    puts("\n\t\t\t\t\t\t\t---------------------Louis Vuitton women Shoes----------------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Louis Vuitton Sixties flat ankle boot $1100");
    puts("\n\t\t\t\t\t\t\t\t2. Louis Vuitton Eyeline open toe pump $1500");
    puts("\n\t\t\t\t\t\t\t\t3. Louis Vuitton Elba flat ballerina $780");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Louis Vuitton Sixties flat ankle boot \n");
            fprintf(st,"%d \n", 1100);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wLVs();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Louis Vuitton Eyeline open toe pump\n");
            fprintf(st,"%d \n", 1500);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wLVs();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Louis Vuitton Elba flat ballerina\n");
            fprintf(st,"%d \n",780);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wLVs();
            break;}

        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wLVs();
        }


    }


}
void wCLs(void){
    //system("cls");
	//Women cristina Louboutin shoes
	puts("\n\t\t\t\t\t\t\t----------------------Christian Louboutin women Shoes--------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Christian Louboutin Womens Pigalle Leather Spiked Pumps 100mm $995");
    puts("\n\t\t\t\t\t\t\t\t2. Christian Louboutin Womens Daffodile Suede Round Toe Pumps 160mm $695");
    puts("\n\t\t\t\t\t\t\t\t3. Christian Louboutin Womens Leather Pointed Toe Kitten Heels 70mm $695");
    puts("\n\t\t\t\t\t\t\t\t4. Christian Louboutin Womens Leather Round Toe Ankle Boots 120mm $895");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Christian Louboutin Womens Pigalle Leather Spiked Pumps 100mm\n");
            fprintf(st,"%d \n", 995);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCLs();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Christian Louboutin Womens Daffodile Suede Round Toe Pumps 160mm\n");
            fprintf(st,"%d \n", 695);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCLs();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Christian Louboutin Womens Leather Pointed Toe Kitten Heels 70mm\n");
            fprintf(st,"%d \n", 695);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCLs();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Christian Louboutin Womens Leather Round Toe Ankle Boots 120mm\n");
            fprintf(st,"%d \n", 895);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCLs();
            break;}
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wCLs();
        }


    }
}
void wJCs(void){
	//Jimmy choo shoes for women
	//system("cls");
	puts("\n\t\t\t\t\t\t\t----------------------------Jimmy Choo Women shoes-------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Jimmy Choo Women's Datchet Black Leather Ankle Boots 120mm $1300");
    puts("\n\t\t\t\t\t\t\t\t2. Jimmy Choo Dulsa Elastic Strap & Leather Lace Back Sandals Black Gold 100mm $750");
    puts("\n\t\t\t\t\t\t\t\t3. Jimmy Choo Tarine Open Toe Pump Black Suede Cutout Gold Heel 100mm $550");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Jimmy Choo Women's Datchet Black Leather Ankle Boots 120mm\n");
            fprintf(st,"%d \n", 1300);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wJCs();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Jimmy Choo Dulsa Elastic Strap & Leather Lace Back Sandals Black Gold 100mm\n");
            fprintf(st,"%d \n", 750);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wJCs();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Jimmy Choo Tarine Open Toe Pump Black Suede Cutout Gold Heel 100mm\n");
            fprintf(st,"%d \n", 550);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wJCs();
            break;}

        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wJCs();
        }


    }

}

void wMBs(void){
	//Manolo Blahnik shoes for women
	//system("cls");
    puts("\n\t\t\t\t\t\t\t----------------------Manolo Blahnik Women shoes------------------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Manolo Blahnik Genuine Alligator Jeweled Pump Heels in Black $755");
    puts("\n\t\t\t\t\t\t\t\t2. Manolo Blahnik Mave Black Suede Point Toe Flats $945");
    puts("\n\t\t\t\t\t\t\t\t3. Manolo Blahnik Chantalm Ankle Wrap Leather Sandals Heels White $795");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Manolo Blahnik Genuine Alligator Jeweled Pump Heels in Black\n");
            fprintf(st,"%d \n", 755);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wMBs();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Manolo Blahnik Mave Black Suede Point Toe Flats\n");
            fprintf(st,"%d \n", 945);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wMBs();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st," Manolo Blahnik Chantalm Ankle Wrap Leather Sandals Heels White\n");
            fprintf(st,"%d \n", 795);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wMBs();
            break;}

        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wMBs();
        }


    }
}
//--------------------------------------------------
void bspuma(void){
	//boys  shoes by puma
	//system("cls");
	puts("\n\t\t\t\t\t\t\t-------------------------------- PUMA ------------------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Ferrari drift Cat 5 Shoes $60");
	puts("\n\t\t\t\t\t\t\t\t2.Seude Classic+ Men's sneakers $59");
	puts("\n\t\t\t\t\t\t\t\t3.Pulse XT PWRCOOL Mens Training Shoes $80");
	puts("\n\t\t\t\t\t\t\t\t4.FoamCat Slide Basic Mens Sandals $17.40");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
		switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Ferrari drift Cat 5 Shoes\n");
    fprintf(st,"%d \n", 60);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bspuma();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Seude Classic+ Men's sneakers\n");
    fprintf(st,"%d \n", 59);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bspuma();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Pulse XT PWRCOOL Mens Training Shoes\n");
    fprintf(st,"%d \n", 80);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bspuma();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"FoamCat Slide Basic Mens Sandals\n");
    fprintf(st,"%lf \n", 17.40);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bspuma();
    break;
    }

case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bspuma();
    }

}
}
void bsmoreschi(void){
    //system("cls");
	//boys Moreschi shoes
	puts("\n\t\t\t\t\t\t\t----------------------------------- MORESCHI ----------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.SCARPINE DENIM $590.0");
	puts("\n\t\t\t\t\t\t\t\t2.Perforated Nappa Leater Derby $715.0");
	puts("\n\t\t\t\t\t\t\t\t3.Graz Black $555.0");
	puts("\n\t\t\t\t\t\t\t\t4.Lubecca Dark Brown $590.00");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
	switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"SCARPINE DENIM\n");
    fprintf(st,"%d \n", 590);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsmoreschi();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Perforated Nappa Leater Derby\n");
    fprintf(st,"%d \n",715);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsmoreschi();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Graz Black\n");
    fprintf(st,"%d \n", 555);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsmoreschi();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Lubecca Dark Brown\n");
    fprintf(st,"%lf \n", 590);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsmoreschi();
    break;
    }

case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bsmoreschi();
    }

}
}

void bsgucci(void){
    //system("cls");
	puts("\n\t\t\t\t\t\t\t--------------------------------- Gucci -------------------------------");
	puts("\n\t\t\t\t\t\t\t\t1.Jordaan Leather horsebit loafer $795");
	puts("\n\t\t\t\t\t\t\t\t2.Leather perforated lace-up Shoe $950");
	puts("\n\t\t\t\t\t\t\t\t3.Leather High-Top Sneakers $840");
	puts("\n\t\t\t\t\t\t\t\t4.Leather perforated boot $1200");
	puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
		switch(getch()){

case '1':
    {        st = fopen("cart.txt", "a+");
    fprintf(st,"Jordaan Leather horsebit loafer\n");
    fprintf(st,"%d \n", 795);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsgucci();
    break;

    }
case '2':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Leather perforated lace-up Shoe\n");
    fprintf(st,"%d \n",950);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsgucci();
    break;
    }
case '3':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Leather High-Top Sneakers\n");
    fprintf(st,"%d \n", 480);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 3 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsgucci();
    break;
    }
case '4':
    {
        st = fopen("cart.txt", "a+");
    fprintf(st,"Leather perforated boot\n");
    fprintf(st,"%lf \n", 1200);
    fclose(st);
    puts("\n\t\t\t\t\t\t\tItem 4 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    bsgucci();
    break;
    }

case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\n\t\t\t\t\t\t\tPressed the wrong number. Try again");
        bsgucci();
    }

}
	//boys sshoes by gucci
}
//------------------------- Women lifesyle product function zone------------
void wgucci(void){
    //system("cls");
	// womne gucci product
    puts("\n\t\t\t\t\t\t\t---------------------Women Gucci collection---------------------------");
    puts("\n\t\t\t\t\t\t\t\t1.Gucci blue silk knee lenght dress $699.99");
    puts("\n\t\t\t\t\t\t\t\t2.Gucci red crossover bamboo halter dress $2100");
    puts("\n\t\t\t\t\t\t\t\t3.Gucci Women's Midnight Blue Denim 70s Pants $299");
    puts("\n\t\t\t\t\t\t\t\t4.Gucci Women's Black Wool Bamboo Detail Skinny Pants $850");
    puts("\n\t\t\t\t\t\t\t\t5.Gucci Women's Black Leather Web Stripe Convertible Mini Dome Purse $599");
    puts("\n\t\t\t\t\t\t\t\t6.Gucci Women's Crystal Line Coated Canvas GG Guccissima Wallet $339");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci blue silk knee lneght dress\n");
            fprintf(st,"%lf \n", 69.99);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci red crossover bamboo halter dress \n");
            fprintf(st,"%d \n", 2100);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Midnight Blue Denim 70s Pants\n");
            fprintf(st,"%d \n", 299);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Black Wool Bamboo Detail Skinny Pants\n");
            fprintf(st,"%d \n", 850);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}
        case '5':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Black Leather Web Stripe Convertible Mini Dome Purse\n");
            fprintf(st,"%d \n", 599);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}
        case '6':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Gucci Women's Crystal Line Coated Canvas GG Guccissima Wallet\n");
            fprintf(st,"%d \n", 339);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 6 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wgucci();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wgucci();
        }


    }
}
void whermes(void){
    //system("cls");
	//Women hermes product
	puts("\n\t\t\t\t\t\t\t************************* HERMES product for her ****************************");
	puts("\n\t\t\t\t\t\t\t\t1.Hermes Women's Self Belt Sheath Dress with Pintuck Neck $1450");
	puts("\n\t\t\t\t\t\t\t\t2.Hermes Women's Sleeveless Blouson Bodice Fit-and-Flare Dress $710");
	puts("\n\t\t\t\t\t\t\t\t3.Hermes short sleeve sweater in off-white lightweight cashmere, perforated H detail $800");
    puts("\n\t\t\t\t\t\t\t\t4.Hermes Zip N Go Satchel Top Handle Bag $500");
    puts("\n\t\t\t\t\t\t\t\t5.Hermes Table Treasures Zip Around Wallet $90");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Hermes Women's Self Belt Sheath Dress with Pintuck Neck \n");
            fprintf(st,"%d \n", 1450);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            whermes();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Hermes Women's Sleeveless Blouson Bodice Fit-and-Flare Dress\n");
            fprintf(st,"%d \n", 710);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            whermes();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Hermes short sleeve sweater in off-white lightweight cashmere, perforated H detail\n");
            fprintf(st,"%d \n", 800);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            whermes();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Hermes Zip N Go Satchel Top Handle Bag\n");
            fprintf(st,"%d \n", 500);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            whermes();
            break;}
        case '5':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Hermes Table Treasures Zip Around Wallet\n");
            fprintf(st,"%d \n", 800);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            whermes();
            break;}
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            whermes();
        }


    }
}
void wprada(void){
    //system("cls");
	//women prada prdocuts
    puts("\n\t\t\t\t\t\t\t--------------------Women prada collection----------------------------");
    puts("\n\t\t\t\t\t\t\t\t1.Prada Fabulous Classic Knit Cocktail Dress $189.50");
    puts("\n\t\t\t\t\t\t\t\t2.Prada Hexagon Print Blouse - Green $820.00");
    puts("\n\t\t\t\t\t\t\t\t3.Prada orange saffiano leather long wallet $98.00");
    puts("\n\t\t\t\t\t\t\t\t4.Prada BP0584 Royal Blue Tessuto Impuntu Nylon and Leather Pattina Chain Crossbody Bag $375.88");
    puts("\n\t\t\t\t\t\t\t\t5.Prada Women'S Skirt Pt692 Black $448");
    puts("\n\t\t\t\t\t\t\t\t6.Prada Women'S Trousers Pc119 Burgundy $400");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada Fabulous Classic Knit Cocktail Dress\n");
            fprintf(st,"%lf \n", 189.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wprada();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada Hexagon Print Blouse - Green\n");
            fprintf(st,"%d \n", 820);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t %d Item added in cart",g);
            wprada();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada orange saffiano leather long wallet\n");
            fprintf(st,"%d \n", 98);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wprada();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada BP0584 Royal Blue Tessuto Impuntu Nylon and Leather Pattina Chain Crossbody Bag\n");
            fprintf(st,"%lf \n", 375.88);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wprada();
            break;}
        case '5':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada Women'S Skirt Pt692 Black \n");
            fprintf(st,"%lf \n", 448);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wprada();
            break;}
        case '6':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Prada Women'S Trousers Pc119 Burgundy\n");
            fprintf(st,"%lf \n", 400);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 6 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wprada();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wprada();
        }


    }

}

void wversace(void){
    //system("cls");
	//Versace product for women
	 puts("\n\t\t\t\t\t\t\t-----------------------Women versace collection--------------------------\n");
    puts("\n\t\t\t\t\t\t\t\t1. Versace Skinny leg capris jeans blue $375.55");
    puts("\n\t\t\t\t\t\t\t\t2. Versace Long skirt with slit, black $495.00");
    puts("\n\t\t\t\t\t\t\t\t3. Versace Purple cardigan $180.90");
    puts("\n\t\t\t\t\t\t\t\t4. Versace Collection Knitted Printed Swirl Dress Black $500");
    puts("\n\t\t\t\t\t\t\t\t5. Versace Large Leather Medusa Signature Chain Tote $1898");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Versace Skinny leg capris jeans blue\n");
            fprintf(st,"%lf \n", 375.55);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wversace();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Versace long skirt with slit,black\n");
            fprintf(st,"%d \n", 495);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
             printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wversace();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Versace purple Cardigan\n");
            fprintf(st,"%lf \n", 180.90);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wversace();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Versace Collection Knitted Printed Swirl Dress Black \n");
            fprintf(st,"%lf \n", 500);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wversace();
            break;}
        case '5':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Versace Large Leather Medusa Signature Chain Tote\n");
            fprintf(st,"%lf \n", 1898);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wversace();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wversace();
        }


    }

}
void wmarcj(void){
    //system("cls");
	//Marc jacob product for women
	   puts("\n\t\t\t\t\t\t\t------------------------Women marc jacob collection---------------------");
    puts("\n\t\t\t\t\t\t\t\t\t1. Marc Jacobs Women's Silk Sleeveless Dress $378.90");
    puts("\n\t\t\t\t\t\t\t\t\t2. Maysie floral xropped scuba bikini swimsuit $200.00");
    puts("\n\t\t\t\t\t\t\t\t\t3.Marc Jacobs Mini Denim Stam Bag $1095");
    puts("\n\t\t\t\t\t\t\t\t\t4.MARC by Marc Jacobs 'Classic Q - New' Billfold Wallet Black $198");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch(getch()){
case '1':{
    st = fopen("cart.txt", "a+");
    fprintf(st,"Marc Jacobs Women's Silk Sleeveless Dress\n");
    fprintf(st,"%lf \n", 378.90);
    fclose(st);
    printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
    g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    wmarcj();
    break;}
    case '2':{
    st = fopen("cart.txt", "a+");
    fprintf(st," Maysie floral xropped scuba bikini swimsuit\n");
    fprintf(st,"%d \n", 200);
    fclose(st);
    printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
    g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
    wmarcj();
    break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Marc Jacobs Mini Denim Stam Bag\n");
            fprintf(st,"%d \n", 198);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmarcj();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"MARC by Marc Jacobs 'Classic Q - New' Billfold Wallet Black \n");
            fprintf(st,"%d \n", 1095);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmarcj();
            break;}


case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    {
        puts("\nPressed the wrong button. Try again");
        wmarcj();
    }
}

}
void wchanel(void){
    //system("cls");
	//women chanel lifesyle pro.
	puts("\n\t\t\t\t\t\t\t------------------------Women chanel collection--------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Chanel skirt suit in grey $335.00");
    puts("\n\t\t\t\t\t\t\t\t2. Chanel long slit black dress $385.00");
    puts("\n\t\t\t\t\t\t\t\t3. Vintage Chanel black quilted taseel shoulder bag $2250.00");
    puts("\n\t\t\t\t\t\t\t\t4. Chanel tweed blazer $265.50");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Chanel skirt suit in grey \n");
            fprintf(st,"%d \n", 335);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanel();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st," Chanel long slit black dress\n");
            fprintf(st,"%d \n", 385);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanel();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Vintage Chanel black quilted taseel shoulder bag\n");
            fprintf(st,"%d \n", 2250);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanel();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Chanel tweed blazer\n");
            fprintf(st,"%lf \n", 265.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
   printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanel();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wchanel();
        }


    }

}
void wbb(void){
    //system("cls");
	//Burberry product for women
	 puts("\n\t\t\t\t\t\t\t-------------------------Women Burberry collection-----------------------");
    puts("\n\t\t\t\t\t\t\t\t1.  BurberryLondon patterned silk chiffon dress $275.00");
    puts("\n\t\t\t\t\t\t\t\t2. Burberry V-neck sleeveless dress $390.80");
    puts("\n\t\t\t\t\t\t\t\t3.Burberry House Check Sartorial Leather Wallet - Brown Ochre $220");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch(getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Burberry London patterned silk chiffon dress\n");
            fprintf(st,"%d \n", 275.00);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbb();
            break;}
        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Burberry V-neck sleeveless dress\n");
            fprintf(st,"%d \n", 390.80);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbb();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Burberry Horseferry Check Women's Clutch Bag\n");
            fprintf(st,"%d \n", 632);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbb();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Burberry House Check Sartorial Leather Wallet - Brown Ochre\n");
            fprintf(st,"%d \n", 220);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbb();
            break;}


        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wbb();
        }
    }


}
void wmk(void){
    //system("cls");
	//Michael kors product for women
	puts("\n\t\t\t\t\t\t\t--------------------Women Michael Kors collection----------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Michael Kors Women's Faux Leather Yoke Sheath Dress $489.00");
    puts("\n\t\t\t\t\t\t\t\t2. Michael Kors Women's Skinny Ankle Pant $358.00");
    puts("\n\t\t\t\t\t\t\t\t3. Michael Kors Women's Chain Fringe Tie Neck Blouse Top $265.95");
    puts("\n\t\t\t\t\t\t\t\t4. Michael Kors Jet Set Crossbody handbag - Dusty Rose $445");
    puts("\n\t\t\t\t\t\t\t\t5. Michael Kors Jet Set Women's Travel Large Coin Wallet $164.50");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st," Michael Kors Women's Faux Leather Yoke Sheath Dress\n");
            fprintf(st,"%d \n", 489.00);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmk();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st," Michael Kors Women's Skinny Ankle Pant\n");
            fprintf(st,"%d \n", 358);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmk();
            break;}
        case '3':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Michael Kors Women's Chain Fringe Tie Neck Blouse Top\n");
            fprintf(st,"%lf \n", 265.95);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmk();
            break;}
        case '4':{
            st = fopen("cart.txt", "a+");
            fprintf(st," Michael Kors Jet Set Crossbody handbag - Dusty Rose\n");
            fprintf(st,"%lf \n", 445);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmk();
            break;}
        case '5':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Michael Kors Jet Set Women's Travel Large Coin Wallet\n");
            fprintf(st,"%lf \n", 164.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
            g++;
            printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wmk();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wmk();
        }


    }

}
//-------------------------------------- 0 -----------------
//--------------------------------- Women perfume brand function zone ----------------------
//puts("\n1.Jimmy Choo\t2.Paco Rabanne\n3.Juicy Couture\t4.Burberry\n5.Chanel\t6.Calvin Klein\n7.Bvlgari\t8.Ralph Lauren");

void wJCp(void){
    //system("cls");
	//jimmy choo perfume for women
	puts("\n\t\t\t\t\t\t\t----------------------------Jimmy Choo women perfume------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Blossom by Jimmy Choo75ml $30.79");
    puts("\n\t\t\t\t\t\t\t\t2. Flash by Jimmy Choo 100ml $48.98");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
            case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Blossom by Jimmy Choo 75ml\n");
            fprintf(st,"%lf \n", 30.79);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wJCp();
            break;}

            case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Flash by Jimmy Choo 100ml\n");
            fprintf(st,"%lf \n", 48.98);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wJCp();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\nPressed the wrong button. Try again");
            wJCp();
        }


    }
}
void wPRp(void){
    //system("cls");
	//Paco rabanne perfume for women
	puts("\n\t\t\t\t\t\t\t-------------------------Paco Rabanne women perfume------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Black by Paco Rabanne Xs 75ml $34.30");
    puts("\n\t\t\t\t\t\t\t\t2. Lady Million by Paco Rabanne 50ml $49.50");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Blck Xs by Paco Rabanne 75ml\n");
            fprintf(st,"%lf \n", 34.30);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wPRp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Lady Million by Paco Rabanne 50ml\n");
            fprintf(st,"%lf \n", 49.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wPRp();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wPRp();
        }


    }
}
void wjuicyp(void){
    //system("cls");
	//Juicy couture perfume for women
	 puts("\n\t\t\t\t\t\t\t------------------------------Juicy Couture women perfume-------------------------\n");
    puts("\n\t\t\t\t\t\t\t\t1. Viva La Juicy Noir by Juicy Couture 50ml $57.50");
    puts("\n\t\t\t\t\t\t\t\t2. Viva La Juicy Fleur by Juicy Couture 75ml $65.55");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Viva La Juicy Noir by Juicy Couture 50ml\n");
            fprintf(st,"%lf \n", 57.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wjuicyp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Viva La Juicy Fleur by Juicy Couture 75ml\n");
            fprintf(st,"%lf \n", 65.55);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wjuicyp();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wjuicyp();
        }


    }
}
void wbbp(void){
    //system("cls");
	//burberry perfume for women

    puts("\n\t\t\t\t\t\t\t----------------------------Burberry women perfume----------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Summer by Burberry 50ml $40.30");
    puts("\n\t\t\t\t\t\t\t\t2. Tender touch by Burberry 75ml $55.55");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Summer by Burberry 50ml\n");
            fprintf(st,"%lf \n", 40.30);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbbp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Tender touch by Burberry 75ml\n");
            fprintf(st,"%lf \n", 55.55);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbbp();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wbbp();
        }


    }
}
void wchanelp(void){
    //system("cls");
	//chanel perfume for women
	    puts("\n\t\t\t\t\t\t\t------------------------Chanel women perfume--------------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Chance by Chanel 75ml $49.99");
    puts("\n\t\t\t\t\t\t\t\t2. Vintage Coco by Chanel 50ml $30.00");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Chance by Chanel 75ml\n");
            fprintf(st,"%lf \n", 49.99);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanelp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Vintage Coco by Chanel 50ml\n");
            fprintf(st,"%d \n", 30);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wchanelp();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wchanelp();
        }


    }

}
void wCKp(void){
    //system("cls");
	//calvin klein perfume for women
	puts("\n\t\t\t\t\t\t\t----------------------Calvin Klein women perfume---------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Obsession by Calvein Klein 50ml $40.00");
    puts("\n\t\t\t\t\t\t\t\t2. Shock by Calvein Klein 50ml $35.50");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Obsession by Calvein Klein 50ml\n");
            fprintf(st,"%d \n", 40.00);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCKp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Shock by Calvein Klein 50ml\n");
            fprintf(st,"%d \n", 35.50);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wCKp();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wCKp();
        }


    }
}
void wbvlp(void){
    //system("cls");
	//bvgari perfume for women
	puts("\n\t\t\t\t\t\t\t--------------------------Bvlgari women perfume--------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Rose Essentielle by Bvlgari 50ml $40.70");
    puts("\n\t\t\t\t\t\t\t\t2. Petits et mamans by Bvlgari 100ml $75.00");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Rose Essentielle by Bvlgari 50ml\n");
            fprintf(st,"%d \n", 40.70);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbvlp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Petits et mamans by Bvlgari 100ml\n");
            fprintf(st,"%d \n", 75.00);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
 printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wbvlp();
            break;}
        //default:
        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
            wbvlp();
        }


    }
}

void wRLp(void){
    //system("cls");
	//ralph lauren perfume for women
	    puts("\n\t\t\t\t\t\t\t----------------------------Ralph Lauren women perfume------------------------------");
    puts("\n\t\t\t\t\t\t\t\t1. Romance by Ralph Lauren 100ml $80.00");
    puts("\n\t\t\t\t\t\t\t\t2.Romance EAU DE by Ralph Lauren 50ml $200");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
    switch (getch()){
        case '1':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Romance by Ralph Lauren  100ml\n");
            fprintf(st,"%d \n", 80.00);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wRLp();
            break;}

        case '2':{
            st = fopen("cart.txt", "a+");
            fprintf(st,"Romance EAU DE by Ralph Lauren 50ml\n");
            fprintf(st,"%d \n", 200);
            fclose(st);
            printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
            g++;
printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
            wRLp();
            break;}

        case 'm':
        case 'M':
            mainmenu();
            break;
        case 'c':
        case 'C':
            bill();
            break;
        case 'e':
        case 'E':
            dend();
            break;
        default:
        {
            puts("\nPressed the wrong button. Try again");
            wRLp();
        }


    }
}
void sale(void){
    system("cls");
	puts("\n\t\t\t\t\t\t\t---------------------------- OFFERS & SALE Product---------------------");

	puts("\n\t\t\t\t\t\t\tSorry sir currently we don't have any product on sale BUT");
	puts("\n\t\t\t\t\t\t\tWe have an offer going on if you purchase products worth more than");
	puts("\n\t\t\t\t\t\t\tor equal to $10,000 you will get an EXCLUSIVE TAG HEUER-FORMULA 1 EDITION WATCH FREE");
	puts("\n\t\t\t\t\t\t\t!! DON'T MISS IT!! \n\t\t\t\t\t\t\tPress <M> for main menu <E> for Exit");
	puts("\n\t\t\t\t\t\t\tWe have an option to keep in touch with our customers and keep them upto-date with any upcoming sales or modifications");
	puts("\n\t\t\t\t\t\t\tPress N to register for alert system");
	switch (getch()){
    case 'n':
    case 'N':
        notify();
        break;//here we could add an option that we will sms them on their cell if theres a sale so we could maybe use structure to take the name and number of those that want an sms eventhough we already have their name and stuff from personal info?ok so what say?let me know
	case 'm':
	case 'M':
		mainmenu();
		break;
	case 'e':
	case 'E':
		dend();
		break;
	case 'h':
	case 'H':
		help();
		break;
	default:{
		puts("\n\t\t\t\t\t\t\tPressed the wrong button try it again");
		sale();
	}
	}
}
void notify(void){
    system("cls");
FILE *al;
struct alert{

char email[100];
char nn[100];
int mobile;

}t;
puts("\n---------------------------------- ALERT SYSTEM REG. --------------------------");
puts("\nEnter your email address: ");
gets(t.email);
puts("\nEnter your contact number:");
scanf("%d", &t.mobile);
fflush(stdin);
puts("\nEnter your name: ");
gets(t.nn);

al = fopen("alart.txt", "a+");
fprintf(al, "Name: %s \n", t.nn);
fprintf(al, "Email: %s \n", t.email);
fprintf(al, "%d \n", t.mobile);
fclose(al);
puts("\nAlert System option is ON for you NOw! We will let you  know when we have an offer on our products or to give an update on our website.Happy Shopping!");
puts("\nPress <M> For Main Menu or Press <E> for exit");
switch(getch()){

case 'm':
case 'M':
    mainmenu();
    break;
case 'c':
case 'C':
    bill();
    break;
case 'e':
case 'E':
    dend();
    break;
default:
    mainmenu();


}


}

    void loreal(void){
        //system("cls");
    puts("\n\t\t\t\t\t\t\t-----------------------L'Oreal Cosmetics--------------------------\n");
    puts("\n\t\t\t\t\t\t\t\t1.L'Oreal HiP Studio Secrets Professional Metallic Shadow Duo - Sculpted 106 $250 ");
    puts("\n\t\t\t\t\t\t\t\t2.L'Oreal Colour Riche Project Runway Lip: Shade: Temptress Kiss $180 ");
    puts("\n\t\t\t\t\t\t\t\t3.L'Oreal Colour Riche Caresse Wet Shine StainShade - Infinite Fuschia 187- $174.50 ");
    puts("\n\t\t\t\t\t\t\t\t4.L'Oreal Paris True Match Foundation - Soft Ivory $160");
    puts("\n\t\t\t\t\t\t\t\t5.L'Oreal Paris Cosmetics Infallible Smokissime Eyeliner Black Smoke $98");
    puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

             switch (getch()){
                 case '1':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"L'Oreal HiP Studio Secrets Professional Metallic Shadow Duo - Sculpted \n");
                     fprintf(st,"%d \n",250 );
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                  loreal();
                     break;}

                 case '2':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"L'Oreal Colour Riche Project Runway Lip: Shade: Temptress Kiss\n");
                     fprintf(st,"%d \n",180 );
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     loreal();
                     break;}
                 case '3':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"L'Oreal Colour Riche Caresse Wet Shine StainShade - Infinite Fuschia\n");
                     fprintf(st,"%lf \n",174.50 );
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                    loreal();
                     break;}
                 case '4':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"L'Oreal Paris True Match Foundation - Soft Ivory \n");
                     fprintf(st,"%d \n",160 );
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                   loreal();
                     break;}
                 case '5':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"L'Oreal Paris Cosmetics Infallible Smokissime Eyeliner Black Smoke\n");
                     fprintf(st,"%d \n",98 );
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     loreal();
                     break;}

                 case 'm':
                 case 'M':
                     mainmenu();
                     break;
                 case 'c':
                 case 'C':
                     bill();
                     break;
                 case 'e':
                 case 'E':
                     dend();
                     break;
                 default:
                 {
                     puts("\nPressed the wrong button. Try again");
                     loreal();
                 }


             }

         }
         void mac(void){
             //system("cls");
             puts("\n\t\t\t\t\t\t\t-----------------------M.A.C Cosmetics--------------------------\n");
             puts("\n\t\t\t\t\t\t\t\t1.M.A.C Pro Longwear Concealer : Size: 0.3 oz $100");
             puts("\n\t\t\t\t\t\t\t\t2.M.A.C Prep + Prime Face Protect Lotion SPF 50 $70");
             puts("\n\t\t\t\t\t\t\t\t3.M.A.C Objects of Affection/Gold + Beige Pigments + Glitter $150 ");
             puts("\n\t\t\t\t\t\t\t\t4.M.A.C Mineralize Skin finish - Shade: Soft & Gentle $120");
             puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
             switch (getch()){
                 case '1':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"M.A.C Pro Longwear Concealer : Size: 0.3 oz\n");
                     fprintf(st,"%d \n",100);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     mac();
                     break;}

                 case '2':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"M.A.C Prep + Prime Face Protect Lotion SPF 50 \n");
                     fprintf(st,"%d \n",70);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     mac();
                     break;}
                 case '3':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"M.A.C Objects of Affection/Gold + Beige Pigments + Glitter \n");
                     fprintf(st,"%d \n",150);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     mac();
                     break;}
                 case '4':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"M.A.C Mineralize Skin finish - Shade: Soft & Gentle\n");
                     fprintf(st,"%d \n",120);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     mac();
                     break;}

                 case 'm':
                 case 'M':
                     mainmenu();
                     break;
                 case 'c':
                 case 'C':
                     bill();
                     break;
                 case 'e':
                 case 'E':
                     dend();
                     break;
                 default:
                 {
                     puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
                     mac();
                 }


             }

         }

         void est(void){
             //system("cls");
            puts("\n\t\t\t\t\t\t\t----------------------- EstŽe Lauder Cosmetics--------------------------\n");
            puts("\n\t\t\t\t\t\t\t\t1.EstŽe Lauder | Pure Color Eyeshadow Palette : Shade: Enchanted Berries $300.50");
            puts("\n\t\t\t\t\t\t\t\t2.EstŽe Lauder | New! Double Wear Brush-On Glow BB Highlighter $230");
            puts("\n\t\t\t\t\t\t\t\t3.EstŽe Lauder Double Wear Stay-in-Place Liquid Makeup $140");
            puts("\n\t\t\t\t\t\t\t\t4.Estee's 'Pure Color Envy' Sculpting Lipstick Collection $120");
            puts("\n\t\t\t\t\t\t\t\t5.Estee Lauder 7pc Skin Care and Makeup Gift Set $450");
            puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
            switch (getch()){
                 case '1':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"EstŽe Lauder | Pure Color Eyeshadow Palette : Shade: Enchanted Berries \n");
                     fprintf(st,"%lf \n",300.50);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     est();
                     break;}

                 case '2':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"EstŽe Lauder | New! Double Wear Brush-On Glow BB Highlighter \n");
                     fprintf(st,"%d \n",230);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     est();
                     break;}
                 case '3':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"EstŽe Lauder Double Wear Stay-in-Place Liquid Makeup \n");
                     fprintf(st,"%d \n",140);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     est();
                     break;}
                 case '4':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"Estee's 'Pure Color Envy' Sculpting Lipstick Collection\n");
                     fprintf(st,"%d \n",120);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     est();
                     break;}
                case '5':{
                    st = fopen("cart.txt", "a+");
                    fprintf(st,"Estee Lauder 7pc Skin Care and Makeup Gift Set\n");
                    fprintf(st,"%d \n",450);
                    fclose(st);
                    printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
                    g++;
                    printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                    est();
                    break;}


                 case 'm':
                 case 'M':
                     mainmenu();
                     break;
                 case 'c':
                 case 'C':
                     bill();
                     break;
                 case 'e':
                 case 'E':
                     dend();
                     break;
                 default:
                 {
                     puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
                     est();
                 }


             }

         }

         void urban(void){
            // system("cls");
            puts("\n\t\t\t\t\t\t\t----------------------- Urban Decay Cosmetics--------------------------\n");
            puts("\n\t\t\t\t\t\t\t\t1.Urban Decay Naked Palette $450");
            puts("\n\t\t\t\t\t\t\t\t2.Urban Decay Smoked Eyeshadow Palette $439");
            puts("\n\t\t\t\t\t\t\t\t3.Urban Decay | Heavy Metal Glitter Eyeliner Shade: Glam Rock $200");
            puts("\n\t\t\t\t\t\t\t\t4.Urban Decay Naked Skin Weightless Ulta Definition Liquid Makeup Shade: 12.0 Size: 1 fl oz $230");
            puts("\n\t\t\t\t\t\t\t\t5.Urban Decay - Baked Bronzer(Gilded - bronze shimmer swirled with gold) $199");
            puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");
             switch (getch()){
                 case '1':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"Urban Decay Naked Palette\n");
                     fprintf(st,"%d \n",450);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     urban();
                     break;}

                 case '2':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st," Urban Decay Smoked Eyeshadow Palette\n");
                     fprintf(st,"%d \n",439);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     urban();
                     break;}
                 case '3':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"Urban Decay | Heavy Metal Glitter Eyeliner Shade: Glam Rock\n");
                     fprintf(st,"%d \n",200);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     urban();
                     break;}
                 case '4':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"Urban Decay Naked Skin Weightless Ulta Definition Liquid Makeup Shade: 12.0 Size1 fl oz\n");
                     fprintf(st,"%d \n",230);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     urban();
                     break;}
                 case '5':{
                     st = fopen("cart.txt", "a+");
                     fprintf(st,"Urban Decay - Baked Bronzer(Gilded - bronze shimmer swirled with gold)\n");
                     fprintf(st,"%d \n",199);
                     fclose(st);
                     printf("\n\t\t\t\t\t\t\tItem 5 has been selected");
                     g++;
                     printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                     urban();
                     break;}


                 case 'm':
                 case 'M':
                     mainmenu();
                     break;
                 case 'c':
                 case 'C':
                     bill();
                     break;
                 case 'e':
                 case 'E':
                     dend();
                     break;
                 default:
                 {
                     puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
                     urban();
                 }


             }

         }


    void lancome(void){
        //system("cls");
        puts("\n\t\t\t\t\t\t\t----------------------- Lanc™me Paris Cosmetics--------------------------\n");
        puts("\n\t\t\t\t\t\t\t\t1.Lanc™me  L'Absolu Rouge Advanced Replenishing and Reshaping Lipcolor Pro-Xylaneª - SPF 12 $220");
        puts("\n\t\t\t\t\t\t\t\t2.Lanc™me  Hypn™se Drama ~ Instant Full Body Volume Mascara $180");
        puts("\n\t\t\t\t\t\t\t\t3.Lanc™me  Artliner ~ Gentle Felt Eyeliner Intense Line $95");
        puts("\n\t\t\t\t\t\t\t\t4.Lanc™me Teint Miracle ~ Natural Light Creator Bare Skin Perfection Perfecting Concealer Pen $250");
        puts("\n\t\t\t\t\t\t\t------------------------------------------------------------------\n");

        switch (getch()){
                        case '1':{
                        st = fopen("cart.txt", "a+");
                        fprintf(st,"Lanc™me  L'Absolu Rouge Advanced Replenishing and Reshaping Lipcolor Pro-Xylaneª - SPF 12\n");
                        fprintf(st,"%d \n",220);
                        fclose(st);
                        printf("\n\t\t\t\t\t\t\tItem 1 has been selected");
                        g++;
                        printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                        lancome();
                        break;}

                        case '2':{
                        st = fopen("cart.txt", "a+");
                        fprintf(st,"Lanc™me  Hypn™se Drama ~ Instant Full Body Volume Mascara \n");
                        fprintf(st,"%d \n",180);
                        fclose(st);
                        printf("\n\t\t\t\t\t\t\tItem 2 has been selected");
                        g++;
                        printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                        lancome();
                        break;}

                       case '3':{
                        st = fopen("cart.txt", "a+");
                        fprintf(st,"Lanc™me  Artliner ~ Gentle Felt Eyeliner Intense Line\n");
                        fprintf(st,"%d \n",95);
                        fclose(st);
                        printf("\n\t\t\t\t\t\t\tItem 3 has been selected");
                        g++;
                        printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                        lancome();
                        break;}

                        case '4':{
                        st = fopen("cart.txt", "a+");
                        fprintf(st,"Lanc™me Teint Miracle ~ Natural Light Creator Bare Skin Perfection Perfecting Concealer Pen\n");
                        fprintf(st,"%d \n",250);
                        fclose(st);
                        printf("\n\t\t\t\t\t\t\tItem 4 has been selected");
                        g++;
                        printf("\n\t\t\t\t\t\t\t%d item  added in Cart",g);
                        lancome();
                        break;}

                        case 'm':
                        case 'M':
                        mainmenu();
                        break;
                        case 'c':
                        case 'C':
                        bill();
                        break;
                        case 'e':
                        case 'E':
                        dend();
                        break;
                        default:
                        {
                         puts("\n\t\t\t\t\t\t\tPressed the wrong button. Try again");
                         lancome();
                        }
        }
    }



