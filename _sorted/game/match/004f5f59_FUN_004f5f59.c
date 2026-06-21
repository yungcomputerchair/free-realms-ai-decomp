// addr: 0x004f5f59
// name: FUN_004f5f59
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool validate_record_links_against_collection(int this_) */

bool __fastcall validate_record_links_against_collection(int this_)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
                    /* Normalizes/copies a field across a small table, then validates entries from a
                       member range at this+0x8c..0x94 against another collection at this+0x34. The
                       exact class and domain meaning are not identifiable from the available
                       context. */
  local_8 = 0;
  iVar3 = FUN_004ce3cf();
  if (iVar3 != 0) {
    do {
      puVar4 = (undefined4 *)FUN_004ce3e2(local_8);
      iVar3 = FUN_004ce3ae(*puVar4);
      iVar5 = FUN_004ce3e2(local_8);
      iVar5 = FUN_004ce3ae(*(undefined4 *)(iVar5 + 4));
      local_8 = local_8 + 1;
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
      uVar6 = FUN_004ce3cf();
    } while (local_8 < uVar6);
  }
  uVar6 = -(uint)(this_ != -0x1c) & this_ + 0x34U;
  uVar7 = FUN_004ce39b();
  cVar1 = FUN_004c8488(uVar6,uVar7);
  if (cVar1 == '\0') {
LAB_004f5fe5:
    bVar2 = false;
  }
  else {
    FUN_004d092d(*(undefined4 *)(this_ + 0x90),this_ + 0x8c);
    local_c = local_14;
    uVar7 = *(undefined4 *)(this_ + 0x94);
    local_8 = local_10;
    while( true ) {
      FUN_004d092d(uVar7,this_ + 0x8c);
      cVar1 = FUN_004cf720(&local_14);
      if (cVar1 != '\0') break;
      puVar8 = (undefined1 *)FUN_004d095d();
      iVar3 = FUN_004d095d();
      FUN_004c8690(uVar6,*(undefined4 *)(iVar3 + 4),*puVar8);
      pcVar9 = (char *)FUN_004d095d();
      if (*pcVar9 == '\0') {
        iVar3 = FUN_004d095d();
        if (*(int *)(iVar3 + 4) == 0x13) {
          iVar3 = FUN_004d095d();
          FUN_004c8488(uVar6,*(undefined4 *)(iVar3 + 8));
        }
      }
      iVar3 = FUN_004d095d();
      cVar1 = FUN_004c8488(uVar6,*(undefined4 *)(iVar3 + 0xc));
      if (cVar1 == '\0') goto LAB_004f5fe5;
      FUN_004d097e();
      uVar7 = *(undefined4 *)(this_ + 0x94);
    }
    bVar2 = true;
  }
  return bVar2;
}

