# Pclub Secy Recruitment

Time limit per test   : 1 second
<br>Memory limit per test : 256 MB
<br>Input  : standard input
<br>Output : standard output<br><br>

Its already 3rd week of August and the secretary recruitment for SNT clubs have started at IIT Kanpur. Programming Club of IIT Kanpur (aka Pclub) like past years have recieved an overwhelming number of applicants. Thus, for shortlisting the applicants for the interview the coordinators of the Pclub have given 6 tasks. To be eligible for the interview, applicant have to complete atleast *one* of these tasks.
<br>
Moreover, the coordinators had their intern season last week which was very hectic and therefore want to relax for the next week. Thus, they have given you the task to conduct the interviews and prepare a final list of applicants for the Post of Secretary. The final selections are made based on the following two criteria: -<br>

**1. Tasks Score** - It is calculated by taking [GIF](https://www.geeksforgeeks.org/greatest-integer-function/) of average of the points given to an applicant for each of their tasks by the Coordinator + 10 points for each task completed by the applicant.<br>

**2. Interview Score** - The Interview Score is further calculated based on the applicant *Enthu* and *Skills*. To calculate the *Enthu* we add the digits of the applicant Roll No. and for *Skills* we add the square of the digits of the applicant Roll No.<br>

For Example - An Applicant with Roll No. 200246 has submitted solution for Task 3 & 6 and was awarded 80 & 100 points respectively, then his `Tasks Score` will be 90 + 20 and `Interview Score` will be (2+0+0+4+6) + (4+0+0+16+36). Every applicant has **distinct** Roll No. Also, If multiple students have same overall score then you have to select those who comes first in the list. Note that to become the Secretary, the applicant should must give interview.<br>

You have been given a list of applicants with their Roll No. and their individual Tasks Points. Can you help the coordinators of Pclub in this recruitment prcoess and make their life a bit easier?<br>

**Note:-** To make this problem more fun & interesting you are not allowed to use *map*.<br> 

## Input

The first line conatins two integers n (0 <= n <= 10000) - the number of applicants and k (1 <= k <= 100000) - the maximum number of students to be selected for the Post of Secretary.<br>
In each of the next n lines contains an array of 7 integers(a1,a2,...,a7). The a1 represents roll no. of *i*-th applicant (0 <= i <= n) followed by their task points (0 <= task points <= 100) for each task from 1 to 6 respectively.<br>

## Ouput

Print x lines, where x is the no. of applicants finally selected. Each of these line should contain two integers, Roll No. of the applicant and their overall score. The scores should be in decreasing order. <br>
If x is 0, print -1.


## Sample Input 1
1 1 <br>
200246 0 0 80 0 0 100

## Sample Output 1
200246 184

## Sample Input 2
5 2<br>
200001 0 0 0 100 0 0<br>
200050 10 50 50 0 0 0<br>
200009 0 0 0 0 0 50<br>
200246 0 0 80 0 0 100<br>
201001 0 0 0 50 80 0

## Sample Output 2
200246 184<br>
200009 156<br>

<br><br>

### Problem Tags
`implementation` `math` `sorting` `hashing` `*1300`<br><br>


Click [here](https://github.com/Thisisakr47/Pclub-Tasks/blob/master/CP/Solution/Editorial.md) for Editorial.