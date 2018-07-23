#include<stdio.h>
#include<math.h>
float calPrice(float);

int main(){
	
	float distance = 0.00;
	
	printf("Enter distance :");
	scanf("%f",&distance);
	
	printf("%.2f Bath",calPrice(distance));
	
	return 0;
}
float calPrice(float dis){
	float totalPrice = 0.00;
	if(dis <= 12.00){
		totalPrice = ( (dis - 2.00) * 4.50 ) + 35.00;
	}else if(dis <= 20.00){
		totalPrice = ( (dis - 12.00 ) * 5.00 ) + ( (10.00) * 4.50 ) + 35.00;
	}else{
		totalPrice = ( ( dis - 20.00 ) * 5.50 ) + ( (8.00 ) * 5.00 ) + ( (10.00) * 4.50 ) + 35.00;
	}
	totalPrice = (int)totalPrice % 2 == 0 ? totalPrice-1:totalPrice;
	return floor(totalPrice);
}


