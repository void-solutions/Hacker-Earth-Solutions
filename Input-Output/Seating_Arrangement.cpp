	#include <iostream>
	#include <string>
	using namespace std;

	void seatType(int);
	int main(){
		int Passenger=0;
		cin >>Passenger;
		int Pass[Passenger];
		for(int i=0;i<Passenger;i++)
			cin >>Pass[i];
		for(int i=0;i<Passenger;i++){
			seatType(Pass[i]);
			cout <<endl;
		}

	}
	void seatType(int seat){
		int realSeat=seat;
		int thirtCounter=1;
		bool rightSeats=true;
		seat=seat%12;
		if(seat==0){
			cout <<realSeat -11 <<" WS";
			return;
			}
		for(int i=1;i<seat;i++){
			if(i%3==0){
				thirtCounter++;
				if(thirtCounter%2==0){
					rightSeats=!rightSeats;
					thirtCounter=0;
				}
			}
		}

			if(rightSeats==true){
				if(seat%3==1){
					if(thirtCounter%2==1){
						cout <<realSeat+11<<" WS";
						return;
						}
					if(thirtCounter%2==0){
						cout <<realSeat-7<<" AS";
						return;
						}
					}
				if(seat%3==2){
					if(thirtCounter%2==1){
						cout <<realSeat+9<<" MS";
						return;
						}
					if(thirtCounter%2==0){
						cout <<realSeat-9<<" MS";
						return;
						}
					}
				if(seat%3==0){
					if(thirtCounter%2==1){
						cout <<realSeat+7<<" AS";
						return;
						}
					if(thirtCounter%2==0){
						cout <<realSeat-11<<" WS";
						return;
						}
					}
			}
			
			if(rightSeats==false){
				if(seat%3==1){
					if(thirtCounter%2==0){
						cout <<realSeat+5<<" AS";
						return;
					}
					if(thirtCounter%2==1){
						cout <<realSeat-1<<" WS";
						return;
					}
				}
				if(seat%3==2){
					if(thirtCounter%2==0){
						cout <<realSeat+3<<" MS";
						return;
					}
					if(thirtCounter%2==1){
						cout <<realSeat-3<<" MS";
						return;
					}
				}
				if(seat%3==0){
					if(thirtCounter%2==0){
						cout <<realSeat+1<<" WS";
						return;
					}
					if(thirtCounter%2==1){
						cout <<realSeat-5<<" AS";
						return;
					}
				}
			}
		}




	/* 3 girdi alınır. ilk girdi kaç kişi olduğunu ikinci girdi koltuk numarasını temsil eder.
		çıktı olarak koltuğun karşısındaki koltuğu bastırır ve hangi tipte olduğunu bastırır */