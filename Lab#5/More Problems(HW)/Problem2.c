/*Create a program that calculates the final grade of a student based on multiple criteria, 
including attendance, assignment scores, and exam results, using nested decision structures.*/

#include<stdio.h>
int main(){
	float attendance , assignment1 , assignment2 , exam1 , exam2;
	float assignment_avg , exam_avg , final_grade;
	const float ASSIGNMENT_WEIGHT = 0.4; // 40% weight for assignments
	const float EXAM_WEIGHT = 0.6; // 605 weight for exams
	const float ATTENDANCE_THRESHOLD = 75.0; // Minimum attendance percentage
	
	printf("Enter the attendance percentage: ");
	scanf("%f" , &attendance);
	
	if (attendance >= ATTENDANCE_THRESHOLD){
		//Input assignment and exam scores
		printf("Enter the score for assignment 1: ");
		scanf("%f" , &assignment1);
		printf("Enter the score for assignment 2: ");
		scanf("%f" , &assignment2);
		
		printf("Enter score for exam 1: ");
		scanf("%f" , &exam1);
		printf("Enter score for exam 2: ");
		scanf("%f" , &exam2);
		
		// Calculate Averages
		assignment_avg = (assignment1 + assignment2)/2.0;
		exam_avg = (exam1 + exam2)/2.0;
		
		//Calculate final grade
		final_grade = (assignment_avg * ASSIGNMENT_WEIGHT)+(exam_avg * EXAM_WEIGHT);
		
		//Determining letter grade
		
		if(final_grade>=90){
			printf("Final Grade: %.2f (A)\n" , final_grade);		
		}else if(final_grade>=80){
			printf("Final Grde: %.2f (B)\n" , final_grade);
		}else if (final_grade>=60){
			printf("Final Grade: %.2f (D)\n" , final_grade);
		}else {
			printf("Final Grade: %.2f (F)\n" , final_grade);
		}
		
	}else {
		printf("Attendance is below required threshold. Final Grade: Fail\n");
		
	}
	return 0;
}    

