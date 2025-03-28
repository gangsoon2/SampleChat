# 텍스트 야구 겜

[ 사용 소스파일 ]
- BaseballGameState
- BaseballPlayerController
- BaseballGameWidget
- NumberBaseballGameMode
- UNumberBaseballLib

[ 소스파일 주요 기능 ]

| 클래스             | 역할 설명                                                              |
|------------------|-------------------------------------------------------------------------|
| **GameMode**       | 전체 게임의 로직 관리<br>👉 정답 숫자 생성, 입력 판정, 턴 전환 등 핵심 흐름 처리     |
| **GameState**      | 클라이언트와 동기화되는 게임 상태 변수 저장<br>👉 `CurrentTurn`, `GameMessage` 등 |
| **PlayerController** | 플레이어 입력 관리 및 서버와 통신<br>👉 채팅 입력 감지 → RPC 통해 서버에 명령 전달   |
| **UUserWidget**    | UI 화면 구성 및 실시간 정보 표시<br>👉 메시지 출력, 차례 안내, 채팅 입력창 UI 구성     |




[ 게임 설명 ]

| 항목           | 설명                                                                 |
|----------------|----------------------------------------------------------------------|
| **숫자 조건**   | 1~9까지 **서로 다른 3자리 숫자**                                     |
| **입력 방식**   | `/123` 형태로 **채팅창에 입력**                                      |
| **판정 로직**   | - 위치 & 값 모두 일치 → **스트라이크 (S)**<br>- 값만 같고 위치 다르면 **볼 (B)**<br>- 둘 다 아니면 **OUT** |
| **기회 제한**   | 각 플레이어당 **3번의 기회**                                         |
| **승리 조건**   | 먼저 **3S를 맞히거나**, 상대방이 탈락한 경우                          |
| **무승부 조건** | 두 플레이어 모두 **3번 사용 후 승자 없을 경우**                        |
| **자동 리셋**   | 승리 또는 무승부 발생 시, **자동으로 새로운 게임 시작**                 |



## 구현 과정

이 과제는 언리얼 엔진 C++ 기반으로 2인 멀티플레이 텍스트 숫자 야구 게임을 만드는 것을 목표로 하였습니다. 

---

### 1 GameMode 기반 구조 설계

- **`NumberBaseballGameMode`** 를 생성하여 게임의 핵심 로직을 관리
- 정답 숫자 생성, 입력 처리, 승리/무승부 판정 및 리셋 로직을 포함
- 서버 전용 로직으로 `BeginPlay()`에서 게임을 시작

---

### 2 난수 생성 로직 및 판정 로직 분리

- 정답 숫자는 1~9까지 중복 없는 3자리로 생성
- **`UUNumberBaseballLib`** 라는 C++ Static 라이브러리 클래스를 만들어 다음 기능을 분리 구현
  - `GenerateRandomNumber()` → 중복 없는 3자리 숫자 생성
  - `CheckGuess()` → 입력 숫자와 정답 비교 후 S/B/OUT 판정

---

### 3 GameState와 UI 동기화

- 클라이언트에서도 메시지를 실시간 확인할 수 있도록 **`BaseballGameState`** 생성
- `CurrentGameMessage`, `CurrentTurn`을 **ReplicatedUsing**으로 선언
- 클라이언트에서 UI가 메시지 변경/턴 변경을 감지하도록 델리게이트(`OnRep_`)로 연결

---

### 4 PlayerController를 통한 입력 처리

- **`BaseballPlayerController`** 에서 UMG 위젯을 생성하고 화면에 출력
- `EditableTextBox`로 채팅 입력을 받고, **RPC(Server_SendChatMessage)** 로 서버에 전달
- 서버는 GameMode에서 입력을 처리하고 판정 결과를 GameState로 전달

---

### 5️ UI (UMG) 구성

- **`BaseballGameWidget`** 위젯 안에 다음 요소 배치:
  - `ChatInputBox` : 채팅 입력창
  - `GameMessageText` : 결과 메시지 표시
  - `TurnIndicatorText` : 현재 턴 안내

- 입력 처리, 메시지 업데이트, 턴 변경 등의 기능을 `NativeConstruct()`에서 바인딩 처리

---

### 6 턴 기반 시스템 구현 (도전 항목)

- GameMode에서 `CurrentTurn`을 직접 제어
- 입력자가 자기 차례가 아닐 경우 → 무시 + 안내 메시지 출력
- 올바른 입력이 끝난 후 → 자동으로 상대 턴으로 전환
- UI에서 실시간으로 "현재 차례: Host / Guest" 표시

---

### 7️ 기능 완료 후 README 및 GitHub 업로드

- 구현 기능과 구조를 문서화하여 `README.md` 파일로 정리
- 기능 요약, 클래스 역할, 규칙 설명, 구현 흐름을 포함
- 추가로 흐름도 / 다이어그램 등을 활용하여 가독성 향상 예정
