// addr: 0x015000c0
// name: CommandObject_RemoveKeyword_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveKeyword_ctor(void * this, bool useCurrentTarget_,
   void * keywordSpec, void * env) */

void * __thiscall
CommandObject_RemoveKeyword_ctor(void *this,bool useCurrentTarget_,void *keywordSpec,void *env)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RemoveKeyword command, selecting target source, copying the
                       keyword specification, and initializing command context fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4196;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_RemoveKeyword::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveKeyword::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveKeyword",0x1b);
  if (useCurrentTarget_) {
    pvVar2 = EvaluationEnvironment_resolveTarget(env);
  }
  else {
    pvVar2 = EvaluationEnvironment_getOriginCard(env);
  }
  *(void **)((int)this + 0x68) = pvVar2;
  FUN_013010e0(keywordSpec);
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  FUN_01301590(env);
  ExceptionList = local_c;
  return this;
}

