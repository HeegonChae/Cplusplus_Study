### 1. 배열은 다른 배열에 통째로 대입 불가. 
1) 단, 포인터로 선언시 배열(의 주소) 대입 가능
---

### 2. char 배열은 cout 을 다른 배열과 다르게 처리한다.
1) cout은 **char 배열**을 만날 시, 배열의 첫 번째 주소부터 시작해서 '\0' (널 문자)로 끝나는 **문자열을 출력하는 방식**으로 동작.
    * 이는 **string 객체**도 동일하다.
2) 하지만 다른 배열(ex. **short 배열**)을 만날 시,  단순히 배열의 첫 번째 원소의 주소로 간주하고 **그 주소 값을 출력하는 방식**으로 동작.
---

### 3. 배열명과 함수 파라미터
1) 배열명 == 배열의 시작 주소
    *  **포인터 크기**는 내 컴퓨터는 주소 공간이 64 비트(**8 바이트**)로 표현
 ```
 arr == &arr[0]
 int ans2 = Mysum2(arr, arr + 3);
 ```
