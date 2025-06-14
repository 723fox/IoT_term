// config.h
// 시스템 전체에서 공통으로 사용하는 설정값 및 상수 정의

#ifndef CONFIG_H
#define CONFIG_H

/*************** WiFi 설정 ***************/
#define WIFI_SSID       "Your_SSID"              // 와이파이 SSID
#define WIFI_PASSWORD   "Your_WIFI_Password"     // 와이파이 비밀번호

/*************** MQTT 브로커 설정 ***************/
#define MQTT_SERVER     "broker.hivemq.com"      // MQTT 브로커 주소
#define MQTT_PORT       1883                     // 기본 포트 (1883)
#define MQTT_CLIENT_ID  "SmartDoor-ESP32"        // 고유 클라이언트 ID
#define MQTT_TOPIC_LOG  "smartaccess/log"        // 출입 결과 전송 토픽
#define MQTT_TOPIC_ALERT "smartaccess/alert"     // 이상 탐지 경고 토픽

/*************** BLE 인증 설정 ***************/
#define AUTHORIZED_BLE_MAC "AA:BB:CC:DD:EE:FF"    // 등록된 BLE 기기 주소 (스마트폰)
#define RSSI_THRESHOLD   -70                     // 출입 허용 RSSI 기준값 (거리 제어)

// 게스트 UUID 인증 관련 (선택사항)
#define ENABLE_GUEST_UUID      true              // 게스트 UUID 사용 여부
#define GUEST_AUTH_UUID        "12345678-90AB-CDEF-1234-567890ABCDEF"  // 허용된 게스트 UUID

/*************** 도어락 제어 설정 ***************/
#define DOOR_PIN          5                      // 도어락 제어 핀 (릴레이 or 서보)
#define DOOR_UNLOCK_TIME  5000                   // 문 열림 유지 시간 (ms)

/*************** 이상 탐지 설정 ***************/
#define ENABLE_ANOMALY_DETECTION true            // 이상탐지 기능 ON/OFF
#define MAX_FAILED_ATTEMPTS      3               // 인증 실패 허용 횟수
#define ANOMALY_ALERT_TIME       10              // 이상 시 MQTT 경고 전송 간격 (초)

/*************** 시간대 제한 설정 (옵션) ***************/
#define ENABLE_TIME_RESTRICTION  true            // 출입 시간 제한 기능
#define ALLOWED_HOUR_START       8               // 출입 허용 시작 시간 (예: 8시)
#define ALLOWED_HOUR_END         20              // 출입 허용 종료 시간 (예: 20시)

/*************** 디버그 설정 ***************/
#define DEBUG_SERIAL       true                  // 시리얼 출력 여부
#define DEBUG_BLE_SCAN     true                  // BLE 디버그 출력 여부
#define DEBUG_AUTH         true                  // 인증 디버그 출력 여부
#define DEBUG_MQTT         true                  // MQTT 디버그 출력 여부

#endif // CONFIG_H
