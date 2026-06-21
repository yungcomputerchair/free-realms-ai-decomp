// addr: 0x014f8d80
// name: GuildManager_markGuildActiveByObject
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void GuildManager_markGuildActiveByObject(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_1;
                    /* Given an object with id at +8, finds or creates a Guild object, updates it
                       from the source object, sets active flag at +0x50, and stores it in the
                       global id map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2f3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != (void *)0x0) {
    iVar2 = IntObjectMap_findValueOrNull
                      (*(undefined4 *)((int)param_1 + 8),DAT_01b839d8 ^ (uint)&stack0xffffffec);
    if (iVar2 != 0) {
      FUN_014f8980(iVar1);
      *(undefined1 *)(iVar2 + 0x50) = 1;
      ExceptionList = local_c;
      return;
    }
    param_1 = Mem_Alloc(0x54);
    local_4 = 0;
    if (param_1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = Guild_ctor();
    }
    local_4 = 0xffffffff;
    FUN_014f8980(iVar1);
    *(undefined1 *)(iVar2 + 0x50) = 1;
    param_1 = *(void **)(iVar1 + 8);
    piVar3 = (int *)FUN_014f8a70(&param_1);
    *piVar3 = iVar2;
  }
  ExceptionList = local_c;
  return;
}

