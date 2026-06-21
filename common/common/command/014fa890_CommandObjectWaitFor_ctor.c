// addr: 0x014fa890
// name: CommandObjectWaitFor_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectWaitFor.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectWaitFor_ctor(void * this, void * arg1, void * arg2) */

void * __thiscall CommandObjectWaitFor_ctor(void *this,void *arg1,void *arg2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObjectWaitFor: runs the base constructor, installs
                       CommandObject_WaitFor vtables, assigns the command type string, and asserts
                       mValue is an int-value map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b33c6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(this,arg2);
  local_4 = 0;
  *(undefined ***)this = CommandObject_WaitFor::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_WaitFor::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_WaitFor",0x15);
  FUN_013010e0(arg1);
  if (*(int *)((int)this + 0x128) != 0xe) {
    FUN_012f5a60("this->mValue.isIntValueMapValue()",
                 "..\\common\\common\\command\\CommandObjectWaitFor.cpp",0x19);
  }
  ExceptionList = local_c;
  return this;
}

