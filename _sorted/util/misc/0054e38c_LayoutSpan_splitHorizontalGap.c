// addr: 0x0054e38c
// name: LayoutSpan_splitHorizontalGap
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LayoutSpan_splitHorizontalGap(char * leftSpan, char * rightSpan, int *
   remaining, int * leftWidth) */

void LayoutSpan_splitHorizontalGap(char *leftSpan,char *rightSpan,int *remaining,int *leftWidth)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
                    /* Adjusts two horizontal layout spans to fit a remaining gap budget, clearing
                       empty spans or splitting excess space according to alignment flags in bits
                       0x700. Evidence is x-range fields at +0x34/+0x3c and updates to
                       param_3/param_4. */
  if (*remaining < 1) {
LAB_0054e4b1:
    *(int *)(leftSpan + 0x3c) = *(int *)(leftSpan + 0x34) + -1;
    leftSpan[4] = '\0';
    leftSpan[5] = '\0';
    leftSpan[6] = '\0';
    leftSpan[7] = '\0';
    iVar1 = *(int *)(rightSpan + 0x3c);
    rightSpan[4] = '\0';
    rightSpan[5] = '\0';
    rightSpan[6] = '\0';
    rightSpan[7] = '\0';
    *(int *)(rightSpan + 0x34) = iVar1 + 1;
    return;
  }
  if (*leftSpan == '\0') {
    if (*rightSpan == '\0') goto LAB_0054e4b1;
    *(int *)(leftSpan + 0x3c) = *(int *)(leftSpan + 0x34) + -1;
  }
  if (*rightSpan == '\0') {
    *(int *)(rightSpan + 0x34) = *(int *)(rightSpan + 0x3c) + 1;
  }
  if ((((*(int *)(rightSpan + 0x3c) + *(int *)(leftSpan + 0x3c)) - *(int *)(rightSpan + 0x34)) -
      *(int *)(leftSpan + 0x34)) + 2 <= *remaining) {
    iVar1 = (*(int *)(leftSpan + 0x3c) - *(int *)(leftSpan + 0x34)) + 1;
    *leftWidth = iVar1;
    *remaining = *remaining - iVar1;
    *remaining = (*(int *)(rightSpan + 0x34) - *(int *)(rightSpan + 0x3c)) + -1 + *remaining;
    return;
  }
  uVar4 = *(uint *)(leftSpan + 0xc);
  uVar2 = ((((*(int *)(rightSpan + 0x3c) + *(int *)(leftSpan + 0x3c)) - *(int *)(rightSpan + 0x34))
           - *remaining) - *(int *)(leftSpan + 0x34)) + 2;
  uVar3 = uVar4 & 0x700;
  uVar5 = uVar2 >> 1;
  if (uVar3 == 0x100) {
    *(uint *)(leftSpan + 0x2c) = *(int *)(leftSpan + 0x2c) - ((uVar2 & 1) + uVar5);
    *(undefined4 *)(leftSpan + 0x3c) = *(undefined4 *)(leftSpan + 0x2c);
  }
  else {
    if (uVar3 == 0x200) {
      uVar4 = uVar4 & 0xfffffffc | 0xc;
    }
    else {
      if (uVar3 != 0x300) goto LAB_0054e43b;
      uVar4 = uVar4 & 0xfffffffd | 0xd;
    }
    *(uint *)(leftSpan + 0x3c) = *(int *)(leftSpan + 0x3c) - ((uVar2 & 1) + uVar5);
    *(uint *)(leftSpan + 0xc) = uVar4;
  }
LAB_0054e43b:
  uVar4 = *(uint *)(rightSpan + 0xc);
  uVar2 = uVar4 & 0x700;
  if (uVar2 == 0x100) {
    *(uint *)(rightSpan + 0x24) = *(int *)(rightSpan + 0x24) + uVar5;
    *(undefined4 *)(rightSpan + 0x34) = *(undefined4 *)(rightSpan + 0x24);
  }
  else {
    if (uVar2 == 0x200) {
      uVar4 = uVar4 & 0xfffffffc | 0xc;
    }
    else {
      if (uVar2 != 0x300) goto LAB_0054e47d;
      uVar4 = uVar4 & 0xfffffffd | 0xd;
    }
    *(uint *)(rightSpan + 0x34) = *(int *)(rightSpan + 0x34) + uVar5;
    *(uint *)(rightSpan + 0xc) = uVar4;
  }
LAB_0054e47d:
  *leftWidth = (*(int *)(leftSpan + 0x3c) - *(int *)(leftSpan + 0x34)) + 1;
  *remaining = 0;
  return;
}

