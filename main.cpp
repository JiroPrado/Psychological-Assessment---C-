#include <iostream>
using namespace std;

void personalityTest() {
	int answers[30] = {0};
	const char *questions[30]  = {
		"1. I am the life of the party.",
		"2. Feel little concern for others.",
		"3. I am always prepared.",
		"4. Get stressed out easily.",
		"5. Have a rich vocabulary.",
		"6. Don't talk a lot.",
		"7. I am interested in people.",
		"8. Leave my belongings around.",
		"9. I am relaxed most of the time.",
	    "10. Have difficulty understanding abstract ideas.",
	    "11. Feel comfortable around people.",
		"12. Insult people.",
		"13. Pay attention to details.",
		"14. Worry about things.",
		"15. Have a vivid imagination.",
		"16. Keep in the background.",
		"17. Sympathize with others' feelings.",
		"18. Make a mess of things.",
		"19. Not often feel blue.",
	    "20. I am not interested in abstract ideas.",
	    "21. Start conversations.",
		"22. I am not interested in other people's problems.",
		"23. Get chores done right away.",
		"24. I am easily disturbed.",
		"25. Have excellent ideas.",
		"26. Have little to say.",
   		"27. Have a soft heart.",
		"28. Often forget to put things back in their proper place.",
		"29. Not get upset easily.",
		"30. Do not have a good imagination.",
	};
	int answer=0;
	cout << "\n			______________";
	cout << "\n\n			PERSONALITY TEST";
	cout << "\n			______________";
	cout << "\n\nThis is a personality test, it will help you understand why you" 
		"\nact the way that you do and how your personality is structured."
		"\n\nPlease follow the instructions below.";
	cout << "\nInstructions:"
		"\nIn the questions below (30 Items), mark how much you agree with on the scale 1-5, where: ";
	cout << "\n1=disagree \n2=slightly disagree \n3=neutral";
	cout << "\n4=slightly agree \n5=agree";
	
	int i=0;
	string repeat;
	while (i < 30) {
		cout << "\n" << questions[i] << ": ";
		cin >> answers[i];
		
		if (answers[i] > 5 || answers[i] < 1) {
			cout << "Invalid answer. Do you want to try again? (y - yes/n - no): ";
			cin >> repeat;
			if (repeat == "y") {
				system("cls");
				personalityTest();
			} else {
				return;
			}
		}
		i++;
	}

	int e = 20 + answers[0] - answers[5] + answers[10] - answers[15] + answers[20] - answers[25];
	int a = 20 - answers[1] + answers[6] - answers[11] + answers[16] - answers[21] + answers[26];
	int c = 20 + answers[2] - answers[7] + answers[12] - answers[17] + answers[22] - answers[27];
	int n = 20 - answers[3] + answers[8] - answers[13] + answers[18] - answers[23] + answers[28];
	int o = 20 + answers[4] - answers[9] + answers[14] - answers[19] + answers[24] - answers[29]; 

	cout << "\nEXTROVERSION(E) \n- is the personality trait of seeking fulfillment from sources outside the self or in community. \nHigh scorers tend to be very social. \nLow scorers prefer to work on their projects alone. = " << e;

	if (e > 21) {
		cout << "\n\nRESULT: Good, you are outgoing, warm, and seeks adventure. You thrive in social situations and feel comfortable voicing other opinions. You tend to gain energy and become excited from being around others.";
	} else if (e < 19) {
		cout << "\n\nRESULT: You are quiet, reserved, and withdrawn. You are often referred to as introverts. You tend to be more reserved \nand quieter. You prefer listening to others rather than needing to be heard.";
	} else {
		cout << "\n\nRESULT: You are a quiet person and tend to be alone but you still like to be social.";
	}

	cout << "\n\nAGREEABLENESS(A) \n- reflects much individuals adjust their behavior to suit others. \nHigh scorers are typically polite and like people. \nLow scorers are stubborn and unsympathetic. = " << a;
	
	if (a > 21) {
		cout << "\n\nRESULT: Good, you are soft-hearted, trusting, and well-liked. You are sensitive to the needs of others and are helpful \nand cooperative.";
	} else if (a < 19) {
		cout << "\n\nRESULT: You may be perceived as suspicious, manipulative, and uncooperative.";
	} else {
		cout << "\n\nRESULT: You are a sensitive person but also doesn't feel sympathy to others.";
	}
	
	cout << "\n\nCONSCIENTIOUSNESS(C) \n- is the personality trait of being honest and hardworking. \nHigh scorers tend to follow rules and prefer clean homes. \nLow scorers may be messy and cheat others. = " << c;

	if (c > 21) {
		cout << "\n\nRESULT: Good, you can be described as organized, disciplined, detail-oriented, thoughtful, and careful.";
	} else if (c < 19) {
		cout << "\n\nRESULT: You may struggle with impulse control, leading to difficulty in completing tasks and fulfilling goals.";
	} else {
		cout << "\n\nRESULT: You're maybe an organized and hardworking person but also feel difficulty in fulfilling your goals.";
	}

	cout << "\n\nNEUROTICISM(N) \n-  is the personality trait of being emotional. \nHigh scorers tend to be positive person and productive. \nLow scorers may be negative people. = " << n;

	if (n > 21) {
		cout << "\n\nRESULT: Good, you are more likely to calm, secure and self-satisfied. You are less likely to be perceived as anxious or moody.";
	} else if (n < 19) {
		cout << "\n\nRESULT: You often feel anxious, insecure and self-pitying. You are often perceived as moody and irritable.";
	} else {
		cout << "\n\nRESULT: You feel insecure sometimes but also feel to be calm and self-satisfied.";
	}

	cout << "\n\nOPENNESS TO EXPERIENCE(O) \n- is the personality trait of seeking new experience and intellectual pursuits. \nHigh scores may day dream a lot. \nLow scorers may be very down to earth. = " << o;
	
	if (o > 21) {
		cout << "\n\nRESULT: Good, you are perceived as creative and artistic.";
	} else if (o < 19) {
		cout << "\n\nRESULT: You are uncomfortable with change and trying new things so they prefer the familiar over the unknown.";
	} else {
		cout << "\n\nRESULT: You're maybe an artistic person but also doesn't feel the same way.";
	}
}
     

