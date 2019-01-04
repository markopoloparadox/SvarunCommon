#pragma once
#include "SvarunCommon/types.h"
#include "SvarunCommon/constants.h"

namespace types 
{

struct Register {
  explicit Register() = default;
  explicit Register(const Byte& value) : m_value((constants::Registers)value) {};
  explicit Register(Byte&& value) : m_value((constants::Registers)std::move(value)) {};
  Byte get() { return m_value; }
  Byte const get() const { return m_value; }

private:
  constants::Registers m_value = constants::R0;
};
static_assert(sizeof(Register) == sizeof(Byte), "Register != Byte");

struct OpCode {
  explicit OpCode() = default;
  explicit OpCode(const Byte& value) : m_value((constants::OpCode)value) {};
  explicit OpCode(Byte&& value) : m_value((constants::OpCode)std::move(value)) {};
  Byte get() { return m_value; }
  Byte const get() const { return m_value; }

private:
  constants::OpCode m_value = constants::NOP;
};
static_assert(sizeof(OpCode) == sizeof(Byte), "OpCode != Byte");


#pragma pack(push, 1)
struct Memory {
  Register reg;
  Word offset = 0;
  Byte flag = 0;
};
#pragma pack(pop)

}