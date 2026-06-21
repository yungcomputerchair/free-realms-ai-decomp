// addr: 0x0152f800
// name: EventCommand_SendByeNotification_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendByeNotification_dtor(void * this) */

void __fastcall EventCommand_SendByeNotification_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for EventCommand_SendByeNotification; releases an inline/dynamic
                       string member when its capacity exceeds 0xf, resets the string to empty, then
                       destroys the EventCommand base. Evidence is the class vtable and small-string
                       cleanup at fields +0x14/+0x24/+0x28. */
  puStack_8 = &LAB_016bafe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_SendByeNotification::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