void attitudeTest() {
	int answers[30] = {0};
	const char *questions[30]  = {
		"1. You care about the poor.",
		"2. Angry all the time.",
		"3. Honest to friends and family.",
		"4. Easily feel exhausted.",
		"5. Saying po and opo to elders.",
		"6. Hate ugly faces.",
		"7. Optimistic person.",
		"8. Easily get jealous of other people's success.",
		"9. Hardworking person.",
	    "10. Usually using bad words.",
	    "11. Compliment someone on other than appearance.",
		"12. Always feel disgusted.",
		"13. Loyal to someone.",
		"14. Complaining too much.",
		"15. Pagmamano.",
		"16. Hate uneducated people.",
		"17. Can easily overcome depression and sadness.",
		"18. Bad influence to others.",
		"19. Learning is the first priority.",
	    "20. You like to hurt someone's feelings.",
	    "21. Dislike person with disabilities (pwd).",
		"22. Feeling scared all the time.",
		"23. You help others.",
		"24. Giving up so easily.",
		"25. You appreciate someone efforts.",
		"26. Like to bully others.",
   		"27. Smiling even in pain.",
		"28. Don't talk a lot.",
		"29. Want to be successful someday.",
		"30. Not respecting other religions.",
	};
	int answer=0;
	cout << "\n			___________";
	cout << "\n\n			ATTITUDE TEST";
	cout << "\n			___________";
	cout << "\n\nThis is an attitude test and it's done to measure people's attitudes." 
		"\nThe purpose is to quantify peoples' beliefs and behaviors."
		"\n\nPlease follow the instructions below.";
	cout << "\nInstructions:"
		"\nIn the questions below (30 Items), mark how much you agree with on the scale 1-5, where: ";
	cout << "\n1=disagree \n2=slightly disagree \n3=neutral";
	cout << "\n4=slightly agree \n5=agree";
	
	int i=0;
	string repeat;
	while (i < 30) {
		cout << "\n" << questions[i] << ": ";
		cin >> answers[i];
		
		if (answers[i] > 5 || answers[i] < 1) {
			cout << "Invalid answer. Do you want to try again? (y - yes/n - no): ";
			cin >> repeat;
			if (repeat == "y") {
				system("cls");
				attitudeTest();
			} else {
				return;
			}
		}
		i++;
	}

	int b = 20 + answers[0] - answers[5] + answers[10] - answers[15] + answers[20] - answers[25];
	int n = 20 - answers[1] + answers[6] - answers[11] + answers[16] - answers[21] + answers[26];
	int e = 20 + answers[2] - answers[7] + answers[12] - answers[17] + answers[22] - answers[27];
	int g = 20 - answers[3] + answers[8] - answers[13] + answers[18] - answers[23] + answers[28];
	int m = 20 + answers[4] - answers[9] + answers[14] - answers[19] + answers[24] - answers[29]; 
	
	cout << "\nBENEVOLENT(B) \n- mean that they are kind and fair intending or showing goodwill. \nHigh scorers tend to be caring and treat others good. \nLow scorers may be hates people. = " << b;

	if (b > 21) {
		cout << "\n\nRESULT: Good, you are soft-hearted and kind that shows good attitude.";
	} else if (b < 19) {
		cout << "\n\nRESULT: You are maybe unsympathetic and heartless that shows bad attitude.";
	} else {
		cout << "\n\nRESULT: You're maybe soft-hearted but you feel heartless sometimes.";
	}
	
	cout << "\n\nNEUROTICISM(N) \n- is the personality trait of being emotional. \nHigh scorers tend to be positive person and productive. \nLow scorers may be pessimistic and negative people. = " << n;
	
	if (n > 21) {
		cout << "\n\nRESULT: Good, you are more likely to calm, secure and self-satisfied. You are less likely to be perceived as anxious or moody. It shows good attitude.";
	} else if (n < 19) {
		cout << "\n\nRESULT: You often feel anxious, insecure and self-pitying. You are often perceived as moody and irritable. It shows bad attitude.";
	} else {
		cout << "\n\nRESULT: You feel insecure sometimes but also feel to be calm and self-satisfied.";
	}
	
	cout << "\n\nEXTROVERSION(E) \n- implies having qualities that make one liked and easy to deal with. \nIt means you are friendly, sociable, and congenial. \nHigh scorers tend to be very social and honest. \nLow scorers may be dishonest and anti-social. = " << e;
	
	if (e > 21) {
		cout << "\n\nRESULT: Good, you are outgoing, warm, and seeks adventure. You thrive in social situations and feel comfortable voicing other opinions. You tend to gain energy and become excited from being around others. It shows good attitude.";
	} else if (e < 19) {
		cout << "\n\nRESULT: You are quiet, reserved, and withdrawn. You are often referred to as introverts. You tend to be more reserved \nand quieter. You prefer listening to others rather than needing to be heard. It shows bad attitude";
	} else {
		cout << "\n\nRESULT: You are a quiet person and tend to be alone but you still like to be social.";
	}
	
	cout << "\n\nGOALS-ORIENTED(G) \n- concerned with or focused on achieving a particular aim or result. \nHigh scorers tend to be ambitious in good term. \nLow scorers may be lazy. = " << g;
	
	if (g > 21) {
		cout << "\n\nRESULT: Good, you are dedicated and diligent that shows good attitude in pursuing of your goals.";
	} else if (g < 19) {
		cout << "\n\nRESULT: You are inactive and lazy that shows bad attitude towards your goals";
	} else {
		cout << "\n\nRESULT: You're maybe dedicated sometimes but also feel lazy in some times.";
	}
	
	cout << "\n\nMORALITY(M) \n- is a behavior showing high moral standards. \nHigh scores tend to be a good person and disciplined. \nLow scorers may be undisciplined and bad. = " << m;

	if (m > 21) {
		cout << "\n\nRESULT: Good, you are more in rightness and you respect others especially to elders and it shows good virtue in your \nattitude.";
	} else if (m < 19) {
		cout << "\n\nRESULT: You prefer to be bad and disrespect others especially to elders and it shows bad virtue in your attitude.";
	} else {
		cout << "\n\nRESULT: You're maybe confused on what you feel but you still good but sometimes bad.";
	}

}

