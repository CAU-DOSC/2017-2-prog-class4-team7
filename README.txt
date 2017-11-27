# README file for TEAM[4,7]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.


<프로그램 내용>
* CTRL+z가 입력될 때까지 정수를 입력받는다.
* 입력받은 정수는 linked list를 구성하면서 node에 저장한다.
<역할 분담>
* header file: 정세훈- header file에는 자기연결 리스트와 그에 대한 포인터를 정의
* library file: 이성민 - library file 에는 사용자 지정 함수를 정의
* main file: 박진선 - main file에는 메인 함수를 작성
* README: 김태훈


<사용자 지정 함수에 대한 설명> 

      1. 노드 만드는 함수
1-1) 함수 이름: createNode
1-2) 인수: (int)value (value는 입력받은 정수)
1-3) 출력: (Link)cur
      2. 노드 사이를 잇는 함수
2-1) 함수 이름: append
2-2) 인수: (Link)cur, (Link)head
2-3) 출력: (Link)head
      3. 저장값을 출력하는 함수
3-1) 함수 이름: printValue
3-2) 인수: (Link)head, (int)i (i는 입력받은 정수의 개수)
3-3) 출력: (Link)head
* 파일 이름: library.c


<헤더 파일에 대한 설명>

1) 파일 이름: header.h
2) 구조체 이름: Node
3) 데이터 항목: (int)value, (struct node *)next
4) 구조체 포인터 이름: Link
* 헤더 파일 안에는 stdio.h, stdlib.h가 있다.
