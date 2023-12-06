#include <iostream>
#include <stdio.h>
#include <vector>

long calculatePossibleWays(long second, long lastRecord){
	long key = 0;
	long possibleWays = 0;
	for(long x = 0; x < second; x++){
		long z = second - x;
			if(x * z > lastRecord){
				key = x;
				
				std::cout << "Geçerli Yol - " << second - 2*x+1 << std::endl;
				break;
			}
	}
	return second - 2 * key + 1;
}

int  main(){

	/* 
		Time:        48     93     84     66
		Distance:   261   1192   1019   1063
	*/

	// 1. Part
	long pw =  calculatePossibleWays(48,261);
	 std::cout << "1. yarış için yol sayyısı" << pw << std::endl;
	long p2 = calculatePossibleWays(93,1192);
	 std::cout << "2. yarış için yol sayyısı - 2  " << p2 << std::endl;
	long p3 = calculatePossibleWays(84,1019);
	 std::cout << "3. yarış için yol sayyısı - 3  " << p3 << std::endl;
	long p4 = calculatePossibleWays(66,1063);
	 std::cout << "4. yarış için yol sayyısı - 4  " << p4 << std::endl;

	std::cout << "Tüm yarış için yol sayyısı" << pw * p2 * p3 * p4 << std::endl;



	// 2. Part
	long p5 = calculatePossibleWays(48938466, 261119210191063);
	std::cout << "2. Part yarış için yol sayyısı " << p5 << std::endl;

	return 0;
	
	
}
