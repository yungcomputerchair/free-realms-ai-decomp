// addr: 0x013c25b0
// name: PacketBuffer_readPackedUInt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PacketBuffer_readPackedUInt(void * buffer, uint * outValue) */

bool __thiscall PacketBuffer_readPackedUInt(void *this,void *buffer,uint *outValue)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *unaff_retaddr;
  
                    /* Reads a compact unsigned integer from the buffer at the current cursor, using
                       a low-nibble value, byte-count bits, and an inversion flag; in legacy mode it
                       reads a 32-bit value with byte-order conversion. Evidence is the bounds
                       checks against size/cursor and bit assembly from the byte stream. */
  if (DAT_01cbdd7c == '\0') {
    iVar3 = *(int *)((int)this + 0xc);
    if (*(int *)((int)this + 4) < iVar3 + 1) {
      return false;
    }
    bVar1 = *(byte *)(*(int *)this + iVar3);
    uVar8 = bVar1 & 0xf;
    iVar6 = (int)(uint)bVar1 >> 5;
    bVar7 = 4;
    if (iVar6 != 0) {
      pbVar9 = (byte *)(iVar3 + 1 + *(int *)this);
      do {
        bVar2 = *pbVar9;
        bVar4 = bVar7 & 0x1f;
        pbVar9 = pbVar9 + 1;
        bVar7 = bVar7 + 8;
        uVar8 = uVar8 + ((uint)bVar2 << bVar4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((bVar1 & 0x10) != 0) {
      uVar8 = ~uVar8;
    }
    *(uint *)buffer = uVar8;
    return true;
  }
  if (*(int *)((int)this + 4) < *(int *)((int)this + 0xc) + 4) {
    return false;
  }
  uVar5 = Ordinal_14(*(undefined4 *)(*(int *)((int)this + 0xc) + *(int *)this));
  *unaff_retaddr = uVar5;
  return true;
}

