/******************************************************************************/

void debug_message ( char Label[], unsigned int Value )
{
  Serial.print( Label );
  Serial.print( ": " );
  Serial.println( Value );
}

void debug_message ( char Label[], bool Value )
{
  Serial.print( Label );
  Serial.print( ": " );
  Serial.println( Value );
}

void debug_message ( char Label[], int Value )
{
  Serial.print( Label );
  Serial.print( ": " );
  Serial.println( Value );
}

void debug_message ( char Label[], unsigned long Value )
{
  Serial.print( Label );
  Serial.print( ": " );
  Serial.println( Value );
}

void debug_message ( char Value[] )
{
  Serial.print( "STATUS: " );
  Serial.println( Value );
}

void debug_chars ( char Value[] )
{
  Serial.print( Value );
}

void debug_chars_line ( char Value[] )
{
  Serial.println( Value );
}

void debug_int_line ( unsigned int Value )
{
  Serial.println( Value, DEC );
}

/******************************************************************************/
