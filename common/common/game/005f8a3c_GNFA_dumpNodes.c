// addr: 0x005f8a3c
// name: GNFA_dumpNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GNFA_dumpNodes(void * this) */

bool __fastcall GNFA_dumpNodes(void *this)

{
  undefined4 *this_00;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint index;
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 *local_c;
  int local_8;
  
                    /* Prints each GNFA node with node id, accepting flag, and outgoing character
                       transitions using wprintf. Evidence is the literal 'GNFANode %d (%p) [%d]:
                       accepting = %d:' and per-edge '%c --> %p'. */
  RbTree_initHeader(local_28);
  ParserAst_collectReachableNodes(*(undefined4 *)this,local_28);
  local_8 = 0;
  CheckedTreeIterator_ctor_nodeFlag21A(*local_24,local_28);
  CheckedTreeIterator_ctor_nodeFlag21A(local_24,local_28);
  bVar1 = CheckedTreeIterator_equals_nodeFlag21A(local_14,local_1c);
  while (!bVar1) {
    piVar2 = (int *)RbTreeIterator_getValue();
    puVar4 = (undefined4 *)*piVar2;
    FID_conflict__wprintf("GNFANode %d (%p) [%d]: accepting = %d:",local_8,puVar4,*puVar4,puVar4[1])
    ;
    this_00 = puVar4 + 2;
    index = 0;
    iVar3 = StdVector_size(this_00);
    if (iVar3 != 0) {
      local_c = puVar4 + 6;
      do {
        puVar4 = (undefined4 *)StdVectorDword_at_005db38b(local_c,index);
        puVar5 = StdVector_atElementPtr4(this_00,index);
        FID_conflict__wprintf("\n%c --> %p",*puVar5,*puVar4);
        index = index + 1;
        uVar6 = StdVector_size(this_00);
      } while (index < uVar6);
    }
    FID_conflict__wprintf("\n");
    RbTreeIterator_increment(local_14);
    local_8 = local_8 + 1;
    CheckedTreeIterator_ctor_nodeFlag21A(local_24,local_28);
    bVar1 = CheckedTreeIterator_equals_nodeFlag21A(local_14,local_1c);
  }
  CheckedTreeNode21A_destroyAndFree(local_28);
  return true;
}

