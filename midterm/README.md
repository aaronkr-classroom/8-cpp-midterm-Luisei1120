[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/c1JDVzy_)
# CPP Midterm Test / C++ 중간고사

실기 시험은 **OPEN BOOK**입니다. 

- 인터넷, 책, 노트 등을 포함한 모든 자료를 사용할 수 있습니다.
- 시험 중에 다른 학생과 통신하거나 다른 자료를 사용할 수 없습니다.

## **TEST:** Instructions / **시험:** 지시사항

이 시험을 완료하려면 이전 장 프로젝트에서 가져온 포함된 파일을 사용하십시오. (파일은 이 저장소에 포함되어 있습니다.)

1. GitHub Desktop으로 코드 다운로드합니다.
2. Visual Studio를 열고 새로운 `midterm` 프로젝트를 만듭니다.
3. Windows 탐색기에서 이 저장소에 포함된 모든 코드 파일을 새로 생성된 `midterm` 프로젝트 폴더로 이동합니다.
4. Visual Studio에서 포함된 모든 파일을 해당 `소스 파일`, `헤더 파일` 또는 `리소스 파일` 폴더에 추가합니다.
5. 새로운 `analysis` **헤더**와 **소스** 파일을 만들고 책 6장의 코드를 여기에 추가하세요. 필요한 기능 목록은 아래에 제공됩니다.
6. `accumulate()` 함수를 사용하려면 `analysis.cpp` 파일에 `<numeric>` 헤더를 포함시킵니다.
7. 이 저장소의 `main.cpp` 파일을 실행하고 [구글폼 링크](https://forms.gle/5yL8Az6oxV9TWVPL7)에서 직접 아래 제공된 테스트 질문에 답하세요.

### Required functions / 필수 함수

- `did_all_hw()` - p. 182
- `grade_aux()` - p. 186
- `median_analysis()` - p. 186
- `optimistic_median()` - p. 190
- `optimistic_median_analysis()` - 책에 없는 코드, 아래 제공됨
- `average()` - p. 188
- `average_grade()` - p. 189
- `average_analysis()` - p. 189
- `write_analysis()` - p. 186-187

#### `optimistic_median_analysis()` 코드

```cpp
double optimistic_median_analysis(const vector<Student_info>& students) {
  vector<double> grades;

  transform(students.begin(), students.end(),
    back_inserter(grades), optimistic_median);

  return median(grades);
}
```

### Test Questions / 시험 문제

시험문제는 다음 [구글폼 링크](https://forms.gle/5yL8Az6oxV9TWVPL7)에서 확인하실 수 있습니다.

**콘솔에 출력되는 정확한 텍스트로 모든 질문에 답하십시오.**<br>
(값이 `int`인 경우 `int`를 사용합니다. 값이 소수점 이하 4자리의 `float`인 경우 전체 값을 입력합니다.)

질문에서 두 학생의 이름을 묻는 경우 화면에 나타나는 대로 *정렬된 알파벳 순서*로 이름을 입력합니다.<br>
(예: `John + Zoe`, `Aaron & Ben`, `Charlie, Tom` 또는 `Eric and Megan`).<br>
`+`나 `&`나 `,` 문자나 `and` 단어를 사용하여 이름을 구분할 수 있습니다.
