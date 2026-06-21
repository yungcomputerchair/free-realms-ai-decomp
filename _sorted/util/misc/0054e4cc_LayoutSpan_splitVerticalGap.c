// addr: 0x0054e4cc
// name: LayoutSpan_splitVerticalGap
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LayoutSpan_splitVerticalGap(char * topSpan, char * bottomSpan, int *
   remaining, int * topHeight) */

void LayoutSpan_splitVerticalGap(char *topSpan,char *bottomSpan,int *remaining,int *topHeight)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
                    /* Adjusts two vertical layout spans to fit a remaining gap budget, clearing
                       empty spans or splitting excess space according to alignment flags in bits
                       0x7000. Evidence is y-range fields at +0x38/+0x40 and updates to
                       param_3/param_4. */
  if (*remaining < 1) {
LAB_0054e5fb:
    *(int *)(topSpan + 0x40) = *(int *)(topSpan + 0x38) + -1;
    topSpan[4] = '\0';
    topSpan[5] = '\0';
    topSpan[6] = '\0';
    topSpan[7] = '\0';
    iVar1 = *(int *)(bottomSpan + 0x40);
    bottomSpan[4] = '\0';
    bottomSpan[5] = '\0';
    bottomSpan[6] = '\0';
    bottomSpan[7] = '\0';
    *(int *)(bottomSpan + 0x38) = iVar1 + 1;
    return;
  }
  if (*topSpan == '\0') {
    if (*bottomSpan == '\0') goto LAB_0054e5fb;
    *(int *)(topSpan + 0x40) = *(int *)(topSpan + 0x38) + -1;
  }
  if (*bottomSpan == '\0') {
    *(int *)(bottomSpan + 0x38) = *(int *)(bottomSpan + 0x40) + 1;
  }
  iVar1 = *(int *)(topSpan + 0x40);
  if (((*(int *)(bottomSpan + 0x40) - *(int *)(bottomSpan + 0x38)) - *(int *)(topSpan + 0x38)) + 2 +
      iVar1 <= *remaining) {
    iVar1 = (iVar1 - *(int *)(topSpan + 0x38)) + 1;
    *topHeight = iVar1;
    *remaining = *remaining - iVar1;
    *remaining = (*(int *)(bottomSpan + 0x38) - *(int *)(bottomSpan + 0x40)) + -1 + *remaining;
    return;
  }
  uVar4 = *(uint *)(topSpan + 0xc);
  uVar2 = ((((*(int *)(bottomSpan + 0x40) - *(int *)(bottomSpan + 0x38)) - *(int *)(topSpan + 0x38))
           + iVar1) - *remaining) + 2;
  uVar3 = uVar4 & 0x7000;
  uVar5 = uVar2 >> 1;
  if (uVar3 == 0x1000) {
    *(uint *)(topSpan + 0x30) = *(int *)(topSpan + 0x30) - ((uVar2 & 1) + uVar5);
    *(undefined4 *)(topSpan + 0x40) = *(undefined4 *)(topSpan + 0x30);
  }
  else {
    if (uVar3 == 0x2000) {
      uVar4 = uVar4 & 0xffffffcf | 0xc0;
    }
    else {
      if (uVar3 != 0x3000) goto LAB_0054e582;
      uVar4 = uVar4 & 0xffffffdf | 0xd0;
    }
    *(uint *)(topSpan + 0x40) = *(int *)(topSpan + 0x40) - ((uVar2 & 1) + uVar5);
    *(uint *)(topSpan + 0xc) = uVar4;
  }
LAB_0054e582:
  uVar4 = *(uint *)(bottomSpan + 0xc);
  uVar2 = uVar4 & 0x7000;
  if (uVar2 == 0x1000) {
    *(uint *)(bottomSpan + 0x28) = *(int *)(bottomSpan + 0x28) + uVar5;
    *(undefined4 *)(bottomSpan + 0x38) = *(undefined4 *)(bottomSpan + 0x28);
  }
  else {
    if (uVar2 == 0x2000) {
      uVar4 = uVar4 & 0xffffffcf | 0xc0;
    }
    else {
      if (uVar2 != 0x3000) goto LAB_0054e5c8;
      uVar4 = uVar4 & 0xffffffdf | 0xd0;
    }
    *(uint *)(bottomSpan + 0x38) = *(int *)(bottomSpan + 0x38) + uVar5;
    *(uint *)(bottomSpan + 0xc) = uVar4;
  }
LAB_0054e5c8:
  *topHeight = (*(int *)(topSpan + 0x40) - *(int *)(topSpan + 0x38)) + 1;
  *remaining = 0;
  return;
}

