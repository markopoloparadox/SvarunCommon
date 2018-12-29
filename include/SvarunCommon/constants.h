#pragma once
#include <cstdint>

namespace constants {
enum Mnemonic : uint8_t {
  M_NOOP = UINT8_MAX,
  M_ADD = 0,
  M_SUB = 1,
  M_AND,
  M_EOR,
  M_ORR,
  M_MOV,
  M_CMP,
  M_IFEQ,
  M_IFNE,
  M_IFLT,
  M_IFLE,
  M_IFGT,
  M_IFGE,
  M_PUSH,
  M_POP,
  M_LDR,
  M_STR
};

enum OpCode : uint8_t {
  NOOP = UINT8_MAX,
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
  STR
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