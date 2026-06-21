// addr: 0x014fef60
// name: CommandObjectRemoveToken_ctorWithTokenSource
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveToken.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectRemoveToken_ctorWithTokenSource(void * this, bool
   useTarget, int tokenSource, void * arg4, void * env) */

void * __thiscall
CommandObjectRemoveToken_ctorWithTokenSource
          (void *this,bool useTarget,int tokenSource,void *arg4,void *env)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RemoveToken command variant that leaves member 0x130 zero,
                       stores the supplied source/reference at member 0x138, and clears an
                       additional member at 0x7c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3e96;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_RemoveToken::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveToken::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveToken",0x19);
  if (useTarget) {
    pvVar2 = EvaluationEnvironment_resolveTarget(env);
  }
  else {
    pvVar2 = EvaluationEnvironment_getOriginCard(env);
  }
  *(void **)((int)this + 0x68) = pvVar2;
  *(undefined4 *)((int)this + 0x130) = 0;
  FUN_013010e0(arg4);
  FUN_01301590(env);
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getMember14(env);
  *(void **)((int)this + 0x134) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("mPlayer","..\\common\\common\\command\\CommandObjectRemoveToken.cpp",0x3d);
  }
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(int *)((int)this + 0x138) = tokenSource;
  *(undefined4 *)((int)this + 0x7c) = 0;
  ExceptionList = local_c;
  return this;
}

