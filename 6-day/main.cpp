#include <iostream>
#include <stdio.h>
#include <vector>

int calculatePossibleWays(int second, int lastRecord){
	int possibleWays = 0;
	for(int x = 0; x < second; x++){
		int z = second - x;
			if(x * z > lastRecord){
				possibleWays++;
				std::cout << "Geçerli Yol - " << x << "()" << z  << " -> " << x * z << std::endl;
			}
	}
	return possibleWays;
}
int main(){

	/* 
		Time:        48     93     84     66
		Distance:   261   1192   1019   1063
	*/
	int pw =  calculatePossibleWays(48,261);
	 std::cout << "1. yarış için yol sayyısı" << pw << std::endl;
	int p2 = calculatePossibleWays(93,1192);
	 std::cout << "2. yarış için yol sayyısı - 2  " << p2 << std::endl;
	int p3 = calculatePossibleWays(84,1019);
	 std::cout << "3. yarış için yol sayyısı - 3  " << p3 << std::endl;
	int p4 = calculatePossibleWays(66,1063);
	 std::cout << "4. yarış için yol sayyısı - 4  " << p4 << std::endl;

	std::cout << "Tüm yarış için yol sayyısı" << pw * p2 * p3 * p4 << std::endl;

	return 0;
	
	
}
