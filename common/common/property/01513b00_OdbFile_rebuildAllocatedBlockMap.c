// addr: 0x01513b00
// name: OdbFile_rebuildAllocatedBlockMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void OdbFile_rebuildAllocatedBlockMap(void) */

void OdbFile_rebuildAllocatedBlockMap(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 local_18 [2];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* Walks index entries, updates record/block counters, marks data blocks
                       allocated from each record size, and processes each record entry. */
  OdbFile_AllocatedBlockTree_end(*(void **)(in_EAX + 0x20),&local_10);
  local_8 = *extraout_EAX;
  local_4 = extraout_EAX[1];
  OdbFile_AllocatedBlockTree_begin(*(void **)(in_EAX + 0x20),local_18);
  local_10 = *extraout_EAX_00;
  local_c = extraout_EAX_00[1];
  while( true ) {
    iVar3 = local_c;
    iVar2 = local_10;
    if ((local_10 == 0) || (local_10 != local_8)) {
      FUN_00d83c2d();
    }
    if (iVar3 == local_4) break;
    *(int *)(in_EAX + 0x28) = *(int *)(in_EAX + 0x28) + 1;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_18[0] = *(undefined4 *)(iVar3 + 0x10);
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    iVar2 = *(int *)(iVar3 + 0x14);
    if (*(int *)(in_EAX + 0x24) <= iVar1) {
      *(int *)(in_EAX + 0x24) = iVar1 + 1;
    }
    OdbFile_markBlocksAllocated((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8);
    FUN_015132b0();
  }
  return;
}

