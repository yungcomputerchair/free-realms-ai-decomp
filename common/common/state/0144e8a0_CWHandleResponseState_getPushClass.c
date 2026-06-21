// addr: 0x0144e8a0
// name: CWHandleResponseState_getPushClass
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWHandleResponseState_getPushClass(void * this, int classId_) */

void * __thiscall CWHandleResponseState_getPushClass(void *this,int classId_)

{
  void *pvVar1;
  char *fmt;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns a pushed state instance for response class ids, cloning
                       CWActionPlayedState or CWDrawCardState for known ids and otherwise
                       delegating. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b296;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fmt = "CWHandleResponseState::getPushClass %d";
  iVar2 = classId_;
  pvVar1 = (void *)StateMachineState_getGame
                             ("CWHandleResponseState::getPushClass %d",classId_,
                              DAT_01b839d8 ^ (uint)&stack0xffffffec);
  Game_logGeneral(pvVar1,fmt,iVar2);
  if (classId_ != 0xfb) {
    if (classId_ == 0x16d) {
      pvVar1 = Mem_Alloc(0x128);
      local_4 = 1;
      if (pvVar1 == (void *)0x0) {
        ExceptionList = local_c;
        return (void *)0x0;
      }
      pvVar1 = CWDrawCardState_copy_ctor(pvVar1,*(void **)((int)this + 8));
      ExceptionList = local_c;
      return pvVar1;
    }
    if (classId_ != 0x222eb) {
      pvVar1 = (void *)HandleResponseState_getPushClass(classId_);
      ExceptionList = local_c;
      return pvVar1;
    }
  }
  pvVar1 = Mem_Alloc(0x1a4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pvVar1 = CWActionPlayedState_copy_ctor(pvVar1,*(void **)((int)this + 8));
  ExceptionList = local_c;
  return pvVar1;
}

