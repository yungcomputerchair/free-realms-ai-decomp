// addr: 0x0152ed60
// name: EventCommand_RespondDuelistStats_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondDuelistStats_dtor(void * this) */

void __fastcall EventCommand_RespondDuelistStats_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an EventCommand_RespondDuelistStats object, restoring its vtable,
                       destroying an rb-tree member, then invoking the base event-command
                       destructor. */
  puStack_8 = &LAB_016bada3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondDuelistStats::vftable;
  local_4 = 0;
  StdRbTree_destroyAndFree((void *)((int)this + 0x18));
  EventCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

