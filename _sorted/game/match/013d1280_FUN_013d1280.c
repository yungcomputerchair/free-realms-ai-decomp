// addr: 0x013d1280
// name: FUN_013d1280
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int sum_list_node_field_10(int this_) */

int __fastcall sum_list_node_field_10(int this_)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* Iterates the node-based list whose sentinel pointer is stored at this+0x50
                       and sums each node's field at +0x10. The owning class and semantic meaning of
                       the field are not identified in this context. */
  piVar1 = *(int **)(this_ + 0x50);
  piVar2 = (int *)*piVar1;
  iVar3 = 0;
  while( true ) {
    if (this_ == -0x4c) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this_ == -0x4c) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(this_ + 0x50)) {
      FUN_00d83c2d();
    }
    iVar3 = iVar3 + piVar2[4];
    FUN_004d21f9();
  }
  return iVar3;
}

