// addr: 0x0150dc10
// name: CommandObjectAttach_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAttach.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectAttach_ctor(void * this, void * env) */

void * __thiscall CommandObjectAttach_ctor(void *this,void *env)

{
  bool bVar1;
  void *this_00;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObjectAttach, installing vtables/name, resolving target and
                       originating card from the evaluation environment, setting game/player state,
                       and initializing expiry behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6118;
  local_c = ExceptionList;
  this_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_Attach::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Attach::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Attach",0x14);
  pvVar2 = EvaluationEnvironment_resolveTarget(env);
  *(void **)((int)this + 0x68) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  bVar1 = ValueData_getWillExpire(this_00);
  if (!bVar1) {
    *(undefined1 *)((int)this + 0x81) = 0;
  }
  if (*(int *)((int)this + 100) == 0) {
    FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectAttach.cpp",0x26);
  }
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectAttach.cpp",0x27);
  }
  ExceptionList = local_c;
  return this;
}

