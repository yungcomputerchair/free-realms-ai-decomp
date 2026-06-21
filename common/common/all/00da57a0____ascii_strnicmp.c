// addr: 0x00da57a0
// name: ___ascii_strnicmp
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ___ascii_strnicmp(char * leftString, char * rightString, uint maxCount_)
    */

int __cdecl ___ascii_strnicmp(char *leftString,char *rightString,uint maxCount_)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
                    /* Visual Studio ASCII-only case-insensitive string comparison for up to
                       maxCount bytes; returns -1, 0, or 1. */
  iVar5 = 0;
  if (maxCount_ != 0) {
    do {
      bVar2 = *leftString;
      cVar1 = *rightString;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      leftString = leftString + 1;
      rightString = rightString + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00da57f1;
      maxCount_ = maxCount_ - 1;
    } while (maxCount_ != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00da57f1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}

