// addr: 0x0150baf0
// name: CommandObjectDiscard_ctorDefaultInit
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectDiscard_ctorDefaultInit(void * this, void * env, int
   playerOrFlag) */

void * __thiscall CommandObjectDiscard_ctorDefaultInit(void *this,void *env,int playerOrFlag)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Discard, initializes extra discard fields, stores
                       the third argument at +0x124, and calls CommandObjectDiscard_init with a
                       constant true flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5bb6;
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

