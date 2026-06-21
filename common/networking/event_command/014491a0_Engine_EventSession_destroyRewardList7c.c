// addr: 0x014491a0
// name: Engine_EventSession_destroyRewardList7c
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 Engine_EventSession_destroyRewardList7c(void * this, int flags) */

int __thiscall Engine_EventSession_destroyRewardList7c(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper for an Engine::EventSession collection member at
                       offset +0x7c, returning the flags argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a2f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EventCommand_ValueList_copyConstruct((void *)flags,(void *)((int)this + 0x7c));
  ExceptionList = local_c;
  return flags;
}

