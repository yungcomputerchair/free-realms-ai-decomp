// addr: 0x0150bb80
// name: CommandObjectDiscard_ctorWithInitFlag
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectDiscard_ctorWithInitFlag(void * this, void * env, int
   playerOrFlag, bool initFlag) */

void * __thiscall
CommandObjectDiscard_ctorWithInitFlag(void *this,void *env,int playerOrFlag,bool initFlag)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Discard like the default constructor variant, but
                       forwards the fourth argument into CommandObjectDiscard_init. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5bf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  *(undefined ***)this = CommandObject_Discard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Discard::vftable;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  local_4 = 1;
  *(int *)((int)this + 0x124) = playerOrFlag;
  CommandObjectDiscard_init(this,env);
  ExceptionList = local_c;
  return this;
}

