// addr: 0x01493fd0
// name: QueryNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QueryNode_dtor(void * this) */

void __fastcall QueryNode_dtor(void *this)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for QueryNode; resets the vtable, iterates its child-node tree
                       deleting node payloads, clears the tree, then destroys base storage. Evidence
                       is the QueryNode::vftable assignment, RB-tree iteration, and calls to STL
                       tree cleanup helpers. */
  puStack_8 = &LAB_016a2483;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined ***)this = QueryNode::vftable;
  local_4 = 1;
  local_10 = *(undefined4 **)((int)this + 0x14);
  local_18 = (undefined4 *)*local_10;
  local_1c = (int)this + 0x10;
  while( true ) {
    puVar2 = local_18;
    iVar1 = local_1c;
    if ((local_1c == 0) || (local_1c != (int)this + 0x10)) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar2 == local_10) break;
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d(uVar3);
    }
    if ((undefined4 *)puVar2[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[4])(1);
    }
    RBTreeIterator_increment(&local_1c);
  }
  _Memory = *(void **)(*(int *)((int)this + 0x14) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    StdTree_eraseSubtreeNodes(*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)((int)this + 0x14) + 4) = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(int *)(*(int *)((int)this + 0x14) + 8) = *(int *)((int)this + 0x14);
  local_4 = local_4 & 0xffffff00;
  FUN_01312620();
  local_4 = 0xffffffff;
  FUN_0149a860();
  ExceptionList = local_c;
  return;
}

