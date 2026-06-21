// addr: 0x01530f30
// name: EventCommand_RespondEventSessionInfo_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionInfo_dtor(void * this) */

void __fastcall EventCommand_RespondEventSessionInfo_dtor(void *this)

{
  undefined4 uStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Destroys an EventCommand_RespondEventSessionInfo object, freeing two string
                       members, destroying rb-tree members, and invoking the base destructor. */
  puStack_8 = &LAB_016bb534;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RespondEventSessionInfo::vftable;
  local_4 = (void *)0x3;
  if (0xf < *(uint *)((int)this + 0x70)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x5c));
  }
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  local_4 = (void *)0x2;
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = (void *)0x1;
  StdRbTree_destroyAndFree((void *)((int)this + 0x18));
  StdRbTree_destroyAndFree((void *)((int)this + 0xc));
  uStack00000004 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_4;
  return;
}

