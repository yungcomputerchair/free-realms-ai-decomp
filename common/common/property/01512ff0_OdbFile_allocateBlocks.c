// addr: 0x01512ff0
// name: OdbFile_allocateBlocks
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: uint OdbFile_allocateBlocks(void) */

uint OdbFile_allocateBlocks(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_EDI;
  bool bVar10;
  uint local_c;
  uint local_8;
  
                    /* Finds or grows a contiguous free run in the ODB allocation bitmap, marks it
                       allocated, updates next-search offset at +0x2c, and returns the starting
                       block. The requested block count arrives in EAX in this decompilation. */
  uVar8 = *(uint *)(unaff_EDI + 0x2c);
  uVar5 = in_EAX & 0x800000ff;
  bVar10 = uVar5 == 0;
  if ((int)uVar5 < 0) {
    bVar10 = (uVar5 - 1 | 0xffffff00) == 0xffffffff;
  }
  if (bVar10) {
    uVar5 = (int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8;
  }
  else {
    uVar5 = ((int)(in_EAX + ((int)in_EAX >> 0x1f & 0xffU)) >> 8) + 1;
  }
  bVar10 = false;
LAB_01513040:
  do {
    iVar2 = *(int *)(unaff_EDI + 0x18);
    if ((int)uVar8 < iVar2) {
      if (*(char *)(((int)uVar8 >> 3) + *(int *)(unaff_EDI + 0x14)) == -1) {
        uVar8 = (uVar8 & 0xfffffff8) + 8;
        if (iVar2 <= (int)uVar8) goto LAB_01513076;
        do {
          if (*(char *)(((int)uVar8 >> 3) + *(int *)(unaff_EDI + 0x14)) != -1) break;
          uVar8 = uVar8 + 8;
        } while ((int)uVar8 < iVar2);
      }
      if (iVar2 <= (int)uVar8) goto LAB_01513076;
    }
    else {
LAB_01513076:
      if (!bVar10) {
        uVar8 = 0;
        bVar10 = true;
        goto LAB_01513040;
      }
      uVar1 = uVar8 + 0x1ff & 0x80000007;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
      }
      iVar7 = uVar8 + (0x207 - uVar1);
      iVar9 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
      iVar2 = FUN_00d8a744(*(undefined4 *)(unaff_EDI + 0x14),iVar9 + 1);
      iVar3 = (int)(*(int *)(unaff_EDI + 0x18) + (*(int *)(unaff_EDI + 0x18) >> 0x1f & 7U)) >> 3;
      *(int *)(unaff_EDI + 0x14) = iVar2;
      _memset((void *)(iVar3 + iVar2),0,iVar9 - iVar3);
      *(int *)(unaff_EDI + 0x18) = iVar7;
    }
    local_8 = 0;
    uVar1 = uVar8;
    local_c = uVar5;
    if (0 < (int)uVar5) {
      do {
        local_c = local_c - 1;
        if (((int)*(char *)(((int)uVar1 >> 3) + *(int *)(unaff_EDI + 0x14)) & 1 << ((byte)uVar1 & 7)
            ) != 0) break;
        uVar1 = uVar1 + 1;
        if (*(int *)(unaff_EDI + 0x18) <= (int)uVar1) {
          if (!bVar10) {
            uVar1 = 0;
            bVar10 = true;
            break;
          }
          uVar6 = local_c & 0x800001ff;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffe00) + 1;
          }
          iVar2 = ((uVar5 - uVar6) - local_8) + 0x1ff + uVar1;
          uVar6 = iVar2 - 1U & 0x80000007;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
          }
          iVar2 = iVar2 + (7 - uVar6);
          iVar9 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
          iVar3 = FUN_00d8a744(*(undefined4 *)(unaff_EDI + 0x14),iVar9 + 1);
          iVar7 = (int)(*(int *)(unaff_EDI + 0x18) + (*(int *)(unaff_EDI + 0x18) >> 0x1f & 7U)) >> 3
          ;
          *(int *)(unaff_EDI + 0x14) = iVar3;
          _memset((void *)(iVar7 + iVar3),0,iVar9 - iVar7);
          *(int *)(unaff_EDI + 0x18) = iVar2;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)uVar5);
    }
    if (local_8 == uVar5) {
      *(int *)(unaff_EDI + 0x1c) = *(int *)(unaff_EDI + 0x1c) + local_8;
      for (uVar5 = uVar8; (int)uVar5 < (int)(local_8 + uVar8); uVar5 = uVar5 + 1) {
        pbVar4 = (byte *)(*(int *)(unaff_EDI + 0x14) + ((int)uVar5 >> 3));
        *pbVar4 = *pbVar4 | '\x01' << ((byte)uVar5 & 7);
      }
      *(uint *)(unaff_EDI + 0x2c) = uVar5;
      return uVar8;
    }
    uVar8 = uVar1 + 1;
  } while( true );
}

