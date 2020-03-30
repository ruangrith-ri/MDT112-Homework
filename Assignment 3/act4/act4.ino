 
 //int a = 0;
 int mynum [5] ={10,20,30,40,50};
 int *mypoint = mynum;
void setup()
{
    Serial.begin(9600);

     //แบบpointer
    for (int i=0; i<5; i++)
    {
       Serial.println("Address"+ String(i)+" = "+int(mypoint)+
       "value :"+ int(*mypoint)); 
         mypoint++;

         
    }
   
   Serial.println("--------------------------------------------------------------");
  
   //แบบindex
   for (int i=0; i<5; i++) 
   {
      Serial.println("Address"+ String(i)+" = "+int(&mynum [i])+
      "value :"+ int(mynum [i])); 
   }


    //int x = 5;
   /* Serial.println(int(&x));
    Serial.println(int(&x),16);*/

    /* Serial.println(*(&x));*/

    /* int*xp;
    xp =&x;
     Serial.println(*xp);
     Serial.println("This is value :"+String(*xp));
     Serial.println(int(xp),16);*/

}

void loop()
{

}