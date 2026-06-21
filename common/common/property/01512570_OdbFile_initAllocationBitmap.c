// addr: 0x01512570
// name: OdbFile_initAllocationBitmap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void OdbFile_initAllocationBitmap(void) */

void OdbFile_initAllocationBitmap(void)

{
  int in_EAX;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int unaff_ESI;
  
                    /* Initializes the ODB allocation bitmap: rounds capacity up in block units,
                       zeros the used count at +0x1c, and calloc()s the bitmap at +0x14. Hidden
                       register parameters are decompiler artifacts. */
  iVar1 = (int)(in_EAX + (in_EAX >> 0x1f & 0xffU)) >> 8;
  uVar3 = iVar1 + 0x1ffU & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  iVar1 = (iVar1 - uVar3) + 0x207;
  *(int *)(unaff_ESI + 0x18) = iVar1;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  pvVar2 = _calloc(1,((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 1);
  *(void **)(unaff_ESI + 0x14) = pvVar2;
  return;
}

