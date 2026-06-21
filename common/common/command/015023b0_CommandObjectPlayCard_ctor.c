// addr: 0x015023b0
// name: CommandObjectPlayCard_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPlayCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectPlayCard_ctor(void * this, void * environment) */

void * __thiscall CommandObjectPlayCard_ctor(void *this,void *environment)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs a CommandObjectPlayCard: installs vftables, sets command name
                       'CommandObject_PlayCard' and opcode/flags, initializes properties from the
                       environment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b47b3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_PlayCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_PlayCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_PlayCard",0x16);
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0xfb;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor(uVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)this + 0x70) = uVar3;
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_getMember14(environment);
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_getMember14(environment);
    uVar3 = GamePlayer_getPlayerId();
  }
  ReturnValueMap_setInteger(4,uVar3);
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(environment);
    uVar3 = PlayElement_getId();
  }
  ReturnValueMap_setInteger(3,uVar3);
  set_value_boolean(8,true);
  pvVar2 = CommandObject_getActionFromEnvironment(environment);
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("environment->getCurrentAction()",
                 "..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x2c);
  }
  CommandObject_getActionFromEnvironment(environment);
  uVar3 = FUN_01321f20();
  ReturnValueMap_setInteger(5,uVar3);
  pvVar2 = EvaluationEnvironment_resolveTarget(environment);
  if (pvVar2 == (void *)0x0) {
    set_value_boolean(0x1d,true);
  }
  else {
    EvaluationEnvironment_resolveTarget(environment);
    uVar3 = PlayElement_getId();
    ReturnValueMap_setInteger(1,uVar3);
  }
  set_value_boolean(0x10,true);
  set_value_boolean(0x1e,true);
  ExceptionList = local_c;
  return this;
}

