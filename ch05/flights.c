#include <stdio.h>

int main(void)
{
	int hours, minutes, msm;
	int d1_msm, d2_msm, d3_msm, d4_msm, d5_msm, d6_msm, d7_msm, d8_msm;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	// Minutes since midnight
	msm = hours * 60 + minutes;

	// Departsures
	d1_msm = 480;
	d2_msm = 583;
	d3_msm = 679;
	d4_msm = 767;
	d5_msm = 840;
	d6_msm = 945;
	d7_msm = 1140;
	d8_msm = 1305;

	if (msm <= (d1_msm + d2_msm) / 2)
		printf("Closest departure time is 8:00 a.m., arriving at 10.16 a.m.\n");
	else if (msm <= (d2_msm + d3_msm) / 2)
		printf("Closest departure time is 9:43 a.m., arriving at 11.52 a.m.\n");
	else if (msm <= (d3_msm + d4_msm) / 2)
		printf("Closest departure time is 11:19 a.m., arriving at 1.31 p.m.\n");
	else if (msm <= (d4_msm + d5_msm) / 2)
		printf("Closest departure time is 12:47 p.m., arriving at 3.00 p.m.\n");
	else if (msm <= (d5_msm + d6_msm) / 2)
		printf("Closest departure time is 2:00 p.m., arriving at 4.08 p.m.\n");
	else if (msm <= (d6_msm + d7_msm) / 2)
		printf("Closest departure time is 3:45 p.m., arriving at 5.55 p.m.\n");
	else if (msm <= (d7_msm + d8_msm) / 2)
		printf("Closest departure time is 7:00 p.m., arriving at 9.20 p.m.\n");
	else
		printf("Closest departure time is 9:45 p.m., arriving at 11.58 p.m.\n");

	return 0;
}
