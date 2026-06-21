// addr: 0x013c8280
// name: String_replaceAll
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void String_replaceAll(void * text, void * needle, void * replacement) */

void __cdecl String_replaceAll(void *text,void *needle,void *replacement)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint local_10;
  undefined4 *local_c;
  void *local_8;
  int local_4;
  
                    /* Replaces every occurrence of one substring in a string with another string.
                       It repeatedly finds param_2 in param_1, erases the matched span, inserts
                       param_3, then searches again. */
  iVar1 = *(int *)((int)needle + 0x14);
  if (*(uint *)((int)needle + 0x18) < 0x10) {
    iVar3 = (int)needle + 4;
  }
  else {
    iVar3 = *(int *)((int)needle + 4);
  }
  iVar3 = FUN_01231320(iVar3,0,iVar1);
  do {
    if (iVar3 == -1) {
      return;
    }
    uVar2 = *(uint *)((int)text + 0x18);
    puVar6 = (undefined4 *)((int)text + 4);
    puVar4 = puVar6;
    if (0xf < uVar2) {
      puVar4 = (undefined4 *)*puVar6;
    }
    if (puVar4 == (undefined4 *)0x0) {
LAB_013c82f8:
      FUN_00d83c2d();
    }
    else {
      puVar5 = puVar6;
      if (0xf < uVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if (puVar4 < puVar5) goto LAB_013c82f8;
      puVar5 = puVar6;
      if (0xf < uVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if ((undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar5) < puVar4) goto LAB_013c82f8;
    }
    local_c = puVar4;
    if (text != (void *)0xfffffffe) {
      puVar5 = puVar6;
      if (0xf < *(uint *)((int)text + 0x18)) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if ((undefined4 *)((int)puVar4 + iVar3) <=
          (undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar5)) {
        puVar5 = puVar6;
        if (0xf < *(uint *)((int)text + 0x18)) {
          puVar5 = (undefined4 *)*puVar6;
        }
        if (puVar5 <= (undefined4 *)((int)puVar4 + iVar3)) goto LAB_013c8333;
      }
      FUN_00d83c2d();
    }
LAB_013c8333:
    iVar7 = (int)puVar4 + iVar3;
    local_8 = text;
    if (text != (void *)0xfffffffe) {
      local_4 = iVar7;
      if (text == (void *)0x0) {
        FUN_00d83c2d();
      }
      local_10 = *(uint *)((int)text + 0x18);
      puVar4 = (undefined4 *)((int)text + 4);
      puVar5 = puVar4;
      if (0xf < local_10) {
        puVar5 = (undefined4 *)*puVar4;
      }
      if ((undefined4 *)(iVar1 + iVar7) <= (undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar5))
      {
        if (0xf < local_10) {
          puVar4 = (undefined4 *)*puVar4;
        }
        if (puVar4 <= (undefined4 *)(iVar1 + iVar7)) goto LAB_013c8385;
      }
      FUN_00d83c2d();
    }
LAB_013c8385:
    local_4 = iVar7 + iVar1;
    uVar2 = *(uint *)((int)text + 0x18);
    puVar4 = puVar6;
    if (0xf < uVar2) {
      puVar4 = (undefined4 *)*puVar6;
    }
    if (puVar4 == (undefined4 *)0x0) {
LAB_013c83c4:
      FUN_00d83c2d();
    }
    else {
      puVar5 = puVar6;
      if (0xf < uVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if (puVar4 < puVar5) goto LAB_013c83c4;
      puVar5 = puVar6;
      if (0xf < uVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if ((undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar5) < puVar4) goto LAB_013c83c4;
    }
    local_c = puVar4;
    if (text != (void *)0xfffffffe) {
      puVar5 = puVar6;
      if (0xf < *(uint *)((int)text + 0x18)) {
        puVar5 = (undefined4 *)*puVar6;
      }
      if ((undefined4 *)((int)puVar4 + iVar3) <=
          (undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar5)) {
        if (0xf < *(uint *)((int)text + 0x18)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        if (puVar6 <= (undefined4 *)((int)puVar4 + iVar3)) goto LAB_013c8403;
      }
      FUN_00d83c2d();
    }
LAB_013c8403:
    FUN_013c7990(&local_10,text,(int)puVar4 + iVar3,local_8,local_4);
    FUN_013c7a60(iVar3,replacement,0,0xffffffff);
    if (*(uint *)((int)needle + 0x18) < 0x10) {
      iVar3 = (int)needle + 4;
    }
    else {
      iVar3 = *(int *)((int)needle + 4);
    }
    iVar3 = FUN_01231320(iVar3,0,*(undefined4 *)((int)needle + 0x14));
  } while( true );
}

