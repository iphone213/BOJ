
#include <stdio.h>
double grade(int num);
char point(double num);

int main() {

	int num[20],curriculum;
	double score, sum = 0;
	char point_1, grade_eg[20][256];

	printf("한 학기 과목 수를 입력하세요 : ");
	scanf_s("%d", &curriculum);
	
	for (int i = 0; i < curriculum; i++) {
		printf("과목명 입력 : ");
		scanf_s("%s", grade_eg[i], sizeof(grade_eg[i]));

		printf("성적 입력 : ");
		scanf_s("%d", &num[i]);

		score = grade(num[i]);
		point_1 = point(score);

		printf("학점 : %.1f\n등급 : %c\n", score, point_1);
		sum += score;
	}
	printf("한학기 평균 점수 : %.2f\n", sum / curriculum);
	return 0;
}

double grade(int num) { //학점 구하는 함수
	double score = 0;
	switch (num / 10) {
	case 10 :
	case 9 :
		score = 4.0;
		break;
	case 8:
		score = 3.0;
		break;
	case 7:
		score = 2.0;
		break;
	case 6:
		score = 1.0;
		break;
	default :
		score = 0.0;
	}
	return score;
}

char point(double num) { //학점에 따른 점수 구하는 함수
	char point_2;
	if (num == 4.0) {
		point_2 = 'A';
	}
	else if (num == 3.0) {
		point_2 = 'B';
	}
	else if (num == 2.0) {
		point_2 = 'C';
	}
	else if (num == 1.0) {
		point_2 = 'D';
	}
	else point_2 = 'F';
	return point_2;
}
