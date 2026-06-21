// addr: 0x014490c0
// name: Engine_EventSession_destroyRewardList70
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 Engine_EventSession_destroyRewardList70(void * this, int flags) */

int __thiscall Engine_EventSession_destroyRewardList70(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper for an Engine::EventSession collection member at
                       offset +0x70, returning the flags argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EventCommand_ValueList_copyConstruct((void *)flags,(void *)((int)this + 0x70));
  ExceptionList = local_c;
  return flags;
}

