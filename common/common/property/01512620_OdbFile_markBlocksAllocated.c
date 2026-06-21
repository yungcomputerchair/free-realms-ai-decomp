// addr: 0x01512620
// name: OdbFile_markBlocksAllocated
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OdbFile_markBlocksAllocated(int firstBlock) */

void __cdecl OdbFile_markBlocksAllocated(int firstBlock)

{
  byte *pbVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  bool bVar8;
  
                    /* Marks a contiguous range of ODB blocks as allocated in the bitmap, growing
                       and zero-filling the bitmap when needed. It updates the allocation count at
                       +0x1c and sets bits for each block. */
  uVar5 = in_EAX & 0x800000ff;
  bVar8 = uVar5 == 0;
  if ((int)uVar5 < 0) {
    bVar8 = (uVar5 - 1 | 0xffffff00) == 0xffffffff;
  }
  if (bVar8) {
    iVar2 = (int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8;
  }
  else {
    iVar2 = ((int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8) + 1;
  }
  *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + iVar2;
  iVar2 = iVar2 + firstBlock;
  iVar7 = *(int *)(unaff_ESI + 0x18);
  while (iVar7 < iVar2) {
    uVar5 = *(int *)(unaff_ESI + 0x18) + 0x1ffU & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    iVar7 = *(int *)(unaff_ESI + 0x18) + (0x207 - uVar5);
    iVar6 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
    iVar3 = FUN_00d8a744(*(undefined4 *)(unaff_ESI + 0x14),iVar6 + 1);
    iVar4 = (int)(*(int *)(unaff_ESI + 0x18) + (*(int *)(unaff_ESI + 0x18) >> 0x1f & 7U)) >> 3;
    *(int *)(unaff_ESI + 0x14) = iVar3;
    _memset((void *)(iVar4 + iVar3),0,iVar6 - iVar4);
    *(int *)(unaff_ESI + 0x18) = iVar7;
  }
  for (; firstBlock < iVar2; firstBlock = firstBlock + 1) {
    pbVar1 = (byte *)((firstBlock >> 3) + *(int *)(unaff_ESI + 0x14));
    *pbVar1 = *pbVar1 | '\x01' << ((byte)firstBlock & 7);
  }
  return;
}

