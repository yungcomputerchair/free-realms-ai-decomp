// addr: 0x012df9f0
// name: FUN_012df9f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_012df9f0(void *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *accountId;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_3;
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016717db;
  local_c = ExceptionList;
  accountId = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  pvVar2 = LobbyServiceAccountMap_findValue(param_1,param_2);
  if (pvVar2 == (void *)0x0) {
    pvVar3 = Mem_Alloc(0xc0);
    local_4 = 0;
    pvVar2 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = (void *)FUN_013a98d0();
    }
    local_4 = 0xffffffff;
    Account_setPropertySet(uVar1);
    puVar4 = LobbyAccountMap_getOrCreateEntry(param_1,&param_3,accountId);
    *puVar4 = pvVar2;
  }
  ExceptionList = local_c;
  return pvVar2;
}