void intelligenceTest() {
	int answers[25] = {0};
	const char *questions[25]  = {
		"I. What is the average of 15, 23, 10, 12? \n1. 15 \n2. 18 \n3. 10 \n4. 20",
		"II. What is the square root of 8? \n1. 16 \n2. 4.66 \n3. 3.56 \n4. 2.82",
		"III. A nail technician makes $9.00 per hour in the salon and $2.50 extra for every pedicure. Last week he worked 30 hours and did 10 pedicures. How much money did he make? \n1. $315 \n2. $295 \n3. $300 \n4. $654",
		"IV. An accurate clock shows 8 o'clock in the morning. Through how may degrees will the hour hand rotate when the clock shows 2 o'clock in the afternoon? \n1. 144 degrees \n2. 150 degrees \n3. 180 degrees \n4. 168 degrees",
		"V. Identify the missing number in the series. \n0.18, 0.36, 0.72, ___, 2.88 \n1. 1.26 \n2. 1.62 \n3. 1.44 \n4. 2.82",
		"VI. It was Sunday on Jan 1, 2006. What was the day of the week Jan 1, 2010? \n1. Wednesday \n2. Friday \n3. Thursday \n4. Saturday",
		"VII. What will be the average of integers that fall between 13 to 37? \n1. 15 \n2. 18 \n3. 20 \n4. 25",
		"VIII. Inflammable and flammable have the same meaning? \n1. True \n2. False \n3. Both a and b \n4. I don't know'",
		"IX. 4 x 5 x 0 x 6 =__? \n1. 0 \n2. 120 \n3. 60 \n4. 30",
	    "X. Round 4.864 to the nearest tenth? \n1. 5 \n2. 4.87 \n3. 4.7 \n4. 4.9",
	    "XI. 0.12 ÷ 1 = ? \n1. 0.112 \n2. 0.12 \n3. 0 \n4. 0.11",
		"XII. A bus travels 20 feet in 1/5 seconds. How many feet will it cover at the same speed in 3 seconds? \n1. 400 feet \n2. 100 feet \n3. 300 feet \n4. 200 feet",
		"XIII. Partner and Join have ___ meanings. \n1. opposite \n2. unrelated \n3. similar \n4. contradictory",
		"XIV. Identify the next number: \n3, 8, 18, 38, ___ \n1. 48 \n2. 78 \n3. 80 \n4. 60",
		"XV. Which one of the following is not a prime number? \n1. 31 \n2. 61 \n3. 71 \n4. 91",
		"XVI. (3 x 2) x (12 x 2) =____ \n1. 144 \n2. 102 \n3. 122 \n4. 206",
		"XVII. The cube root of .000216 is: \n1. .06 \n2. .6 \n3. 77 \n4. .00000000216",
		"XVIII. (4 x 5) x (4 x 5) = \n1. 20 \n2. 40 \n3. 60 \n4. 400",
		"XIX. What will be the height of a box which has a length of 6 cm, width of 7 cm and volume of 378 cubic cm? \n1. 12 cm \n2. 9 cm \n3. 11 cm \n4. 23 cm",
	    "XX. How many days are there in three years? \n1. 1,105 \n2. 1,090 \n3. 1,095 \n4. 1,085",
	    "XXI. Which number has the smallest value? \n1. 4 \n2. 0.4 \n3. 0.04 \n4. 0.42",
		"XXII. Which is the largest number? \n1. 10,111 \n2. 11,000 \n3. 12.011 \n4. 0.111",
		"XXIII. You're in a race, you passed the 2nd place. What place you are now? \n1. 1st place \n2. 4th place \n3. 3rd place  \n4. 2nd place",
		"XXIV. What will be the value if we reduce this fraction to the lowest term? 24/92 \n1. 6/23 \n2. 8/31 \n3. 4/9 \n4. 12/28",
		"XXV. Calculate: -43 + 9 \n1. -34 \n2. -32 \n3. 32 \n4. 34",
	};
	int correctAnswer[25] = { 1, 4, 2, 3, 3, 2, 4, 1, 1, 4, 2, 3, 3, 2, 4, 1, 1, 4, 2, 3, 3, 2, 4, 1, 1 };
	int answer=0;
	cout << "\n			_______________";
	cout << "\n\n			INTELLIGENCE TEST";
	cout << "\n			_______________";
	cout << "\n\nThis is an intelligence test and it's done to measure people's intelligence." 
		"\nThe purpose is to measures a range of cognitive abilities and provides a score that is intended to serve as a measure \nof an individual's intellectual abilities and potential."
		"\n\nPlease follow the instructions below.";
	cout << "\nInstructions:"
		"\nIn the questions below (25 Items), select the number (1-4) of the correct answer.";
	cout << "\nPlease read carefully before you answer.";
	
	int i=0;
	int score=0;
	string repeat;
	while (i < 25) {
		cout << "\n" << questions[i] << "\n: ";
		cin >> answers[i];
		if (correctAnswer[i] == answers[i]) {
			cout << "You are correct!";
			score++;
		} else {
			cout << "Incorrect.";
		}
		
		if (answers[i] > 4 || answers[i] < 1) {
			cout << "Invalid answer. Do you want to try again? (y - yes/n - no): ";
			cin >> repeat;
			if (repeat == "y") {
				system("cls");
				intelligenceTest();
			} else {
				return;
			}
		}
		i++;
	}
	cout << "\n\nTotal score:" << score;

	if (score <= 7) {
		cout << "\n\nRESULT: Oh bad! You have an IQ ranges 70 to 79, you are cognitively impaired.";
	} else if (score >= 8 && score <= 9) {
		cout << "\n\nRESULT: That's not bad. You have an IQ ranges 80 to 89, you are below average intelligence.";
	} else if (score >= 10 && score <= 16 ) {
		cout << "\n\nRESULT: Good! You have an IQ ranges 90 to 110, you are average intelligence.";
	} else if (score >= 17 && score <= 18 ) {
		cout << "\n\nRESULT: Awesome! You have an IQ ranges 111 to 120, you are above average intelligence.";
	} else if (score >= 19 && score <= 21 ) {
		cout << "\n\nRESULT: Brilliant! You have an IQ ranges 121 to 129, you are gifted!.";
	} else {
		cout << "\n\nRESULT: Fantastic! You have an IQ of 130 and above, you are very gifted!.";
	}
}

int main() {
	int choice;
	string name;
   
	cout << "\n          					**********************";
	cout << "\n          					PSYCHOLOGICAL ASSESSMENT";
	cout << "\n         					**********************";
	cout << "\n\n     A psychological assessment evaluates thinking, learning, and behavior. A psychological evaluation is useful in \n     identifying your strengths and weaknesses and will lead to recommendations for both academic and behavioural \n					             intervention.";
	cout << "\n\nName:";
	cin >> name;
	cout <<	"Hi " << name << "!";
	cout << "\nPlease select your preferred test:";
	cout << "\n1. Personality Test";
	cout << "\n2. Attitude Test";
	cout << "\n3. Intelligence Test";
	cout << "\n\nChoice: ";
	cin >> choice;
	
	switch (choice) {
		case 1:
			personalityTest();
			break;
		case 2:
			attitudeTest();
			break;
		case 3:
			intelligenceTest();
			break;
		default:
			cout << "Please select from the options only.";
			break;
	}

   return 0;
}

