// addr: 0x0150e810
// name: CommandObject_AddToken_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AddToken_ctor(void * this, bool useCardTarget_, int
   tokenKey_, void * tokenValue, void * environment) */

void * __thiscall
CommandObject_AddToken_ctor
          (void *this,bool useCardTarget_,int tokenKey_,void *tokenValue,void *environment)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_AddToken, choosing a target source based on a
                       boolean flag, storing token key/value data, and initializing origin/target
                       fields. Clears inherited command flags after construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b62f6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_AddToken::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AddToken::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_AddToken",0x16);
  if (useCardTarget_) {
    pvVar2 = EvaluationEnvironment_resolveTarget(environment);
  }
  else {
    pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  }
  *(void **)((int)this + 0x68) = pvVar2;
  *(int *)((int)this + 0x130) = tokenKey_;
  FUN_013010e0(tokenValue);
  FUN_01301590(environment);
  pvVar2 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getMember14(environment);
  *(void **)((int)this + 0x134) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  ExceptionList = local_c;
  return this;
}

