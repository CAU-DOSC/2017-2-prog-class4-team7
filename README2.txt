# README2 file for TEAM[4,7]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

------------------------------------------------------------------------------------------------

<프로그램 내용>
* 문자열 길이와 rotation 주기를 입력
* Rotation을 trivial, juggle, block swap, reverse 각각의 algorithm으로 실행
* 각각의 방법의 소요시간을 출력한다.

<역할 분담>
* 정세훈 - trivial function
* 이성민 - reverse function, main function
* 박진선 - swap function, block swap function
* 김태훈 - README, juggle function

------------------------------------------------------------------------------------------------

<사용자 지정 함수에 대한 설명>
	1. trivial function
1-1) 함수 이름: trivial_rotation
1-2) 인수: (int)num, (int)d, (char *)ary, (int)length
1-3) 출력: (void)

	2. reverse function
2-1) 함수 이름: reverse
2-2) 인수: (char *)arr, (int)strlen_start, (int)strlen_end
2-3) 출력: (void)

	3. block swap function
3-1) 함수 이름: Block_Swap
3-2) 인수: (char)arr[], (int)n, (int)d
3-3) 출력: (void)

	4. juggle function
3-1) 함수 이름: juggle
3-2) 인수: (char)line[], (int)n, (int)d
3-3) 출력: (void)

----------------------------------------------------------------------------------------------------

<헤더 파일에 대한 설명>

	헤더 파일 안에 들어있는 함수: swap function
3-1) 함수 이름: Swap
3-2) 인수: (char)arr[], (int)a, (int)b, (int)d
3-3) 출력: (void)