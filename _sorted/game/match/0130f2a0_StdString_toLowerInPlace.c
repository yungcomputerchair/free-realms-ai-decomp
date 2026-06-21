// addr: 0x0130f2a0
// name: StdString_toLowerInPlace
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdString_toLowerInPlace(void * text) */

void __cdecl StdString_toLowerInPlace(void *text)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8 [2];
  
                    /* Lowercases an in-place std::string. It validates the small-string/heap buffer
                       range and applies _tolower across the character span. */
  uVar1 = *(uint *)((int)text + 0x18);
  puVar6 = (undefined4 *)((int)text + 4);
  puVar5 = puVar6;
  if (0xf < uVar1) {
    puVar5 = (undefined4 *)*puVar6;
  }
  if (puVar5 == (undefined4 *)0x0) {
LAB_0130f2eb:
    FUN_00d83c2d();
  }
  else {
    puVar2 = puVar6;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar6;
    }
    if (puVar5 < puVar2) goto LAB_0130f2eb;
    puVar2 = puVar6;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar6;
    }
    if ((undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar2) < puVar5) goto LAB_0130f2eb;
  }
  uVar1 = *(uint *)((int)text + 0x18);
  puVar2 = puVar6;
  if (0xf < uVar1) {
    puVar2 = (undefined4 *)*puVar6;
  }
  puVar2 = (undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar2);
  if (puVar2 == (undefined4 *)0x0) {
LAB_0130f328:
    FUN_00d83c2d();
  }
  else {
    puVar3 = puVar6;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar6;
    }
    if (puVar2 < puVar3) goto LAB_0130f328;
    puVar3 = puVar6;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar6;
    }
    if ((undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar3) < puVar2) goto LAB_0130f328;
  }
  uVar1 = *(uint *)((int)text + 0x18);
  puVar3 = puVar6;
  if (0xf < uVar1) {
    puVar3 = (undefined4 *)*puVar6;
  }
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar6;
    if (0xf < uVar1) {
      puVar4 = (undefined4 *)*puVar6;
    }
    if (puVar4 <= puVar3) {
      if (0xf < uVar1) {
        puVar6 = (undefined4 *)*puVar6;
      }
      if (puVar3 <= (undefined4 *)(*(int *)((int)text + 0x14) + (int)puVar6)) goto LAB_0130f363;
    }
  }
  FUN_00d83c2d();
LAB_0130f363:
  local_8[0] = local_8[0] & 0xffffff00;
  FUN_012a26c0(local_8,puVar3,puVar2,text,puVar5,_tolower,puVar5,local_8[0]);
  return;
}

