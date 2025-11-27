//Game variables

#define min_numb 0
//Minimal number that can be scored during one round.
#define max_numb 5
//Max number that can be scored during one round.
#define max_round_numb 100
//Max number of rounds that could be played
#define startnum 0
//Players initial score
#define win_number 50
//Win number.


//Game rules

#define start_first_negative  
//IF defined, the first round would be negatives, if not, positives.
#define second_player_start_first
//IF defined, second player plays first, if not, first player plays first.
#define display_moves
//IF defined, all moves are shown.
#define display_scores
//IF defined, scores will be shown after each move.

#include <iostream>;
#include <random>;

enum PlayerStatus {
	first_player_turn = true,
	second_player_turn = false
};

short int randnum(bool is_negative) {

	// https://www.geeksforgeeks.org/cpp/how-to-generate-random-number-in-range-in-cpp/

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(min_numb, max_numb);

	short int random_number = distrib(gen);

	if (is_negative) {
		return (-1*random_number);
	}
	else {
		return (random_number);
	}

	return (NAN); //If somehow is_negative doesnt work.

}

int main() {

	short int first_player_score = startnum;
	short int second_player_score = startnum;
	
	#ifdef start_first_negative
	bool first_player_negative = true;
	bool second_player_negative = true;
	#else
	bool first_player_negative = false;
	bool second_player_negative = false;
	#endif // start_first_negative

	#ifdef second_player_start_first
	bool player_turn = second_player_turn;
	#else
	bool player_turn = first_player_turn;
	#endif // second_player_start_first


	for (int round_num = 0; round_num < max_round_numb; round_num++) {

		switch (player_turn)
		{

		case first_player_turn: {
			short int turn_score = randnum(first_player_negative);

			#ifdef display_moves

				std::cout << turn_score << ": First player" << std::endl; //show the score if defined

			#endif // display_moves

			#ifdef display_scores

				std::cout << first_player_score << ": First player score" << std::endl; 

			#endif // display_scores


			first_player_score =+ turn_score;
			first_player_negative = !first_player_negative;

			player_turn = second_player_turn;
			} break;

		case second_player_turn: {
		short int turn_score = randnum(second_player_negative);

			#ifdef display_moves
				
				std::cout << turn_score << ": Second player" << std::endl; //show the score if defined
				
			#endif // display_moves
			#ifdef display_scores

				std::cout << second_player_score << ": Second player score" << std::endl;

			#endif // display_scores

		second_player_score = +turn_score;
		second_player_negative = !second_player_negative;

		player_turn = first_player_turn;

		//Could also be dont with player_turn = !player_turn

			} break;
		}

		if (first_player_score >= win_number) {
			
			std::cout << "First player wins with" << first_player_score << " on turn " << round_num << "\n Second player lost with " << second_player_score;

			return(1);
		}
		if (second_player_score >= win_number) {

			std::cout << "First player wins with" << second_player_score << " on turn " << round_num << "\n First player lost with " << first_player_score;

			return(2);
		}

		std::cout << std::endl;

	}

	std::cout << "No one wins, all losers.";

	return(0);

}