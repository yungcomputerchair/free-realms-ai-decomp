// addr: 0x01449120
// name: MatchQueueState_assignFirstRuleMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchQueueState_assignFirstRuleMap(void * this, void * sourceMap) */

void __fastcall MatchQueueState_assignFirstRuleMap(void *this,void *sourceMap)

{
  undefined1 *this_00;
  void *lastNode;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns a tree member at offset 0x70 from a source tree, erasing the existing
                       destination tree and then destroying temporary/source storage. */
  puStack_8 = &LAB_0169a2b8;
  local_c = ExceptionList;
  lastNode = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  local_4 = 0;
  this_00 = (undefined1 *)((int)this + 0x70);
  if (this_00 != &stack0x00000004) {
    StdRbTree_eraseRange
              (this_00,local_14,this_00,(void *)**(undefined4 **)((int)this + 0x74),this_00,
               *(undefined4 **)((int)this + 0x74),lastNode);
    StdTree_Node21_assignFromTree(this_00,&stack0x00000004,lastNode);
  }
  local_4 = 0xffffffff;
  StdRbTree_destroyAndFree(&stack0x00000004);
  ExceptionList = puStack_8;
  return;
}

