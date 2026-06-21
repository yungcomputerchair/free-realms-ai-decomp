// addr: 0x01512780
// name: DynamicBitset_isRangeClear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DynamicBitset_isRangeClear(void * self) */

bool __fastcall DynamicBitset_isRangeClear(void *self)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  
                    /* Checks whether a requested range contains no set bits in the bit-array at
                       offset 0x14 and stops at the bit capacity at offset 0x18. Register-passed
                       start/count were not recovered. */
  if (*(int *)((int)self + 0x18) <= in_EAX) {
    return false;
  }
  iVar1 = 0;
  if (0 < unaff_EBX) {
    do {
      if ((((int)*(char *)((in_EAX >> 3) + *(int *)((int)self + 0x14)) & 1 << ((byte)in_EAX & 7)) !=
           0) || (in_EAX = in_EAX + 1, *(int *)((int)self + 0x18) <= in_EAX)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EBX);
  }
  return iVar1 == unaff_EBX;
}

