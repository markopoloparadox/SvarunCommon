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
  JMP,    // Jump
  JEQ,
  JNE,
  JLT,
  JLE,
  JGT,
  JGE,
  JL,     // Jump with Link
  LDR,    // Load Register
  LDRH,
  LDRB,
  STR,    // Store Register
  STRH,
  STRB,
  MUL,
  LSL,
  LSR,
  STP,
  LDP
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
  PC,   // Program counter
  SP,   // Stack pointer
  ZR,   // Zero register
  LR,   // Link register    // From arm: Link register. This is a synonym for X30.
  FP    // Frame pointer    // This is a synonym for X29.
};

enum ImmediateOperand : uint8_t {
  NUMBER = 0,
  REGISTER = 1,
  MEMORY = 2
};

}