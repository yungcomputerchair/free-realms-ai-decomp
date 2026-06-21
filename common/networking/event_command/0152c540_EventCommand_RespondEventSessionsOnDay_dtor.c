// addr: 0x0152c540
// name: EventCommand_RespondEventSessionsOnDay_dtor
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionsOnDay_dtor(void * this) */

void __fastcall EventCommand_RespondEventSessionsOnDay_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for EventCommand_RespondEventSessionsOnDay; frees the dynamic
                       array/vector storage at member +0x18, zeros its range fields, then destroys
                       the EventCommand base. Evidence is the class vtable and cleanup of fields
                       +0x18/+0x1c/+0x20. */
  puStack_8 = &LAB_016ba673;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondEventSessionsOnDay::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

