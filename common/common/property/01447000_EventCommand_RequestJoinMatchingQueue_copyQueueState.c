// addr: 0x01447000
// name: EventCommand_RequestJoinMatchingQueue_copyQueueState
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_copyQueueState(void * this, void *
   queueId) */

void __thiscall EventCommand_RequestJoinMatchingQueue_copyQueueState(void *this,void *queueId)

{
  undefined1 *this_00;
  void *lastNode;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Stores a queue-related value at offset 0x28 and copies/replaces the
                       red-black-tree state rooted at offset 0x2c. */
  puStack_8 = &LAB_01699ba8;
  local_c = ExceptionList;
  lastNode = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  local_4 = 0;
  this_00 = (undefined1 *)((int)this + 0x2c);
  *(void **)((int)this + 0x28) = queueId;
  if (this_00 != &stack0x00000008) {
    StdRbTree_eraseRange
              (this_00,local_14,this_00,(void *)**(undefined4 **)((int)this + 0x30),this_00,
               *(undefined4 **)((int)this + 0x30),lastNode);
    StdTree_Node21_assignFromTree(this_00,&stack0x00000008,lastNode);
  }
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree(&stack0x00000008);
  ExceptionList = puStack_8;
  return;
}

