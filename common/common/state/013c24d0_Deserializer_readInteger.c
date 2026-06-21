// addr: 0x013c24d0
// name: Deserializer_readInteger
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readInteger(void * this, int * outValue) */

bool __thiscall Deserializer_readInteger(void *this,int *outValue)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_retaddr;
  
                    /* Reads an encoded integer from the deserializer stream, validating state 1 and
                       handling both packed integer and 32-bit endian-converted formats. Evidence is
                       the diagnostic string 'Wrong state in readInteger %d' and hundreds of
                       deserialize callers. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 1;
  }
  if (*(int *)((int)this + 0x10) != 1) {
    FUN_012f5dc0("Wrong state in readInteger %d",*(int *)((int)this + 0x10));
  }
  if (DAT_01cbdd7c == '\0') {
    iVar6 = *(int *)((int)this + 0xc) + 1;
    if (iVar6 <= *(int *)((int)this + 4)) {
      bVar2 = *(byte *)(*(int *)this + *(int *)((int)this + 0xc));
      uVar8 = bVar2 & 0xf;
      iVar9 = (int)(uint)bVar2 >> 5;
      *(int *)((int)this + 0xc) = iVar6;
      if (iVar9 != 0) {
        bVar7 = 4;
        do {
          iVar1 = iVar6 + 1;
          if (*(int *)((int)this + 4) < iVar1) {
            return false;
          }
          bVar3 = *(byte *)(iVar6 + *(int *)this);
          bVar4 = bVar7 & 0x1f;
          bVar7 = bVar7 + 8;
          *(int *)((int)this + 0xc) = iVar1;
          uVar8 = uVar8 + ((uint)bVar3 << bVar4);
          iVar9 = iVar9 + -1;
          iVar6 = iVar1;
        } while (iVar9 != 0);
      }
      if ((bVar2 & 0x10) != 0) {
        uVar8 = ~uVar8;
      }
      *outValue = uVar8;
      return true;
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0xc) + 4;
    if (iVar6 <= *(int *)((int)this + 4)) {
      uVar5 = *(undefined4 *)(*(int *)((int)this + 0xc) + *(int *)this);
      *(int *)((int)this + 0xc) = iVar6;
      uVar5 = Ordinal_14(uVar5);
      *unaff_retaddr = uVar5;
      return true;
    }
  }
  return false;
}

