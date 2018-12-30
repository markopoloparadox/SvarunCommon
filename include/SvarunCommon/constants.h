#pragma once
#include <cstdint>

namespace constants {
enum OpCode : uint8_t {
  NOP = UINT8_MAX,
  ADD = 0,
  SUB = 1,
  AND,
  EOR,
  ORR,
  MOV,
  CMP,
  IFEQ,
  IFNE,
  IFLT,
  IFLE,
  IFGT,
  IFGE,
  PUSH,
  POP,
  LDR,
  LDRH,
  LDRB,
  STR,
  STRH,
  STRB
};

enum Registers : uint8_t {
  R0 = 0,
  R1 = 1,
  R2,
  R3,
  R4,
  R5,
  R6,
  R7,
  R8,
  R9,
  PC,  // Program counter
  SP   // Stack pointer
};

enum ImmediateOperand : uint8_t {
  OPERAND = 0,
  REGISTER = 1
};

}