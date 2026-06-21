// addr: 0x014fa3c0
// name: CommandObject_WinGame_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_WinGame_ctor(void * this, void * env) */

void * __thiscall CommandObject_WinGame_ctor(void *this,void *env)

{
  uint uVar1;
  void *pvVar2;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_WinGame, installs its vftable, sets the display name
                       and opcode/id fields, and records a player/card id when available. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b32d8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_WinGame::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_WinGame::vftable;
  *(undefined4 *)((int)this + 0x124) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_WinGame",0x15);
  *(undefined4 *)((int)this + 0x74) = 0x2711;
  pvVar2 = EvaluationEnvironment_resolveTarget((void *)((int)this + 0x84));
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_resolveTarget((void *)((int)this + 0x84));
    value_ = PlayElement_getId(uVar1);
    set_integer_value_for_key(0x33,value_);
  }
  ExceptionList = local_c;
  return this;
}

