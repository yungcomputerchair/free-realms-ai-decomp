// addr: 0x01446e90
// name: EventCommand_RequestJoinMatchingQueue_assignQueueState
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_assignQueueState(void * this, void
   * sourceQueueState) */

void __fastcall
EventCommand_RequestJoinMatchingQueue_assignQueueState(void *this,void *sourceQueueState)

{
  undefined1 *this_00;
  void *lastNode;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns/replaces the request-join-matching-queue tree member at offset 0x2c
                       from a source tree, erasing the old contents and destroying temporary
                       storage. */
  puStack_8 = &LAB_01699b38;
  local_c = ExceptionList;
  lastNode = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  local_4 = 0;
  this_00 = (undefined1 *)((int)this + 0x2c);
  if (this_00 != &stack0x00000004) {
    StdRbTree_eraseRange
              (this_00,local_14,this_00,(void *)**(undefined4 **)((int)this + 0x30),this_00,
               *(undefined4 **)((int)this + 0x30),lastNode);
    StdTree_Node21_assignFromTree(this_00,&stack0x00000004,lastNode);
  }
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree(&stack0x00000004);
  ExceptionList = puStack_8;
  return;
}

