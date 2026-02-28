// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <=1) return false;
  if (value <=3) return true;
  for (uint64_t i = 2; i < value; i++){
    if (value % i == 0){
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0){
    return 0;
  }
  uint64_t number = 0;
  uint64_t now_number = 1;
  while (number < n){
    now_number++;
    if (checkPrime(now_number)){
      number++;
    }
  }
  return now_number;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next_value = value;
  while(true){
    next_value++;
    if (checkPrime(next_value)){
      return next_value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for(uint64_t i = 2; i< hbound; i++){
    if (checkPrime(i)){
      sum+=i;
    }
  }
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t count =0;
  for (uint64_t i = lbound; p + 2 < hbound; p++){
    if (checkPrime(p) && checkPrime(p+2)){
      count++;
  }
}
