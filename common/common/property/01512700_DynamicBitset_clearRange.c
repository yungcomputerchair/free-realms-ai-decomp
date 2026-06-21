// addr: 0x01512700
// name: DynamicBitset_clearRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DynamicBitset_clearRange(void * self) */

void __fastcall DynamicBitset_clearRange(void *self)

{
  byte *pbVar1;
  uint in_EAX;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  bool bVar4;
  
                    /* Clears a contiguous range of bits from the bit-array at offset 0x14 and
                       decrements the set/count field at offset 0x1c by the number of bytes
                       represented. Register parameters were not recovered by the decompiler. */
  uVar2 = in_EAX & 0x800000ff;
  bVar4 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar4 = (uVar2 - 1 | 0xffffff00) == 0xffffffff;
  }
  if (bVar4) {
    iVar3 = (int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8;
  }
  else {
    iVar3 = ((int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8) + 1;
  }
  *(int *)((int)self + 0x1c) = *(int *)((int)self + 0x1c) - iVar3;
  if (*(int *)((int)self + 0x30) != 0) {
    FUN_01512140();
  }
  iVar3 = iVar3 + unaff_EBX;
  *(int *)((int)self + 0x2c) = unaff_EBX;
  for (; unaff_EBX < iVar3; unaff_EBX = unaff_EBX + 1) {
    pbVar1 = (byte *)((unaff_EBX >> 3) + *(int *)((int)self + 0x14));
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)unaff_EBX & 7));
  }
  return;
}

