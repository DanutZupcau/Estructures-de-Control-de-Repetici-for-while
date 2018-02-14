/**************************************************************
**                                                           **
**                    TÍTOL: Comptar fins a 11               **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 31/1/2018      **
**************************************************************/
//******************* INCLUDE  *************************

//******************* VARIABLE *************************
int comptar = 11;
//******************* SETUP ****************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    if (i<11)
    {
    Serial.print("-");
    }
  } 
}
//******************* LOOP *****************************

void loop(){
  }
