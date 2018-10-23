#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"


int sieve(int targetPrime){
    int counter = 0;
    int num = 0;
 
    if(targetPrime > 5000){
       num = 1.15 * targetPrime * (log(targetPrime));
          }
    else{
      num = (1.3 * targetPrime * (log(targetPrime))) + 10;
	         }
   	int * arr = calloc(sizeof(int), num);
		     
	arr[0] = 1;
    arr[1] = 1;
    for(int i = 2;i < num;i++){
      if(arr[i] != 1){
	counter += 1;
        for(int x = i + i;x < num;x += i){
          arr[x] = 1;
        }
      }
	
	if(counter == targetPrime){
	return i;
    }
}
	return 1;
}

/*
	int z = 2;
    while(z < num){
        if(arr[z] != 1){
          counter += 1;
	  z += 1;
        }
	else{
	z += 1;
	}
        if(counter == targetPrime){
	          	return z - 1;
        }
    }
	return 1;
	
}
*/

