// addr: 0x015065d0
// name: CommandObject_IntroduceCard_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_IntroduceCard_ctor(void * this, void * environment) */

void * __thiscall CommandObject_IntroduceCard_ctor(void *this,void *environment)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_IntroduceCard, initializes base CommandObject
                       fields, creates an auxiliary action/value object, and records source/owner
                       ids for card introduction. Clears inherited command flags and sets a command
                       type/key field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5063;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_IntroduceCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_IntroduceCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_IntroduceCard",0x1b);
  pvVar2 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar2;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined4 *)((int)this + 0x11c) = 0x174;
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
  EvaluationEnvironment_getMember14(environment);
  uVar3 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar3);
  pvVar2 = EvaluationEnvironment_getTargetCard(environment);
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_getTargetCard(environment);
    uVar3 = PlayElement_getId();
    ReturnValueMap_setInteger(3,uVar3);
  }
  ExceptionList = local_c;
  return this;
}

