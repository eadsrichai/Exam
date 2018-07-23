#include<stdio.h>
#include<math.h>
float calPrice(float);
float calPrice1(float);
float calPrice2(float);
float calPrice3(float);

int main(){
	
	float distance = 0.00;
	float price = 35.00;
	
	
	printf("Enter distance :");
	scanf("%f",&distance);
	
	printf("%.2f",calPrice(distance));
	
	
	
	return 0;
}
float calPrice1(float dis){
	float totalPrice = 0.00;
	float newDis = 0.00;
	
		newDis = dis - 2.00;
		
		totalPrice = newDis * 4.50;

	return totalPrice;
}

float calPrice2(float dis){
	float totalPrice = 0.00;
	float newDis = 0.00;

		newDis = dis - 12.00;
		
		totalPrice = newDis * 4.50;
	
	return totalPrice;
}
float calPrice3(float dis){
	float totalPrice = 0.00;
	float newDis = 0.00;
	
		newDis = dis - 20.00;
		
		totalPrice = newDis * 5.50;

	return totalPrice;
}
float calPrice(float dis){
	float totalPrice = 35.00;
	if(dis <= 2.00){
		totalPrice = totalPrice;
	}else if(dis <= 12.00){
		totalPrice = totalPrice + calPrice1(dis);
	}else if(dis <= 20.00){
			totalPrice = totalPrice + calPrice1(dis) + calPrice2(dis);
	}else{
			totalPrice = totalPrice + calPrice1(dis) + calPrice2(dis) + calPrice3(dis);
	}

	return floor(totalPrice);
}

