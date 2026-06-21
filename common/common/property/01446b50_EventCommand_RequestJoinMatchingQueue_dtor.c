// addr: 0x01446b50
// name: EventCommand_RequestJoinMatchingQueue_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_dtor(void * this) */

void __fastcall EventCommand_RequestJoinMatchingQueue_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys EventCommand_RequestJoinMatchingQueue, releasing the stored deck
                       object, tree/vector members, string storage, and base event-command state. */
  puStack_8 = &LAB_01699a6e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestJoinMatchingQueue::vftable;
  local_4 = 2;
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1,uVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  StdRbTree_destroyAndFree((void *)((int)this + 0x2c));
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  EventCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

