// addr: 0x0150aab0
// name: CommandObjectDiscardPile_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDiscardPile.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectDiscardPile_ctor(void * this, void * environment, void *
   arg2, void * numcards, int discardType, bool flag) */

void * __thiscall
CommandObjectDiscardPile_ctor
          (void *this,void *environment,void *arg2,void *numcards,int discardType,bool flag)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_DiscardPile: requires an origin card, extracts the
                       integer numcards value, stores discard type/flags, and populates serialized
                       value fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5a2b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_DiscardPile::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DiscardPile::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_DiscardPile",0x19);
  pvVar2 = EvaluationEnvironment_getOriginCard((void *)((int)this + 0x84));
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("mEnvironment.getOriginCard()",
                 "..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0x24,uVar1);
  }
  *(void **)((int)this + 0x124) = arg2;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_013010e0(numcards);
  FUN_01301590(environment);
  if (((iStack_14 != 2) &&
      (FUN_012f5a60("numcards.isIntegerValue()",
                    "..\\common\\common\\command\\CommandObjectDiscardPile.cpp",0x29),
      iStack_14 != 2)) &&
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), iStack_14 != 2)) {
    uStack_10 = 0;
  }
  *(undefined4 *)((int)this + 0x128) = uStack_10;
  *(int *)((int)this + 300) = discardType;
  if ((discardType == 0xb) || (discardType == 0x1e)) {
    DiscardCardState_setSpecialDiscardFlag(true);
  }
  pvVar2 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar2;
  *(bool *)((int)this + 0x130) = flag;
  *(undefined1 *)((int)this + 0x81) = 0;
  pvVar2 = EvaluationEnvironment_getAction(environment);
  *(bool *)((int)this + 0x131) = pvVar2 == (void *)0x1;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x14a;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = Mem_Alloc(0x18);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor();
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x70) = uVar3;
  EvaluationEnvironment_getMember14(environment);
  uVar3 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar3);
  uVar3 = PlayElement_getId();
  ReturnValueMap_setInteger(3,uVar3);
  ReturnValueMap_setInteger(0x30,*(undefined4 *)((int)this + 0x124));
  ReturnValueMap_setInteger(0x15,*(undefined4 *)((int)this + 0x128));
  ReturnValueMap_setInteger(0xf,*(undefined4 *)((int)this + 300));
  set_value_boolean(0x13,*(bool *)((int)this + 0x130));
  set_value_boolean(9,*(bool *)((int)this + 0x131));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  ExceptionList = local_c;
  return this;
}

