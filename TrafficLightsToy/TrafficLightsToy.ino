#include <SPI.h>
#include "debugging.h"

#define RED1 12
#define AMBER1 11
#define GREEN1 10

#define RED2 9
#define AMBER2 8
#define GREEN2 7

#define RED3 6
#define AMBER3 5
#define GREEN3 4

#define RED4 3
#define AMBER4 2
#define GREEN4 1

int num_lights = 12;
bool current_direction = false;

void setup() {

  Serial.begin( 9600 );

  for ( int i = 1 ; i <= num_lights ; i++ )
  {
    debug_int_line( i );
    pinMode( i, OUTPUT );
  }

  digitalWrite( RED1, LOW );
  digitalWrite( AMBER1, LOW );
  digitalWrite( GREEN1, HIGH );

  digitalWrite( RED2, LOW );
  digitalWrite( AMBER2, LOW );
  digitalWrite( GREEN2, HIGH );

  digitalWrite( RED3, HIGH );
  digitalWrite( AMBER3, LOW );
  digitalWrite( GREEN3, LOW );

  digitalWrite( RED4, HIGH );
  digitalWrite( AMBER4, LOW );
  digitalWrite( GREEN4, LOW );

  delay( 3000 );

}

void loop() {
  if ( current_direction == true )
  {
    lights_northsouth();
    current_direction = false;
  }
  else
  {
    lights_eastwest();
    current_direction = true;
  }
  delay( 1000 );
}

void lights_northsouth ()
{

  /** North/South **/
  digitalWrite( RED1, LOW );
  digitalWrite( AMBER1, LOW );
  digitalWrite( GREEN1, HIGH );
  digitalWrite( RED2, LOW );
  digitalWrite( AMBER2, LOW );
  digitalWrite( GREEN2, HIGH );

  /** East/West **/
  digitalWrite( RED3, HIGH );
  digitalWrite( AMBER3, HIGH );
  digitalWrite( GREEN3, LOW );
  digitalWrite( RED4, HIGH );
  digitalWrite( AMBER4, HIGH );
  digitalWrite( GREEN4, LOW );

  delay( 1000 );

  /** North/South **/
  digitalWrite( RED1, LOW );
  digitalWrite( AMBER1, HIGH );
  digitalWrite( GREEN1, LOW );
  digitalWrite( RED2, LOW );
  digitalWrite( AMBER2, HIGH );
  digitalWrite( GREEN2, LOW );

  /** East/West **/
  digitalWrite( RED3, HIGH );
  digitalWrite( AMBER3, HIGH );
  digitalWrite( GREEN3, LOW );
  digitalWrite( RED4, HIGH );
  digitalWrite( AMBER4, HIGH );
  digitalWrite( GREEN4, LOW );

  delay( 1000 );

  /** North/South **/
  digitalWrite( RED1, HIGH );
  digitalWrite( AMBER1, LOW );
  digitalWrite( GREEN1, LOW );
  digitalWrite( RED2, HIGH );
  digitalWrite( AMBER2, LOW );
  digitalWrite( GREEN2, LOW );

  /** East/West **/
  digitalWrite( RED3, LOW );
  digitalWrite( AMBER3, LOW );
  digitalWrite( GREEN3, HIGH );
  digitalWrite( RED4, LOW );
  digitalWrite( AMBER4, LOW );
  digitalWrite( GREEN4, HIGH );

}

void lights_eastwest ()
{

  /** North/South **/
  digitalWrite( RED1, HIGH );
  digitalWrite( AMBER1, HIGH );
  digitalWrite( GREEN1, LOW );
  digitalWrite( RED2, HIGH );
  digitalWrite( AMBER2, HIGH );
  digitalWrite( GREEN2, LOW );

  /** East/West **/
  digitalWrite( RED3, LOW );
  digitalWrite( AMBER3, HIGH );
  digitalWrite( GREEN3, LOW );
  digitalWrite( RED4, LOW );
  digitalWrite( AMBER4, HIGH );
  digitalWrite( GREEN4, LOW );

  delay( 1000 );

  /** North/South **/
  digitalWrite( RED1, LOW );
  digitalWrite( AMBER1, LOW );
  digitalWrite( GREEN1, HIGH );
  digitalWrite( RED2, LOW );
  digitalWrite( AMBER2, LOW );
  digitalWrite( GREEN2, HIGH );

  /** East/West **/
  digitalWrite( RED3, HIGH );
  digitalWrite( AMBER3, LOW );
  digitalWrite( GREEN3, LOW );
  digitalWrite( RED4, HIGH );
  digitalWrite( AMBER4, LOW );
  digitalWrite( GREEN4, LOW );

}
