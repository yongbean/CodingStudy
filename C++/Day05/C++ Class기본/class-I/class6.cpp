void main()
{
	int i = 1;
	
	int j1(i);			//int j1(1); 복사하고 j1 생성
	int j2 = i;		    //int j2 = 1; 복사하고 j2 생성
	int j3; 			//	  j3 = 1; 생성 후 복사
	j3 = i;		
	//j3와 j1, j2는 같은 결과지만 하는 방식이 다르다
}
